-------- EventFlow: Npc_SouthHateru007 --------

Actor: Npc_SouthHateru007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction', 'IsAwakened', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_LoopEnd', 'Demo_FlagOFF', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckWeather', 'GeneralChoice3', 'WhatMoonName', 'CheckTime', 'RandomChoice4', 'CheckDuringBloodyMoon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_BustUpFront', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthHateru007_001'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event0:

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            switch Npc_SouthHateru007.CheckActorAction13() {
              case 0:
                Event142:
                if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 21}) {
                    if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 22}) {
                        Event52:
                        if Npc_SouthHateru007.IsOnInstEventFlag() {
                            Event54:
                            Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            Event65:
                            switch EventSystemActor.GeneralChoice3() {
                              case 0:

                                call BloodyMoon()

                                Event120:
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                goto Event54
                              case 1:

                                call Moon()

                                goto Event120
                              case 2:

                                call GoodBye()

                                Npc_SouthHateru007.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
                            }
                        } else {
                            Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event65
                        }
                    } else {
                        Event56:
                        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        Event71:
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:

                            call BloodyMoon()

                            Event119:
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event71
                          case 1:

                            call Moon()

                            goto Event119
                          case 2:

                            call GoodBye()

                        }
                    }
                } else {
                    goto Event52
                }
              case 1:
                goto Event142
              case 2:
                Event61:
                if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 2}) {
                    if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 21}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 22}) {
                                Event164:
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthHateru007_BloodyMoon_After'}) {
                                    if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Action3/移動'}) {
                                        Event163:
                                        Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk03_1'})
                                        goto Event71
                                    } else {
                                        if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Action4/移動'}) {
                                            goto Event163
                                        } else {
                                            Event57:
                                            Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                            goto Event71
                                        }
                                    }
                                } else {
                                    goto Event57
                                }
                            } else {
                                goto Event56
                            }
                        } else {
                            Event58:
                            Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event71
                        }
                    } else {
                        goto Event58
                    }
                } else {
                    goto Event164
                }
              case 3:
                goto Event61
              case 4:
                goto Event61
              case 5:
                goto Event61
              case 6:
                goto Event61
              case 7:
                goto Event61
              case 8:
                goto Event142
              case 9:
                goto Event142
              case 10:
                Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                goto Event71
              case 11:
                Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event71
              case 12:
                goto Event142
              case 13:
                goto Event142
            }
          case 1:
            Event103:
            if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                goto Event0
            } else {
                if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
                    goto Event0
                } else {
                    if Npc_SouthHateru007.IsArriveAnchorForRain() {

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Rain00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        goto Event71
                    } else {

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

                        Event69:
                        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Rain01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    }
                }
            }
          case 2:
            goto Event103
          case 3:
            goto Event103
        }
    } else {
        if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Terror'}) {
            Event135:
            switch EventSystemActor.CheckWeather() {
              case 0:
                Event130:

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk01_1', 'ASName': ''})
                Npc_SouthHateru007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                Event37:
                Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk03'})
                    Event42:
                    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk06', 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    GameRomCamera.Demo_BustUpFront({'UseImaginaryLineAngle': True, 'NearSide': True, 'Count': 0.0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'Lng': 30.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'Offset': [0.0, -0.20000000298023224, 0.20000000298023224], 'Lat': 10.0})
                    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk07', 'ASName': '', 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'Count': 0.0})
                    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk08', 'IsCloseMessageDialog': True, 'ASName': ''})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SouthHateru007_001', 'IsWaitFinish': True})
                  case 1:
                    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk04'})
                    goto Event42
                  case 2:
                    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk05'})
                    goto Event42
                }
              case 1:
                Event123:
                if Npc_SouthHateru007.IsArriveAnchorForRain() {
                    if Npc_SouthHateru007.IsOnInstEventFlag() {
                        goto Event130
                    } else {
                        Event133:

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

                        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk00', 'ASName': 'Wait', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        Npc_SouthHateru007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:FirstTalk01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        goto Event37
                    }
                } else {

                    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

                    goto Event69
                }
              case 2:
                goto Event123
              case 3:
                goto Event123
            }
        } else {
            if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    goto Event133
                  case 1:
                    goto Event123
                  case 2:
                    goto Event123
                  case 3:
                    goto Event123
                }
            } else {
                goto Event135
            }
        }
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthHateru007_001'}) {
        if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            if Npc_SouthHateru007.IsAwakened() {
                Event14:
                Npc_SouthHateru007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_SouthHateru007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            }
        } else {
            if Npc_SouthHateru007.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
                Npc_SouthHateru007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near05', 'IsChecked': False, 'DispFrame': 90})
            } else {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_SouthHateru007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
                  case 1:
                    Event32:
                    if Npc_SouthHateru007.IsArriveAnchorForRain() {
                        Npc_SouthHateru007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near03', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
                    } else {
                        Event31:
                        Npc_SouthHateru007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near04', 'IsChecked': False, 'DispFrame': 90})
                    }
                  case 2:
                    goto Event32
                  case 3:
                    goto Event32
                }
            }
        }
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            goto Event14
          case 1:
            Event125:
            if Npc_SouthHateru007.IsArriveAnchorForRain() {
                goto Event14
            } else {
                goto Event31
            }
          case 2:
            goto Event125
          case 3:
            goto Event125
        }
    }
}

void BloodyMoon_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Event92:
        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 1:
        Event93:
        Npc_SouthHateru007.Demo_Talk({'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 2:
        Event94:
        Npc_SouthHateru007.Demo_Talk({'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 3:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            goto Event92
          case 1:
            goto Event93
          case 2:
            goto Event94
          case 3:
            Npc_SouthHateru007.Demo_Talk({'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk03', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    }
}

void BloodyMoon_Near() {
    if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 0, 'Minute': 0}) {
        if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 0, 'Minute': 15}) {
            Event29:
            Npc_SouthHateru007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near07', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_SouthHateru007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Near06', 'IsChecked': False, 'DispFrame': 90})
        }
    } else {
        goto Event29
    }
}

void BloodyMoon_EachFrame() {
    Event128:
    if !EventSystemActor.CheckDuringBloodyMoon() {
        Event90:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_SouthHateru007_BloodyMoon'})
        if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 12, 'Minute': 0}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_SouthHateru007_BloodyMoon_After'})
            Event24:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event128
        } else {
            goto Event24
        }
    } else {
        if EventSystemActor.CheckTime({'Minute': 30, 'ConditionType': 'ge', 'Hour': 0}) {
            if EventSystemActor.CheckTime({'Minute': 30, 'ConditionType': 'ge', 'Hour': 23}) {
                Event23:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SouthHateru007_BloodyMoon'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SouthHateru007_BloodyMoon_After'})
                goto Event24
            } else {
                goto Event90
            }
        } else {
            goto Event23
        }
    }
}

void BloodyMoon() {
    Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyMoon00'})
}

void Moon() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthHateru007_BloodyMoon_After'}) {
            Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon00_After'})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'WM_BloodyDay'}) {
                if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                    if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 22}) {
                            Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon00'})
                        } else {
                            Event162:
                            Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon00_Befor'})
                        }
                    } else {
                        goto Event162
                    }
                } else {
                    Event50:
                    switch EventSystemActor.WhatMoonName() {
                      case 0:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                Event126:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon00_Full'})
                            } else {
                                Event74:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon01'})
                            }
                        } else {
                            goto Event126
                        }
                      case 1:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event74
                            } else {
                                Event75:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon02'})
                            }
                        } else {
                            goto Event74
                        }
                      case 2:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event75
                            } else {
                                Event76:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon03'})
                            }
                        } else {
                            goto Event75
                        }
                      case 3:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event76
                            } else {
                                Event77:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon04'})
                            }
                        } else {
                            goto Event76
                        }
                      case 4:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event77
                            } else {
                                Event78:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon05'})
                            }
                        } else {
                            goto Event77
                        }
                      case 5:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event78
                            } else {
                                Event79:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon06'})
                            }
                        } else {
                            goto Event78
                        }
                      case 6:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event79
                            } else {
                                Event80:
                                Npc_SouthHateru007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon07'})
                            }
                        } else {
                            goto Event79
                        }
                      case 7:
                        if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 3}) {
                            if EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'ge', 'Hour': 12}) {
                                goto Event80
                            } else {
                                goto Event126
                            }
                        } else {
                            goto Event80
                        }
                    }
                }
            } else {
                goto Event50
            }
        }
      case 1:
        Event106:
        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Rain02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 2:
        goto Event106
      case 3:
        goto Event106
    }
}

void GoodBye() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthHateru007_GoodBye'}) {
        Npc_SouthHateru007.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:GoodBye01'})
    } else {
        Npc_SouthHateru007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:GoodBye00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SouthHateru007_GoodBye'})
    }
}
