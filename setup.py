from setuptools import setup

with open("README.md", "r", encoding="utf-8") as fh:
    long_description = fh.read()

setup(name='constraint_recognition',
      version='0.1.0',
      description='Modeling and recognizing geometric constraints in human demonstration',
      url='',
      author='Guru Subramani',
      author_email='gsubramani@wisc.edu',
      license='MIT',
      packages=['constraint_recognition'],
      package_dir={'': 'src'},
      install_requires=["pytransform3d"]
)