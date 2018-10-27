-------- EventFlow: AutoPlacementNear_Enemy_Stal --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'NearCreate', 'EquipCategory']
queries: ['GroundNorm', 'WaterDepth', 'EcoAreaActorName', 'PlayerRideHorse', 'CheckGameData', 'CheckPouchItemCount', 'TimeType']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Bokoblin_Bone_Junior'}) {
            Event260:
            if !AutoPlacement.PlayerRideHorse() {
                AutoPlacement.NearCreate({'WaitFrame': 1})
                if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        switch AutoPlacement.TimeType() {
                          case 6:
                            if AutoPlacement.CheckGameData({'Label': 'IsGet_Weapon_Sword_004'}) {
                                Event264:
                                if !AutoPlacement.CheckPouchItemCount({'Type': 3, 'Count': 1}) {
                                    AutoPlacement.EquipCategory({'Category': 3})
                                    Event289:
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 5.0, 'MaxNum': 3, 'EquipWeaponActorCount': 1, 'Mimicry': False, 'MinNum': 1})
                                } else
                                if !AutoPlacement.CheckPouchItemCount({'Count': 1, 'Type': 1}) {
                                    if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                                        AutoPlacement.EquipCategory({'Category': 1})
                                        goto Event289
                                    } else
                                    Event268:
                                    if !AutoPlacement.CheckPouchItemCount({'Type': 2, 'Count': 1}) {
                                        AutoPlacement.EquipCategory({'Category': 2})
                                        goto Event289
                                    } else
                                    if !AutoPlacement.CheckPouchItemCount({'Count': 1, 'Type': 4}) {
                                        AutoPlacement.EquipCategory({'Category': 4})
                                        goto Event289
                                    } else
                                    if !AutoPlacement.CheckPouchItemCount({'Count': 1, 'Type': 0}) {
                                        AutoPlacement.EquipCategory({'Category': 0})
                                        goto Event289
                                    } else {
                                        goto Event289
                                    }
                                } else
                                goto Event268
                            } else
                            if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                                goto Event264
                            }
                          case 7:
                            if AutoPlacement.CheckGameData({'Label': 'IsGet_Weapon_Bow_004'}) {
                                Event283:
                                if !AutoPlacement.CheckPouchItemCount({'Type': 3, 'Count': 2}) {
                                    AutoPlacement.EquipCategory({'Category': 3})
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 5.0, 'MaxNum': 3, 'Mimicry': False, 'EquipWeaponActorCount': 1, 'MinNum': 1})
                                } else {
                                    AutoPlacement.EquipCategory({'Category': 3})
                                    AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'GroupRadius': 5.0, 'EquipWeaponActorCount': 1, 'MaxNum': 3, 'Mimicry': False, 'MinNum': 1})
                                }
                            } else
                            if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                                goto Event283
                            }
                        }
                    }
                }
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Moriblin_Bone_Junior'}) {
            Event286:
            if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
                goto Event260
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Bone_Junior'}) {
            goto Event286
        }
    }

}
