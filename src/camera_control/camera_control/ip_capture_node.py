import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class IpCaptureNode(Node):
    def __init__(self):
        super().__init__('ip_capture_node')
        self.publisher_ = self.create_publisher(Image, '/camera/image_raw', 10)
        self.bridge = CvBridge()
        rtsp_url = 'rtsp://admin:!23ertGbn@192.168.1.183:554/Streaming/Channels/101'
        self.cap = cv2.VideoCapture(rtsp_url)
        self.timer = self.create_timer(0.03, self.timer_callback)  # ~30 FPS

    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
            self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = IpCaptureNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()