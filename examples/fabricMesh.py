from pxr import Usd, UsdGeom
import UsdFabricSchema

stage = Usd.Stage.CreateNew('FabricMesh.usda')

xformPrim = UsdGeom.Xform.Define(stage, '/xform')
meshPrim = UsdFabricSchema.FabricMesh.Define(stage, '/xform/mesh')

klCodeAttr = meshPrim.CreateKlCodeAttr()
klCodeAttr.Set('operator entry() {}')

stage.GetRootLayer().Save()
