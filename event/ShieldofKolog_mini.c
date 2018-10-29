-------- EventFlow: ShieldofKolog_mini --------

Actor: Npc_Kokiri011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_ChangeEquipState', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_RollbackQuest', 'Demo_LoopEnd', 'Demo_AdvanceQuest', 'Demo_MiniGameTime', 'Demo_DisableMiniGameTime', 'Demo_IncreasePorchItem', 'Demo_SwitchPlayerEquipment', 'Demo_ResetGimmick', 'Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_WaitFrame']
queries: ['CheckEquipment', 'GeneralChoice2', 'CheckAddPorchItem', 'HasPorchItem', 'CheckFlag', 'CheckRupee', 'CheckElapsedTimeOfMiniGame', 'CheckMiniGameTime']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_MiniGameTimerWrite']
queries: ['CompareGameDataTime']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['Demo_MiniGameTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kokiri011_Near() {
    Npc_Kokiri011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Npc_Kokiri011_R_001', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_Kokiri011_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Check'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Check_Record'}) {
            Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0005'})
        } else {
            Event167:
            Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0004'})
        }
        Event189:
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1011'})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_025'}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_023', 'Count': 1}) {
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1012'})
                        if EventSystemActor.CheckRupee({'Value': 10}) {

                            fork {
                                EventSystemActor.Demo_IncreaseRupee({'Value': -10, 'IsWaitFinish': True})
                                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                            } {
                                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0002', 'IsCloseMessageDialog': False})
                            }

                            Event181:
                            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Check_Record'}) {
                                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0002_2'})
                            } else {
                                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0002_1'})
                            }
                            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})
                            Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
                            Event141:
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_025'}) {
                                Event142:
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_023', 'Count': 1}) {
                                    Event143:
                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                                        Event104:
                                        EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Sword_025', 'PorchItemName_Shield': 'Weapon_Shield_023', 'PorchItemName_Bow': 'Weapon_Bow_013', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'IsWaitFinish': True})
                                        Event292:
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_ObjectCreateFlag'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_Minigame'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_WeaponHide'})
                                        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': 'Kibako_Contain_01,Obj_BarrelOld_A_01,Pot', 'SystemResetOption': 0, 'IsResetCamera': False})

                                        call Common.DisableSaveAndWarp()


                                        call ShieldofKolog.Shield_Start_Demo1()

                                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Finish', 'QuestName': 'ShieldofKolog_mini'})

                                        call ShieldofKolog.Shield_Start_Demo2()


                                        call ShieldofKolog.PopFlag_OFF()

                                        EventSystemActor.Demo_MiniGameTime({'CountMode': 0, 'CountStartTime': 0, 'IsWaitFinish': True, 'IsShowTimeUI': True, 'MaxTime': 300})
                                    } else {
                                        EventSystemActor.Demo_FlagON({'FlagName': 'ShieldofKolog_RentalBow', 'IsWaitFinish': True})
                                        EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'PorchItemName': 'Weapon_Bow_013', 'IsWaitFinish': True})
                                        goto Event104
                                    }
                                } else {
                                    EventSystemActor.Demo_FlagON({'FlagName': 'ShieldofKolog_RentalShield', 'IsWaitFinish': True})
                                    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'PorchItemName': 'Weapon_Shield_023', 'IsWaitFinish': True})
                                    goto Event143
                                }
                            } else {
                                EventSystemActor.Demo_FlagON({'FlagName': 'ShieldofKolog_RentalSword', 'IsWaitFinish': True})
                                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Sword_025', 'Value': 1, 'IsWaitFinish': True})
                                goto Event142
                            }
                        } else {
                            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1014'})
                        }
                    } else
                    Event137:
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                        Event191:
                        if EventSystemActor.CheckRupee({'Value': 20}) {

                            fork {
                                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                            } {
                                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1013', 'IsCloseMessageDialog': False})
                                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0002', 'IsCloseMessageDialog': False})
                            }

                            goto Event181
                        } else {
                            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1014'})
                        }
                    } else {
                        Event77:
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_031'})
                    }
                } else
                Event132:
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_023'}) {
                    Event224:
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                        goto Event191
                    } else
                    goto Event137
                } else {
                    goto Event77
                }
            } else
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Weapon_Sword_025', 'Count': 1}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_023', 'Count': 1}) {
                    goto Event224
                } else
                goto Event132
            } else {
                goto Event77
            }
        } else {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0001'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Check_Talk'}) {
        goto Event167
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Check_Talk'})
        Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_0000'})
        goto Event189
    }
}

void Retire_Npc_Kokiri011_StepStart() {

    call Common.AirStartUP_Player()


    fork {
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
        if EventSystemActor.CheckMiniGameTime({'ConditionType': 2, 'Minute': 5, 'Second': 0}) {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_001', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False})
        } else {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1009'})
        }
    } {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Stop', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }


    call ShieldofKolog.Retire_ItemNone({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1106', 'IsCloseMessageDialog': False})
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_025'})
    && EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_023', 'Count': 1})
    && EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1102', 'IsCloseMessageDialog': True, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckRupee({'Value': 10}) {
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -10})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                Event308:
                EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog_mini', 'StepName': 'Ready'})

                call ReChallenge2()

            } else {
                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1014'})
                Event346:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Minigame'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

                call Common.EnableSaveAndWarp()

                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Minigame'})
            }
        } else {
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1104', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event346
        }
    } else {
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1101', 'IsCloseMessageDialog': True, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckRupee({'Value': 20}) {
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                goto Event308
            } else {
                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1014'})
                goto Event346
            }
        } else {
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1104', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event346
        }
    }
}

void Finish_Npc_Kokiri011_EachFrame() {
    EventSystemActor[0].Demo_MiniGameTime({'CountMode': 2, 'CountStartTime': -1, 'IsShowTimeUI': True, 'IsWaitFinish': True, 'MaxTime': -1})
    Event242:
    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Activated'}) {
        if EventSystemActor.CheckMiniGameTime({'ConditionType': 2, 'Minute': 5, 'Second': 0})
        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_025'})
        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_023'})
        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_013'}) {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event242
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Activated'}) {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Retire', 'QuestName': 'ShieldofKolog_mini'})
        } else {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event242
        }
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event242
    }
}

void EntryPoint0() {
    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_025'})
    && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_023'})
    && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_013'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': False, 'ForceRunTelop': False, 'QuestName': 'ShieldofKolog_mini', 'StepName': 'Goal'})
    }
}

void Goal_Npc_Kokiri011_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMintues': 'ShieldofKolog_mini_ThisTime_L', 'GameDataIntNameSeconds': 'ShieldofKolog_mini_ThisTime_M', 'GameDataIntNameMiliseconds': 'ShieldofKolog_mini_ThisTime_S', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_ObjectCreateFlag'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_Minigame'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Check'})

    call ShieldofKolog.Shield_Goal_Demo1()

    switch GameDataCalcMachine.CompareGameDataTime({'GameDataIntMinA': 'ShieldofKolog_mini_ThisTime_L', 'GameDataIntSecA': 'ShieldofKolog_mini_ThisTime_M', 'GameDataIntMilliA': 'ShieldofKolog_mini_ThisTime_S', 'GameDataIntMinB': 'ShieldofKolog_mini_BestTime_L', 'GameDataIntSecB': 'ShieldofKolog_mini_BestTime_M', 'GameDataIntMilliB': 'ShieldofKolog_mini_BestTime_S'}) {
      case 0:
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1000', 'IsCloseMessageDialog': False, 'ASName': 'Wait_Fly_Talk'})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1001', 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': False})
        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Check_Record'}) {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1001_2'})
        } else {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1001_1'})
        }

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1002', 'IsCloseMessageDialog': False, 'ASName': 'Wait_Fly_Talk'})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1003', 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': True})
        GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMintues': 'ShieldofKolog_mini_BestTime_L', 'GameDataIntNameSeconds': 'ShieldofKolog_mini_BestTime_M', 'GameDataIntNameMiliseconds': 'ShieldofKolog_mini_BestTime_S', 'IsWaitFinish': True})
        if !EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Check_Record'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Check_Record'})
        }
        Event279:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_025'})
        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_023'})
        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_013'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalSword'}) {
                Event201:
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1101', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckRupee({'Value': 20}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1103'})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        Event362:
                        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
                        Npc_Kokiri011.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
                        Npc_Kokiri011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
                        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog_mini', 'StepName': 'Ready'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_025'})
                        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_023'})
                        && EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_013'}) {

                            call ReChallenge()

                        } else {

                            call ReChallenge3()

                        }
                    } else {
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1014', 'ASName': 'Wait_Fly_Talk'})
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1107', 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': True})
                        Npc_Kokiri011.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Escape'})
                        Npc_Kokiri011.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Appearance', 'IsWaitFinish': True})
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1100', 'IsCloseMessageDialog': True})
                        Event258:
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
                        Npc_Kokiri011.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
                        Npc_Kokiri011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Minigame'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

                        call ShieldofKolog.Retire_ItemNone({'Arg_DestinationX': 562.4199829101562, 'Arg_DestinationY': 264.6206970214844, 'Arg_DestinationZ': -2163.659912109375, 'Arg_DestinationDirY': 30.0})


                        call Common.EnableSaveAndWarp()

                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_mini_Minigame'})
                    }
                } else {
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1104', 'IsCloseMessageDialog': True, 'ASName': 'Wait_Fly_Talk'})
                    Npc_Kokiri011.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Escape'})
                    Npc_Kokiri011.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Appearance', 'IsWaitFinish': True})
                    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1100', 'IsCloseMessageDialog': True})
                    goto Event258
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalShield'}) {
                goto Event201
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalBow'}) {
                goto Event201
            } else {
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1102', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckRupee({'Value': 10}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -10})
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1103'})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        goto Event362
                    } else {
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1014', 'IsCloseMessageDialog': False, 'ASName': 'Wait_Fly_Talk'})
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1107', 'IsCloseMessageDialog': True, 'ASName': 'Wait_Fly_Talk'})
                        Npc_Kokiri011.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Escape'})
                        Npc_Kokiri011.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Appearance', 'IsWaitFinish': True})
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1100', 'IsCloseMessageDialog': True})
                        goto Event258
                    }
                } else {
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1104', 'IsCloseMessageDialog': True, 'ASName': 'Wait_Fly_Talk'})
                    Npc_Kokiri011.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Escape'})
                    Npc_Kokiri011.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Appearance', 'IsWaitFinish': True})
                    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1105', 'IsCloseMessageDialog': True, 'ASName': 'Wait_Fly_Talk'})
                    goto Event258
                }
            }
        } else {
            goto Event201
        }
      case [1, 2]:
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1000', 'IsCloseMessageDialog': False, 'ASName': 'Wait_Fly_Talk'})
        if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 120}) {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1010', 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': True})
            goto Event279
        } else {
            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1008'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

            Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog_mini:Talk_1002', 'IsCloseMessageDialog': False, 'ASName': 'Wait_Fly_Talk'})
            goto Event279
        }
    }
}

void ReChallenge() {
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    goto Event292
}

void ReChallenge2() {
    goto Event181
}

void ReChallenge3() {
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    goto Event141
}
