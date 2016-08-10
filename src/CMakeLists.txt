cmake_minimum_required(VERSION 2.8)

set(USD /opt/pixar/usd)
set(USD_DEPS /opt/usd-deps/root/usr)
set(USD_SOURCE /opt/pixar/USD)

set(BOOST_ROOT ${USD_DEPS})
set(TBB_tbb_LIBRARY ${USD_DEPS}/lib/libtbb.so)
set(TBB_INCLUDE_DIRS ${USD_DEPS}/include)
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

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/defaults
                      ${PROJECT_SOURCE_DIR}/cmake/modules
                      ${PROJECT_SOURCE_DIR}/cmake/macros)

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

link_directories(${USD}/lib)

set(PXR_PREFIX fabric)
set(PXR_INSTALL_SUBDIR ${USD}/share/usd/fabric)

add_subdirectory(usdFabricSchema)
