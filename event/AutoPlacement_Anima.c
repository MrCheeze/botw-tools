-------- EventFlow: AutoPlacement_Animal --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'TreeRate', 'GroundMat', 'WaterDepth', 'EcoAreaActorName', 'RouteDistance', 'CheckGameData', 'WaterDistance', 'NavMeshFace']
params: None

void EntryPoint0() {
    if AutoPlacement.GroundNorm({'Angle': 40.0}) {
        if AutoPlacement.NavMeshFace() {

            fork {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Squirrel_A'}) {
                    switch AutoPlacement.GroundMat() {
                      case 0:
                        Event546:
                        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                            switch AutoPlacement.GroundMat() {
                              case 0:
                                Event523:
                                if AutoPlacement.TreeRate({'Rate': 0.15000000596046448}) {
                                    if AutoPlacement.WaterDistance({'Distance': 10.0}) {
                                        AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                    }
                                }
                              case 5:
                                goto Event523
                            }
                        }
                      case 5:
                        goto Event546
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Boar_A'}) {
                    switch AutoPlacement.GroundMat() {
                      case 0:
                        Event533:
                        if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                      case 3:
                        goto Event533
                      case 5:
                        goto Event533
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Boar_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event553:
                            if AutoPlacement.TreeRate({'Rate': 0.05000000074505806}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 3:
                            goto Event553
                          case 5:
                            goto Event553
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fox_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event587:
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 5:
                            goto Event587
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fox_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 9:
                            Event605:
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                          case 10:
                            goto Event605
                          case 14:
                            goto Event605
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Wolf_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event565:
                            if AutoPlacement.RouteDistance({'Distance': 10.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 4, 'GroupRadius': 20.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 3:
                            goto Event565
                          case 5:
                            goto Event565
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Wolf_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event566:
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 3, 'GroupRadius': 15.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 3:
                            goto Event566
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Wolf_C'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 9:
                            Event567:
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'GroupRadius': 15.0, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 10:
                            goto Event567
                          case 14:
                            goto Event567
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Deer_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event548:
                            if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 3:
                            goto Event548
                          case 5:
                            goto Event548
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Doe_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event417:
                            if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 3:
                            goto Event417
                          case 5:
                            goto Event417
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Elk_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event599:
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                          case 5:
                            goto Event599
                          case 9:
                            goto Event599
                          case 10:
                            goto Event599
                          case 14:
                            goto Event599
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_WildGoat_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 1:
                            Event588:
                            if !AutoPlacement.TreeRate({'Rate': 0.10000000149011612}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                          case 2:
                            goto Event588
                          case 5:
                            goto Event588
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Bull_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event611:
                            if AutoPlacement.WaterDistance({'Distance': 10.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                          case 5:
                            goto Event611
                          case 8:
                            goto Event611
                          case 9:
                            goto Event611
                          case 10:
                            goto Event611
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Rhino_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 2:
                            Event612:
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                          case 9:
                            goto Event612
                          case 10:
                            goto Event612
                          case 12:
                            goto Event612
                          case 14:
                            goto Event612
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Bear_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.TreeRate({'Rate': 0.30000001192092896}) {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Bear_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.TreeRate({'Rate': 0.30000001192092896}) {
                            if AutoPlacement.RouteDistance({'Distance': 30.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Cassowary_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event615:
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 2})
                            }
                          case 1:
                            goto Event615
                          case 2:
                            goto Event615
                          case 3:
                            goto Event615
                        }
                    }
                }
            }

        }
    }
}
