#OPT=/srv/chroots/usd-centos6/opt
OPT=/opt
USD_DEPS=$OPT/usd-deps/root/usr
VFX_DEPS=$OPT/pixar/usd-vfx2015
USD=$OPT/pixar/usd-deps/root/usr
USD_PIXAR=$OPT/pixar/usd-deps/root/usr

export PATH=$USD_DEPS/bin:$USD/bin:$PATH
export LD_LIBRARY_PATH=$USD_DEPS/lib:$USD/lib:$VFX_DEPS/lib:$OPT/gcc-4.8/lib64:$USD_PIXAR/share/usd/fabric/plugin:$LD_LIBRARY_PATH
#export LD_LIBRARY_PATH=$USD_DEPS/lib:$USD/lib:$OPT/gcc-4.8/lib64:$LD_LIBRARY_PATH
export PYTHONPATH=$USD_DEPS/lib/python2.7:$USD/lib/python:/usr/local/lib/python/pxr:$PYTHONPATH
export CPATH=$USD_DEPS/include

export USD_CODEGEN_DIR=$OPT/USD/pxr/usd/lib/usd/codegenTemplates

scl enable devtoolset-2 bash
