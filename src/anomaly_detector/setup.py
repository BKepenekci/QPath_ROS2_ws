from setuptools import setup
import os
from glob import glob

package_name = 'anomaly_detector'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/' + package_name, ['package.xml']),
        # Include message files
        (os.path.join('share', package_name, 'msg'), glob('msg/*.msg')),
        # Include any launch files if you add them later
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your.email@example.com',
    description='ROS 2 package for anomaly detection using SimpleNet and YOLO',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'test_node = anomaly_detector.test_node:main',
            'training_node = anomaly_detector.training_node:main',
            'manager_node = anomaly_detector.manager_node:main',
            'patch_miner_node = anomaly_detector.patch_miner_node:main',
            'yolo_detector_node = anomaly_detector.yolo_detector_node:main',
            'anomaly_tester_node = anomaly_detector.anomaly_tester_node:main',
        ],
    },
)
