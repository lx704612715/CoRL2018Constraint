from setuptools import setup

setup(name='constraint_recognition',
      version='0.1.0',
      description='Modeling and recognizing geometric constraints in human demonstration',
      url='',
      author='Guru Subramani',
      author_email='gsubramani@wisc.edu',
      license='MIT',
      packages=['constraint_recognition'],
      package_dir={'': 'src'},
      python_requires=">=3.6",
      install_requires=["pytransform3d"],
      zip_safe=False
)