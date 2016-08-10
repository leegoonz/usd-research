set(PXR_PACKAGE usdFabricSchema)

pxr_plugin(${PXR_PACKAGE}

    LIBRARIES
        tf
        sdf
        usd
        usdGeom
        vt

    INCLUDE_DIRS
        ${USD}/include
        ${Boost_INCLUDE_DIRS}
        ${PYTHON_INCLUDE_DIRS}
        ${USD_DEPS}/include
        ${OPENEXR_INCLUDE_DIR}/OpenEXR

    PUBLIC_CLASSES
        tokens
        fabricMesh

    RESOURCE_FILES
        generatedSchema.usda
        plugInfo.json

    PYTHON_FILES
        __init__.py

    PYMODULE_CPPFILES
        module.cpp
        wrapTokens.cpp
        wrapFabricMesh.cpp
)
   
