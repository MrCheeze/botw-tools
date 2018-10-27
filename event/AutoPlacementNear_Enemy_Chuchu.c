-------- EventFlow: AutoPlacementNear_Enemy_Chuchu --------

Actor: AutoPlacement
entrypoint: None()
actions: ['NearCreate', 'CreateData']
queries: ['GroundNorm', 'WaterDepth', 'EcoAreaActorName', 'RouteDistance', 'GroundMat', 'PlayerRideHorse', 'TimeType', 'CheckGameData']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Junior'}) {
            Event293:
            if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                switch AutoPlacement.GroundMat() {
                  case 0:
                    Event267:
                    switch AutoPlacement.TimeType() {
                      case 0:
                        Event260:
                        if !AutoPlacement.PlayerRideHorse() {
                            AutoPlacement.NearCreate({'WaitFrame': 1})
                            if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                                    if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                        AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 3, 'GroupRadius': 10.0, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                    }
                                }
                            }
                        }
                      case 2:
                        goto Event260
                    }
                  case 1:
                    goto Event267
                  case 2:
                    goto Event267
                  case 3:
                    goto Event267
                  case 5:
                    goto Event267
                  case 6:
                    goto Event267
                  case 9:
                    goto Event267
                  case 12:
                    goto Event267
                  case 14:
                    goto Event267
                }
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Middle'}) {
            goto Event293
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Senior'}) {
            goto Event293
        }
    }

}

void EntryPoint1() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Fire_Junior'}) {
            Event294:
            if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                switch AutoPlacement.GroundMat() {
                  case 0:
                    Event279:
                    switch AutoPlacement.TimeType() {
                      case 0:
                        Event274:
                        if !AutoPlacement.PlayerRideHorse() {
                            AutoPlacement.NearCreate({'WaitFrame': 1})
                            if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                                    if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                        AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                    }
                                }
                            }
                        }
                      case 2:
                        goto Event274
                    }
                  case 1:
                    goto Event279
                  case 2:
                    goto Event279
                  case 3:
                    goto Event279
                  case 5:
                    goto Event279
                  case 6:
                    goto Event279
                  case 9:
                    goto Event279
                  case 12:
                    goto Event279
                  case 14:
                    goto Event279
                }
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Fire_Middle'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Fire_Senior'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Electric_Junior'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Electric_Middle'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Electric_Senior'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Ice_Junior'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Ice_Middle'}) {
            goto Event294
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Chuchu_Ice_Senior'}) {
            goto Event294
        }
    }

}
