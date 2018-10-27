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
                if AutoPlacement.GroundMat() in [0, 1, 2, 3, 5, 6, 9, 12, 14] {
                    if AutoPlacement.TimeType() in [0, 2] {
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
                    }
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
                if AutoPlacement.GroundMat() in [0, 1, 2, 3, 5, 6, 9, 12, 14] {
                    if AutoPlacement.TimeType() in [0, 2] {
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
                    }
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
