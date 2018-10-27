-------- EventFlow: AutoPlacement_Enemy_Keese --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'EcoAreaActorName', 'RouteDistance', 'WaterDepth', 'TimeType', 'GroundMat', 'TreeRate', 'CheckGameData']
params: None

void EntryPoint0() {
    if AutoPlacement.GroundNorm({'Angle': 10.0}) {
        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
            if AutoPlacement.RouteDistance({'Distance': 15.0}) {
                switch AutoPlacement.TimeType() {
                  case 5:
                    Event264:

                    fork {
                        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Keese'}) {
                            AutoPlacement.CreateData({'GroupRadius': 8.0, 'RideList': '', 'OffsetPosY': 8.0, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2})
                        }
                    } {
                        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Keese_Fire'}) {
                            Event267:
                            AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 2, 'GroupRadius': 8.0, 'RideList': '', 'OffsetPosY': 8.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                        }
                    } {
                        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Keese_Electric'}) {
                            goto Event267
                        }
                    } {
                        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Keese_Ice'}) {
                            switch AutoPlacement.GroundMat() {
                              case 9:
                                Event268:
                                AutoPlacement.CreateData({'MaxNum': 2, 'GroupRadius': 8.0, 'RideList': '', 'OffsetPosY': 8.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 1})
                              case 14:
                                goto Event268
                            }
                        }
                    } {
                        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Keese_Swarm'}) {
                            if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                                if !AutoPlacement.TreeRate({'Rate': 0.0010000000474974513}) {
                                    switch AutoPlacement.GroundMat() {
                                      case 0:
                                        Event277:
                                        AutoPlacement.CreateData({'MinNum': 1, 'MaxNum': 1, 'OffsetPosY': 8.0, 'GroupRadius': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                      case 3:
                                        goto Event277
                                      case 5:
                                        goto Event277
                                    }
                                }
                            }
                        }
                    }

                  case 6:
                    goto Event264
                  case 7:
                    goto Event264
                }
            }
        }
    }
}
