-------- EventFlow: Remains_Fancier --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_ShowPhoto', 'Demo_CallDemo']
queries: ['GeneralChoice2', 'CheckSelectPicture']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Remains_Fancier001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePosture', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag', 'Demo_LookAtObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Remains_Fancier001_Near() {
    Npc_Remains_Fancier001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Near_00', 'DispFrame': 300})
}

void Ready_Npc_Remains_Fancier001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_0000', 'IsCloseMessageDialog': True})
    Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_0001', 'IsCloseMessageDialog': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Remains_Fancier_Activated'})
    Npc_Remains_Fancier001.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
}

void Step1_Npc_Remains_Fancier001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Check_Guardian_Talk()

}

void EntryPoint0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 128.35243225097656, 'Pattern1PosY': 114.34520721435547, 'Pattern1PosZ': 3830.582763671875, 'Pattern1AtX': 124.70803833007812, 'Pattern1AtY': 111.34793090820312, 'Pattern1AtZ': 3835.74560546875, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithogragh_Hole()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 270.0, 'IsUseSlowTurn': False, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 2, 'FaceId': 1, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'EndFade': 0, 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Remains_Fancier_Finish'})
}

void Step1_Npc_Remains_Fancier001_Near() {

    call Check_Guardian_Near()

}

void Finish_Npc_Remains_Fancier001_Near() {

    call Npc_Remains_Fancier001.Remains_Fancier_Finish_Near()

}

void Finish_Npc_Remains_Fancier001_Talk() {

    call Npc_Remains_Fancier001.Remains_Fancier_Finish_Talk()

}

void Check_Guardian_Talk() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_C'}) {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_A'}) {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Baby'}) {
                Event215:

                call Check_Guardian_OK()

            } else {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Junior'}) {
                    goto Event215
                } else {
                    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Middle'}) {
                        goto Event215
                    } else {
                        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Senior'}) {
                            goto Event215
                        } else {
                            Event208:

                            call No_Photo()

                        }
                    }
                }
            }
        } else {
            goto Event208
        }
    } else {
        goto Event208
    }
}

void No_Photo() {
    Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_0002'})
    Npc_Remains_Fancier001.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
}

void Check_Guardian_OK() {
    Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1000'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1001', 'IsCloseMessageDialog': False})
        Npc_Remains_Fancier001.Demo_LookAtObject({'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1100', 'ASName': 'Act_Remains_Fancier', 'IsCloseMessageDialog': False})
        Item_Conductor.Demo_Join({'IsWaitFinish': True})

        fork {
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_Remains_Fancier', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1101'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSheikPadShowOn', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventSystemActor.Demo_ShowPhoto({'ActorName': 'Enemy_Guardian_C', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Remains_Fancier001.Demo_ChangePosture({'Posture': 'Stand', 'IsWaitFinish': True})
        Npc_Remains_Fancier001.Demo_TurnAndLookToObject({'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsWaitFinish': True})
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1102', 'ASName': ''})

        call Common.TidyUpSheikPadAfterPicture({'Self': ActorIdentifier(name="Npc_Remains_Fancier001")})

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            Npc_Remains_Fancier001.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Surprise', 'IsOnlyFace': False})
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1103', 'IsCloseMessageDialog': True, 'ASName': ''})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSheikPadShowOn', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        }

        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Baby'}) {
            EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Baby'})
            Event282:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1104'})

            call Common.TidyUpSheikPadAfterPicture({'Self': ActorIdentifier(name="Npc_Remains_Fancier001")})

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            fork {
                Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1105'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSheikPadShowOn', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            }

            EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_A'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1109'})

            call Common.TidyUpSheikPadAfterPicture({'Self': ActorIdentifier(name="Npc_Remains_Fancier001")})

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1106'})
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1107'})
            Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1108'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Remains_Fancier_Step1'})
            Npc_Remains_Fancier001.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
        } else {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Baby_Dark'}) {
                EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Baby_Dark'})
                goto Event282
            } else {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Junior'}) {
                    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Junior'})
                    goto Event282
                } else {
                    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Junior_Dark'}) {
                        EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Junior_Dark'})
                        goto Event282
                    } else {
                        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Junior_Wipe'}) {
                            EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Junior_Wipe'})
                            goto Event282
                        } else {
                            if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Middle'}) {
                                EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Middle'})
                                goto Event282
                            } else {
                                if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Middle_Dark'}) {
                                    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Middle_Dark'})
                                    goto Event282
                                } else {
                                    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Senior'}) {
                                        EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Senior'})
                                        goto Event282
                                    } else {
                                        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Senior_Dark'}) {
                                            EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'Enemy_Guardian_Mini_Senior_Dark'})
                                            goto Event282
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1001', 'IsCloseMessageDialog': False})
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Remains_Fancier', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Remains_Fancier:Talk_1200'})
        Npc_Remains_Fancier001.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    }
}

void Check_Guardian_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_C'}) {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_A'}) {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Baby'}) {
                Event93:
                Npc_Remains_Fancier001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Near_00', 'DispFrame': 300, 'IsChecked': True})
            } else {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Junior'}) {
                    goto Event93
                } else {
                    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Middle'}) {
                        goto Event93
                    } else {
                        if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Guardian_Mini_Senior'}) {
                            goto Event93
                        } else {
                            Event143:
                            Npc_Remains_Fancier001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Remains_Fancier:Near_00'})
                        }
                    }
                }
            }
        } else {
            goto Event143
        }
    } else {
        goto Event143
    }
}
