try:
    from setuptools import setup
    from setuptools import Extension
except ImportError:
    from distutils.core import setup
    from distutils.extension import Extension
from Cython.Build import cythonize
cy_opts = {}

ext_mods = [Extension(
    'point_contact_constraint', ['point_contact_constraint.pyx', 'point_contact_constraint_code.c'],
    include_dirs=[],
    library_dirs=[],
    libraries=[],
    extra_compile_args=['-std=c99'],
    extra_link_args=[]
)]
setup(ext_modules=cythonize(ext_mods, **cy_opts),name='point_contact_constraint')
    