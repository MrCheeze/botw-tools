-------- EventFlow: Npc_HighMountain030 --------

Actor: Npc_HighMountain030
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckPlayerState', 'CheckTimeType', 'CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event68:

    call SoriresHello()

    if Npc_HighMountain030.IsOnInstEventFlag() {
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk31'})
    } else {
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk30'})
    }
    if !EventSystemActor.GeneralChoice2() {
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk32'})
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk33'})
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk27'})
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk34'})
    } else {
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk04', 'IsOverWriteLabelActorName': False})
    }
}

void Near() {
    Event41:
    switch Npc_HighMountain030.CheckActorAction13() {
      case [0, 1]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                Npc_HighMountain030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:near02', 'DispFrame': 300, 'IsChecked': False})
            } else {
                Event2:
                Npc_HighMountain030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:near01', 'DispFrame': 90, 'IsChecked': False})
            }
          case [1, 2, 3]:
            goto Event2
        }
      case 10:
        Npc_HighMountain030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:near03', 'DispFrame': 90, 'IsChecked': False})
      case 11:
        Npc_HighMountain030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:near04', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Ready_MysterySong_Talk() {

    call SoriresHello()

    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk20'})
    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk21'})
}

void Finish_MysterySong_Talk() {
    goto Event68
}

void Sister_MysterySong_Talk() {

    call SoriresHello()

    if EventSystemActor.CheckFlag({'FlagName': 'RitoSongMystery_NPC030_First'}) {
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk16'})
        Event89:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk18'})
            switch EventSystemActor.GeneralChoice4() {
              case [0, 1, 3]:
                Event103:
                Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk22'})
              case 2:
                Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk23'})
                switch EventSystemActor.GeneralChoice4() {
                  case [0, 1, 2]:
                    goto Event103
                  case 3:
                    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk24'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk25'})
                        switch EventSystemActor.GeneralChoice4() {
                          case [0, 2, 3]:
                            goto Event103
                          case 1:
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk26'})
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk27'})
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk28'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoSongMystery_Sister'})
                        }
                      case [1, 2, 3]:
                        goto Event103
                    }
                }
            }
        } else {
            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk17'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'RitoSongMystery_NPC030_First', 'IsWaitFinish': True})
        Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk15'})
        goto Event89
    }
}

void SoriresHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        switch Npc_HighMountain030.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk05', 'IsOverWriteLabelActorName': False})
            Npc_HighMountain030.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
          case 11:
            Event37:
            switch Npc_HighMountain030.CheckActorAction13() {
              case [0, 1]:
                if Npc_HighMountain030.IsOnInstEventFlag() {
                    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk14'})
                    Event47:
                    if !EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                        if Npc_HighMountain030.IsOnInstEventFlag() {
                            Event61:
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk09', 'IsOverWriteLabelActorName': False})
                            Event67:
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk10', 'IsCloseMessageDialog': False})
                            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC030_First'}) {
                            goto Event61
                        } else {
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk07', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk08', 'IsOverWriteLabelActorName': False})
                            } else {
                                Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk11'})
                            }
                            Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk12'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC030_First', 'IsWaitFinish': True})
                            goto Event67
                        }
                    }
                } else
                switch EventSystemActor.CheckTimeType() {
                  case [0, 1]:
                    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk00', 'IsOverWriteLabelActorName': False})
                    goto Event47
                  case [2, 3, 4, 5]:
                    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk01', 'IsOverWriteLabelActorName': False})
                    goto Event47
                  case [6, 7]:
                    Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk02', 'IsOverWriteLabelActorName': False})
                    goto Event47
                }
              case 10:
                Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk06', 'IsOverWriteLabelActorName': False})
                Event70:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
              case 11:
                Npc_HighMountain030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain030:talk13'})
                goto Event70
            }
        }
    } else
    goto Event37
}

void Sister_MysterySong_Near() {
    goto Event41
}

void Finish_MysterySong_Near() {
    goto Event41
}

void Ready_MysterySong_Near() {
    goto Event41
}
