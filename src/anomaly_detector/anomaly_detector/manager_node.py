from live_analysis_interfaces.msg import TrainRequestClient
class ManagerNode(Node):
    def __init__(self):
        super().__init__('manager_node')
        self.device_name = os.environ.get("DEVICE_NAME", "default_device")
        self.subscription = self.create_subscription(
            ImageList, self.device_name+'/client_training_requests', self.training_request_callback, 10)        

    def training_request_callback(self, msg):        
        image_dir = '/tmp/train_data/'+msg.model_id+
        os.makedirs(image_dir, exist_ok=True)
        for i, img_msg in enumerate(msg.images):
            img = CvBridge().imgmsg_to_cv2(img_msg, desired_encoding='bgr8')
            cv2.imwrite(f'{self.image_dir}/img_{i:04d}.jpg', img)
        self.get_logger().info(f'{len(msg.images)} görsel kaydedildi.')
        subprocess.Popen(['ros2', 'run', 'anomaly_detector', 'training_node', self.image_dir]) # we need to use namespace self.device_name