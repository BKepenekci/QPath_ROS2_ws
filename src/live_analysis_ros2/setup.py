from setuptools import setup
import os
from glob import glob

package_name = 'live_analysis_ros2'

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
            'analysis_node = live_analysis_ros2.analysis_node:main',
            'training_node = live_analysis_ros2.training_node:main',
        ],
    },
)
