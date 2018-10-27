-------- EventFlow: AocResident --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_RestorePouchForQuest', 'Demo_RollbackQuest', 'Demo_AutoSave', 'Demo_DisableAutoSavePausing']
queries: ['Check100EnemyActiveTiming', 'CheckFlag', 'IsCurrentMainFieldStage']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_UpdateEquip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

void Check100EnemyRun() {
    switch EventSystemActor.Check100EnemyActiveTiming() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_Aoc1_RunAutoOrder'}) {
            Event266:

            call collaboEquip()

        } else {

            call CheckAoc1TreasureRun()

            goto Event266
        }
      case 1:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo200_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Demo200_1'})
      case 2:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo201_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Demo201_1'})
    }
}

void CheckAoc1TreasureRun() {
    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer2'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_Aoc1_RunAutoOrder'}) {
            if EventSystemActor.IsCurrentMainFieldStage() {
                if EventSystemActor.CheckFlag({'FlagName': 'FirstTouchdown'}) {
                    EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_Aoc1_RunAutoOrder', 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt01_Ready'}) {
                        Event240:
                        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt01_Activated'}) {
                            Event208:
                            if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt02_Ready'}) {
                                Event241:
                                if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt02_Activated'}) {
                                    Event209:
                                    if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku01_Ready'}) {
                                        Event242:
                                        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku01_Activated'}) {
                                            Event210:
                                            if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku02_Ready'}) {
                                                Event243:
                                                if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku02_Activated'}) {
                                                    Event211:
                                                    if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku03_Ready'}) {
                                                        Event244:
                                                        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku03_Activated'}) {
                                                            Event212:
                                                            if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku04_Ready'}) {
                                                                Event245:
                                                                if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku04_Activated'}) {
                                                                    EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku04_Activated', 'IsWaitFinish': True})
                                                                }
                                                            } else {
                                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku04_Ready'})
                                                                goto Event245
                                                            }
                                                        } else {
                                                            EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku03_Activated', 'IsWaitFinish': True})
                                                            goto Event212
                                                        }
                                                    } else {
                                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku03_Ready'})
                                                        goto Event244
                                                    }
                                                } else {
                                                    EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku02_Activated', 'IsWaitFinish': True})
                                                    goto Event211
                                                }
                                            } else {
                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku02_Ready'})
                                                goto Event243
                                            }
                                        } else {
                                            EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku01_Activated', 'IsWaitFinish': True})
                                            goto Event210
                                        }
                                    } else {
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku01_Ready'})
                                        goto Event242
                                    }
                                } else {
                                    EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt02_Activated', 'IsWaitFinish': True})
                                    goto Event209
                                }
                            } else {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt02_Ready'})
                                goto Event241
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt01_Activated', 'IsWaitFinish': True})
                            goto Event208
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt01_Ready'})
                        goto Event240
                    }
                }
            }
        }
    }
}

void 100EnemyWarpReset() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_RestorePouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Finish'}) {
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'MiniGame100enemy', 'StepName': 'Ready'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Middle'}) {
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'StepName': 'Active3'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Junior'}) {
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'StepName': 'Active2'})
    } else {
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'StepName': 'Active', 'QuestName': '100enemy'})
    }
}

void collaboEquip() {
    if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_CollaboEquip_RunAutoOrder'}) {
        if EventSystemActor.IsCurrentMainFieldStage() {
            if EventSystemActor.CheckFlag({'FlagName': 'FirstTouchdown'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_CollaboEquip_RunAutoOrder'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'bf2_collabo_Ready'}) {
                    Event270:
                    if !EventSystemActor.CheckFlag({'FlagName': 'bf2_collabo_Activated'}) {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'bf2_collabo_Activated'})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'bf2_collabo_Ready'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    goto Event270
                }
            }
        }
    }
}
