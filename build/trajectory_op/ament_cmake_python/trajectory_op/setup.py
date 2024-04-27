from setuptools import find_packages
from setuptools import setup

setup(
    name='trajectory_op',
    version='0.0.0',
    packages=find_packages(
        include=('trajectory_op', 'trajectory_op.*')),
)
