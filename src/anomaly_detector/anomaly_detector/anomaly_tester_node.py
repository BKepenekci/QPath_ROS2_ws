import rclpy
from rclpy.node import Node
from anomaly_detector.msg import AnomalyResult
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import torch
import cv2
import numpy as np
from .model import AutoEncoder  # Eğitimde kullandığın AE mimarisi

class AnomalyTesterNode(Node):
    def __init__(self):
        super().__init__('anomaly_tester_node')
        self.bridge = CvBridge()
        self.model = AutoEncoder()
        self.model.load_state_dict(torch.load('/tmp/anomaly_model.pth', map_location='cpu'))
        self.model.eval()
        self.threshold = 0.02
        self.area_threshold = 3000

        self.sub = self.create_subscription(Image, '/detected_patch', self.callback, 10)
        self.pub = self.create_publisher(AnomalyResult, '/anomaly_result', 10)
        self.get_logger().info("AnomalyTesterNode aktif 🚀")

    def callback(self, msg):
        img = self.bridge.imgmsg_to_cv2(msg, desired_encoding='mono8')
        resized = cv2.resize(img, (128, 128)) / 255.0
        tensor = torch.tensor(resized).unsqueeze(0).unsqueeze(0).float()

        with torch.no_grad():
            recon = self.model(tensor)
            diff = torch.abs(recon - tensor)[0, 0].numpy()
            loss = np.mean(diff)

        mask = (diff > self.threshold).astype(np.uint8) * 255
        area = np.sum(mask > 0)
        is_anomaly = loss > self.threshold and area >= self.area_threshold

        bbox = [0, 0, 0, 0]
        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        if contours:
            bbox = list(cv2.boundingRect(max(contours, key=cv2.contourArea)))

        heatmap = cv2.applyColorMap((diff * 255).astype(np.uint8), cv2.COLORMAP_JET)

        result = AnomalyResult()
        result.ok = not is_anomaly
        result.heatmap = self.bridge.cv2_to_imgmsg(heatmap, encoding='bgr8')
        result.mask = self.bridge.cv2_to_imgmsg(mask, encoding='mono8')
        result.bbox = bbox
        self.pub.publish(result)

        status = "ANOMALİ" if is_anomaly else "normal"
        self.get_logger().info(f"[{status}] Loss: {loss:.4f} Area: {area}")
