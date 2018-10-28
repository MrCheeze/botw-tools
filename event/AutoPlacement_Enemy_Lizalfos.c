-------- EventFlow: AutoPlacement_Enemy_Lizalfos --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['WaterDepth', 'EcoAreaActorName', 'TimeType', 'WaterSurface', 'WaterSubMat', 'GroundMat', 'GroundNorm', 'RouteDistance']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Junior'})
        Event269:
        && AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5, 6, 7] {
            if AutoPlacement.WaterSurface() {
                if !AutoPlacement.WaterSubMat()
                && AutoPlacement.WaterDepth({'Depth': 3.0}) {
                    AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'MaxNum': 2, 'OffsetPosY': -2.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                }
            } else
            if AutoPlacement.GroundMat() in [0, 1, 2, 3, 5]
            && AutoPlacement.GroundNorm({'Angle': 10.0})
            && !AutoPlacement.WaterDepth({'Depth': 0.0})
            && AutoPlacement.RouteDistance({'Distance': 20.0}) {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Middle'}) {
            goto Event269
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Senior'}) {
            goto Event269
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Electric'})
        && AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5, 6, 7]
        && AutoPlacement.GroundMat() in [3, 12]
        && AutoPlacement.GroundNorm({'Angle': 10.0})
        && !AutoPlacement.WaterDepth({'Depth': 0.0})
        && AutoPlacement.RouteDistance({'Distance': 20.0}) {
            AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Ice'})
        && AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5, 6, 7]
        && AutoPlacement.GroundMat() in [9, 14]
        && AutoPlacement.GroundNorm({'Angle': 10.0})
        && !AutoPlacement.WaterDepth({'Depth': 0.0})
        && AutoPlacement.RouteDistance({'Distance': 20.0}) {
            AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Fire'})
        && AutoPlacement.TimeType() in [2, 3, 4, 5]
        && AutoPlacement.GroundMat() in [3, 12]
        && AutoPlacement.GroundNorm({'Angle': 10.0})
        && !AutoPlacement.WaterDepth({'Depth': 0.0})
        && AutoPlacement.RouteDistance({'Distance': 20.0}) {
            AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
        }
    }

}
