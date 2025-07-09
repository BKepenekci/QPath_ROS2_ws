import rclpy
from rclpy.node import Node
from anomaly_detector.msg import TestResult, TestRequestClient, TestProgress
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import torch
import cv2
import numpy as np
import os
import requests
from threading import Thread, Semaphore
from .model import AutoEncoder
import psycopg2

class TestNode(Node):
    def __init__(self):
        super().__init__('test_node')
        namespace = self.get_namespace().strip('/')
        topic_name = f'/{namespace}/client_test_requests' if namespace else '/client_test_requests'

        self.subscription = self.create_subscription(
            TestRequestClient, topic_name, self.callback, 10)

        self.result_publisher = self.create_publisher(TestResult, '/test_results', 10)
        self.progress_publisher = self.create_publisher(TestProgress, '/test_progress', 10)
        self.bridge = CvBridge()
        self.semaphore = Semaphore(2)

        self.db_conn = self.connect_db()

    def connect_db(self):
        try:
            conn = psycopg2.connect(
                dbname=os.environ.get("DB_NAME", "qpath_industrial_db"),
                user=os.environ.get("DB_USER", "parana"),
                password=os.environ.get("DB_PASS", "NJnTOk0bnb27nc8NeBtDRovfAND1gzy4"),
                host=os.environ.get("DB_HOST", "dpg-d1f89e6mcj7s739hflr0-a.oregon-postgres.render.com"),
                port=os.environ.get("DB_PORT", "5432")
            )
            self.get_logger().info("✅ Connected to PostgreSQL.")
            return conn
        except Exception as e:
            self.get_logger().error(f"❌ DB connection failed: {e}")
            return None

    def callback(self, msg):
        thread = Thread(target=self.process_test, args=(msg,))
        thread.start()

    def get_model_paths(self, model_id):
        try:
            with self.db_conn.cursor() as cur:
                cur.execute("SELECT model_path, yolo_path FROM trained_models WHERE id = %s", (model_id,))
                row = cur.fetchone()
                if row:
                    return row[0], row[1]
        except Exception as e:
            self.get_logger().error(f"❌ Failed to fetch model paths: {e}")
        return None, None

    def local_get_model_paths(self, model_id):
        weights_path = f'/tmp/anomaly_model_{model_id}.pth'
        yolo_path = f'/tmp/yolo_model_{model_id}.pt'
        return weights_path, yolo_path

    def download_model(self, url, save_path):
        try:
            response = requests.get(url)
            if response.status_code == 200:
                with open(save_path, 'wb') as f:
                    f.write(response.content)
                self.get_logger().info(f"✅ Model downloaded to {save_path}")
            else:
                self.get_logger().error(f"❌ Failed to download model from {url}")
        except Exception as e:
            self.get_logger().error(f"❌ Exception during download: {e}")

    def load_model(self, model_path):
        model = AutoEncoder()
        model.load_state_dict(torch.load(model_path, map_location='cpu'))
        model.eval()
        return model

    def load_yolo(self, yolo_path):
        try:
            yolo = torch.hub.load('ultralytics/yolov5', 'custom', path=yolo_path, force_reload=False)
            yolo.eval()
            return yolo
        except Exception as e:
            self.get_logger().warn(f"⚠ YOLO yüklenemedi: {e}")
            return None

    def process_test(self, msg):
        with self.semaphore:
            model_path, yolo_path = self.local_get_model_paths(msg.model_id)

            if not os.path.exists(model_path) and msg.model_path:
                self.download_model(msg.model_path, model_path)

            if yolo_path and not os.path.exists(yolo_path) and msg.yolo_path:
                self.download_model(msg.yolo_path, yolo_path)

            model = self.load_model(model_path)
            yolo = self.load_yolo(yolo_path) if yolo_path else None

            total = len(msg.images)
            for index, img_msg in enumerate(msg.images):
                cv_img = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding='mono8')
                rgb_img = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding='bgr8')

                full_mask = np.zeros_like(cv_img, dtype=np.uint8)
                full_heatmap = np.zeros_like(rgb_img, dtype=np.uint8)
                full_bbox_list = []
                ok_list = []
                confidences = []
                is_anomaly = False

                if yolo:
                    detections = yolo(rgb_img)
                    boxes = detections.xyxy[0].cpu().numpy()
                    for box in boxes:
                        x1, y1, x2, y2, conf, cls = box[:6]
                        x1, y1, x2, y2 = map(int, [x1, y1, x2, y2])
                        patch = cv_img[y1:y2, x1:x2]
                        if patch.size == 0:
                            continue
                        resized = cv2.resize(patch, (128, 128)) / 255.0
                        input_tensor = torch.tensor(resized, dtype=torch.float32).unsqueeze(0).unsqueeze(0)

                        with torch.no_grad():
                            recon = model(input_tensor)
                            diff = torch.abs(recon - input_tensor)[0, 0].numpy()
                            score = np.mean(diff)
                            mask = (diff > msg.threshold).astype(np.uint8) * 255
                            area = np.sum(mask > 0)
                            anomaly = score > msg.threshold and area >= msg.area_threshold
                            ok_list.append(not anomaly)
                            confidences.append(float(conf))
                            full_bbox_list.append([x1, y1, x2 - x1, y2 - y1])
                            if anomaly:
                                is_anomaly = True
                                cv2.rectangle(full_mask, (x1, y1), (x2, y2), 255, -1)

                            heat = (diff * 255).astype(np.uint8)
                            patch_heatmap = cv2.applyColorMap(heat, cv2.COLORMAP_JET)
                            patch_heatmap_resized = cv2.resize(patch_heatmap, (x2 - x1, y2 - y1))
                            full_heatmap[y1:y2, x1:x2] = patch_heatmap_resized
                else:
                    resized = cv2.resize(cv_img, (128, 128)) / 255.0
                    input_tensor = torch.tensor(resized, dtype=torch.float32).unsqueeze(0).unsqueeze(0)

                    with torch.no_grad():
                        recon = model(input_tensor)
                        diff = torch.abs(recon - input_tensor)[0, 0].numpy()
                        score = np.mean(diff)
                        mask = (diff > msg.threshold).astype(np.uint8) * 255
                        area = np.sum(mask > 0)
                        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
                        x, y, w, h = 0, 0, 0, 0
                        if contours:
                            x, y, w, h = cv2.boundingRect(max(contours, key=cv2.contourArea))
                            full_bbox_list.append([x, y, w, h])
                        anomaly = score > msg.threshold and area >= msg.area_threshold
                        ok_list.append(not anomaly)
                        confidences.append(1.0)
                        is_anomaly = anomaly
                        full_mask = mask
                        full_heatmap = cv2.applyColorMap((diff * 255).astype(np.uint8), cv2.COLORMAP_JET)

                result = TestResult()
                result.user_id = msg.user_id
                result.model_id = msg.model_id
                result.ok = not is_anomaly
                result.heatmap = self.bridge.cv2_to_imgmsg(full_heatmap, encoding='bgr8')
                result.mask = self.bridge.cv2_to_imgmsg(full_mask, encoding='mono8')
                result.bboxes = full_bbox_list
                result.ok_list = ok_list
                result.confidences = confidences
                result.image_path = msg.image_paths[index] if index < len(msg.image_paths) else ""                
                result.percent_done = int((index + 1) / total * 100)
                self.result_publisher.publish(result)
                self.get_logger().info(f"[TEST] {result.percent_done}% done")

def main(args=None):
    rclpy.init(args=args)
    node = TestNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
