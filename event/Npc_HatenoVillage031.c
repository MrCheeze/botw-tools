-------- EventFlow: Npc_HatenoVillage031 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckTimeType', 'GeneralChoice3', 'CheckPlayerState', 'RandomChoice4', 'GeneralChoice4', 'GeneralChoice2', 'CheckPlayerWeaponFired', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage031
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_MoveToAnchor', 'Demo_ChangePostureWithAS']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_StartAndKeep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if !Npc_HatenoVillage031.CheckActorAction13() {
        Event136:

        call Enokida_Hello()

        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event32:
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk11', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk13', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk15', 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk16', 'IsOverWriteLabelActorName': False})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk17', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk18', 'IsOverWriteLabelActorName': False})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk19', 'IsOverWriteLabelActorName': False})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk20', 'IsOverWriteLabelActorName': False})
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk21', 'IsOverWriteLabelActorName': False})
                                        } else {
                                            Event53:
                                            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06', 'IsOverWriteLabelActorName': False})
                                        }
                                    } else {
                                        goto Event53
                                    }
                                } else {
                                    goto Event53
                                }
                            } else {
                                goto Event53
                            }
                        } else {
                            goto Event53
                        }
                    } else {
                        goto Event53
                    }
                } else {
                    goto Event53
                }
              case 1:
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk14', 'IsOverWriteLabelActorName': False})
              case 2:
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk12', 'IsOverWriteLabelActorName': False})
              case 3:
                Event30:
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06', 'IsOverWriteLabelActorName': False})
            }
          case 1:
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk10', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                goto Event32
            } else {
                goto Event30
            }
          case 2:
            goto Event30
        }
    } else {
        goto Event136
    }
}

void Near() {
    Event144:
    switch Npc_HatenoVillage031.CheckActorAction13() {
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_HatenoVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:near00', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Npc_HatenoVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:near01', 'IsChecked': False, 'DispFrame': 90})
          case 2:
            Npc_HatenoVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:near02', 'IsChecked': False, 'DispFrame': 90})
          case 3:
            Npc_HatenoVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:near03', 'IsChecked': False, 'DispFrame': 90})
        }
      case 3:
        Event145:
        Npc_HatenoVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:near04', 'IsChecked': False, 'DispFrame': 90})
      case 5:
        goto Event145
    }
}

void HatenoMini_MyHome_Repurchase031_Talk() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        Event141:
        switch Npc_HatenoVillage031.CheckActorAction13() {
          case 2:
            Event166:
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk09'})
          case 3:
            Event176:
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk01', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event157:

                call Enokida_What()

                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk23', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk24', 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk25', 'IsOverWriteLabelActorName': False})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk26', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk27', 'IsOverWriteLabelActorName': False})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk28', 'IsOverWriteLabelActorName': False})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk29', 'IsOverWriteLabelActorName': False})
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk30', 'IsOverWriteLabelActorName': False})
                                            if !EventSystemActor.GeneralChoice2() {
                                                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk31', 'IsOverWriteLabelActorName': False})
                                                if !EventSystemActor.GeneralChoice2() {
                                                    Event91:
                                                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk32', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk'})
                                                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                                                    Npc_HatenoVillage031.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                                                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk42', 'ASName': 'Talk'})
                                                    switch EventSystemActor.CheckTimeType() {
                                                      case 0:
                                                        Event189:
                                                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.639404296875, 'Pattern1PosY': 237.52777099609375, 'Pattern1PosZ': 2292.61865234375, 'Pattern1AtX': 3329.612548828125, 'Pattern1AtY': 237.0481719970703, 'Pattern1AtZ': 2287.640380859375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                                        Event149:
                                                        Npc_HatenoVillage031.Demo_MoveToAnchor({'ASKeyName': 'Walk', 'AnchorUniqueName': '', 'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})

                                                        fork {
                                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                                                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                                                        } {
                                                            EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
                                                        }

                                                        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                                        EventSystemActor.Demo_FlagON({'FlagName': 'UMiiMini_MakeVillage_Activated', 'IsWaitFinish': True})
                                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC031_Reward'})
                                                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                                      case 1:
                                                        goto Event189
                                                      case 2:
                                                        goto Event189
                                                      case 3:
                                                        goto Event189
                                                      case 4:
                                                        goto Event189
                                                      case 5:
                                                        goto Event189
                                                      case 6:
                                                        Event198:
                                                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.470947265625, 'Pattern1PosY': 239.02377319335938, 'Pattern1PosZ': 2216.071044921875, 'Pattern1AtX': 3329.019775390625, 'Pattern1AtY': 237.45458984375, 'Pattern1AtZ': 2209.91748046875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                                        goto Event149
                                                      case 7:
                                                        goto Event198
                                                    }
                                                } else {
                                                    goto Event91
                                                }
                                            } else {
                                                Event87:
                                                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06', 'IsOverWriteLabelActorName': False})
                                            }
                                        } else {
                                            goto Event87
                                        }
                                    } else {
                                        goto Event87
                                    }
                                } else {
                                    goto Event87
                                }
                            } else {
                                goto Event87
                            }
                        } else {
                            goto Event87
                        }
                    } else {
                        goto Event87
                    }
                } else {
                    goto Event87
                }
              case 1:
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk10', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event157
                } else {
                    Event70:
                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06', 'IsOverWriteLabelActorName': False})
                }
              case 2:
                goto Event70
            }
          case 4:
            goto Event166
          case 5:
            goto Event176
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        goto Event141
    }
}

void HatenoMini_MyHome_Activated031_Talk() {
    switch Npc_HatenoVillage031.CheckActorAction13() {
      case 0:
        Event140:

        call Enokida_Hello()

        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event158:

            call Enokida_What()

            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk34', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk35', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk36', 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk37', 'IsOverWriteLabelActorName': False})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk38', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk39', 'IsOverWriteLabelActorName': False})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk40', 'IsOverWriteLabelActorName': False})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk41', 'IsOverWriteLabelActorName': False})
                                    } else {
                                        Event133:
                                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06', 'IsOverWriteLabelActorName': False})
                                    }
                                } else {
                                    goto Event133
                                }
                            } else {
                                goto Event133
                            }
                        } else {
                            goto Event133
                        }
                    } else {
                        goto Event133
                    }
                } else {
                    goto Event133
                }
            } else {
                goto Event133
            }
          case 1:
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk10', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                goto Event158
            } else {
                Event117:
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06', 'IsOverWriteLabelActorName': False})
            }
          case 2:
            goto Event117
        }
      case 1:
        goto Event140
      case 2:
        goto Event140
      case 3:
        goto Event140
      case 4:
        goto Event140
      case 5:
        goto Event140
      case 6:
        goto Event140
      case 7:
        goto Event140
      case 8:
        goto Event140
      case 9:
        goto Event140
      case 10:
        goto Event140
      case 11:
        goto Event140
      case 12:
        goto Event140
      case 13:
        goto Event140
    }
}

void Enokida_Hello() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk04'})
        if !EventSystemActor.GeneralChoice2() {
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk45'})
                Event201:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk46'})
                goto Event201
            }
        } else {
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk21'})
            goto Event201
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_HatenoVillage031.IsOnInstEventFlag() {
            Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk08', 'IsOverWriteLabelActorName': False})
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk07', 'IsOverWriteLabelActorName': False})
            } else {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event2:
                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk00', 'IsOverWriteLabelActorName': False})
                      case 1:
                        goto Event2
                      case 2:
                        Event5:
                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk01', 'IsOverWriteLabelActorName': False})
                      case 3:
                        goto Event5
                      case 4:
                        goto Event5
                      case 5:
                        goto Event5
                      case 6:
                        Event6:
                        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk02', 'IsOverWriteLabelActorName': False})
                      case 7:
                        goto Event6
                    }
                  case 1:
                    Event9:
                    Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk03', 'IsOverWriteLabelActorName': False})
                  case 2:
                    goto Event9
                  case 3:
                    goto Event9
                }
            }
        }
    }
}

void HatenoMini_MyHome_Activated_Near() {
    goto Event144
}

void HatenoMini_MyHome_Repurchase_Near() {
    switch Npc_HatenoVillage031.CheckActorAction13() {
      case 3:
        Event197:
        Npc_HatenoVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:near04', 'DispFrame': 300, 'IsChecked': True})
      case 5:
        goto Event197
    }
}

void Enokida_What() {
    switch Npc_HatenoVillage031.CheckActorAction13() {
      case 2:
        Event155:
        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk43'})
      case 3:
        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk22', 'IsOverWriteLabelActorName': False})
      case 4:
        goto Event155
      case 5:
        Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk44'})
    }
}
