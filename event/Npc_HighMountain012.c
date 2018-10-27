-------- EventFlow: Npc_HighMountain012 --------

Actor: Npc_HighMountain012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckPlayerState', 'CheckTimeType', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call BeraHello()

    if Npc_HighMountain012.IsOnInstEventFlag() {
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk11'})
        Event5:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk13'})
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk12'})
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk07'})
        } else {
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk06'})
        }
    } else {
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk03'})
        goto Event5
    }
}

void Near() {
    Event39:
    switch Npc_HighMountain012.CheckActorAction13() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
            Event70:
            if EventSystemActor.CheckFlag({'FlagName': 'RitoSongMystery_Activated'}) {
                Npc_HighMountain012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:near01', 'DispFrame': 300, 'IsChecked': False})
            } else {
                Npc_HighMountain012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:near01', 'DispFrame': 300, 'IsChecked': True})
            }
        } else {
            Event38:
            Npc_HighMountain012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:near00', 'DispFrame': 90, 'IsChecked': False})
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                goto Event70
            } else {
                goto Event38
            }
          case 1:
            goto Event38
          case 2:
            goto Event38
          case 3:
            goto Event38
        }
      case 10:
        Npc_HighMountain012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:near02', 'DispFrame': 90, 'IsChecked': False})
      case 11:
        Npc_HighMountain012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:near03', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Ready_MysterySong_Talk() {
    Event47:

    call BeraHello()

    if EventSystemActor.CheckFlag({'FlagName': 'RitoSongMystery_NPC012_First'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'RitoSongMystery_Sister'}) {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk37'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk38'})
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk12'})
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk39'})
                } else {
                    Event58:
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk06'})
                }
            } else {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk33'})
                if !EventSystemActor.GeneralChoice2() {
                    Event62:
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk34'})
                    if EventSystemActor.CheckFlag({'FlagName': 'RitoSongMystery_Shrine'}) {
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk12'})
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk39'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoSongMystery_Activated'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'RitoSongMystery_Finished', 'IsWaitFinish': True})
                    } else {
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk35'})
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk36'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoSongMystery_Activated'})
                    }
                } else {
                    goto Event58
                }
            }
          case 1:
            Event14:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk19'})
          case 2:
            goto Event14
          case 3:
            goto Event14
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'RitoSongMystery_NPC012_First', 'IsWaitFinish': True})
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk30'})
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk32'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk40'})
                goto Event62
            } else {
                goto Event58
            }
          case 1:
            Event53:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk31'})
          case 2:
            goto Event53
          case 3:
            goto Event53
        }
    }
}

void BeraHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        switch Npc_HighMountain012.CheckActorAction13() {
          case 0:
            Event17:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk16'})
            if !EventSystemActor.RandomChoice2() {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk18'})
                Event46:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
            } else {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk17'})
                goto Event46
            }
          case 1:
            goto Event17
          case 2:
            goto Event17
          case 3:
            goto Event17
          case 4:
            goto Event17
          case 5:
            goto Event17
          case 6:
            goto Event17
          case 7:
            goto Event17
          case 8:
            goto Event17
          case 9:
            goto Event17
          case 10:
            goto Event17
          case 11:
            Event15:
            switch Npc_HighMountain012.CheckActorAction13() {
              case 0:
                Event34:
                if Npc_HighMountain012.IsOnInstEventFlag() {
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk10'})
                    Event31:
                    if !EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                        if Npc_HighMountain012.IsOnInstEventFlag() {
                            Event29:
                            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk20'})
                            Event36:
                            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk21'})
                            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
                        } else {
                            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC012_First'}) {
                                goto Event29
                            } else {
                                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk14'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC012_First', 'IsWaitFinish': True})
                                goto Event36
                            }
                        }
                    }
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event23:
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk04'})
                        goto Event31
                      case 1:
                        goto Event23
                      case 2:
                        Event21:
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk00'})
                        goto Event31
                      case 3:
                        goto Event21
                      case 4:
                        goto Event21
                      case 5:
                        goto Event21
                      case 6:
                        Event22:
                        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk01'})
                        goto Event31
                      case 7:
                        goto Event22
                    }
                }
              case 1:
                goto Event34
              case 2:
                goto Event34
              case 3:
                goto Event34
              case 4:
                goto Event34
              case 5:
                goto Event34
              case 6:
                goto Event34
              case 7:
                goto Event34
              case 8:
                goto Event34
              case 9:
                goto Event34
              case 10:
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk05'})
                Event45:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
              case 11:
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk02'})
                goto Event45
              case 12:
                goto Event34
              case 13:
                goto Event34
            }
          case 12:
            goto Event17
          case 13:
            goto Event17
        }
    } else {
        goto Event15
    }
}

void Finish_MysterySong_Talk() {
    goto Event47
}

void Sister_MysterySong_Talk() {
    goto Event47
}

void Ready_MysterySong_Near() {
    goto Event39
}

void Sister_MysterySong_Near() {
    goto Event39
}

void Finish_MysterySong_Near() {
    goto Event39
}
