-------- EventFlow: AutoPlacement_Material --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'AppearWeatherRate']
queries: ['GroundNorm', 'TreeRate', 'WaterDepth', 'EcoAreaActorName', 'GroundMat', 'CheckGameData']
params: None

void EntryPoint0() {
    if AutoPlacement.GroundNorm({'Angle': 20.0}) {

        fork {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Item_Fruit_K'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    if AutoPlacement.TreeRate({'Rate': 0.15000000596046448}) {
                        AutoPlacement.CreateData({'RideList': '', 'MinNum': 1, 'EquipWeaponActorCount': -1, 'MaxNum': 3, 'OffsetPosY': 0.4000000059604645, 'GroupRadius': 5.0, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Item_Fruit_L'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    if AutoPlacement.TreeRate({'Rate': 0.15000000596046448}) {
                        AutoPlacement.CreateData({'RideList': '', 'MinNum': 1, 'EquipWeaponActorCount': -1, 'OffsetPosY': 0.4000000059604645, 'GroupRadius': 5.0, 'Mimicry': False, 'MaxNum': 2})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Weapon_Sword_044'}) {
                if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                    if AutoPlacement.TreeRate({'Rate': 0.15000000596046448}) {
                        AutoPlacement.CreateData({'GroupRadius': 10.0, 'RideList': '', 'MaxNum': 1, 'MinNum': 1, 'EquipWeaponActorCount': -1, 'OffsetPosY': 1.0, 'Mimicry': False})
                    }
                }
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'BrokenSnowBall'}) {
                if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        AutoPlacement.AppearWeatherRate({'BlueSkyRain': 0.0, 'ThunderRain': 0.0, 'ThunderStorm': 0.0, 'HeavySnow': 1.0, 'HeavyRain': 0.0, 'Rain': 0.0, 'Cloudy': 0.0, 'Bluesky': 0.0, 'Snow': 0.6000000238418579})
                        if AutoPlacement.GroundMat() in [9, 10, 14] {
                            AutoPlacement.CreateData({'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'OffsetPosY': 0.30000001192092896, 'MaxNum': 3, 'MinNum': 2, 'GroupRadius': 15.0})
                        }
                    }
                }
            }
        }

    }
}
