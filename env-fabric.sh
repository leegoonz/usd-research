OPT=/opt
USD_DEPS=$OPT/usd-deps/root/usr
USD=$OPT/pixar/usd
USD_SOURCE=$OPT/pixar/USD

export PATH=$USD_DEPS/bin:$USD/bin:$PATH
export LD_LIBRARY_PATH=$USD_DEPS/lib:$USD/lib:$OPT/gcc-4.8/lib64:$USD/share/usd/fabric/plugin:$LD_LIBRARY_PATH
export PYTHONPATH=$USD_DEPS/lib/python2.7:$USD/lib/python:/usr/local/lib/python/pxr:$PYTHONPATH
export CPATH=$USD_DEPS/include

export USD_CODEGEN_DIR=$USD_SOURCE/pxr/usd/lib/usd/codegenTemplates

scl enable devtoolset-2 bash
