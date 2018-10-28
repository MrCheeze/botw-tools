-------- EventFlow: Npc_oasis020 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem', 'Demo_WarpPlayerToAnchor', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_OpenMessageTips', 'Demo_SwitchPlayerEquipment']
queries: ['GeneralChoice2', 'CheckRupee', 'HasPorchItemByCategory', 'CheckFlag', 'CheckEquipArmorSeriesType', 'CheckTimeType', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWakeBoardReady', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Npc_oasis020
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first_man'}) in [1, 0] {
            Event210:
            if Npc_oasis020.IsOnInstEventFlag() {
                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_29'})
                Event65:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_26'})
                    Event216:
                    if !EventSystemActor.RandomChoice2() {
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_40'})
                    } else {
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_22'})
                    }
                    goto Event65
                  case 1:
                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_21'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 0, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Squat'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Squat'})
                    goto Event216
                  case 2:
                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_34'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 19, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SandSeal'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SandSeal'})
                    goto Event216
                  case 3:
                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_27'})
                    } else {
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_23'})
                    }
                }
            } else {

                call hello()

                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_32'})
                goto Event65
            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first_man'}) {
        goto Event210
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_38'})
        Event73:
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_25'})
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                Event106:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis020_first', 'IsWaitFinish': True})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis020_first_man'})
            }
        } else
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_31'})
            goto Event106
        } else {
            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_28'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_30'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis020_first_man'})
        }
      case [2, 3, 4]:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_20'})
        goto Event73
      case [5, 6, 7]:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_39'})
        goto Event73
    }
}

void Drag_Hero_Finish_Near() {
    switch Npc_oasis020.CheckActorAction13() {
      case 0:
        Npc_oasis020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Near_03', 'IsChecked': False, 'DispFrame': 90})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_zarashi'}) {
            Npc_oasis020.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_oasis020:Near_02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_oasis020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Near_04', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void Near() {
    Npc_oasis020.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_oasis020:Near_01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}

void Drag_Hero_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis020.CheckActorAction13() {
      case 0:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_37'})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_zarashi'}) {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            if Npc_oasis020.IsOnInstEventFlag() {
                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_15'})
            } else {
                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_07'})
            }
            Event178:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_41'})
                Event186:
                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_16'})
                goto Event178
              case 1:
                if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                    if EventSystemActor.CheckRupee({'Value': 20}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_08'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        Event238:

                        call StartCamera()

                    } else {
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_11'})
                    }
                } else {
                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_12'})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 50}) {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -50})
                            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_08'})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_001'})
                            EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Shield': 'Weapon_Shield_001'})
                            goto Event238
                        } else {
                            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_11'})
                        }
                    } else {
                        Event163:
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_09'})
                    }
                }
              case 2:
                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_35'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 19, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SandSeal'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SandSeal'})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                goto Event186
              case 3:
                goto Event163
            }
        } else {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first_gerudo'}) {
                    Event125:
                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_01'})
                    Event146:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_26'})
                        Event157:
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_10'})
                        goto Event146
                      case 1:
                        if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                            if EventSystemActor.CheckRupee({'Value': 20}) {
                                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_02'})
                                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 1})
                                Event231:

                                call StartCamera()

                                Event150:
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis020_zarashi'})
                            } else {
                                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_04'})
                                goto Event150
                            }
                        } else {
                            Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_05'})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckRupee({'Value': 50}) {
                                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -50})
                                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_02'})
                                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_001'})
                                    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Shield': 'Weapon_Shield_001'})
                                    goto Event231
                                } else {
                                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_04'})
                                }
                            } else {
                                Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_03'})
                                goto Event150
                            }
                        }
                      case 2:
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_34'})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 19, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SandSeal'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SandSeal'})
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        goto Event157
                      case 3:
                        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_03'})
                        goto Event150
                    }
                } else {
                    Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_14'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis020_first_gerudo'})
                    goto Event146
                }
            } else {
                goto Event125
            }
        }
    }
}

void StartCamera() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 5.394530773162842, 'Pattern1PosY': 3.56256103515625, 'Pattern1PosZ': 9.85601806640625, 'Pattern1AtX': -0.18066400289535522, 'Pattern1AtY': 1.5196690559387207, 'Pattern1AtZ': 0.08715800195932388, 'Pattern1Fovy': 47.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'Npc_oasis020_Warp', 'AnchorName': 'DestinationAnchor'})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'UniqueName': '', 'CreateSelf': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'TargetActor1': 1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1PosY': 2.0, 'Pattern1AtY': 1.5, 'Pattern1Fovy': 47.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1AtZ': 0.0, 'Pattern1PosZ': -5.0, 'Count': 60.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_17'})
      case [2, 3, 4]:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_18'})
      case [5, 6, 7]:
        Npc_oasis020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Talk_19'})
    }
}
