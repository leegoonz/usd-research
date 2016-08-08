set(PXR_PACKAGE usdFabricSchema)

pxr_plugin(${PXR_PACKAGE}

    LIBRARIES
        tf
        sdf
        usd
        vt

    INCLUDE_DIRS
        ${Boost_INCLUDE_DIRS}
        ${PYTHON_INCLUDE_DIRS}
        ${USD_DEPS_PIXAR}/include
        ${OPENEXR_INCLUDE_DIR}/OpenEXR
        ${USD_DEPS_VFX}/include

    PUBLIC_CLASSES
        fabricSimplePrim
        tokens

    RESOURCE_FILES
        generatedSchema.usda
        plugInfo.json

    PYTHON_FILES
        __init__.py

    PYMODULE_CPPFILES
        module.cpp
        wrapTokens.cpp
        wrapFabricSimplePrim.cpp
)
   
