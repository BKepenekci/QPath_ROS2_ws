from setuptools import setup

package_name = 'camera_control'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/camera_control.launch.py']),
        #('share/' + package_name + '/resource', ['resource/' + package_name]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Burcu',
    maintainer_email='burcu@example.com',
    description='ROS 2 package for Hikvision IP camera streaming and PTZ control',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ip_capture_node = camera_control.ip_capture_node:main',
            'ptz_node = camera_control.ptz_node:main',
        ],
    },
)