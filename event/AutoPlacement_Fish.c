-------- EventFlow: AutoPlacement_Fish --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'AppearWeatherRate']
queries: ['GroundMat', 'WaterDepth', 'GroundNorm', 'WaterSurface', 'EcoAreaActorName', 'WaterSubMat', 'CheckGameData']
params: None

void EntryPoint0() {
    if AutoPlacement.GroundNorm({'Angle': 50.0}) {

        fork {
            if AutoPlacement.GroundMat() == 8
            && !AutoPlacement.WaterSubMat() {

                fork {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_A'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158})
                    && !AutoPlacement.WaterDepth({'Depth': 20.0}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 5.0, 'MaxNum': 4, 'MinNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_L'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'MinNum': 1, 'GroupRadius': 5.0, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_B'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.5}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 0})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_X'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2, 'MaxNum': 4, 'GroupRadius': 12.0})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_C'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MinNum': 1, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_D'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.AppearWeatherRate({'Snow': 0.0, 'HeavyRain': 1.0, 'HeavySnow': 0.0, 'ThunderStorm': 1.0, 'ThunderRain': 1.0, 'Bluesky': 0.20000000298023224, 'Cloudy': 0.20000000298023224, 'Rain': 0.5, 'BlueSkyRain': 0.5})
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MinNum': 1, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_E'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'MinNum': 1, 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_H'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MinNum': 1, 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_F'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 10.0, 'OffsetPosY': -0.6000000238418579, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 1, 'MaxNum': 3})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_G'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 10.0, 'OffsetPosY': -0.6000000238418579, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 1, 'MaxNum': 3})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_I'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                    && AutoPlacement.WaterSurface()
                    && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                        AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 2, 'GroupRadius': 15.0, 'MinNum': 0})
                    }
                }

            }
        } {
            if AutoPlacement.GroundMat() == 8
            && AutoPlacement.WaterSubMat() == 2
            && AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_J'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.WaterSurface()
            && AutoPlacement.WaterDepth({'Depth': 1.2000000476837158}) {
                AutoPlacement.CreateData({'RideList': '', 'GroupRadius': 10.0, 'MinNum': 1, 'OffsetPosY': -0.6000000238418579, 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {

            fork {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_K'})
                && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                && AutoPlacement.GroundMat() in [3, 8]
                && AutoPlacement.WaterDepth({'Depth': 0.0})
                && !AutoPlacement.WaterDepth({'Depth': 1.0}) {
                    AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MinNum': 1, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                }
            } {
                if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Fish_M'})
                && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
                && AutoPlacement.GroundMat() == 8
                && AutoPlacement.WaterDepth({'Depth': 0.009999999776482582})
                && !AutoPlacement.WaterDepth({'Depth': 1.0}) {
                    AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': -0.6000000238418579, 'GroupRadius': 10.0, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 2})
                }
            }

        } {
            if AutoPlacement.GroundMat() == 3 {

                fork {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_K'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 10.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 0, 'MaxNum': 2})
                    }
                } {
                    if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_O'})
                    && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                        AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 10.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 0, 'MaxNum': 2})
                    }
                }

            }
        } {
            if AutoPlacement.GroundMat() in [0, 1, 2, 3]
            && AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Insect_Z'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                AutoPlacement.AppearWeatherRate({'Snow': 0.0, 'Bluesky': 1.0, 'Cloudy': 1.0, 'Rain': 1.0, 'HeavyRain': 1.0, 'HeavySnow': 0.0, 'ThunderStorm': 1.0, 'ThunderRain': 1.0, 'BlueSkyRain': 1.0})
                AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 10.0, 'MinNum': 1, 'MaxNum': 5, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        }

    }
}
