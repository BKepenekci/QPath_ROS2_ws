import rclpy
from rclpy.node import Node
from anomaly_detector.msg import AnomalyResult, AnomalyTestRequest
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import torch
import cv2
import numpy as np
from .model import AutoEncoder

class TestNode(Node):
    def __init__(self):
        super().__init__('test_node')
        self.subscription = self.create_subscription(
            AnomalyTestRequest, '/test_images', self.callback, 10)
        self.publisher = self.create_publisher(AnomalyResult, '/anomaly_output', 10)
        self.bridge = CvBridge()

        self.model = AutoEncoder()
        self.model.load_state_dict(torch.load('/tmp/anomaly_model.pth', map_location='cpu'))
        self.model.eval()

    def callback(self, msg):
        for img_msg in msg.images:
            cv_img = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding='mono8')
            resized = cv2.resize(cv_img, (128, 128)) / 255.0
            input_tensor = torch.tensor(resized, dtype=torch.float32).unsqueeze(0).unsqueeze(0)

            with torch.no_grad():
                recon = self.model(input_tensor)
                diff = torch.abs(recon - input_tensor)[0, 0].numpy()
                score = np.mean(diff)
                mask = (diff > msg.threshold).astype(np.uint8) * 255
                area = np.sum(mask > 0)

                # Bounding box
                contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
                x, y, w, h = 0, 0, 0, 0
                if contours:
                    x, y, w, h = cv2.boundingRect(max(contours, key=cv2.contourArea))

                # Heatmap görselleştir
                heatmap = cv2.applyColorMap((diff * 255).astype(np.uint8), cv2.COLORMAP_JET)

                # Karar
                is_anomaly = score > msg.threshold and area >= msg.area_threshold

                result = AnomalyResult()
                result.ok = not is_anomaly
                result.heatmap = self.bridge.cv2_to_imgmsg(heatmap, encoding='bgr8')
                result.mask = self.bridge.cv2_to_imgmsg(mask, encoding='mono8')
                result.bbox = [x, y, w, h]
                self.publisher.publish(result)
                self.get_logger().info(
                    f"[TEST] score={score:.5f} area={area} → anomaly={is_anomaly}"
                )

def main(args=None):
    rclpy.init(args=args)
    node = TestNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()