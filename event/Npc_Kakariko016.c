-------- EventFlow: Npc_Kakariko016 --------

Actor: Npc_Kakariko016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangePostureWithAS', 'Demo_TurnAndLookToObject', 'Demo_TalkASync', 'Demo_StartTurnToPlayer', 'Demo_ChangeEmotion']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckWeather', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko016_Front'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko016_FrontTalk', 'IsWaitFinish': True})
        Event0:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Kakariko016.CheckActorAction13() {
          case 0:
            Event9:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko_016_first'}) {
                switch Npc_Kakariko016.CheckActorAction13() {
                  case 0:
                    if Npc_Kakariko016.IsOnInstEventFlag() {
                        Event96:
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_004_Finish'}) {
                                Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_16'})
                            } else {
                                Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_06', 'IsCloseMessageDialog': False})
                            }
                          case 1:
                            Event97:
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_29', 'IsCloseMessageDialog': False})
                          case 2:
                            goto Event97
                          case 3:
                            goto Event97
                        }
                    } else {
                        switch EventSystemActor.CheckTimeType() {
                          case 0:
                            Event156:
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_21'})
                            goto Event96
                          case 1:
                            goto Event156
                          case 2:
                            goto Event96
                          case 3:
                            goto Event96
                          case 4:
                            goto Event96
                          case 5:
                            goto Event96
                          case 6:
                            goto Event96
                          case 7:
                            goto Event96
                        }
                    }
                  case 1:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_05', 'IsCloseMessageDialog': False})
                        Event62:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko012_SoldOut'}) {
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_20', 'IsCloseMessageDialog': False})
                        }
                      case 1:
                        Event99:
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_04', 'IsCloseMessageDialog': False})
                        goto Event62
                      case 2:
                        goto Event99
                      case 3:
                        goto Event99
                    }
                  case 4:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_016in015house'}) {
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_14', 'IsCloseMessageDialog': False})
                    } else {
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_13', 'IsCloseMessageDialog': False})
                          case 1:
                            Event93:
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_28', 'IsCloseMessageDialog': False})
                          case 2:
                            goto Event93
                          case 3:
                            goto Event93
                        }
                    }
                }
            } else {
                switch Npc_Kakariko016.CheckActorAction13() {
                  case 0:
                    Event115:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_33'})
                        Event46:
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_30'})

                        fork {
                            Npc_Kakariko016.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_02', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False})
                        } {
                            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        }


                        fork {
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_03', 'ASName': ''})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'NoErrorCheck': False})
                        }

                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_34'})
                        Event13:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko_016_first'})
                      case 1:
                        Event116:
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_32', 'IsCloseMessageDialog': True})
                        goto Event46
                      case 2:
                        goto Event116
                      case 3:
                        goto Event116
                    }
                  case 1:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_01', 'IsCloseMessageDialog': True})
                        goto Event46
                      case 1:
                        Event83:
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_25', 'IsCloseMessageDialog': True})
                        goto Event46
                      case 2:
                        goto Event83
                      case 3:
                        goto Event83
                    }
                  case 4:
                    goto Event115
                }
            }
          case 1:
            goto Event9
          case 4:
            goto Event9
          case 5:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko_016_first'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Hotaru_Short'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Hotaru_Counter'}) {
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_23'})
                    } else {
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_12'})
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_004_Finish'}) {
                        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_11'})
                    } else {
                        if Npc_Kakariko016.IsOnInstEventFlag() {
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_15'})
                        } else {
                            Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_10'})
                        }
                    }
                }
            } else {
                Npc_Kakariko016.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Event129:
                Npc_Kakariko016.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'IsConfront': True})
                Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_09'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
                    Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_26'})
                    goto Event13
                } else {
                    Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:Talk_27'})
                    goto Event13
                }
            }
        }
    } else {
        goto Event0
    }
}

void Kakariko016_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko016")})

    Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Kakariko016:SupriseHouse', 'IsCloseMessageDialog': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko_016_first'}) {
        Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:SupriseHouse_00', 'ASName': ''})
        Npc_Kakariko016.Demo_ChangeEmotion({'IsWaitFinish': True, 'IsOnlyFace': False, 'EmotionType': 'Normal'})
    } else {
        goto Event129
    }
}

void Near() {
    switch Npc_Kakariko016.CheckActorAction13() {
      case 1:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Npc_Kakariko016.Demo_StartTurnToPlayer({'TurnRange': 240.0, 'IsWaitFinish': True})
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:near01', 'DispFrame': 90, 'IsChecked': False})
      case 5:
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko016:near00'})
    }
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko016_FrontTalk', 'IsWaitFinish': True})
}
