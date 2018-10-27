-------- EventFlow: ShieldofKolog --------

Actor: Npc_Kokiri011
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_ChangeEquipState', 'Demo_ForbidSettingInstEventFlag', 'Demo_TalkNoMessageStepper']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_RollbackQuest', 'Demo_MiniGameStart', 'Demo_LoopEnd', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_IncreasePorchItem', 'Demo_SwitchPlayerEquipment', 'Demo_WarpPlayerToDestination', 'Demo_ResetGimmick', 'Demo_CloseMessageDialog', 'Demo_DisableMiniGameTime', 'Demo_WarpPLToPosAndResetGimmick']
queries: ['CheckEquipment', 'GeneralChoice2', 'CheckFlag', 'HasPorchItem', 'CheckAddPorchItem', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerDestinationMove', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerWait', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_PlayerHorseGetOff']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Ready_Npc_Kokiri011_Near() {
    Npc_Kokiri011.Demo_TalkASync({'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_001', 'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True})
}

void Step010_Npc_Kokiri011_Near() {
    Npc_Kokiri011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_021', 'IsChecked': False, 'DispFrame': 90})
}

void Step010_Npc_Kokiri011_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_071'})
    if !EventSystemActor.GeneralChoice2() {
        Event26:
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_051', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        Event396:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_025'}) {
            Event397:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_023', 'Count': 1}) {
                Event398:
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                    Event322:
                    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})
                    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_025'}) {
                        Event177:
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_023', 'Count': 1}) {
                            Event178:
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                                Event189:
                                EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Sword_025', 'PorchItemName_Shield': 'Weapon_Shield_023', 'PorchItemName_Bow': 'Weapon_Bow_013', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'IsWaitFinish': True})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_ObjectCreateFlag'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_Minigame'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_WeaponHide'})
                                EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': 'Kibako_Contain_01,Obj_BarrelOld_A_01,Pot', 'SystemResetOption': 0, 'IsResetCamera': False})

                                call Common.DisableSaveAndWarp()


                                call Shield_Start_Demo1()

                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog', 'StepName': 'Step010', 'ForceRunTelop': True})

                                call Shield_Start_Demo2()


                                call PopFlag_OFF()

                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog', 'ForceRunTelop': False, 'StepName': 'Finish'})
                            } else {
                                EventSystemActor.Demo_FlagON({'FlagName': 'ShieldofKolog_RentalBow', 'IsWaitFinish': True})
                                EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'PorchItemName': 'Weapon_Bow_013', 'IsWaitFinish': True})
                                goto Event189
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'ShieldofKolog_RentalShield', 'IsWaitFinish': True})
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'PorchItemName': 'Weapon_Shield_023', 'IsWaitFinish': True})
                            goto Event178
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'ShieldofKolog_RentalSword', 'IsWaitFinish': True})
                        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Sword_025', 'Value': 1, 'IsWaitFinish': True})
                        goto Event177
                    }
                } else {
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_013'}) {
                        goto Event322
                    } else {
                        Event9:
                        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_031', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                    }
                }
            } else {
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_023'}) {
                    goto Event398
                } else {
                    goto Event9
                }
            }
        } else {
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Weapon_Sword_025', 'Count': 1}) {
                goto Event397
            } else {
                goto Event9
            }
        }
    } else {
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_061', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    }
}

void Ready_Npc_Kokiri011_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_011', 'IsOverWriteLabelActorName': False})
    Event20:
    if !EventSystemActor.GeneralChoice2() {
        goto Event26
    } else {
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_031', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    }
}

void EntryPoint0() {
    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Step010'}) {
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_025'}) {
            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_023'}) {
                if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_013'}) {

                    call Shield_Goal_Demo1()

                    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_052', 'ASName': 'Wait_Fly_Talk'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait_Fly_Talk', 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_053'})

                    call KorokShiren_CompleteCheck()


                    call Shield_Goal_Demo2()


                    fork {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 818.3124389648438, 'Pattern1PosY': 282.2500915527344, 'Pattern1PosZ': -2392.929931640625, 'Pattern1AtX': 821.719970703125, 'Pattern1AtY': 282.2500915527344, 'Pattern1AtZ': -2396.989990234375, 'Pattern1Fovy': 50.00001907348633, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    } {
                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 140.0, 'IsTurnToLookAtPos': False})
                    }

                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_Minigame'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_ObjectCreateFlag'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_WeaponHide'})

                    call Common.EnableSaveAndWarp()

                    EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalSword', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalShield', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalBow', 'IsWaitFinish': True})
                    Npc_Kokiri011.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
                }
            }
        }
    }
}

void Finish_Npc_Kokiri011_EachFrame() {
    Event420:
    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Step010'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event420
        } else {
            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_025'}) {
                if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_023'}) {
                    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_013'}) {
                        Event100:
                        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                        goto Event420
                    } else {
                        Event421:
                        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Step010'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
                                goto Event100
                            } else {
                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog', 'ForceRunTelop': False, 'StepName': 'Retire'})
                            }
                        } else {
                            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                            goto Event420
                        }
                    }
                } else {
                    goto Event421
                }
            } else {
                goto Event421
            }
        }
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event420
    }
}

void JumpForestFog() {

    call Demo037_0.ForestFog({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Minigame'}) {
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_071'})
        if !EventSystemActor.GeneralChoice2() {
            Event286:
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 566.0, 'DestinationY': 265.5, 'DestinationZ': -2170.39990234375, 'DirectionY': 150.0})
            GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 563.0043334960938, 'Pattern1PosY': 267.2936096191406, 'Pattern1PosZ': -2165.99267578125, 'Pattern1AtX': 565.98388671875, 'Pattern1AtY': 267.2936096191406, 'Pattern1AtZ': -2170.37451171875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 1, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeIn({'IsWaitFinish': False, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
                EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog_mini', 'StepName': 'Ready'})
                Event312:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'IsWaitFinish': True, 'UnequipBow': True, 'UnequipShield': True, 'UnequipWeapon': True, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': ''})
                if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalSword'}) {
                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Sword_025', 'IsWaitFinish': True, 'Value': -1})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalSword', 'IsWaitFinish': True})
                    Event303:
                    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalShield'}) {
                        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Shield_023', 'IsWaitFinish': True, 'Value': -1})
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalShield', 'IsWaitFinish': True})
                        Event304:
                        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalBow'}) {
                            EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Bow_013', 'IsWaitFinish': True, 'Value': -1})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalBow', 'IsWaitFinish': True})
                            Event301:
                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_Minigame'})
                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_ObjectCreateFlag'})
                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_WeaponHide'})
                            Fader.Demo_FadeIn({'IsWaitFinish': False, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                            call Common.EnableSaveAndWarp()

                        } else {
                            goto Event301
                        }
                    } else {
                        goto Event304
                    }
                } else {
                    goto Event303
                }
            } else {
                EventSystemActor.Demo_RollbackQuest({'QuestName': 'ShieldofKolog', 'IsWaitFinish': True, 'StepName': 'Step010'})
                goto Event312
            }
        }
    }
}

void Retire_Npc_Kokiri011_StepStart() {

    call Common.AirStartUP_Player()


    fork {
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_001', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Stop', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }


    call Retire_ItemNone({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})

    call Common.EnableSaveAndWarp()

    Npc_Kokiri011.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_081'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_051', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})

        call ReChallenge_0()

    } else {
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S10_061', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    }
}

void Stopper_NoEntry() {

    call Common.AirStartUP_Player()

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 561.9909057617188, 'Pattern1PosY': 268.395263671875, 'Pattern1PosZ': -2169.404052734375, 'Pattern1AtX': 564.1521606445312, 'Pattern1AtY': 266.3381042480469, 'Pattern1AtZ': -2163.46044921875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 564.2999877929688, 'DestinationY': 265.29998779296875, 'DestinationZ': -2169.199951171875})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_071'})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerDestinationMove({'IsWaitFinish': True, 'StickValue': 0.5, 'DestPosY': 264.6000061035156, 'DestPosZ': -2164.10009765625, 'DestPosX': 564.5999755859375})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': True, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_Kokiri011', 'TurnDirection': 0.0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_081'})
    goto Event20
}

void Stopper_Entry() {

    call Common.AirStartUP_Player()

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 561.9909057617188, 'Pattern1PosY': 268.395263671875, 'Pattern1PosZ': -2169.404052734375, 'Pattern1AtX': 564.1521606445312, 'Pattern1AtY': 266.3381042480469, 'Pattern1AtZ': -2163.46044921875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 564.2999877929688, 'DestinationY': 265.29998779296875, 'DestinationZ': -2169.199951171875})
    Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_061'})
    if !EventSystemActor.GeneralChoice2() {
        goto Event286
    } else {

        call Retire_ItemNone({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


        call Common.EnableSaveAndWarp()

    }
}

void Check_Item() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 561.9909057617188, 'Pattern1PosY': 268.395263671875, 'Pattern1PosZ': -2169.404052734375, 'Pattern1AtX': 564.1521606445312, 'Pattern1AtY': 266.3381042480469, 'Pattern1AtZ': -2163.46044921875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_091'})
    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 561.5, 'DestinationY': 264.6000061035156, 'DestinationZ': -2163.5})
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': True, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_Kokiri011', 'TurnDirection': 0.0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_081'})
        goto Event20
    }
}

void Burn_Item() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 561.9909057617188, 'Pattern1PosY': 268.395263671875, 'Pattern1PosZ': -2169.404052734375, 'Pattern1AtX': 564.1521606445312, 'Pattern1AtY': 266.3381042480469, 'Pattern1AtZ': -2163.46044921875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'ObjectId': 3, 'FaceId': 1, 'TurnDirection': 160.0, 'ActorName': ''})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_101'})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade'})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': 'Weapon_Bow_013,Weapon_Shield_023,Weapon_Sword_025', 'SystemResetOption': 2, 'IsResetCamera': False})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade'})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_111'})
}

void Retire_ItemNone() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_mini_Minigame'}) {
        Event417:
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtY': 1.5, 'Pattern1PosY': 2.0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 0, 'IsWaitFinish': False, 'Pattern1PosZ': -4.5, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
            EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
            EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'ShieldofKolog_mini', 'StepName': 'Ready'})
            Event266:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'IsWaitFinish': True, 'UnequipBow': True, 'UnequipShield': True, 'UnequipWeapon': True, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': ''})
            if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalSword'}) {
                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Sword_025', 'IsWaitFinish': True, 'Value': -1})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalSword', 'IsWaitFinish': True})
                Event180:
                if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalShield'}) {
                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Shield_023', 'IsWaitFinish': True, 'Value': -1})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalShield', 'IsWaitFinish': True})
                    Event181:
                    if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_RentalBow'}) {
                        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Bow_013', 'IsWaitFinish': True, 'Value': -1})
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'ShieldofKolog_RentalBow', 'IsWaitFinish': True})
                        Event98:
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_Minigame'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_ObjectCreateFlag'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_WeaponHide'})
                        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': 'Weapon_Bow_013,Weapon_Shield_023,Weapon_Sword_025', 'SystemResetOption': 2, 'IsResetCamera': False})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        Fader.Demo_FadeIn({'IsWaitFinish': False, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } else {
                        goto Event98
                    }
                } else {
                    goto Event181
                }
            } else {
                goto Event180
            }
        } else {
            EventSystemActor.Demo_RollbackQuest({'QuestName': 'ShieldofKolog', 'IsWaitFinish': True, 'StepName': 'Step010'})
            goto Event266
        }
    } else {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
        goto Event417
    }
}

void Shield_Start_Demo1() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 559.928466796875, 'Pattern1PosY': 265.9764404296875, 'Pattern1PosZ': -2158.18017578125, 'Pattern1AtX': 563.5069580078125, 'Pattern1AtY': 266.29107666015625, 'Pattern1AtZ': -2163.22998046875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True, 'UniqueName': 'ShieldofKolog_WarpHorse'})
        Event418:
        EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'Destination': [561.5, 264.6000061035156, -2163.5], 'RotationY': 0.0, 'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': ''})
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Kokiri011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_R_041'})
        GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'EndTalk'})
    } else {
        goto Event418
    }
}

void Shield_Goal_Demo1() {

    call Common.AirStartUP_Player()

    Npc_Kokiri011.Demo_TalkNoMessageStepper({'MessageId': 'EventFlowMsg/ShieldofKolog:Npc_Kokiri011_S20_051', 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})

    fork {
        Npc_Kokiri011.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
        Npc_Kokiri011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction10', 'UniqueName': ''})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 280.45001220703125, 'DirectionY': -113.0, 'DestinationX': 821.719970703125, 'DestinationZ': -2396.989990234375, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 822.310791015625, 'Pattern1PosY': 282.71075439453125, 'Pattern1PosZ': -2393.73583984375, 'Pattern1AtX': 819.6397705078125, 'Pattern1AtY': 282.5209655761719, 'Pattern1AtZ': -2398.38134765625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})
    } {
        Npc_Kokiri011.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Appearance', 'IsWaitFinish': True})
    }

}

void Shield_Goal_Demo2() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': '', 'StepName': ''})
    Npc_Kokiri011.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Fly_Escape'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})

    fork {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } {
        Npc_Kokiri011.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
        Npc_Kokiri011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
    }

}

void Shield_Start_Demo2() {

    fork {
        GameROMPlayer.Demo_PlayerDestinationMove({'IsWaitFinish': True, 'StickValue': 0.5, 'DestPosX': 566.0, 'DestPosY': 265.5, 'DestPosZ': -2170.39990234375})
    } {
        Npc_Kokiri011.Demo_TurnAndLookToObject({'IsValid': False, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsWaitFinish': False, 'ObjectId': 3, 'TurnDirection': 160.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 562.8758544921875, 'Pattern1PosY': 267.24249267578125, 'Pattern1PosZ': -2165.9453125, 'Pattern1AtX': 565.89306640625, 'Pattern1AtY': 267.29193115234375, 'Pattern1AtZ': -2170.253173828125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 100.0, 'Accept1FrameDelay': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
}

void ReChallenge_0() {
    goto Event396
}

void PopFlag_OFF() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_01'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_02'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_03'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_04'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_05'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_06'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_07'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_08'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_09'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_10'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_11'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_12'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_13'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_14'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_15'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_16'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_17'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_18'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_19'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ShieldofKolog_EnemyPop_20'})
}

void KorokShiren_CompleteCheck() {
    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_KorokShiren_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GodTree_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_KorokShiren_Step010'})
            }
        }
    }
}
