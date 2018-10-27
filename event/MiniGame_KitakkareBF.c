-------- EventFlow: MiniGame_KitakkareBF --------

Actor: Npc_TamourHatago001
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ChangePostureWithAS', 'Demo_WarpToScheduleAnchor', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_MiniGameTime', 'Demo_MiniGameStart', 'Demo_FlagON', 'Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_FlagOFF', 'Demo_DisableMiniGameTime', 'Demo_WarpPlayer', 'Demo_AppearRupee', 'Demo_EnableCameraInput', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_ResetGimmick', 'Demo_IncreaseRupee', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckWeather', 'GeneralChoice2', 'RandomChoice2', 'CheckTimeType', 'CheckMiniGameTimeOver', 'CheckPlayerWeaponFired', 'GeneralChoice4', 'CheckRupee']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayASAdapt', 'Demo_Idling']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_AncientCandlePoleRoofOff_A_01[ForMiniGame]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_TamourHatago001_Talk() {

    call Greetings()

    if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC001_Second'}) {
        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Talk_AfterMiniGameClear'})
        if !EventSystemActor.GeneralChoice2() {
            Event9:
            switch EventSystemActor.CheckWeather() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_1stClear'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_2stClear'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_3rdClear'}) {
                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_03'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_Weather_00'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_08'})
                                    Event229:
                                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                                    if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC001_Money'}) {
                                        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_05', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                        Event225:
                                        if !EventSystemActor.GeneralChoice2() {
                                            if EventSystemActor.CheckRupee({'Value': 20}) {
                                                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})

                                                fork {
                                                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_06', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False})
                                                } {
                                                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                                                }

                                                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_1stClear'}) {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_2stClear'}) {
                                                        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_3rdClear'}) {
                                                            Event149:
                                                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Please_02'})
                                                            Event42:
                                                            if !EventSystemActor.RandomChoice2() {
                                                                Event268:
                                                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

                                                                call Common.DisableSaveAndWarp()

                                                                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                                                EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
                                                                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:BeforeStart_00'})
                                                                EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                                                                EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
                                                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'Start', 'QuestName': '', 'ForceRunTelop': False})
                                                            } else {
                                                                Event44:
                                                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:BeforeStart_00'})
                                                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:BeforeStart_01', 'IsCloseMessageDialog': False})
                                                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:BeforeStart_02', 'IsCloseMessageDialog': False})
                                                                goto Event268
                                                            }
                                                        } else {
                                                            goto Event149
                                                        }
                                                    } else {
                                                        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Please_01'})
                                                        goto Event42
                                                    }
                                                } else {
                                                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Please_00'})
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC001_Second'}) {
                                                        goto Event42
                                                    } else {
                                                        goto Event44
                                                    }
                                                }
                                            } else {
                                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                                Event276:
                                                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                            }
                                        } else {
                                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:NotAccept_01', 'IsCloseMessageDialog': False})
                                            goto Event276
                                        }
                                    } else {
                                        EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC001_Money', 'IsWaitFinish': True})
                                        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_04', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                        goto Event225
                                    }
                                } else {
                                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Goodbye_01'})
                                }
                            } else {
                                Event31:
                                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:NotAccept_01', 'IsCloseMessageDialog': False})
                            }
                        } else {
                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_03'})
                            Event30:
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event229
                            } else {
                                goto Event31
                            }
                        }
                    } else {
                        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_02'})
                        goto Event30
                    }
                } else {
                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_00'})
                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Explanation_01'})
                    goto Event30
                }
              case 1:
                Event34:
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_Weather', 'IsCloseMessageDialog': True})
              case 2:
                goto Event34
              case 3:
                goto Event34
            }
        } else {
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:NotAccept_01', 'IsCloseMessageDialog': True})
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC001_First'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_BlueFire_Finish'}) {
                EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_KitakkareBF_Fire', 'IsWaitFinish': True})
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Talk_BeforeMiniGameClear'})
                Event28:
                switch EventSystemActor.GeneralChoice4() {
                  case 1:
                    goto Event9
                  case 2:
                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_04', 'IsCloseMessageDialog': True})
                    Npc_TamourHatago001.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_TamourHatago001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'TurnDirection': 135.0, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False})

                    fork {
                        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_05', 'ASName': 'Point'})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4247.84521484375, 'Pattern1PosY': 233.57664489746094, 'Pattern1PosZ': -2751.569091796875, 'Pattern1AtX': 4250.80126953125, 'Pattern1AtY': 233.5838165283203, 'Pattern1AtZ': -2755.564208984375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    } {
                        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
                        GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [4264.0, 234.0, -2767.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    }

                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_06', 'ASName': 'Wait'})
                    Npc_TamourHatago001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'IsValid': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 1, 'TurnDirection': 0.0})
                  case 3:
                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:NotAccept_00'})
                }
            } else {
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_03'})
                goto Event28
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC001_First', 'IsWaitFinish': True})
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_00'})
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_01'})
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_BlueFire_Finish'}) {
                EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_KitakkareBF_Fire', 'IsWaitFinish': True})
                Event27:
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:FirstTalk_02'})
                goto Event28
            } else {
                goto Event27
            }
        }
    }
}

void Ready_Npc_TamourHatago001_Near() {
    Event267:
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
        Event7:
        Npc_TamourHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Near_LanternOn', 'IsChecked': False, 'DispFrame': 90})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_Torch_ON'}) {
            goto Event7
        } else {
            Npc_TamourHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Near_LanternOff', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void Start_Npc_TamourHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Ask'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Restart', 'IsCloseMessageDialog': True})
    } else {
        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:NotAccept_01', 'IsCloseMessageDialog': True})
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event208:
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'FadeSec': 3.5, 'IsWaitFinish': True})
            EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})

            call ExitMiniGame()

          case 1:
            Event244:
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Fail02'})
            goto Event208
          case 2:
            goto Event244
          case 3:
            goto Event244
        }
    }
}

void Start_Npc_TamourHatago001_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_Torch_ON'}) {
        goto Event7
    } else {
        Npc_TamourHatago001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Near_Game', 'DispFrame': 90})
    }
}

void Start_Npc_TamourHatago001_EachFrame() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_1stClear'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_2stClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_3rdClear'}) {
                Event217:
                EventSystemActor.Demo_MiniGameTime({'CountMode': 1, 'IsShowTimeUI': True, 'MaxTime': -1, 'IsWaitFinish': False, 'CountStartTime': 20})
                Event52:
                if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_Torch_ON'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Higakkare_NPC001_Success'})
                    Event58:
                    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'Finish', 'QuestName': '', 'ForceRunTelop': False})
                } else {
                    if EventSystemActor.CheckMiniGameTimeOver() {
                        goto Event58
                    } else {
                        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                        goto Event52
                    }
                }
            } else {
                goto Event217
            }
        } else {
            EventSystemActor.Demo_MiniGameTime({'CountMode': 1, 'CountStartTime': 60, 'IsShowTimeUI': True, 'MaxTime': -1, 'IsWaitFinish': False})
            goto Event52
        }
    } else {
        EventSystemActor.Demo_MiniGameTime({'CountMode': 1, 'CountStartTime': 180, 'IsShowTimeUI': True, 'MaxTime': -1, 'IsWaitFinish': False})
        goto Event52
    }
}

void Finish_Npc_TamourHatago001_StepStart() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'FadeSec': 3.5, 'IsWaitFinish': True})
    TwnObj_AncientCandlePoleRoofOff_A_01[ForMiniGame].Demo_Join({'IsWaitFinish': True})

    call Common.AirStartUP_Player()

    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4248.814453125, 'Pattern1PosY': 233.4000701904297, 'Pattern1PosZ': -2753.96826171875, 'Pattern1AtX': 4249.07861328125, 'Pattern1AtY': 232.99888610839844, 'Pattern1AtZ': -2757.50390625, 'Pattern1Fovy': 41.419979095458984, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 2, 'IsResetCamera': False})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'HigakkareBF_Goal', 'WarpDestMapName': 'J-2'})
    Npc_TamourHatago001.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
    Npc_TamourHatago001.Demo_PlayASForDemo({'ASName': 'Act_SitChair_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_TamourHatago001.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC001_Success'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC001_Second', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_1stClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_2stClear'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_KitakkareBF_3rdClear'}) {

                    call SuccessMatome({'RupeeColor': 'PutRupee_Red'})

                    Event87:
                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Goodbye'})

                    call ExitMiniGame()

                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_KitakkareBF_3rdClear', 'IsWaitFinish': True})

                    call SuccessMatome({'RupeeColor': 'PutRupee_Gold'})

                    goto Event87
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_KitakkareBF_2stClear', 'IsWaitFinish': True})

                call SuccessMatome({'RupeeColor': 'PutRupee_Silver'})

                goto Event87
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_KitakkareBF_1stClear', 'IsWaitFinish': True})

            call SuccessMatome({'RupeeColor': 'PutRupee_Purple'})

            goto Event87
        }
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Fail', 'IsCloseMessageDialog': False})
            goto Event87
          case 1:
            Event242:
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Fail02'})
            goto Event87
          case 2:
            goto Event242
          case 3:
            goto Event242
        }
    }
}

void Greetings() {
    TwnObj_AncientCandlePoleRoofOff_A_01[ForMiniGame].Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if !EventSystemActor.RandomChoice2() {
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_LanternOn_BeforeTalk', 'IsCloseMessageDialog': True})
            Event101:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_LanternOn_AfterTalk', 'IsCloseMessageDialog': True})
            goto Event101
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_Torch_ON'}) {
            if !EventSystemActor.RandomChoice2() {
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_LanternOn_BeforeTalk', 'IsCloseMessageDialog': True})
                Event254:
                Npc_TamourHatago001.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_End'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC001_Delete', 'IsWaitFinish': True})
                goto Event101
            } else {
                Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_LanternOn_AfterTalk', 'IsCloseMessageDialog': True})
                goto Event254
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC001_Delete'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_TestToach_OFF'}) {
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Higakkare_TestToach_OFF', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Higakkare_NPC001_Delete', 'IsWaitFinish': True})
                    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:CantPlay_End_00'})
                    Event48:
                    if Npc_TamourHatago001.IsOnInstEventFlag() {
                        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Greetings_Again'})
                    } else {
                        switch EventSystemActor.CheckTimeType() {
                          case 0:
                            Event49:
                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Greetings_Morning'})
                          case 1:
                            goto Event49
                          case 2:
                            Event50:
                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Greetings_AboutNoon'})
                          case 3:
                            goto Event50
                          case 4:
                            goto Event50
                          case 5:
                            goto Event50
                          case 6:
                            Event51:
                            Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Greetings_Night'})
                          case 7:
                            goto Event51
                        }
                    }
                } else {
                    goto Event48
                }
            } else {
                goto Event48
            }
        }
    }
}

void ExitMiniGame() {

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagOFF({'FlagName': 'Higakkare_NPC001_Success', 'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'Ready', 'QuestName': '', 'ForceRunTelop': False})
}

void Finish_Npc_TamourHatago001_Near() {
    goto Event267
}

void SuccessMatome() {
    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Succeed_First', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Reward', 'IsCloseMessageDialog': True})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'RupeeColor'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        Event194:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
      case 1:
        Event189:
        Npc_TamourHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_KitakkareBF:Succeed_Rain'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

        goto Event194
      case 2:
        goto Event189
      case 3:
        goto Event189
    }
}
