class ManagerNode(Node):
    def __init__(self):
        super().__init__('manager_node')
        self.subscription = self.create_subscription(
            ImageList, '/image_batch', self.image_list_callback, 10)
        self.image_dir = '/tmp/train_data'

    def image_list_callback(self, msg):
        os.makedirs(self.image_dir, exist_ok=True)
        for i, img_msg in enumerate(msg.images):
            img = CvBridge().imgmsg_to_cv2(img_msg, desired_encoding='bgr8')
            cv2.imwrite(f'{self.image_dir}/img_{i:04d}.jpg', img)
        self.get_logger().info(f'{len(msg.images)} görsel kaydedildi.')
        subprocess.Popen(['ros2', 'run', 'camera_control', 'training_node', self.image_dir])