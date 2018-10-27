-------- EventFlow: AutoPlacement_Enemy_Octarock --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'WaterDepth', 'RouteDistance', 'TreeRate', 'EcoAreaActorName', 'TimeType', 'GroundMat', 'WaterSubMat', 'WaterSurface']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock'}) {
            if AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5] {
                if AutoPlacement.WaterSurface() {
                    if !AutoPlacement.WaterSubMat() {
                        if AutoPlacement.WaterDepth({'Depth': 2.700000047683716}) {
                            AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'OffsetPosY': -2.700000047683716})
                        }
                    }
                }
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Forest'}) {
            if AutoPlacement.TimeType() in [0, 1, 2, 3, 4, 5] {
                if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        if AutoPlacement.RouteDistance({'Distance': 15.0}) {
                            if AutoPlacement.TreeRate({'Rate': 0.029999999329447746}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Desert'}) {
            if AutoPlacement.TimeType() == 2 {
                if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        if AutoPlacement.RouteDistance({'Distance': 15.0}) {
                            if AutoPlacement.GroundMat() in [3, 12] {
                                AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            }
        }
    }

}
