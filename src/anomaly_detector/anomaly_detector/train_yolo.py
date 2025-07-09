import subprocess
from pathlib import Path
import sys
import argparse
import os

def train_yolo(dataset_path, model_id, epochs=50, model='yolov8n.pt'):
    dataset = Path(dataset_path)
    yaml_file = dataset / 'data.yaml'
    assert yaml_file.exists(), f"{yaml_file} not found!"

    # Çıktı modeli özel olarak /tmp klasörüne kaydedilsin
    output_model_path = f"/tmp/yolo_model_{model_id}.pt"

    subprocess.run([
        'yolo', 'task=detect', 'mode=train',
        f'model={model}',
        f'data={str(yaml_file)}',
        f'epochs={str(epochs)}',
        f'project=/tmp/yolo_runs_{model_id}',
        f'name=yolo_anomaly',
        f'resume=False'
    ], check=True)

    # Son weight dosyasını çıktılar klasöründen alıp /tmp'e kopyala
    best_weights = Path(f"/tmp/yolo_runs_{model_id}/yolo_anomaly/weights/best.pt")
    if best_weights.exists():
        os.rename(best_weights, output_model_path)
        print(f"✅ Weights saved to {output_model_path}")
    else:
        print("❌ Trained weight not found.")

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--dataset', required=True)
    parser.add_argument('--model_id', required=True)
    parser.add_argument('--epochs', type=int, default=50)
    parser.add_argument('--model', default='yolov8n.pt')

    args = parser.parse_args()
    train_yolo(args.dataset, args.model_id, epochs=args.epochs, model=args.model)
