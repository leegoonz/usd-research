cmake_minimum_required(VERSION 2.8)

set(USD_ROOT /opt/USD)
set(USD_DEPS /opt/usd-deps/root/usr)
set(USD_DEPS_VFX /opt/pixar/usd-vfx2015)
set(USD_DEPS_PIXAR /opt/pixar/usd-deps/root/usr)

set(BOOST_ROOT ${USD_DEPS})
set(TBB_tbb_LIBRARY ${USD_DEPS}/lib/libtbb.so)
set(TBB_INCLUDE_DIRS ${USD_DEPS_VFX}/include)
set(OPENEXR_ROOT_DIR ${USD_DEPS})
set(OPENEXR_INCLUDE_DIR ${USD_DEPS}/include)
set(OPENEXR_LIBRARY_DIR ${USD_DEPS}/lib)
set(OPENEXR_Half_LIBRARY ${USD_DEPS}/lib/libHalf.so)
set(QT_QMAKE_EXECUTABLE ${USD_DEPS}/bin/qmake)
set(PYTHON_LIBRARY ${USD_DEPS}/lib/libpython2.7.so)
set(PYTHON_INCLUDE_DIR ${USD_DEPS}/include/python2.7)
set(DOUBLE_CONVERSION_LIBRARY ${USD_DEPS}/lib/libdouble-conversion.so)
set(DOUBLE_CONVERSION_INCLUDE_DIR ${USD_DEPS}/include/double-conversion)
set(OIIO_BASE_DIR ${USD_DEPS})
set(OIIO_BINARIES ${USD_DEPS}/bin)
set(OIIO_INCLUDE_DIRS ${USD_DEPS}/include)
set(OIIO_LIBRARIES ${USD_DEPS}/lib/libOpenImageIO.so)
set(GLEW_INCLUDE_DIR ${USD_DEPS}/include/GL)
set(GLEW_LIBRARY ${USD_DEPS}/lib/libGLEW.a)
set(OPENSUBDIV_ROOT_DIR ${USD_DEPS})
set(OPENSUBDIV_INCLUDE_DIR ${USD_DEPS}/include/opensubdiv)
set(OPENSUBDIV_LIBRARIES ${USD_DEPS}/lib)
set(PTEX_INCLUDE_DIR ${USD_DEPS}/include/)
set(PTEX_LIBRARY ${USD_DEPS}/lib/libPtex.a)
set(PYSIDERCC4BINARY ${USD_DEPS}/bin/pyside-rcc)
set(PYSIDEUIC4BINARY ${USD_DEPS}/bin/pyside-uic)
set(FLEX_EXECUTABLE ${USD_DEPS}/bin/flex)

set(CMAKE_MODULE_PATH ${USD_ROOT}/cmake/defaults
                      ${USD_ROOT}/cmake/modules
                      ${USD_ROOT}/cmake/macros)

include(Options)
include(ProjectDefaults)
include(Packages)
include(Public)

# CXXDefaults will set a variety of variables for the project.
# Consume them here. This is an effort to keep the most common
# build files readable.
include(CXXDefaults)
add_definitions(${_PXR_CXX_DEFINITIONS})
set(CMAKE_CXX_FLAGS ${_PXR_CXX_FLAGS})

link_directories(${USD_DEPS_PIXAR}/lib)

set(FE_PREFIX examples)

add_subdirectory(usdFabricSchema)
