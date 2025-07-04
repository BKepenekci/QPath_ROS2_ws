import rclpy
from rclpy.node import Node
from live_analysis_interfaces.msg import TrainingResult

import psycopg2
import os

class TrainingResultListener(Node):
    def __init__(self):
        super().__init__('training_result_listener')
        self.subscription = self.create_subscription(
            TrainingResult,
            'training_results',
            self.listener_callback,
            10
        )
        self.db_conn = self.connect_db()
        self.get_logger().info("📡 TrainingResultListener node started and listening...")

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

    def listener_callback(self, msg: TrainingResult):
        self.get_logger().info(f"📥 TrainingResult received for model_id: {msg.model_id}")

        if not self.db_conn:
            self.get_logger().error("No active database connection.")
            return

        try:
            cursor = self.db_conn.cursor()
            cursor.execute("""
                UPDATE trained_models SET
                    completed = %s,
                    stopped = %s,
                    metrics = jsonb_build_object(
                        'total_time', %s,
                        'total_patches', %s,
                        'loss', %s,
                        'duration', %s,
                        'epochs', %s,
                        'current_epoch', %s,
                        'message', %s
                    )
                WHERE id = %s
            """, (
                msg.training_completed,
                msg.stopped,
                msg.total_time,
                msg.total_patches,
                msg.loss,
                msg.duration,
                msg.epochs,
                msg.current_epoch,
                msg.msg_txt,
                msg.model_id
            ))
            self.db_conn.commit()
            self.get_logger().info(f"✅ Model {msg.model_id} updated in DB.")
        except Exception as e:
            self.get_logger().error(f"❌ Error updating DB: {e}")
            self.db_conn.rollback()

def main(args=None):
    rclpy.init(args=args)
    node = TrainingResultListener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
