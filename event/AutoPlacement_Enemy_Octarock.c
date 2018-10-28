-------- EventFlow: AutoPlacement_Enemy_Octarock --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'WaterDepth', 'RouteDistance', 'TreeRate', 'EcoAreaActorName', 'TimeType', 'GroundMat', 'WaterSubMat', 'WaterSurface']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock'})
        && AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5]
        && AutoPlacement.WaterSurface()
        && !AutoPlacement.WaterSubMat()
        && AutoPlacement.WaterDepth({'Depth': 2.700000047683716}) {
            AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'OffsetPosY': -2.700000047683716})
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Forest'})
        && AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5]
        && AutoPlacement.GroundNorm({'Angle': 10.0})
        && !AutoPlacement.WaterDepth({'Depth': 0.0})
        && AutoPlacement.RouteDistance({'Distance': 15.0})
        && AutoPlacement.TreeRate({'Rate': 0.029999999329447746}) {
            AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Desert'})
        && AutoPlacement.TimeType() == 2
        && AutoPlacement.GroundNorm({'Angle': 10.0})
        && !AutoPlacement.WaterDepth({'Depth': 0.0})
        && AutoPlacement.RouteDistance({'Distance': 15.0})
        && AutoPlacement.GroundMat() in [3, 12] {
            AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
        }
    }

}
