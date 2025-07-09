import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from sensor_msgs.msg import Image
from live_analysis_interfaces.msg import TestRequest, TestRequestClient

import cv2
import numpy as np
from cv_bridge import CvBridge
import psycopg2
import os
import json

class TestDataLoader(Node):
    def __init__(self):
        super().__init__('test_data_loader')
        self.bridge = CvBridge()

        self.subscription = self.create_subscription(
            TrainRequest,
            'test_requests',
            self.listener_callback,
            10
        )       

        self.db_conn = self.connect_db()
        self.get_logger().info("🚀 TestDataLoader node started.")

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
   
    def fetch_device_name(self, user_id, gpu):
        if not self.db_conn:
            self.get_logger().error("No database connection.")
            return []

        cursor = self.db_conn.cursor()      
        query = """
        SELECT name FROM edge_devices
        WHERE (user_id = %s OR user_id = '0') AND gpu = %s AND for_poc = TRUE AND is_busy = FALSE 
        """
        cursor.execute(query, (user_id, gpu))
        rows = cursor.fetchall()
        if(len(rows) == 0):
            query = """
            SELECT name FROM edge_devices
            WHERE (user_id = %s OR user_id = '0') AND gpu = %s 
            """
            cursor.execute(query, (user_id, gpu))
            rows = cursor.fetchall()
        if(len(rows) > 0):
            return r[0]
        else:
            self.get_logger().warn(f"No available edge device found for user {user_id} with GPU {gpu}.")
            return None 


    def images_to_ros_messages(self, image_paths):
        ros_images = []
        for path in image_paths:
            if not os.path.exists(path):
                self.get_logger().warn(f"⛔ Image not found: {path}")
                continue
            try:
                img = cv2.imread(path)
                msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
                ros_images.append(msg)
            except Exception as e:
                self.get_logger().error(f"Error loading image {path}: {e}")
        return ros_images

    def listener_callback(self, msg: TestRequest):
        self.get_logger().info(f"📥 Received TestRequest for model: {msg.model_id}")

        test_paths = msg.image_paths
      
        test_imgs = []
        
        # Train images and rectangles
        for path in test_paths:
            if os.path.exists(path):
                try:
                    img = cv2.imread(path)
                    img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
                    test_imgs.append(img_msg)                    
                except Exception as e:
                    self.get_logger().warn(f"Failed to read {path}: {e}")

         # Veritabanından model_path ve yolo_path çekiliyor
        model_path, yolo_path = None, None
        try:
            cursor = self.db_conn.cursor()
            cursor.execute("""
                SELECT model_path, yolo_path 
                FROM trained_models 
                WHERE id = %s
            """, (msg.model_id,))
            result = cursor.fetchone()
            if result:
                model_path, yolo_path = result
            else:
                self.get_logger().error(f"❌ Model with ID {msg.model_id} not found in DB.")
                return
        except Exception as e:
            self.get_logger().error(f"❌ Failed to query model info: {e}")
            return

        device_name=self.fetch_device_name(msg.user_id, msg.gpu)
        
        # Prepare new message
        new_msg = TestRequestClient()
        new_msg.header.stamp = self.get_clock().now().to_msg()
        new_msg.user_id = msg.user_id        
        new_msg.model_id = msg.model_id        
        new_msg.confidance_th = msg.confidance_th
        new_msg.area_th = msg.area_th
        new_msg.with_bounding_box = msg.with_bounding_box           
        new_msg.test_images = test_imgs
        new_msg.model_path = model_path
        new_msg.yolo_path = yolo_path

        self.publisher = self.create_publisher(TestRequestClient, device_name+'\client_test_requests', 10)
        self.publisher.publish(new_msg)
        self.get_logger().info(f"📤 Published enriched TestRequest with {len(test_imgs)} test images.")


def main(args=None):
    rclpy.init(args=args)
    node = TrainingDataLoader()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
