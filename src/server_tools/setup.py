from setuptools import setup
import os
from glob import glob

package_name = 'server_tools'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/' + package_name, ['package.xml']),
        # Include message files
        #(os.path.join('share', package_name, 'msg'), glob('msg/*.msg')),
        # Include any launch files if you add them later
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your.email@example.com',
    description='ROS 2 package for server tools',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'training_data_loader = server_tools.training_data_loader:main',
            'result_collector_node = live_analysis_ros2.result_collector_node:main',
            'training_result_listener = server_tools.training_result_listener:main',
        ],
    },
)
