-------- EventFlow: Npc_Kakariko001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_CloseMessageDialog', 'Demo_OpenMap', 'Demo_CloseItemMenu', 'Demo_SetChallengeIcon', 'Demo_FlagOFF', 'Demo_ShowMemoryPhoto', 'Demo_WarpPlayerToDestination']
queries: ['GeneralChoice4', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice3', 'HasPorchItem', 'CheckEquipArmorSeriesType', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_PlayerDestinationMove', 'Demo_PlayerWait', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_BustUpFront', 'Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_ReserveConnectTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk', 'Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[a]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerInpaDoor_A_01
entrypoint: None()
actions: ['Demo_DoorOpenAndClose']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
        Npc_Kakariko001.Demo_BecomeSpeaker({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Wait', 'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0})

        fork {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'G-6', 'WarpDestPosName': 'Npc_Impa'})
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        } {

            call Camera_2ppl_normal()

        }

        Npc_Kakariko001.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_Talk'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Kakariko001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_NoCont'}) {

            call Have_MasterSword()

            if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Activated'}) {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'LessThan', 'Value': 12}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Find11'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Last1'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Finish'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_goodjob'}) {
                                    Event1104:
                                    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_4Shinju'}) {
                                            Event1585:
                                            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
                                                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
                                                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju', 'IsWaitFinish': True})
                                                GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
                                            } else {

                                                call Camera_B-up_A()

                                                if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Activated'}) {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {
                                                        if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Finish'}) {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Ready'}) {
                                                                if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                                                                    Event511:
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_18'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_18_ch3'})
                                                                    Event512:
                                                                    switch EventSystemActor.GeneralChoice3() {
                                                                      case 0:

                                                                        call Explain_Ganon()

                                                                        Event1613:
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                                                                        call Camera_2ppl_normal()

                                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_19_ch3'})
                                                                        goto Event512
                                                                      case 1:

                                                                        call Explain_1man-nen-mae()

                                                                        goto Event1613
                                                                      case 2:
                                                                        Event811:
                                                                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                                                                        call Camera_2ppl_normal()

                                                                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Hero', 'CheckUpper': True}) {
                                                                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_eiketu_first'}) {
                                                                                Event1128:
                                                                                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {

                                                                                    call Conclusion_A()

                                                                                    Event1257:
                                                                                    GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
                                                                                } else {
                                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:ChottoMatte00', 'IsCloseMessageDialog': False})
                                                                                    goto Event1257
                                                                                }
                                                                            } else {
                                                                                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_15', 'IsCloseMessageDialog': False})
                                                                                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko001_eiketu_first', 'IsWaitFinish': True})
                                                                                goto Event1257
                                                                            }
                                                                        } else {
                                                                            goto Event1128
                                                                        }
                                                                    }
                                                                } else {
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20_ch3b'})
                                                                    goto Event512
                                                                }
                                                            } else {
                                                                goto Event511
                                                            }
                                                        } else {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Ready'}) {
                                                                if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                                                                    Event795:
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_18'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_18_ch4'})
                                                                    Event796:
                                                                    switch EventSystemActor.GeneralChoice4() {
                                                                      case 0:

                                                                        call Explain_Ganon()

                                                                        Event810:
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                                                                        call Camera_2ppl_normal()

                                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_19_ch4'})
                                                                        goto Event796
                                                                      case 1:

                                                                        call Explain_Utsushie()

                                                                        goto Event810
                                                                      case 2:

                                                                        call Explain_1man-nen-mae()

                                                                        goto Event810
                                                                      case 3:
                                                                        goto Event811
                                                                    }
                                                                } else {
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20_ch4b'})
                                                                    goto Event796
                                                                }
                                                            } else {
                                                                goto Event795
                                                            }
                                                        }
                                                    } else {
                                                        if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Finish'}) {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Ready'}) {
                                                                if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                                                                    Event1142:
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_00'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_00_ch3'})
                                                                    Event1143:
                                                                    switch EventSystemActor.GeneralChoice3() {
                                                                      case 0:

                                                                        call Explain_Shinju()

                                                                        Event1148:
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                                                                        call Camera_2ppl_normal()

                                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_12_ch3'})
                                                                        goto Event1143
                                                                      case 1:

                                                                        call Explain_1man-nen-mae()

                                                                        goto Event1148
                                                                      case 2:
                                                                        goto Event811
                                                                    }
                                                                } else {
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20_ch3a'})
                                                                    goto Event1143
                                                                }
                                                            } else {
                                                                goto Event1142
                                                            }
                                                        } else {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Ready'}) {
                                                                if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                                                                    Event470:
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_00'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_00_ch4'})
                                                                    Event707:
                                                                    switch EventSystemActor.GeneralChoice4() {
                                                                      case 0:

                                                                        call Explain_Shinju()

                                                                        Event715:
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                                                                        call Camera_2ppl_normal()

                                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_12_ch4'})
                                                                        goto Event707
                                                                      case 1:

                                                                        call Explain_Utsushie()

                                                                        goto Event715
                                                                      case 2:

                                                                        call Explain_1man-nen-mae()

                                                                        goto Event715
                                                                      case 3:
                                                                        goto Event811
                                                                    }
                                                                } else {
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20'})
                                                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_20_ch4a'})
                                                                    goto Event707
                                                                }
                                                            } else {
                                                                goto Event470
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {
                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:SecondTalk01'})
                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:SecondTalk01_ch3'})
                                                        Event1130:
                                                        switch EventSystemActor.GeneralChoice3() {
                                                          case 0:

                                                            call Explain_Hateno()

                                                            Event1134:
                                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                                                            call Camera_2ppl_normal()

                                                            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Sukuitai00_ch3'})
                                                            goto Event1130
                                                          case 1:

                                                            call Explain_1man-nen-mae()

                                                            goto Event1134
                                                          case 2:
                                                            goto Event811
                                                        }
                                                    } else {
                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:SecondTalk01'})
                                                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:SecondTalk01_ch4'})
                                                        Event427:
                                                        switch EventSystemActor.GeneralChoice4() {
                                                          case 0:

                                                            call Explain_Hateno()

                                                            Event578:
                                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                                                            call Camera_2ppl_normal()

                                                            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Sukuitai00_ch4'})
                                                            goto Event427
                                                          case 1:

                                                            call Explain_Shinju()

                                                            goto Event578
                                                          case 2:

                                                            call Explain_1man-nen-mae()

                                                            goto Event578
                                                          case 3:
                                                            goto Event811
                                                        }
                                                    }
                                                }
                                            }
                                        } else {

                                            call After_Comp_Find_4Relic()

                                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
                                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju', 'IsWaitFinish': True})
                                            GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
                                        }
                                    } else {
                                        if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_2ndClear'}) {
                                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_2Shinju'}) {
                                                goto Event1585
                                            } else {

                                                call Find_4Relic_TwoOrMore()

                                                Event1459:

                                                call Find_4Relic_Next()

                                                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
                                                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju', 'IsWaitFinish': True})
                                                GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
                                            }
                                        } else {
                                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_1Shinju'}) {
                                                goto Event1585
                                            } else {
                                                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                                                    Event1481:

                                                    call Find_4Relic_One()

                                                    goto Event1459
                                                } else {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'}) {
                                                        goto Event1481
                                                    } else {
                                                        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
                                                            goto Event1481
                                                        } else {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                                                                goto Event1481
                                                            } else {
                                                                goto Event1585
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {

                                    call PictureMemory_All()

                                    goto Event1104
                                }
                            } else {
                                goto Event1104
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju', 'IsWaitFinish': True})
                            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                            if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_4Shinju'}) {
                                    Event1629:

                                    call PictureMemory_Last1Demo()

                                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_GaveChampionShirt'}) {
                                        Event1584:
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
                                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju', 'IsWaitFinish': True})
                                        GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
                                    } else {

                                        fork {
                                            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
                                        } {
                                            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'G-6', 'WarpDestPosName': 'Npc_Impa'})
                                            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                                            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
                                        } {

                                            call Camera_2ppl_normal()

                                        }

                                        Npc_Kakariko001.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
                                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                                        Fader.Demo_FadeIn({'Frame': 0, 'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto'})

                                        call Give_ChampionShirt()

                                        goto Event1584
                                    }
                                } else {

                                    call After_Comp_Find_4Relic()

                                    goto Event1629
                                }
                            } else {
                                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_2ndClear'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_2Shinju'}) {
                                        goto Event1629
                                    } else {

                                        call Find_4Relic_TwoOrMore()

                                        Event1569:

                                        call Find_4Relic_Next()

                                        goto Event1629
                                    }
                                } else {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_1Shinju'}) {
                                        goto Event1629
                                    } else {
                                        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                                            Event1570:

                                            call Find_4Relic_One()

                                            goto Event1569
                                        } else {
                                            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'}) {
                                                goto Event1570
                                            } else {
                                                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
                                                    goto Event1570
                                                } else {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                                                        goto Event1570
                                                    } else {
                                                        goto Event1629
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_GaveChampionShirt'}) {
                            goto Event1104
                        } else {

                            call Give_ChampionShirt()

                            goto Event1104
                        }
                    }
                } else {
                    goto Event1104
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Repaired'}) {

                    call Comp_CarryingBlueFireEXMini()

                    goto Event1104
                } else {
                    goto Event1104
                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko001_NoCont', 'IsWaitFinish': True})
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk_consecutive'})
            goto Event427
        }
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo380_0', 'EntryPointName': 'FirstTalk', 'EndFade': 0, 'IsWaitFinish': True})
    }
}

void Camera_2ppl_normal() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1780.02294921875, 'Pattern1PosY': 230.06971740722656, 'Pattern1PosZ': 987.26513671875, 'Pattern1AtX': 1775.5362548828125, 'Pattern1AtY': 230.09474182128906, 'Pattern1AtZ': 985.2693481445312, 'Pattern1Fovy': 20.89336395263672, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void Camera_B-up_A() {
    GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'StartCalcOnly': True, 'UseImaginaryLineAngle': False, 'NearSide': True, 'Lat': 0.0, 'Lng': 30.0, 'Offset': [0.0, 0.0, 0.20000000298023224]})
}

void Camera_Zoom_in_Impa() {
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'Pattern1PosX': 1774.530029296875, 'Pattern1PosY': 230.3800048828125, 'Pattern1AtX': 1772.93994140625, 'Pattern1AtY': 230.41000366210938, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosZ': 984.3200073242188, 'Pattern1AtZ': 984.3200073242188, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 0, 'AtAppendMode': 0, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Count': 10.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 30.0, 'IsWaitFinish': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void Demo_1man-nen-mae() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo105_0'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo105_0', 'EndFade': 0})
}

void Explain_Shinju() {

    call Camera_2ppl_normal()

    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju00'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {

        call Camera_B-up_A()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju01'})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'ScaleLevel': 0, 'WorldPos': [200.0, 0.0, 500.0]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:ThirdShinju02', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
        } {
            EventSystemActor[a].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'Find_4Relic'})
        }

    }
}

void Explain_Hateno() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'ScaleLevel': 1, 'WorldPos': [2791.0, 105.0, 1829.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:ThirdKioku02', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {
        EventSystemActor[a].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'CarryingBlueFireEXMini'})
    }

}

void Conclusion_B() {
    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:ThirdKioku03', 'IsCloseMessageDialog': True})
}

void Explain_Ganon() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'WorldPos': [0.0, 0.0, 0.0], 'ScaleLevel': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_10', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {
        EventSystemActor[a].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'GanonQuest'})
    }

}

void Conclusion_A() {
    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_09', 'IsCloseMessageDialog': True})
}

void Explain_Utsushie() {
    if EventSystemActor.CheckFlag({'FlagName': 'PictureMemory_Last1'}) {
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_16'})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'PictureMemory'})
        EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'ScaleLevel': 0, 'WorldPos': [0.0, 0.0, 0.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_17'})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_GaveChampionShirt'}) {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_13'})
            Event1256:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        } else {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_19', 'IsCloseMessageDialog': True})
            goto Event1256
        }
    }
}

void Explain_1man-nen-mae() {
    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk06'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    call Demo_1man-nen-mae()

    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk08'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
}

void camera_impa_closeup() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'PosAppendMode': 2, 'Pattern1PosX': -0.6812739968299866, 'Pattern1AtX': 0.9804689884185791, 'Pattern1AtY': 0.8905180096626282, 'Pattern1AtZ': -0.9323729872703552, 'Pattern1PosY': 1.0239559412002563, 'Pattern1PosZ': 1.561279058456421, 'Pattern1Fovy': 30.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_I_shoulder_L() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.1412960290908813, 'Pattern1PosY': 2.210236072540283, 'Pattern1PosZ': 11.7274169921875, 'Pattern1AtX': 0.11694300174713135, 'Pattern1AtY': 1.6260989904403687, 'Pattern1AtZ': 8.97021484375, 'Pattern1Fovy': 26.909765243530273, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_impa_shouldershot() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'Pattern1Fovy': 33.0, 'PosAppendMode': 2, 'Pattern1PosX': -0.8980100154876709, 'Pattern1PosY': 1.004073977470398, 'Pattern1PosZ': 2.834717035293579, 'Pattern1AtX': -0.3916020095348358, 'Pattern1AtY': 0.8796539902687073, 'Pattern1AtZ': 1.7543950080871582, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_sideshot_middle() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': -4.17706298828125, 'Pattern1PosY': 1.3129730224609375, 'Pattern1PosZ': 2.718384027481079, 'Pattern1AtX': -1.4140009880065918, 'Pattern1AtY': 0.7756959795951843, 'Pattern1AtZ': 1.6813960075378418, 'Pattern1Fovy': 31.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_stone_closeup() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'TargetActor1': 1, 'ActorName1': 'GameROMPlayer', 'Pattern1Fovy': 31.0, 'Pattern1PosX': 0.5474849939346313, 'Pattern1PosY': 1.4703220129013062, 'Pattern1PosZ': 0.6864010095596313, 'Pattern1AtX': 0.05017099902033806, 'Pattern1AtY': 0.5732570290565491, 'Pattern1AtZ': 0.06530799716711044, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_birdeye() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1782.2183837890625, 'Pattern1PosY': 232.63917541503906, 'Pattern1PosZ': 989.8400268554688, 'Pattern1AtX': 1781.44580078125, 'Pattern1AtY': 232.24244689941406, 'Pattern1AtZ': 989.0130615234375, 'Pattern1Fovy': 33.000022888183594, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_link_fullshot() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.3150019943714142, 'Pattern1PosY': 1.936187982559204, 'Pattern1PosZ': 4.188354015350342, 'Pattern1AtX': 0.05419899895787239, 'Pattern1AtY': 1.12841796875, 'Pattern1AtZ': 1.312011957168579, 'TargetActor1': 1, 'ActorName1': 'GameROMPlayer', 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void INT_camera_impa_shouldershot() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'Pattern1Fovy': 33.0, 'PosAppendMode': 2, 'Pattern1PosX': -0.8980100154876709, 'Pattern1PosY': 1.004073977470398, 'Pattern1PosZ': 2.834717035293579, 'Pattern1AtX': -0.3916020095348358, 'Pattern1AtY': 0.8796539902687073, 'Pattern1AtZ': 1.7543950080871582, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Cushion': 90.0, 'Count': 90.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void Comp_CarryingBlueFireEXMini() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_CarryingBlueFireEXMini'})
        Event1593:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})

        call Camera_B-up_A()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:CarryingBlueFireEXMini02', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'StepName': '', 'QuestName': 'CarryingBlueFireEXMini'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

        call Camera_2ppl_normal()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:CarryingBlueFireEXMini03', 'ASName': ''})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        call Common.ShowSheikPad({'Self': ActorIdentifier(name="Npc_Kakariko001")})

        EventSystemActor.Demo_ShowMemoryPhoto({'IsWaitFinish': True, 'PhotoNo': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:CarryingBlueFireEXMini05', 'ASName': ''})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})

        call Common.TidyUpSheikPadAfterPicture({'Self': ActorIdentifier(name="Npc_Kakariko001")})

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        call Camera_B-up_A()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko001:CarryingBlueFireEXMini06'})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        call Camera_2ppl_normal()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju4'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_Activated'})
    } else {
        goto Event1593
    }
}

void PictureMemory_All() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_PictureMemory_All'})
        Event1595:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})

        call Camera_B-up_A()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk05', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Talk_EyeCloseEd', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk02', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk03', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Talk_EyeCloseEd', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk04', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_goodjob'})
    } else {
        goto Event1595
    }
}

void After_Comp_Find_4Relic() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju'}) {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_PictureMemory_All'})
            Event1688:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})

            call Camera_B-up_A()

            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_DirectComp_Find_4Relic'}) {
                Event1634:
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_07_2'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                call Camera_Zoom_in_Impa()

                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_08'})

                call Explain_Ganon()


                call Camera_2ppl_normal()

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                call Conclusion_A()

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_4Shinju'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_4Relic_Finish'})
            } else {
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_07'})
                goto Event1634
            }
        } else {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_Comp_Find_4Relic'})
            goto Event1688
        }
    } else {
        goto Event1688
    }
}

void Find_4Relic_Next() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
        Event1444:
        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'}) {
            Event1445:
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
                Event1446:
                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                    Event1456:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Find_4Relic_ExplainOne'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                    fork {
                        EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'ScaleLevel': 0, 'WorldPos': [200.0, 0.0, 500.0]})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_02', 'IsCloseMessageDialog': False})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
                    } {
                        EventSystemActor[a].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'Find_4Relic'})
                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                    call Camera_2ppl_normal()


                    call Conclusion_B()

                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_ExplainOne'}) {
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_Fire'})
                        goto Event1456
                    } else {
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_noko_Fire'})
                        goto Event1456
                    }
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_ExplainOne'}) {
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_Water'})
                    goto Event1446
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_4Relic_ExplainOne'})
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_noko_Water'})
                    goto Event1446
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_ExplainOne'}) {
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_Electric'})
                goto Event1445
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_4Relic_ExplainOne'})
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_noko_Electric'})
                goto Event1445
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_4Relic_ExplainOne'})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_05_Wind'})
        goto Event1444
    }
}

void Find_4Relic_One() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju'}) {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_PictureMemory_All'})
            Event1596:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})

            call Camera_2ppl_normal()

            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_01'})
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_02_Wind'})
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_03'})
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_04_Wind'})
                Event1465:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_1Shinju'})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'}) {
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_01'})
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_02_Electric'})
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_03'})
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_04_Electric'})
                    goto Event1465
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_01'})
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_02_Water'})
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_03'})
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_04_Water'})
                        goto Event1465
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_01'})
                            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_02_Fire'})
                            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_03'})
                            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju_04_Fire'})
                            goto Event1465
                        }
                    }
                }
            }
        } else {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_Comp_Find_4Relic'})
            goto Event1596
        }
    } else {
        goto Event1596
    }
}

void Find_4Relic_TwoOrMore() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_BeforeDemo_Shinju'}) {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_PictureMemory_All'})
            Event1597:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})

            call Camera_2ppl_normal()

            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_06'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_2Shinju'})
        } else {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_Comp_Find_4Relic'})
            goto Event1597
        }
    } else {
        goto Event1597
    }
}

void Have_MasterSword() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_ms_first'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Talk_14', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko001_ms_first', 'IsWaitFinish': True})
        }
    }
}

void Give_ChampionShirt() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_Give_ChampionShirt'})
        Event1594:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})

        call Camera_2ppl_normal()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Give_ChampionShirt_00'})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_116_Upper'})

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Give_ChampionShirt_10'})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_GaveChampionShirt'})
    } else {
        goto Event1594
    }
}

void PictureMemory_Last1Demo() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo309_0', 'EntryPointName': 'Demo309_0', 'IsWaitFinish': True, 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_OhomeTalk'})
}

void FirstDemo() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.130676031112671, 'Pattern1PosY': 1.9157869815826416, 'Pattern1PosZ': -0.10485800355672836, 'Pattern1AtX': -0.8452150225639343, 'Pattern1AtY': 1.474105954170227, 'Pattern1AtZ': 2.84716796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko001', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Pattern1Fovy': 32.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DoorPushDouble', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        TwnObj_Village_SheikerInpaDoor_A_01.Demo_DoorOpenAndClose({'IsWaitFinish': True, 'DynASKey': 'In', 'DynIsOpen': True, 'DynIsOpenToInside': True, 'DynOwner': ActorIdentifier(name="GameROMPlayer")})
    }

    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1762700080871582, 'Pattern1PosY': 1.9157869815826416, 'Pattern1PosZ': -1.8487550020217896, 'Pattern1AtX': -0.8907470107078552, 'Pattern1AtY': 1.474105954170227, 'Pattern1AtZ': 1.1032710075378418, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko001', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Cushion': 30.0, 'IsWaitFinish': False, 'StartCalcOnly': True, 'Count': 180.0, 'Pattern1Fovy': 32.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'World', 'ExceptGroups': 'Player,Npc', 'Volume': 0.0, 'FadeOutSec': 5.0, 'FadeInSec': 3.0, 'StartDelaySec': 0.0, 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo309_0', 'IsWaitFinish': True, 'EntryPointName': 'C51-0', 'EndFade': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
}
