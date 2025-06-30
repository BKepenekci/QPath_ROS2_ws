from setuptools import find_packages
from setuptools import setup

setup(
    name='live_analysis_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('live_analysis_interfaces', 'live_analysis_interfaces.*')),
)
