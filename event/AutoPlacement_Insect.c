-------- EventFlow: AutoPlacement_Insect --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'AppearWeatherRate']
queries: ['GroundMat', 'GroundNorm', 'TreeRate', 'WaterDepth', 'WaterSurface', 'EcoAreaActorName', 'CheckGameData', 'WaterSubMat']
params: None

void EntryPoint0() {
    if AutoPlacement.GroundNorm({'Angle': 50.0}) {

        fork {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_E'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    if AutoPlacement.TreeRate({'Rate': 0.11999999731779099}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MaxNum': 8, 'MinNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if !AutoPlacement.CheckGameData({'Label': 'FairyCountCheck'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_F'}) {
                        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                            if AutoPlacement.TreeRate({'Rate': 0.20000000298023224}) {
                                AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_AA'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 0.0, 'GroupRadius': 30.0, 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_G'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 0.0, 'GroupRadius': 30.0, 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_P'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 0.0, 'GroupRadius': 30.0, 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_AB'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_Q'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_N'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_R'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.5}) {
                        AutoPlacement.AppearWeatherRate({'HeavyRain': 1.0, 'Snow': 0.0, 'HeavySnow': 0.0, 'ThunderRain': 1.0, 'BlueSkyRain': 1.0, 'Bluesky': 0.0, 'Cloudy': 0.0, 'Rain': 1.0, 'ThunderStorm': 1.0})
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 3, 'MaxNum': 5})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_T'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MinNum': 2, 'MaxNum': 4, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_C'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'MinNum': 2, 'MaxNum': 4, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_I'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 1.0}) {
                        AutoPlacement.AppearWeatherRate({'HeavyRain': 1.0, 'Snow': 0.0, 'HeavySnow': 0.0, 'ThunderRain': 1.0, 'BlueSkyRain': 1.0, 'Bluesky': 0.0, 'Cloudy': 0.0, 'Rain': 1.0, 'ThunderStorm': 1.0})
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 15.0, 'OffsetPosY': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 6, 'MinNum': 3})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_H'}) {
                switch AutoPlacement.GroundMat() {
                  case 0:
                    Event255:
                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 15.0, 'MinNum': 1, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                  case 3:
                    goto Event255
                  case 5:
                    goto Event255
                  case 12:
                    goto Event255
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_A'}) {
                if AutoPlacement.GroundMat() == 8 {
                    if !AutoPlacement.WaterSubMat() {
                        if AutoPlacement.WaterDepth({'Depth': 0.009999999776482582}) {
                            if !AutoPlacement.WaterDepth({'Depth': 1.5}) {
                                if AutoPlacement.WaterSurface() {
                                    AutoPlacement.AppearWeatherRate({'HeavyRain': 1.0, 'Snow': 0.0, 'HeavySnow': 0.0, 'ThunderRain': 1.0, 'BlueSkyRain': 1.0, 'Bluesky': 0.5, 'Cloudy': 0.5, 'Rain': 0.699999988079071, 'ThunderStorm': 1.0})
                                    AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.30000001192092896, 'GroupRadius': 8.0, 'EquipWeaponActorCount': -1, 'MinNum': 1, 'MaxNum': 3, 'Mimicry': False})
                                }
                            }
                        }
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_B'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if AutoPlacement.GroundMat() == 8 {
                        if !AutoPlacement.WaterSubMat() {
                            if AutoPlacement.WaterDepth({'Depth': 0.009999999776482582}) {
                                if !AutoPlacement.WaterDepth({'Depth': 1.5}) {
                                    if AutoPlacement.WaterSurface() {
                                        AutoPlacement.AppearWeatherRate({'HeavyRain': 1.0, 'Snow': 0.0, 'HeavySnow': 0.0, 'ThunderRain': 1.0, 'ThunderStorm': 0.5, 'Rain': 0.5, 'BlueSkyRain': 1.0, 'Bluesky': 0.0, 'Cloudy': 0.0})
                                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 8.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2, 'MaxNum': 4, 'OffsetPosY': 0.0})
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_M'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        if AutoPlacement.TreeRate({'Rate': 0.09000000357627869}) {
                            AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 0.0, 'MinNum': 1, 'MaxNum': 1, 'GroupRadius': 15.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                        }
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_S'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    if AutoPlacement.TreeRate({'Rate': 0.09000000357627869}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 0.0, 'MinNum': 1, 'MaxNum': 1, 'GroupRadius': 15.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_X'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        switch AutoPlacement.GroundMat() {
                          case 0:
                            Event339:
                            AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 0.0, 'MinNum': 1, 'GroupRadius': 15.0, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                          case 1:
                            goto Event339
                          case 2:
                            goto Event339
                          case 3:
                            goto Event339
                        }
                    }
                }
            }
        }

    }
}
