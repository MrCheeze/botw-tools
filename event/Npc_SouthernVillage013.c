-------- EventFlow: Npc_SouthernVillage013 --------

Actor: Npc_SouthernVillage013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather', 'CheckFlag', 'CheckGameDataInt', 'GeneralChoice4', 'GeneralChoice2', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        Event81:

        call NormalTalk()

      case 1:
        goto Event81
      case 2:
        goto Event81
      case 3:
        goto Event81
      case 4:
        goto Event81
      case 5:
        goto Event81
      case 6:
        goto Event81
      case 7:
        goto Event81
      case 8:
        goto Event81
      case 9:
        goto Event81
      case 10:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk13'})
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
      case 12:
        goto Event81
      case 13:
        goto Event81
    }
}

void Near() {
    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        Event13:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event14:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03'})
          case 2:
            goto Event14
          case 3:
            goto Event14
        }
      case 1:
        goto Event13
      case 10:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near04'})
      case 11:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void NormalTalk() {
    if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_SinkTreasure_IsTalked'}) {
        if Npc_SouthernVillage013.IsOnInstEventFlag() {
            switch EventSystemActor.CheckWeather() {
              case 0:
                switch EventSystemActor.RandomChoice3() {
                  case 0:
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk13'})
                    Event80:

                    call LorelTalk()

                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk11'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:

                        call TalkVillage()

                      case 1:

                        call TalkSea()

                      case 2:

                        call TalkSaihate()

                      case 3:

                        call TalkIseki()

                    }
                  case 1:
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk14'})
                    goto Event80
                  case 2:
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk17'})
                    goto Event80
                }
              case 1:
                Event41:
                Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk10'})
                goto Event80
              case 2:
                goto Event41
              case 3:
                goto Event41
            }
        } else {
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk20'})
            goto Event80
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_SinkTreasure_IsTalked'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk09'})
        goto Event80
    }
}

void LorelTalk() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage013_TalkLorel'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage024_First'}) {
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk03'})
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk04'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage013_TalkLorel'})
        }
    }
}

void TalkVillage() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk12'})
        Event57:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage013_TalkUotori'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk25'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call TalkSea()

          case 1:

            call TalkSaihate()

          case 2:

            call TalkIseki()

          case 3:
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk23'})
        }
      case 1:
        Event52:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk18'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk27'})
        goto Event57
      case 2:
        goto Event52
      case 3:
        goto Event52
    }
}

void TalkSea() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage013_TalkSea'})
    if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_SinkTreasure_Finish'}) {
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk19'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk26'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call TalkVillage()

          case 1:

            call TalkSaihate()

          case 2:

            call TalkIseki()

          case 3:
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk23'})
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_SinkTreasure_Activated'}) {
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk06'})
            switch EventSystemActor.CheckWeather() {
              case 0:
                Event117:
                Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk25'})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:

                    call TalkSea()

                  case 1:

                    call TalkSaihate()

                  case 2:

                    call TalkIseki()

                  case 3:
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk23'})
                }
              case 1:
                Event79:
                Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk14'})
                goto Event117
              case 2:
                goto Event79
              case 3:
                goto Event79
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage013_TalkSea'}) {
                Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk09'})
                Event69:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk11'})
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Event66:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_SinkTreasure_Activated'})
                      case 1:
                        Event71:
                        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk14'})
                        goto Event66
                      case 2:
                        goto Event71
                      case 3:
                        goto Event71
                    }
                } else {
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk10'})
                    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk25'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:

                        call TalkSea()

                      case 1:

                        call TalkSaihate()

                      case 2:

                        call TalkIseki()

                      case 3:
                        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk23'})
                    }
                }
            } else {
                Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk05'})
                goto Event69
            }
        }
    }
}

void TalkSaihate() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Location_Cohorint', 'Operator': 'Equal', 'Value': 0}) {
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk08'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk07'})
        Event59:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage013_TalkSaihate'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk24'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call TalkVillage()

          case 1:

            call TalkSea()

          case 2:

            call TalkIseki()

          case 3:
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk23'})
        }
    } else {
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk05'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk06'})
        goto Event59
    }
}

void TalkIseki() {
    Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk15'})
    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk21'})
        Event61:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage013_TalkIseki'})
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk22'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call TalkVillage()

          case 1:

            call TalkSea()

          case 2:

            call TalkSaihate()

          case 3:
            Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk23'})
        }
      case 1:
        Event65:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage013:talk16'})
        goto Event61
      case 2:
        goto Event65
      case 3:
        goto Event65
    }
}
