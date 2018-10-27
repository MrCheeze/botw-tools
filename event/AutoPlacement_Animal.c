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
                    if AutoPlacement.GroundMat() in [0, 5] {
                        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                            if AutoPlacement.GroundMat() in [0, 5] {
                                if AutoPlacement.TreeRate({'Rate': 0.15000000596046448}) {
                                    if AutoPlacement.WaterDistance({'Distance': 10.0}) {
                                        AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                    }
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Boar_A'}) {
                    if AutoPlacement.GroundMat() in [0, 3, 5] {
                        if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Boar_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 3, 5] {
                            if AutoPlacement.TreeRate({'Rate': 0.05000000074505806}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fox_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 5] {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fox_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [9, 10, 14] {
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Wolf_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 3, 5] {
                            if AutoPlacement.RouteDistance({'Distance': 10.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 4, 'GroupRadius': 20.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Wolf_B'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 3] {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 3, 'GroupRadius': 15.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Wolf_C'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [9, 10, 14] {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'GroupRadius': 15.0, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Deer_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 3, 5] {
                            if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Doe_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 3, 5] {
                            if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Elk_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 5, 9, 10, 14] {
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_WildGoat_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [1, 2, 5] {
                            if !AutoPlacement.TreeRate({'Rate': 0.10000000149011612}) {
                                if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                    AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Bull_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [0, 5, 8, 9, 10] {
                            if AutoPlacement.WaterDistance({'Distance': 10.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Rhino_A'}) {
                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        if AutoPlacement.GroundMat() in [2, 9, 10, 12, 14] {
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
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
                        if AutoPlacement.GroundMat() in [0, 1, 2, 3] {
                            if AutoPlacement.WaterDistance({'Distance': 15.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 2})
                            }
                        }
                    }
                }
            }

        }
    }
}
