-------- EventFlow: AutoPlacementNear_Enemy_Dragon --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['EcoAreaActorName', 'RailDistance', 'CheckGameData', 'TimeType']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.CheckGameData({'Label': 'Npc_Kakariko001_TalkEnd'}) {
            Event56:
            if !AutoPlacement.CheckGameData({'Label': 'IsInHyruleCastleArea'}) {

                fork {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Ice'}) {
                        if AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Ice_ReturnToSky'}) {
                            if !AutoPlacement.RailDistance({'RailType': 0, 'NearOnly': True, 'RailName': 'Dragon_Ice_MainRoute', 'Distance': 2000.0}) {
                                switch AutoPlacement.TimeType() {
                                  case 0:
                                    Event50:
                                    if !AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Ice_Appearance_Today'}) {
                                        Event55:
                                        AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                    }
                                  case 5:
                                    goto Event50
                                  case 6:
                                    goto Event50
                                  case 7:
                                    goto Event50
                                }
                            }
                        }
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Fire'}) {
                        if !AutoPlacement.RailDistance({'RailType': 0, 'NearOnly': True, 'RailName': 'Dragon_Fire_MainRoute', 'Distance': 2000.0}) {
                            switch AutoPlacement.TimeType() {
                              case 0:
                                Event52:
                                if !AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Fire_Appearance_Today'}) {
                                    goto Event55
                                }
                              case 5:
                                goto Event52
                              case 6:
                                goto Event52
                              case 7:
                                goto Event52
                            }
                        }
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Electric'}) {
                        if !AutoPlacement.RailDistance({'RailType': 0, 'RailName': 'Dragon_Electric_Start_LakeFloria', 'NearOnly': False, 'Distance': 1200.0}) {
                            Event37:
                            switch AutoPlacement.TimeType() {
                              case 0:
                                Event54:
                                if !AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Electric_Appearance_Today'}) {
                                    goto Event55
                                }
                              case 5:
                                goto Event54
                              case 6:
                                goto Event54
                              case 7:
                                goto Event54
                            }
                        }
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Electric'}) {
                        if !AutoPlacement.RailDistance({'RailType': 0, 'RailName': 'Dragon_Electric_Start_LakeHylia', 'NearOnly': False, 'Distance': 1200.0}) {
                            goto Event37
                        }
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Electric'}) {
                        if !AutoPlacement.RailDistance({'RailType': 0, 'NearOnly': True, 'RailName': 'Dragon_Electric_SubRoute_HighlandGerudo', 'Distance': 1000.0}) {
                            goto Event54
                        }
                    }
                }

            }
        }
    } {
        if AutoPlacement.CheckGameData({'Label': 'Find_4Relic_4thClear'}) {
            goto Event56
        }
    }

}
