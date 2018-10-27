-------- EventFlow: Npc_Kakariko005 --------

Actor: Npc_Kakariko005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction14_2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckTime', 'CheckWeather', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko005_FrontTalk'})
        Event37:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event57:
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_10kokko'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_Finish'}) {
                Event7:
                switch Npc_Kakariko005.CheckActorAction13() {
                  case 0:
                    Event163:
                    switch Npc_Kakariko005.CheckActorAction14_2() {
                      case 0:
                        Event13:
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk04', 'IsOverWriteLabelActorName': False})
                      case 1:
                        goto Event13
                      case 2:
                        goto Event13
                      case 3:
                        goto Event13
                      case 4:
                        goto Event13
                      case 5:
                        goto Event13
                      case 6:
                        goto Event13
                      case 7:
                        goto Event13
                      case 8:
                        goto Event13
                      case 9:
                        Event38:
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 21, 'Minute': 0}) {
                                Event12:
                                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk_07'})
                            } else {
                                if EventSystemActor.CheckTime({'Hour': 5, 'ConditionType': 'le', 'Minute': 0}) {
                                    goto Event12
                                } else {
                                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk00', 'IsOverWriteLabelActorName': False})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk05'})
                                    } else {
                                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk06'})
                                    }
                                }
                            }
                          case 1:
                            Event48:
                            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 21, 'Minute': 0}) {
                                Event50:
                                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk_08'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk01'})
                                }
                            } else {
                                if EventSystemActor.CheckTime({'Hour': 5, 'ConditionType': 'le', 'Minute': 0}) {
                                    goto Event50
                                } else {
                                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk16'})
                                    Event55:
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:
                                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk01', 'IsCloseMessageDialog': True})
                                        Event140:
                                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk31'})
                                        goto Event55
                                      case 1:
                                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk05', 'IsCloseMessageDialog': True})
                                        goto Event140
                                      case 2:
                                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk30'})
                                    }
                                }
                            }
                          case 2:
                            goto Event48
                          case 3:
                            goto Event48
                        }
                      case 10:
                        goto Event13
                      case 11:
                        goto Event13
                      case 12:
                        goto Event13
                      case 13:
                        goto Event13
                    }
                  case 1:
                    goto Event163
                  case 2:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk07', 'IsOverWriteLabelActorName': False})
                  case 3:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_Finish'}) {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk28'})
                        Event24:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk09', 'IsOverWriteLabelActorName': False})
                        } else {
                            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk11', 'IsOverWriteLabelActorName': False})
                        }
                    } else {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk08', 'IsOverWriteLabelActorName': False})
                        goto Event24
                    }
                  case 4:
                    goto Event163
                  case 5:
                    goto Event163
                  case 6:
                    goto Event163
                  case 7:
                    goto Event163
                  case 8:
                    goto Event163
                  case 9:
                    goto Event163
                  case 10:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_Finish'}) {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk27'})
                    } else {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk03', 'IsOverWriteLabelActorName': False})
                    }
                  case 11:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                  case 12:
                    goto Event163
                  case 13:
                    goto Event163
                }
            } else {
                switch Npc_Kakariko005.CheckActorAction13() {
                  case 0:
                    Event142:
                    switch Npc_Kakariko005.CheckActorAction14_2() {
                      case 0:
                        Event129:
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk29'})
                        Event81:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk10', 'ASName': ''})
                            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk17', 'ASName': ''})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko005_reward', 'IsWaitFinish': True})
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Cha_003_Finish'})
                            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk18', 'ASName': ''})
                        } else {
                            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk19', 'ASName': ''})
                        }
                      case 1:
                        goto Event129
                      case 2:
                        goto Event129
                      case 3:
                        goto Event129
                      case 4:
                        goto Event129
                      case 5:
                        goto Event129
                      case 6:
                        goto Event129
                      case 7:
                        goto Event129
                      case 8:
                        goto Event129
                      case 9:
                        Event66:
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk13'})
                        goto Event81
                      case 10:
                        goto Event129
                      case 11:
                        goto Event129
                      case 12:
                        goto Event129
                      case 13:
                        goto Event129
                    }
                  case 1:
                    goto Event142
                  case 2:
                    goto Event66
                  case 3:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk22', 'ASName': ''})
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk23', 'ASName': 'Talk_Surprised'})
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk24', 'ASName': ''})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko005_reward', 'IsWaitFinish': True})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Cha_003_Finish'})
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk18', 'ASName': ''})
                  case 4:
                    goto Event142
                  case 5:
                    goto Event142
                  case 6:
                    goto Event142
                  case 7:
                    goto Event142
                  case 8:
                    goto Event142
                  case 9:
                    goto Event142
                  case 10:
                    goto Event142
                  case 11:
                    goto Event142
                  case 12:
                    goto Event142
                  case 13:
                    goto Event142
                }
            }
        } else {
            goto Event7
        }
    } else {
        goto Event37
    }
}

void Near() {
    switch Npc_Kakariko005.CheckActorAction13() {
      case 2:
        Event41:
        Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Near05', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Near00', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Near03', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        goto Event41
      case 13:
        switch Npc_Kakariko005.CheckActorAction14_2() {
          case 8:
            Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Near02', 'IsChecked': False, 'DispFrame': 90})
          case 9:
            if EventSystemActor.CheckWeather() {
                Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Near04', 'IsChecked': False, 'DispFrame': 90})
            }
        }
    }
}

void Kakariko_Cha_003_NoCapKokko() {
    goto Event38
}

void Kakariko005_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko005")})

    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Suprise09', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
}

void FromChallenge_Talk() {
    goto Event57
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko005_FrontTalk'})
}
