-------- EventFlow: AutoPlacement_Enemy_Octarock --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'WaterDepth', 'RouteDistance', 'TreeRate', 'EcoAreaActorName', 'TimeType', 'GroundMat', 'WaterSubMat', 'WaterSurface']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock'}) {
            switch AutoPlacement.TimeType() {
              case 0:
                Event20:
                if AutoPlacement.WaterSurface() {
                    if !AutoPlacement.WaterSubMat() {
                        if AutoPlacement.WaterDepth({'Depth': 2.700000047683716}) {
                            AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'OffsetPosY': -2.700000047683716})
                        }
                    }
                }
              case 1:
                goto Event20
              case 2:
                goto Event20
              case 3:
                goto Event20
              case 4:
                goto Event20
              case 5:
                goto Event20
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Forest'}) {
            switch AutoPlacement.TimeType() {
              case 0:
                Event0:
                if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        if AutoPlacement.RouteDistance({'Distance': 15.0}) {
                            if AutoPlacement.TreeRate({'Rate': 0.029999999329447746}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
              case 1:
                goto Event0
              case 2:
                goto Event0
              case 3:
                goto Event0
              case 4:
                goto Event0
              case 5:
                goto Event0
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Desert'}) {
            if AutoPlacement.TimeType() == 2 {
                if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        if AutoPlacement.RouteDistance({'Distance': 15.0}) {
                            switch AutoPlacement.GroundMat() {
                              case 3:
                                Event18:
                                AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                              case 12:
                                goto Event18
                            }
                        }
                    }
                }
            }
        }
    }

}
