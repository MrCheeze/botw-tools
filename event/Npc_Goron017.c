-------- EventFlow: Npc_Goron017 --------

Actor: Npc_Goron017
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee']
queries: ['CheckTimeType', 'RandomChoice2', 'GeneralChoice2', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call FugoHello()

    Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk30'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk27'})
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk28'})
      case 1:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk15'})
      case 2:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk12'})
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event7:
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk04'})
          case 1:
            goto Event7
          case 2:
            Event9:
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk01'})
          case 3:
            goto Event9
          case 4:
            goto Event9
          case 5:
            Event6:
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk02'})
          case 6:
            goto Event6
          case 7:
            goto Event6
        }
      case 3:
        Event60:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk13'})
    }
}

void Near() {
    switch Npc_Goron017.CheckActorAction13() {
      case 0:
        Event80:
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCityMini_BeatGolem_Finish'}) {
            Event81:
            Npc_Goron017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Goron017:near02'})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'GoronCityMini_BeatGolem_Beated'}) {
                Event82:
                Npc_Goron017.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron017:near02', 'DispFrame': 300, 'IsChecked': True})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'GoronCityMini_BeatGolem_Activated'}) {
                    goto Event81
                } else {
                    goto Event82
                }
            }
        }
      case 1:
        goto Event80
      case 10:
        goto Event80
      case 11:
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCityMini_BeatGolem_Finish'}) {
            Event19:
            if !EventSystemActor.RandomChoice2() {
                Npc_Goron017.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron017:near00', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_Goron017.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron017:near01', 'IsChecked': False, 'DispFrame': 90})
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'GoronCityMini_BeatGolem_Beated'}) {
                Event92:
                if !EventSystemActor.RandomChoice2() {
                    Npc_Goron017.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron017:near00', 'IsChecked': True, 'DispFrame': 300})
                } else {
                    Npc_Goron017.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron017:near01', 'DispFrame': 300, 'IsChecked': True})
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'GoronCityMini_BeatGolem_Activated'}) {
                    goto Event19
                } else {
                    goto Event92
                }
            }
        }
    }
}

void Ready_BeatGolem_Fugo() {

    call FugoHello()

    Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk00'})
    Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk11'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk12'})
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk25'})
        EventSystemActor.Demo_FlagON({'FlagName': 'GoronCityMini_BeatGolem_Activated', 'IsWaitFinish': True})
    } else {
        Event37:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk13'})
    }
}

void Finish_BeatGolem_Fugo() {

    call FugoHello()

    Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk26'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk20'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk22', 'IsCloseMessageDialog': True})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronCityMini_BeatGolem_Finish'})
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk23'})
        } else {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk21'})
        }
      case 1:
        Event43:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk15'})
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk09'})
        } else {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk10'})
        }
      case 2:
        Event42:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk12'})
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk19'})
      case 3:
        goto Event60
    }
}

void Beated_BeatGolem_Fugo() {

    call FugoHello()

    Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk14'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk16'})
        Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk17'})
      case 1:
        goto Event43
      case 2:
        goto Event42
      case 3:
        goto Event37
    }
}

void FugoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron017.CheckActorAction13() {
      case 10:
        if Npc_Goron017.IsOnInstEventFlag() {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk06'})
        } else {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk05'})
        }
      case 11:
        if Npc_Goron017.IsOnInstEventFlag() {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk24'})
        } else {
            Npc_Goron017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron017:talk07'})
        }
    }
}
