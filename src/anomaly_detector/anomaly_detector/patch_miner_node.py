import rclpy
from rclpy.node import Node
from live_analysis_interfaces.msg import TrainRequestClient, TrainingResult
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import torch
import torchvision.models as models
import torch.nn.functional as F
import numpy as np
import cv2
import os
import subprocess
import threading
from pathlib import Path
from datetime import datetime
from scipy.spatial.distance import cosine
from concurrent.futures import ThreadPoolExecutor

class PatchMinerNode(Node):
    def __init__(self):
        super().__init__('patch_miner_node')

        # Get namespace/device name
        self.device_name = self.get_namespace().strip('/') or os.environ.get("DEVICE_NAME", "default_device")
        topic = f"{self.device_name}/client_training_requests_wo"
        self.sub = self.create_subscription(TrainRequestClient, topic, self.callback, 10)
        self.result_pub = self.create_publisher(TrainingResult, f"{self.device_name}/training_results", 10)

        self.bridge = CvBridge()

        # Model
        model = models.resnet18(weights=models.ResNet18_Weights.DEFAULT)
        model.fc = torch.nn.Identity()
        self.feature_extractor = model.eval().to('cpu')

        # Settings
        self.crop_size = 128
        self.stride = 32
        self.sim_threshold = 0.92
        self.nms_iou_threshold = 0.4

        # Thread pool executor with max 10 threads
        self.executor = ThreadPoolExecutor(max_workers=10)

        self.get_logger().info(f"PatchMinerNode active in namespace [{self.device_name}] 🚀")

    def callback(self, msg):
        self.executor.submit(self.handle_request, msg)

    def handle_request(self, msg):
        try:
            result = self.process_dataset(msg)
            self.publish_result("Patch exported, object training starting", False, result['img_counter'], msg.user_id, msg.model_id, msg.algorithm_id)
            self.train_yolo(msg, result['root_dir'])
            self.publish_result("YOLO training completed, starting anomaly training", False, result['img_counter'], msg.user_id, msg.model_id, msg.algorithm_id)
            self.start_training_node(msg, result['image_dir'], result['root_dir'])
            self.publish_result("All training processes started successfully", True, result['img_counter'], msg.user_id, msg.model_id, msg.algorithm_id)
        except Exception as e:
            self.get_logger().error(f"❌ Training error: {e}")
            self.publish_result("Training failed", completed=True, img_counter=0, user_id=msg.user_id, model_id=msg.model_id, algorithm_id=msg.algorithm_id)

    def process_dataset(self, msg):
        timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
        root_dir = Path(f'/tmp/export_dataset_{msg.model_id}')
        image_dir = root_dir / 'images/train'
        label_dir = root_dir / 'labels/train'
        image_dir.mkdir(parents=True, exist_ok=True)
        label_dir.mkdir(parents=True, exist_ok=True)

        class_map = {}
        class_index = 0
        img_counter = 0

        images = msg.images
        rectangles = list(zip(*[iter(msg.rectangles)] * 4))
        class_labels = msg.class_labels

        ref_vec, ref_label = None, None

        for i, (img_msg, rect, label) in enumerate(zip(images, rectangles, class_labels)):
            cv_img = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding='rgb8')
            h, w, _ = cv_img.shape
            x, y, rw, rh = map(int, rect)

            if ref_vec is None and rw > 0:
                if not label:
                    label = msg.data_class
                ref_crop = cv_img[y:y+rh, x:x+rw]
                ref_crop = cv2.resize(ref_crop, (224, 224))
                ref_vec = self.extract_feature(ref_crop)
                ref_label = label
                if ref_label not in class_map:
                    class_map[ref_label] = class_index
                    class_index += 1
                continue

            if ref_vec is None:
                continue

            patches = self.find_similar_patches(cv_img, ref_vec)
            boxes = self.non_max_suppression(patches)

            for score, (px, py, pw, ph) in boxes:
                crop = cv_img[py:py+ph, px:px+pw]
                resized_crop = cv2.resize(crop, (224, 224))
                img_name = f"patch_{img_counter:05d}.jpg"
                img_path = image_dir / img_name
                cv2.imwrite(str(img_path), resized_crop)

                cx = (px + pw / 2) / w
                cy = (py + ph / 2) / h
                nw = pw / w
                nh = ph / h

                class_id = class_map[ref_label]
                label_path = label_dir / f"{img_path.stem}.txt"
                with open(label_path, 'w') as f:
                    f.write(f"{class_id} {cx:.6f} {cy:.6f} {nw:.6f} {nh:.6f}\n")

                img_counter += 1

        self.generate_data_yaml(root_dir, image_dir, class_map)

        return {
            'root_dir': root_dir,
            'image_dir': image_dir,
            'img_counter': img_counter
        }

    def train_yolo(self, msg, root_dir):
        try:
            subprocess.run([
                'python3',
                str(Path(__file__).parent / 'train_yolo.py'),
                '--dataset', str(root_dir),
                '--epochs', str(msg.epochs),
                '--model', 'yolov8n.pt'
            ], check=True)
            self.get_logger().info("✅ YOLO training script completed successfully.")
        except subprocess.CalledProcessError as e:
            raise RuntimeError(f"YOLO training failed: {e}")

    def start_training_node(self, msg, image_dir, root_dir):
        namespace = self.device_name
        model_id = msg.model_id
        yolo_model_path =  f'/tmp/yolo_model_{model_id}.pt' # f"{root_dir}/runs/train/yolo_anomaly/weights/best.pt"

        try:
            subprocess.Popen([
                'ros2', 'run', 'your_package', 'training_node',
                '__ns:=' + namespace,
                '__node:=training_node_' + str(model_id),
                '--ros-args',
                '-p', f'image_dir:={image_dir}',
                '-p', f'yolo_model_path:={yolo_model_path}',
                '-p', f'epochs:={str(msg.epochs)}',
                '-p', f'batch_size:={str(msg.batch_size)}',
                '-p', f'model_id:={str(msg.model_id)}',
                '-p', f'user_id:={str(msg.user_id)}',
                '-p', f'algorithm_id:={str(msg.algorithm_id)}',
                '-p', f'min_accuracy:={str(msg.min_accuracy)}',
                '-p', f'use_detection:={str(msg.use_detection)}',
                '-p', f'use_label:={str(msg.use_label)}',
                '-p', f'data_class:={str(msg.data_class)}'
            ])
            self.get_logger().info(f"✅ training_node_{model_id} başlatıldı.")
        except Exception as e:
            self.get_logger().error(f"❌ training_node_{model_id} başlatılamadı: {e}")

    def extract_feature(self, img):
        tensor = torch.tensor(img.transpose(2, 0, 1)).unsqueeze(0).float() / 255.0
        with torch.no_grad():
            feat = self.feature_extractor(tensor)
        return feat.squeeze().numpy()

    def find_similar_patches(self, img, ref_vec):
        h, w, _ = img.shape
        matches = []
        for y in range(0, h - self.crop_size, self.stride):
            for x in range(0, w - self.crop_size, self.stride):
                patch = img[y:y+self.crop_size, x:x+self.crop_size]
                feat = self.extract_feature(cv2.resize(patch, (224, 224)))
                sim = 1 - cosine(ref_vec, feat)
                if sim >= self.sim_threshold:
                    matches.append((sim, [x, y, self.crop_size, self.crop_size]))
        return matches

    def non_max_suppression(self, detections):
        if not detections:
            return []
        boxes = np.array([b for _, b in detections])
        scores = np.array([s for s, _ in detections])
        x1, y1 = boxes[:, 0], boxes[:, 1]
        x2 = boxes[:, 0] + boxes[:, 2]
        y2 = boxes[:, 1] + boxes[:, 3]
        areas = boxes[:, 2] * boxes[:, 3]
        order = scores.argsort()[::-1]
        keep = []
        while len(order) > 0:
            i = order[0]
            keep.append((scores[i], boxes[i]))
            xx1 = np.maximum(x1[i], x1[order[1:]])
            yy1 = np.maximum(y1[i], y1[order[1:]])
            xx2 = np.minimum(x2[i], x2[order[1:]])
            yy2 = np.minimum(y2[i], y2[order[1:]])
            inter = np.maximum(0, xx2 - xx1) * np.maximum(0, yy2 - yy1)
            iou = inter / (areas[i] + areas[order[1:]] - inter + 1e-6)
            order = order[1:][iou <= self.nms_iou_threshold]
        return keep

    def generate_data_yaml(self, root_dir, image_dir, class_map):
        yaml_path = root_dir / 'data.yaml'
        with open(yaml_path, 'w') as f:
            f.write(f"train: {image_dir}\n")
            f.write(f"val: {image_dir}\n\n")
            f.write("names:\n")
            for class_id, class_name in sorted(class_map.items(), key=lambda x: x[1]):
                f.write(f"  {class_id}: {class_name}\n")
        self.get_logger().info(f"data.yaml created at: {yaml_path}")

    def publish_result(self, text, completed, img_counter,user_id,model_id, algorithm_id):
        result = TrainingResult()
        result.header.stamp = self.get_clock().now().to_msg()
        result.user_id = user_id
        result.algorithm_id = algorithm_id
        result.model_id = model_id
        result.total_time = 0.0
        result.total_patches = img_counter
        result.loss = 0.0
        result.duration = 0.0
        result.epochs = 0
        result.current_epoch = 0
        result.msg_txt = text
        result.training_completed = completed
        self.result_pub.publish(result)

def main(args=None):
    rclpy.init(args=args)
    node = PatchMinerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
