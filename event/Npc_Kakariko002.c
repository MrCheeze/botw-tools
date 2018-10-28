-------- EventFlow: Npc_Kakariko002 --------

Actor: Npc_Kakariko002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangePostureWithAS', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'CheckActorAction14_2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_FlagON']
queries: ['GeneralChoice4', 'GeneralChoice2', 'GeneralChoice3', 'CheckFlag', 'CheckWeather', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ReturnSavePoint_1', 'Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_MultiTalk', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event118:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        switch Npc_Kakariko002.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 13]:

            call NakedTalk()

          case [9, 11]:
            Event119:
            switch Npc_Kakariko002.CheckActorAction13() {
              case [0, 1, 2, 3, 4, 5, 12, 13]:
                if !Npc_Kakariko002.CheckActorAction14_2() {
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk35', 'ASName': ''})
                } else
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_Kakariko002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk33', 'ASName': 'Talk'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk34', 'ASName': 'Talk'})
                    } else {
                        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk35', 'ASName': ''})
                    }
                  case [1, 2, 3]:
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk44', 'ASName': ''})
                }
              case 6:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko002_Hoju'}) {
                    Event321:
                    Npc_Kakariko002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {

                        fork {
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk38', 'ASName': 'Talk'})
                        } {
                            Npc_Kakariko001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                            Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        }

                        Event212:
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:

                            call mura()

                            Event261:
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk10'})
                            goto Event212
                          case 1:
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk04', 'ASName': 'Talk'})
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk05', 'ASName': 'Talk'})
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk06', 'ASName': 'Talk'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Shy', 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk40'})

                                fork {
                                    Npc_Kakariko002.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Talk_Shy', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                                } {
                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk41'})
                                } {
                                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                                } {
                                    GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_Kakariko002', 'ActorName2': 'Npc_Kakariko001'})
                                }

                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk42', 'ASName': 'Talk_Shy', 'IsCloseMessageDialog': True})
                                GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk43', 'ASName': 'Talk'})
                                goto Event212
                            } else {
                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk39', 'IsCloseMessageDialog': True})
                                goto Event261
                            }
                          case 2:
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk08', 'ASName': 'Talk'})
                        }
                    } else {

                        fork {
                            Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk00', 'IsWaitFinish': True, 'ASName': 'Talk'})
                        } {
                            Npc_Kakariko001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                            Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        }

                        Event57:
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.868530035018921, 'Pattern1PosY': 1.928454041481018, 'Pattern1PosZ': -0.06426999717950821, 'Pattern1AtX': 0.038086000829935074, 'Pattern1AtY': 0.1303119957447052, 'Pattern1AtZ': -0.08148200064897537, 'Pattern1Fovy': 40.88374710083008, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 2, 'Count': 30.0, 'ActorName1': 'AncientBall_Kakariko', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'StartCalcOnly': True, 'MotionMode': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk02', 'ASName': 'Talk', 'IsCloseMessageDialog': True})
                            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 2, 'Count': 30.0})
                            Event58:
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk01', 'ASName': 'Talk'})
                            goto Event57
                          case 1:

                            call mura()

                            goto Event58
                          case 2:
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk04', 'ASName': 'Talk'})
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk05', 'ASName': 'Talk'})
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk06', 'ASName': 'Talk'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk07', 'ASName': 'Talk_Shy'})

                                fork {
                                    Npc_Kakariko002.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Shy_Wait'})
                                } {
                                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk16'})
                                } {
                                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                                } {
                                    GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_Kakariko002', 'ActorName2': 'Npc_Kakariko001'})
                                }

                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Shy', 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk29'})
                                GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk01', 'ASName': 'Talk_Shy'})
                                goto Event57
                            } else {
                                Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk49'})
                                goto Event58
                            }
                          case 3:
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk08', 'ASName': 'Talk'})
                        }
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk46', 'ASName': 'Talk'})
                } else {
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk30', 'ASName': 'Talk'})
                }
              case 7:
                goto Event321
              case [8, 10]:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_002in002house'}) {
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk22', 'ASName': 'Talk_Shy'})
                } else {
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk17', 'ASName': 'Talk'})
                }
              case 9:
                Npc_Kakariko002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_Kakariko002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'ObjectId': 0, 'TurnDirection': 180.0, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {

                    call NakedTalk()

                } else {
                    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk19', 'ASName': 'Talk'})
                    Event98:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk20', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})
                        Event107:
                        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                        Event106:
                        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk32'})
                        goto Event98
                      case 1:
                        if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk37'})
                        } else {
                            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk21', 'IsCloseMessageDialog': True})
                            goto Event107
                        }
                      case 2:
                        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk23', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})
                        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                        goto Event106
                      case 3:
                        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk24'})
                    }
                }
              case 11:
                Npc_Kakariko002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk12', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                Npc_Kakariko002.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            }
        }
    } else
    goto Event119
}

void StolenBook_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:talk02', 'ASName': ''})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:talk03', 'ASName': '', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:talk04', 'IsCloseMessageDialog': True, 'ASName': ''})
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko002_thanks', 'IsWaitFinish': True})
    Npc_Kakariko002.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Wait'})
    EventSystemActor.Demo_WaitFrame({'Frame': 50, 'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
}

void Near() {
    switch Npc_Kakariko002.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 12, 13]:
        if Npc_Kakariko002.CheckActorAction14_2() in [0, 1]
        && EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_Kakariko002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Near03'})
        }
      case 10:
        Npc_Kakariko002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Near01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Kakariko002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Npc_Kakariko002_thanks_Talk() {
    goto Event118
}

void mura() {
    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk03', 'ASName': 'Talk', 'IsCloseMessageDialog': True})
    Npc_Kakariko001.Demo_BecomeSpeaker({'IsWaitFinish': True})

    fork {
        Npc_Kakariko002.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Kakariko002.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
    } {
        Npc_Kakariko001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk15', 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_Kakariko002', 'ActorName2': 'Npc_Kakariko001'})
    }

    Npc_Kakariko002.Demo_BecomeSpeaker({'IsWaitFinish': True})
    GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})

    fork {
        Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk09', 'IsCloseMessageDialog': True})
    }

}

void NakedTalk() {
    Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk45', 'ASName': 'Talk_Shy', 'IsCloseMessageDialog': False})
}
