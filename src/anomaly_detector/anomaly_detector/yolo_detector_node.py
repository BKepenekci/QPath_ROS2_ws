import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import torch
from ultralytics import YOLO
import numpy as np

class YoloDetectorNode(Node):
    def __init__(self):
        super().__init__('yolo_detector_node')
        self.declare_parameter('model_path', '/path/to/best.pt')
        self.model_path = self.get_parameter('model_path').get_parameter_value().string_value

        self.model = YOLO(self.model_path)
        self.bridge = CvBridge()

        self.sub = self.create_subscription(Image, '/camera/image_raw', self.image_callback, 10)

        self.crop_pub = self.create_publisher(Image, '/detected_patch', 10)
        self.label_pub = self.create_publisher(String, '/detection_label', 10)

        self.crop_size = 224
        self.conf_threshold = 0.5

        self.get_logger().info(f"YOLO model yüklendi: {self.model_path}")

    def image_callback(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        h, w, _ = frame.shape

        results = self.model(frame)[0]

        for box in results.boxes:
            conf = float(box.conf[0])
            cls_id = int(box.cls[0])
            if conf < self.conf_threshold:
                continue

            x1, y1, x2, y2 = map(int, box.xyxy[0])
            label = self.model.names[cls_id]

            crop = frame[y1:y2, x1:x2]
            crop = cv2.resize(crop, (self.crop_size, self.crop_size))

            ros_crop = self.bridge.cv2_to_imgmsg(crop, encoding='bgr8')
            self.crop_pub.publish(ros_crop)

            label_msg = String()
            label_msg.data = f"{label}:{conf:.2f}"
            self.label_pub.publish(label_msg)

            self.get_logger().info(f"Tespit: {label} ({conf:.2f})")

def main(args=None):
    rclpy.init(args=args)
    node = YoloDetectorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()