import os
import rclpy
import threading
import time
import torch
import cv2
import requests
from torch.utils.data import Dataset, DataLoader
from torchvision import transforms
from rclpy.node import Node
from std_msgs.msg import Header
from .model import AutoEncoder
from live_analysis_interfaces.msg import TrainingResult
from live_analysis_interfaces.msg import StopTraining

class SimpleDataset(Dataset):
    def __init__(self, img_dir, use_detection=False, yolo_model_path=''):
        self.paths = []
        self.use_detection = use_detection
        self.tf = transforms.Compose([
            transforms.ToPILImage(),
            transforms.Grayscale(),
            transforms.Resize((128, 128)),
            transforms.ToTensor()
        ])

        if not use_detection:
            self.paths = [os.path.join(img_dir, f) for f in os.listdir(img_dir) if f.endswith((".jpg", ".png"))]
        else:
            import subprocess
            from pathlib import Path
            detect_out = Path(img_dir) / "yolo_detect"
            detect_out.mkdir(parents=True, exist_ok=True)
            subprocess.run([
                'yolo', 'task=detect', 'mode=predict',
                f'model={yolo_model_path}',
                f'source={img_dir}',
                f'project={img_dir}', 'name=yolo_detect', 'save_txt=True'
            ], check=True)

            label_dir = detect_out / 'yolo_detect' / 'labels'
            image_dir = detect_out / 'yolo_detect' / 'images'
            for txt_file in sorted(label_dir.glob('*.txt')):
                img_file = image_dir / (txt_file.stem + '.jpg')
                if not img_file.exists():
                    continue
                img = cv2.imread(str(img_file))
                h, w, _ = img.shape
                with open(txt_file) as f:
                    for i, line in enumerate(f):
                        parts = line.strip().split()
                        _, cx, cy, bw, bh = map(float, parts)
                        px = int((cx - bw / 2) * w)
                        py = int((cy - bh / 2) * h)
                        pw = int(bw * w)
                        ph = int(bh * h)
                        crop = img[py:py + ph, px:px + pw]
                        crop_path = detect_out / f'crop_{txt_file.stem}_{i}.jpg'
                        cv2.imwrite(str(crop_path), crop)
                        self.paths.append(str(crop_path))

    def __len__(self):
        return len(self.paths)

    def __getitem__(self, idx):
        img = cv2.imread(self.paths[idx])
        return self.tf(img)

class TrainingNode(Node):
    def __init__(self):
        super().__init__('training_node')

        self.declare_parameter('image_dir', '/tmp/train_data')
        self.declare_parameter('yolo_model_path', '/path/to/yolo.pt')
        self.declare_parameter('epochs', 10)
        self.declare_parameter('batch_size', 16)
        self.declare_parameter('model_id', 'model_0')
        self.declare_parameter('user_id', '')
        self.declare_parameter('algorithm_id', 'autoencoder')
        self.declare_parameter('use_detection', False)

        self.image_dir = self.get_parameter('image_dir').get_parameter_value().string_value
        self.yolo_model_path = self.get_parameter('yolo_model_path').get_parameter_value().string_value
        self.epochs = self.get_parameter('epochs').get_parameter_value().integer_value
        self.batch_size = self.get_parameter('batch_size').get_parameter_value().integer_value
        self.model_id = self.get_parameter('model_id').get_parameter_value().string_value
        self.user_id = self.get_parameter('user_id').get_parameter_value().string_value
        self.algorithm_id = self.get_parameter('algorithm_id').get_parameter_value().string_value
        self.use_detection = self.get_parameter('use_detection').get_parameter_value().bool_value

        self.pub = self.create_publisher(TrainingResult, '/training_status', 10)
        self.stop_sub = self.create_subscription(StopTraining, '/stop_training', self.stop_callback, 10)

        self.stop_requested = False

        self.dataset = SimpleDataset(self.image_dir, self.use_detection, self.yolo_model_path)
        self.loader = DataLoader(self.dataset, batch_size=self.batch_size, shuffle=True)

        self.model = AutoEncoder()
        self.optimizer = torch.optim.Adam(self.model.parameters(), lr=1e-3)

        self.current_epoch = 0
        self.current_loss = 0.0
        self.start_time = time.time()

        self.training_thread = threading.Thread(target=self.train_loop, daemon=True)
        self.training_thread.start()

        self.status_timer = self.create_timer(3.0, self.publish_status)

        self.get_logger().info(f"TrainingNode başlatıldı: {self.image_dir} klasöründeki {len(self.dataset)} görselle")

    def stop_callback(self, msg):
        if msg.model_id == self.model_id and msg.user_id == self.user_id:
            self.get_logger().info("Eğitim durdurma isteği alındı.")
            self.stop_requested = True

    def train_loop(self):
        weights_path = f'/tmp/anomaly_model_{self.model_id}.pth'
        stopped= False
        for epoch in range(self.epochs):
            if self.stop_requested:
                self.get_logger().info("Eğitim kullanıcı isteği ile durduruldu.")
                stopped= True
                break
            total_loss = 0.0
            for batch in self.loader:
                self.model.train()
                recon = self.model(batch)
                loss = torch.mean((recon - batch) ** 2)
                self.optimizer.zero_grad()
                loss.backward()
                self.optimizer.step()
                total_loss += loss.item()

            self.current_loss = total_loss / len(self.loader)
            self.current_epoch += 1
            self.get_logger().info(f"Epoch {self.current_epoch}: Loss {self.current_loss:.6f}")
            torch.save(self.model.state_dict(), weights_path)
            self.publish_status(training_completed=False,stopped=stopped)

        # Eğitim tamamlandıktan sonra ağırlıkları sunucuya gönder
        self.upload_weights_to_server(weights_path,self.yolo_model_path if self.use_detection else None)
        self.publish_status(training_completed=True, stopped=stopped)

    def publish_status(self, training_completed=False, stopped=False):
        if(stopped and self.epochs > self.current_epoch):
            training_completed = False
        msg = TrainingResult()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.user_id = self.user_id
        msg.algorithm_id = self.algorithm_id
        msg.model_id = self.model_id
        msg.total_time = float(time.time() - self.start_time)
        msg.total_patches = len(self.dataset)
        msg.loss = float(self.current_loss)
        msg.duration = msg.total_time
        msg.epochs = self.epochs
        msg.current_epoch = self.current_epoch
        msg.msg_txt = "Training completed" if training_completed else "Training in progress"
        msg.training_completed = training_completed
        msg.stopped = stopped
        self.pub.publish(msg)

    def upload_weights_to_server(self, autoencoder_path: str, yolo_path: str = None):
        try:
            files = {
                "file": (os.path.basename(autoencoder_path), open(autoencoder_path, 'rb'))
            }

            # Eğer YOLO ağırlığı da varsa ekle
            if yolo_path and os.path.exists(yolo_path):
                files["yolo_weights"] = (os.path.basename(yolo_path), open(yolo_path, 'rb'))

            response = requests.post(
                "https://api.qpath.ai/api/models/upload-weights",
                data={"model_id": self.model_id, "user_id": self.user_id},
                files=files
            )

            if response.status_code == 200:
                self.get_logger().info("✅ Ağırlık dosyaları sunucuya yüklendi.")
            else:
                self.get_logger().error(f"❌ Ağırlıklar yüklenemedi: {response.status_code}")

        except Exception as e:
            self.get_logger().error(f"❌ Ağırlıklar yüklenirken hata oluştu: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = TrainingNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
