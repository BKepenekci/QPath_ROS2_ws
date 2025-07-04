import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from sensor_msgs.msg import Image
from live_analysis_interfaces.msg import TrainRequest, TrainRequestClient

import cv2
import numpy as np
from cv_bridge import CvBridge
import psycopg2
import os
import json

class TrainingDataLoader(Node):
    def __init__(self):
        super().__init__('training_data_loader')
        self.bridge = CvBridge()

        self.subscription = self.create_subscription(
            TrainRequest,
            'training_requests',
            self.listener_callback,
            10
        )       

        self.db_conn = self.connect_db()
        self.get_logger().info("🚀 TrainingDataLoader node started.")

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

    def fetch_image_paths_and_rectangles(self, user_id, data_class, mode='train'):
        if not self.db_conn:
            self.get_logger().error("No database connection.")
            return []

        cursor = self.db_conn.cursor()
        if mode == 'train':
            like_filter = f'{data_class}_train%'
        else:
            like_filter = f'{data_class}_test%'

        query = """
        SELECT file_path, rectangles FROM media_files
        WHERE user_id = %s AND data_class = %s AND filename ILIKE %s
        """
        cursor.execute(query, (user_id, data_class, like_filter))
        rows = cursor.fetchall()

        # Returns list of tuples: [(path1, rects1), (path2, rects2), ...]
        result = []
        for file_path, rectangles_json in rows:
            try:
                rectangles = json.loads(rectangles_json) if rectangles_json else []
            except Exception as e:
                self.get_logger().warn(f"Invalid rectangles for {file_path}: {e}")
                rectangles = []
            result.append((file_path, rectangles))

        return result
    
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

    def listener_callback(self, msg: TrainRequest):
        self.get_logger().info(f"📥 Received TrainRequest for model: {msg.model_id}")

        train_data = self.fetch_image_paths_and_rectangles(msg.user_id, msg.data_class, mode='train')
        eval_data  = self.fetch_image_paths_and_rectangles(msg.user_id, msg.data_class, mode='eval')

        train_imgs = []
        eval_imgs = []
        all_rectangles = []

        # Train images and rectangles
        for path, rects in train_data:
            if os.path.exists(path):
                try:
                    img = cv2.imread(path)
                    img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
                    train_imgs.append(img_msg)
                    all_rectangles.extend(rects)
                except Exception as e:
                    self.get_logger().warn(f"Failed to read {path}: {e}")

        # Eval images (you may handle eval_rectangles separately if needed)
        for path, _ in eval_data:
            if os.path.exists(path):
                try:
                    img = cv2.imread(path)
                    img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
                    eval_imgs.append(img_msg)
                except Exception as e:
                    self.get_logger().warn(f"Failed to read {path}: {e}")

        device_name=self.fetch_device_name(msg.user_id, msg.gpu)
        if(msg.use_detection):
            self.publisher = self.create_publisher(TrainRequestClient, device_name+'\client_training_requests_wo', 10)
        else: 
            self.publisher = self.create_publisher(TrainRequestClient, device_name+'\client_training_requests', 10)
        # Prepare new message
        new_msg = TrainRequestClient()
        new_msg.header.stamp = self.get_clock().now().to_msg()
        new_msg.user_id = msg.user_id
        new_msg.algorithm_id = msg.algorithm_id
        new_msg.model_id = msg.model_id
        new_msg.epochs = msg.epochs
        new_msg.min_accuracy = msg.min_accuracy
        new_msg.batch_size = msg.batch_size
        new_msg.use_detection = msg.use_detection
        new_msg.use_label = msg.use_label
        new_msg.data_class = msg.data_class
        new_msg.train_images = train_imgs
        new_msg.eval_images = eval_imgs
        new_msg.train_set_labels = []
        new_msg.eval_set_labels = []
        new_msg.rectangles = [float(x) for x in all_rectangles]  # Flattened float list
        new_msg.files_completed = True
        new_msg.seq_no = 1

        self.publisher.publish(new_msg)
        self.get_logger().info(f"📤 Published enriched TrainRequest with {len(train_imgs)} train images and {len(all_rectangles)} rectangles.")


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
