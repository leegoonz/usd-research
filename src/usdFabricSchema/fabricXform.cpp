//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "./fabricXform.h"
#include "pxr/usd/usd/schemaRegistry.h"
#include "pxr/usd/usd/typed.h"

#include "pxr/usd/sdf/types.h"
#include "pxr/usd/sdf/assetPath.h"

// Register the schema with the TfType system.
TF_REGISTRY_FUNCTION(TfType)
{
    TfType::Define<UsdFabricXform,
        TfType::Bases< UsdGeomXform > >();
    
    // Register the usd prim typename to associate it with the TfType, under
    // UsdSchemaBase. This enables one to call TfType::FindByName("FabricXform") to find
    // TfType<UsdFabricXform>, which is how IsA queries are answered.
    TfType::AddAlias<UsdSchemaBase, UsdFabricXform>("FabricXform");
}

/* virtual */
UsdFabricXform::~UsdFabricXform()
{
}

/* static */
UsdFabricXform
UsdFabricXform::Get(const UsdStagePtr &stage, const SdfPath &path)
{
    if (not stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdFabricXform();
    }
    return UsdFabricXform(stage->GetPrimAtPath(path));
}

/* static */
UsdFabricXform
UsdFabricXform::Define(
    const UsdStagePtr &stage, const SdfPath &path)
{
    static TfToken usdPrimTypeName("FabricXform");
    if (not stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdFabricXform();
    }
    return UsdFabricXform(
        stage->DefinePrim(path, usdPrimTypeName));
}

/* static */
const TfType &
UsdFabricXform::_GetStaticTfType()
{
    static TfType tfType = TfType::Find<UsdFabricXform>();
    return tfType;
}

/* static */
bool 
UsdFabricXform::_IsTypedSchema()
{
    static bool isTyped = _GetStaticTfType().IsA<UsdTyped>();
    return isTyped;
}

/* virtual */
const TfType &
UsdFabricXform::_GetTfType() const
{
    return _GetStaticTfType();
}

/*static*/
const TfTokenVector&
UsdFabricXform::GetSchemaAttributeNames(bool includeInherited)
{
    static TfTokenVector localNames;
    static TfTokenVector allNames =
        UsdGeomXform::GetSchemaAttributeNames(true);

    if (includeInherited)
        return allNames;
    else
        return localNames;
}

// ===================================================================== //
// Feel free to add custom code below this line. It will be preserved by
// the code generator.
// ===================================================================== //
// --(BEGIN CUSTOM CODE)--

void UsdFabricXform::MyCustomMethod()
{
    printf("UsdFabricXform::MyCustomMethod called\n");
}
