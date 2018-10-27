-------- EventFlow: HyruleCastle --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_ChangeScene', 'Demo_SetRetryData', 'Demo_ExitGame', 'Demo_WarpPlayerToDestination', 'Demo_AutoSaveAtGameClear', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_SwitchPlayerEquipment', 'Demo_RecoverMasterSword', 'Demo_SetPLStateToUnequipAndWait']
queries: ['CheckFlag', 'CheckTypeOfOwnedHorseForEvent', 'CheckEquipment', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_RideHorseForEvent', 'Demo_AccelerateHorse', 'Demo_PlayerHorseGetOff', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_ConnectTypeSpecify']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Ganon[0]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_GanonBeast[0]
entrypoint: None()
actions: ['Demo_VisibleOff', 'Demo_Join', 'Demo_Idling']
queries: []
params: {'CreateMode': 4, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Bow_071
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: EventSystemActor[Checker1]
entrypoint: None()
actions: ['Demo_ChkExistenceOfParticipant']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Checker2]
entrypoint: None()
actions: ['Demo_ChkExistenceOfParticipant']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void CastleFirstIn() {
    if !EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo140_0'}) {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo140_0', 'EndFade': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo140_0'})
    }
}

void BossRoom0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce'})
    if EventSystemActor.CheckFlag({'FlagName': 'FirstInHyruleCastleBossRoom'}) {
        Event238:
        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo141_4', 'EndFade': 1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo141_4'})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -253.85543823242188, 'DestinationY': 294.6000671386719, 'DestinationZ': -1049.524169921875, 'DirectionY': -180.0})
        Event39:
        if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWind'}) {
            Event42:
            if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWater'}) {
                Event45:
                if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonFire'}) {
                    Event14:
                    if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonElectric'}) {
                        Event151:
                        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Weapon_Sword_070'}) {
                            Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                                EventSystemActor.Demo_RecoverMasterSword({'IsWaitFinish': True})
                                Event50:
                                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo142_0'}) in [1, 0] {
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'LastBossIncompleteGanonGenerateFlag'})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                                        Event188:
                                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo142_0', 'EndFade': 1})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWindGenerateFlag'})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWaterGenerateFlag'})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonFireGenerateFlag'})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonElectricGenerateFlag'})
                                        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo143_0', 'EndFade': 1})
                                            Event60:
                                            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
                                                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo143_3', 'EndFade': 1})
                                                Event62:
                                                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                                                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo143_1', 'EndFade': 1})
                                                    Event64:
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'}) {
                                                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo143_2', 'EndFade': 1})
                                                        Event67:
                                                        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo143_0'}) {
                                                            Event66:
                                                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo143_4', 'EndFade': 1})
                                                            Event155:
                                                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo720_0', 'EndFade': 1, 'EntryPointName': 'Demo720_0'})
                                                            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})

                                                            call Common.DisableSaveAndWarp()

                                                        } else
                                                        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo143_1'}) {
                                                            goto Event66
                                                        } else
                                                        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo143_2'}) {
                                                            goto Event66
                                                        } else
                                                        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo143_3'}) {
                                                            goto Event66
                                                        } else {
                                                            goto Event155
                                                        }
                                                    } else
                                                    goto Event67
                                                } else
                                                goto Event64
                                            } else
                                            goto Event62
                                        } else
                                        goto Event60
                                    } else
                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
                                        goto Event188
                                    } else
                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                                        goto Event188
                                    } else
                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'}) {
                                        goto Event188
                                    } else {
                                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo142_0', 'EndFade': 1})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWindGenerateFlag'})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWaterGenerateFlag'})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonFireGenerateFlag'})
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonElectricGenerateFlag'})
                                        goto Event155
                                    }
                                }
                            } else {
                                EventSystemActor.Demo_RecoverMasterSword({'IsWaitFinish': True})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                                EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Sword_070', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': ''})
                                goto Event50
                            }
                        } else {
                            Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                            goto Event50
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo141_2'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'IsHyruleCastlePGanonElectricDead'}) {
                            goto Event151
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonElectricGenerateFlag'})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo141_2'})
                        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Elec_Start_FirstHalf'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWindGenerateFlag'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWaterGenerateFlag'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonFireGenerateFlag'})

                        call Common.DisableSaveAndWarp()

                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo141_1'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'IsHyruleCastlePGanonFireDead'}) {
                        goto Event14
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonFireGenerateFlag'})
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo141_1'})
                    SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Fire_Start_FirstHalf'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWindGenerateFlag'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWaterGenerateFlag'})

                    call Common.DisableSaveAndWarp()

                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo141_3'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'IsHyruleCastlePGanonWaterDead'}) {
                    goto Event45
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWaterGenerateFlag'})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo141_3'})
                SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Water_Start_FirstHalf'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWindGenerateFlag'})

                call Common.DisableSaveAndWarp()

            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo141_0'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'IsHyruleCastlePGanonWindDead'}) {
                goto Event42
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'LastBossCurseGanonWindGenerateFlag'})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo141_0'})
            SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Wind_Start_FirstHalf'})

            call Common.DisableSaveAndWarp()

        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstInHyruleCastleBossRoom'})
        if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWind'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWater'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonFire'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonElectric'}) {
                        goto Event151
                    } else {
                        goto Event238
                    }
                } else {
                    goto Event238
                }
            } else {
                goto Event238
            }
        } else {
            goto Event238
        }
    }
}

void GanonDead() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'None'})
    Enemy_Ganon[0].Demo_Join({'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    if !EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo145_0'}) {
        Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo145_0', 'EndFade': 1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo145_0'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossIncompleteGanonGenerateFlag'})

        call BeastGanonBattleReady()

    }
}

void BeastGanonDead() {
    if !EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo147_0'}) {
        Enemy_GanonBeast[0].Demo_Join({'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 0, 'DispMode': 'Auto', 'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 1, 'DemoName': 'Demo147_0'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo147_0'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsGanonLiving'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossGanonBeastGenerateFlag'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            Event169:
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo148_0', 'EndFade': 1})
            if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Finish'}) {
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo139_0', 'EndFade': 1})
                Event78:
                EventSystemActor.Demo_AutoSaveAtGameClear({'RestartPoint': [-253.82000732421875, 127.41000366210938, -97.54000091552734], 'RestartYDegree': -180.0, 'IsWaitFinish': True, 'GameClearFlag': 'GameClear'})
                EventSystemActor.Demo_ExitGame({'IsWaitFinish': True, 'ShowLogo': 1})
            } else {
                goto Event78
            }
        } else {
            goto Event169
        }
    }
}

void BeastGanonBattleReady() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'LastBossGanonBeastGenerateFlag'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {
        Enemy_GanonBeast[0].Demo_Join({'IsWaitFinish': True})
        EventSystemActor[Checker1].Demo_ChkExistenceOfParticipant({'IsWaitFinish': True, 'ActorName': 'Enemy_GanonBeast', 'InstanceName': '0'})
        Enemy_GanonBeast[0].Demo_VisibleOff({'IsWaitFinish': False})
    } {
        Weapon_Bow_071.Demo_Join({'IsWaitFinish': True})
        EventSystemActor[Checker2].Demo_ChkExistenceOfParticipant({'ActorName': 'Weapon_Bow_071', 'IsWaitFinish': True, 'InstanceName': ''})
    }

    if !EventSystemActor.CheckTypeOfOwnedHorseForEvent() {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo146_0'})
        Event253:
        GameRomCamera.Demo_ConnectTypeSpecify({'IsWaitFinish': True, 'ConnectType': 0})
        Enemy_GanonBeast[0].Demo_Idling({'IsWaitFinish': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo146_0'})
        GameROMPlayer.Demo_RideHorseForEvent({'IsWaitFinish': True})
        GameROMPlayer.Demo_AccelerateHorse({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Horse_IsRide'})
        EventSystemActor.Demo_SetRetryData({'IsWaitFinish': True})

        call Common.DisableSaveAndWarp()

    } else {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo146_1'})
        goto Event253
    }
}

void BossRoom1() {
    goto Event39
}

void GenBossAndCallDemo() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ActorGenerateFlag'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'CallDemoName', 'EndFade': 1})
}

void CastleHarbor_DungeonAppear() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': True, 'EndFade': 0})
}
