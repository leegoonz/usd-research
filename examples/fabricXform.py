from pxr import Usd, UsdGeom
import UsdFabricSchema

stage = Usd.Stage.CreateNew('FabricXform.usda')

xformPrim = UsdFabricSchema.FabricXform.Define(stage, '/xform')
meshPrim = UsdFabricSchema.FabricMesh.Define(stage, '/xform/mesh')

stage.GetRootLayer().Save()
