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
    } else {
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk03'})
    }
    if !EventSystemActor.GeneralChoice2() {
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk13'})
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk12'})
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk07'})
    } else {
        Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk06'})
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
          case [1, 2, 3]:
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
          case [1, 2, 3]:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk19'})
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
          case [1, 2, 3]:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk31'})
        }
    }
}

void BeraHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        switch Npc_HighMountain012.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk16'})
            if !EventSystemActor.RandomChoice2() {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk18'})
            } else {
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk17'})
            }
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
          case 11:
            Event15:
            switch Npc_HighMountain012.CheckActorAction13() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
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
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC012_First'}) {
                            goto Event29
                        } else {
                            Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk14'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC012_First', 'IsWaitFinish': True})
                            goto Event36
                        }
                    }
                } else
                switch EventSystemActor.CheckTimeType() {
                  case [0, 1]:
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk04'})
                    goto Event31
                  case [2, 3, 4, 5]:
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk00'})
                    goto Event31
                  case [6, 7]:
                    Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk01'})
                    goto Event31
                }
              case 10:
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk05'})
                Event45:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
              case 11:
                Npc_HighMountain012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:talk02'})
                goto Event45
            }
        }
    } else
    goto Event15
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
