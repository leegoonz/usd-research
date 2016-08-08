set(FE_PACKAGE usdFabricSchema)

pxr_plugin(${FE_PACKAGE}
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
        simple

    RESOURCE_FILES
        generatedSchema.usda
        plugInfo.json
)
   
