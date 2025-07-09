import rclpy
from rclpy.node import Node
from anomaly_detector.msg import TestResult
import psycopg2
import os
import json
import datetime
import cv2
from cv_bridge import CvBridge

class TestResultSaver(Node):
    def __init__(self):
        super().__init__('test_result_saver')
        self.subscription = self.create_subscription(
            TestResult,
            '/test_results',
            self.listener_callback,
            10
        )
        self.db_conn = self.connect_db()
        self.bridge = CvBridge()

        os.makedirs("/tmp/test_heatmaps", exist_ok=True)
        os.makedirs("/tmp/test_masks", exist_ok=True)

        self.get_logger().info("🚀 TestResultSaver node started.")

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

    def listener_callback(self, msg: TestResult):
        if not self.db_conn:
            self.get_logger().warn("❌ No database connection.")
            return

        try:
            # Görselleri kaydet
            timestamp = datetime.datetime.utcnow().strftime("%Y%m%d_%H%M%S_%f")
            base_name = os.path.basename(msg.image_path).split('.')[0]
            heatmap_path = f"/tmp/test_heatmaps/{base_name}_{timestamp}.png"
            mask_path = f"/tmp/test_masks/{base_name}_{timestamp}.png"

            heatmap_img = self.bridge.imgmsg_to_cv2(msg.heatmap, desired_encoding='bgr8')
            mask_img = self.bridge.imgmsg_to_cv2(msg.mask, desired_encoding='mono8')

            cv2.imwrite(heatmap_path, heatmap_img)
            cv2.imwrite(mask_path, mask_img)

            cur = self.db_conn.cursor()
            cur.execute("""
                INSERT INTO test_results (
                    user_id, model_id, ok, confidences, ok_list, bboxes,
                    image_path, heatmap_path, mask_path, at_time
                )
                VALUES (%s, %s, %s, %s, %s, %s, %s, %s, %s, NOW())
            """, (
                msg.user_id,
                msg.model_id,
                msg.ok,
                list(msg.confidences),
                list(msg.ok_list),
                list(msg.bboxes),
                msg.image_path,
                heatmap_path,
                mask_path
            ))
            self.db_conn.commit()
            cur.close()

            self.get_logger().info(f"✅ Result saved for image: {msg.image_path}")

        except Exception as e:
            self.get_logger().error(f"❌ Failed to process result: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = TestResultSaver()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
