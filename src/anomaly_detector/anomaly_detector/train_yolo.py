import subprocess
from pathlib import Path

def train_yolo(dataset_path, epochs=50, model='yolov8n.pt'):
    dataset = Path(dataset_path)
    yaml_file = dataset / 'data.yaml'
    assert yaml_file.exists(), "data.yaml bulunamadı"

    subprocess.run([
        'yolo', 'task=detect', 'mode=train',
        f'model={model}',
        f'data={yaml_file}',
        f'epochs={epochs}',
        f'project={dataset}/runs',
        'name=yolo_anomaly'
    ], check=True)

if __name__ == "__main__":
    # Örnek kullanım:
    train_yolo('/tmp/export_dataset_20240701_2030', epochs=100)