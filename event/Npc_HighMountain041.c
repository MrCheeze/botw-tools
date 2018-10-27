-------- EventFlow: Npc_HighMountain041 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckTimeType', 'CheckPlayerState', 'CheckFlag', 'GeneralChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain041
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call June_Hello()

    if EventSystemActor.HasPorchItem({'Count': 100, 'PorchItemName': 'Item_Roast_03'}) {
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk28'})

        call Cook_Sell({'Value': 1200, 'Value_000': -100, 'PorchItemName': 'Item_Roast_03'})

    } else {
        if EventSystemActor.HasPorchItem({'Count': 50, 'PorchItemName': 'Item_Roast_03'}) {
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk27'})

            call Cook_Sell({'Value': 500, 'Value_000': -50, 'PorchItemName': 'Item_Roast_03'})

        } else {
            if EventSystemActor.HasPorchItem({'Count': 30, 'PorchItemName': 'Item_Roast_03'}) {
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk26'})

                call Cook_Sell({'Value': 250, 'Value_000': -30, 'PorchItemName': 'Item_Roast_03'})

            } else {
                if EventSystemActor.HasPorchItem({'Count': 10, 'PorchItemName': 'Item_Roast_03'}) {
                    Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
                    Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk25'})

                    call Cook_Sell({'Value': 70, 'Value_000': -10, 'PorchItemName': 'Item_Roast_03'})

                } else {
                    if EventSystemActor.HasPorchItem({'Count': 5, 'PorchItemName': 'Item_Roast_03'}) {
                        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
                        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk24'})

                        call Cook_Sell({'Value': 30, 'Value_000': -5, 'PorchItemName': 'Item_Roast_03'})

                    } else {
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_03'}) {
                            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
                            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk23'})

                            call Cook_Sell({'Value': 5, 'Value_000': -1, 'PorchItemName': 'Item_Roast_03'})

                        } else {
                            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk31'})
                            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk33'})
                        }
                    }
                }
            }
        }
    }
}

void Apple_Wife_Ready() {

    call June_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC041_First'}) {
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk07'})
        Event30:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk29'})
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk10', 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'RitoMini_Cook_Activated', 'IsWaitFinish': True})
        } else {
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk15', 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk06', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Event25:
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC041_First', 'IsWaitFinish': True})
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk09', 'IsOverWriteLabelActorName': False})
            goto Event30
        } else {
            goto Event25
        }
    }
}

void Apple_Wife_Ready_near() {
    switch Npc_HighMountain041.CheckActorAction13() {
      case 0:
        Event118:
        Npc_HighMountain041.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:near00', 'DispFrame': 300, 'IsChecked': True})
      case 1:
        goto Event118
      case 10:
        Event127:
        Npc_HighMountain041.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:near01'})
    }
}

void Apple_Wife_Finish() {

    call June_Hello()

    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_03'}) {
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk21'})
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk23'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk08'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoMini_Cook_Finish'})
            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Roast_03'})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk30'})
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk31'})
        } else {
            Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk19'})
        }
    } else {
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk22'})
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk10'})
    }
}

void Apple_Wife_Finish_near() {
    switch Npc_HighMountain041.CheckActorAction13() {
      case 0:
        Event123:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_03'}) {
            goto Event118
        } else {
            Event33:
            Npc_HighMountain041.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:near00', 'IsChecked': False, 'DispFrame': 90})
        }
      case 1:
        goto Event123
      case 10:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_03'}) {
            goto Event127
        } else {
            Event125:
            Npc_HighMountain041.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:near01'})
        }
    }
}

void Near() {
    switch Npc_HighMountain041.CheckActorAction13() {
      case 0:
        goto Event33
      case 1:
        goto Event33
      case 10:
        goto Event125
    }
}

void June_Hello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain041.CheckActorAction13() {
      case 0:
        Event14:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Event21:
            if Npc_HighMountain041.IsOnInstEventFlag() {
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk11', 'IsOverWriteLabelActorName': False})
                Event132:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk04', 'IsOverWriteLabelActorName': False})
                goto Event132
            }
        } else {
            if Npc_HighMountain041.IsOnInstEventFlag() {
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk12', 'IsOverWriteLabelActorName': False})
            } else {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event1:
                        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk00', 'IsOverWriteLabelActorName': False})
                      case 1:
                        goto Event1
                      case 2:
                        Event4:
                        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk01', 'IsOverWriteLabelActorName': False})
                      case 3:
                        goto Event4
                      case 4:
                        goto Event4
                      case 5:
                        goto Event4
                      case 6:
                        Event5:
                        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk02', 'IsOverWriteLabelActorName': False})
                      case 7:
                        goto Event5
                    }
                  case 1:
                    Event8:
                    Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk03', 'IsOverWriteLabelActorName': False})
                  case 2:
                    goto Event8
                  case 3:
                    goto Event8
                }
            }
        }
      case 1:
        goto Event14
      case 10:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            goto Event21
        } else {
            if Npc_HighMountain041.IsOnInstEventFlag() {
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk14', 'IsOverWriteLabelActorName': False})
                Event114:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk13', 'IsOverWriteLabelActorName': False})
                goto Event114
            }
        }
      case 11:
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk20'})
        goto Event114
      case 12:
        goto Event14
    }
}

void Cook_Sell() {
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk08', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': 'Value'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'PorchItemName', 'Value': 'Value_000'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk31'})
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk33'})
    } else {
        Npc_HighMountain041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain041:talk19'})
    }
}
