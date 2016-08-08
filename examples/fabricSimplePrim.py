from pxr import Usd
import UsdFabricSchema

stage = Usd.Stage.Open("FabricSimplePrim.usda")

simple = stage.GetPrimAtPath("/fabric")
simple = UsdFabricSchema.FabricSimplePrim(simple)
target = simple.GetTargetRel()
intAttr = simple.GetIntAttrAttr()

print intAttr.Get()