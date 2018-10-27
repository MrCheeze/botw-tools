-------- EventFlow: Npc_Road_040 --------

Actor: Npc_Road_040
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_040"), 'Flag': 'Npc_Road_040_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        Event7:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event10:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near00'})
          case 1:
            goto Event10
          case 2:
            Event11:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near01'})
          case 3:
            goto Event11
          case 4:
            Event12:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near02'})
          case 5:
            goto Event12
          case 6:
            Event13:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near03'})
          case 7:
            goto Event13
        }
      case 1:
        Event9:
        Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near04'})
      case 2:
        goto Event7
      case 3:
        goto Event9
    }
}

void MSG_Taba_00() {

    call Rain()

    switch Npc_Road_040.CheckActorAction13() {
      case 0:
        Event92:
        if Npc_Road_040.IsOnInstEventFlag() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_00_1'})
        } else {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_00'})
        }
      case 1:
        goto Event92
      case 2:
        Event85:
        if Npc_Road_040.IsOnInstEventFlag() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_00_1'})
        } else {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_00'})
        }
      case 3:
        goto Event85
      case 4:
        goto Event85
      case 5:
        goto Event85
      case 6:
        goto Event85
      case 7:
        goto Event85
      case 8:
        goto Event85
      case 9:
        goto Event85
      case 10:
        goto Event85
      case 11:
        goto Event85
      case 12:
        goto Event85
      case 13:
        goto Event85
    }
}

void RetMSG_Taba_00() {

    call Rest()

    goto Event92
}

void MSG_Taba_01() {

    call Rest()

    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_01_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_01'})
    }
}

void RetMSG_Taba_01() {

    call Rest()

    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_02_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_02'})
    }
}

void MSG_Taba_02() {

    call Rest()

    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_02_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_02'})
    }
}

void RetMSG_Taba_02() {

    call Rest()

    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_01_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_01'})
    }
}

void MSG_Taba_03() {

    call Rest()

    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_03_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_03'})
    }
}

void RetMSG_Taba_03() {

    call Rest()

    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_03_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_03'})
    }
}

void MSG_Taba_04() {

    call Rest()

    Event75:
    if Npc_Road_040.IsOnInstEventFlag() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_04_1'})
    } else {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_04'})
    }
}

void RetMSG_Taba_04() {

    call Rain()

    switch Npc_Road_040.CheckActorAction13() {
      case 0:
        goto Event75
      case 1:
        goto Event75
      case 2:
        Event77:
        if Npc_Road_040.IsOnInstEventFlag() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_04_1'})
        } else {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_04'})
        }
      case 3:
        goto Event77
      case 4:
        goto Event77
      case 5:
        goto Event77
      case 6:
        goto Event77
      case 7:
        goto Event77
      case 8:
        goto Event77
      case 9:
        goto Event77
      case 10:
        goto Event77
      case 11:
        goto Event77
      case 12:
        goto Event77
      case 13:
        goto Event77
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_040.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Rest_00'})
            Event68:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event54:
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Rest_01'})
            goto Event68
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_040.IsArriveAnchorForRain() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Rest_02'})
            goto Event68
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event54
      case 2:
        goto Event54
      case 3:
        goto Event54
    }
}
