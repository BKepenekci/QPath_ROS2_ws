import os
import rclpy
import threading
import torch
import cv2
from torch.utils.data import Dataset, DataLoader
from torchvision import transforms
from rclpy.node import Node
from anomaly_detector.msg import TrainingStatus
from .model import AutoEncoder

class SimpleDataset(Dataset):
    def __init__(self, img_dir):
        self.paths = [os.path.join(img_dir, f) for f in os.listdir(img_dir) if f.endswith((".jpg", ".png"))]
        self.tf = transforms.Compose([
            transforms.ToPILImage(),
            transforms.Grayscale(),
            transforms.Resize((128, 128)),
            transforms.ToTensor()
        ])

    def __len__(self):
        return len(self.paths)

    def __getitem__(self, idx):
        img = cv2.imread(self.paths[idx])
        return self.tf(img)

class TrainingNode(Node):
    def __init__(self):
        super().__init__('training_node')

        # Parametre: image_dir yolunu launch veya parametre dosyasından al
        self.declare_parameter('image_dir', '/tmp/train_data')
        self.image_dir = self.get_parameter('image_dir').get_parameter_value().string_value

        self.pub = self.create_publisher(TrainingStatus, '/training_status', 10)

        # Dataset ve model kurulumu
        self.dataset = SimpleDataset(self.image_dir)
        self.loader = DataLoader(self.dataset, batch_size=16, shuffle=True)

        self.model = AutoEncoder()
        self.optimizer = torch.optim.Adam(self.model.parameters(), lr=1e-3)

        # Eğitim durumu
        self.current_epoch = 0
        self.current_loss = 0.0

        # Eğitim döngüsü thread içinde
        self.training_thread = threading.Thread(target=self.train_loop, daemon=True)
        self.training_thread.start()

        # Status yayınlama zamanlayıcısı (eğitimden bağımsız)
        self.status_timer = self.create_timer(3.0, self.publish_status)

        self.get_logger().info(f"TrainingNode başlatıldı: {self.image_dir} klasöründeki {len(self.dataset)} görselle")

    def train_loop(self):
        while rclpy.ok():
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
            torch.save(self.model.state_dict(), '/tmp/anomaly_model.pth')

    def publish_status(self):
        msg = TrainingStatus()
        msg.epoch = self.current_epoch
        msg.loss = float(self.current_loss)
        self.pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TrainingNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()