-------- EventFlow: Npc_Road_034 --------

Actor: Npc_Road_034
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_034"), 'Flag': 'Npc_Road_034_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event10:
            Npc_Road_034.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Near00'})
          case 1:
            goto Event10
          case 2:
            Event13:
            Npc_Road_034.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Near03'})
          case 3:
            goto Event13
          case 4:
            Event12:
            Npc_Road_034.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Near02'})
          case 5:
            goto Event12
          case 6:
            Event9:
            Npc_Road_034.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Near04'})
          case 7:
            goto Event9
        }
      case 1:
        Event11:
        Npc_Road_034.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Near01'})
      case 2:
        goto Event11
      case 3:
        goto Event11
    }
}

void MSG_Kyu_00() {

    call Rain()

    switch Npc_Road_034.CheckActorAction13() {
      case 0:
        Event84:
        if Npc_Road_034.IsOnInstEventFlag() {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_00_1'})
        } else {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_00'})
        }
      case 1:
        goto Event84
      case 2:
        Event82:
        if Npc_Road_034.IsOnInstEventFlag() {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_01_1'})
        } else {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_01'})
        }
      case 3:
        goto Event82
      case 4:
        goto Event82
      case 5:
        goto Event82
      case 6:
        goto Event82
      case 7:
        goto Event82
      case 8:
        goto Event82
      case 9:
        goto Event82
      case 10:
        goto Event82
      case 11:
        goto Event82
      case 12:
        goto Event82
      case 13:
        goto Event82
    }
}

void RetMSG_Kyu_00() {

    call Rest()

    if Npc_Road_034.IsOnInstEventFlag() {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_00_1'})
    } else {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_00'})
    }
}

void MSG_Kyu_01() {

    call Rest()

    if Npc_Road_034.IsOnInstEventFlag() {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_02_1'})
    } else {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_02'})
    }
}

void RetMSG_Kyu_01() {

    call Rest()

    if Npc_Road_034.IsOnInstEventFlag() {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_01_1'})
    } else {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_01'})
    }
}

void MSG_Kyu_02() {

    call Rest()

    if Npc_Road_034.IsOnInstEventFlag() {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_03_1'})
    } else {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_03'})
    }
}

void RetMSG_Kyu_02() {

    call Rest()

    if Npc_Road_034.IsOnInstEventFlag() {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_02_1'})
    } else {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_02'})
    }
}

void MSG_Kyu_03() {

    call Rest()

    if Npc_Road_034.IsOnInstEventFlag() {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_04_1'})
    } else {
        Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:MSG_Kyu_04'})
    }
}

void RetMSG_Kyu_03() {

    call Rain()

    switch Npc_Road_034.CheckActorAction13() {
      case 0:
        Event86:
        if Npc_Road_034.IsOnInstEventFlag() {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_04_1'})
        } else {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_04'})
        }
      case 1:
        goto Event86
      case 2:
        Event88:
        if Npc_Road_034.IsOnInstEventFlag() {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_03_1'})
        } else {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:RetMSG_Kyu_03'})
        }
      case 3:
        goto Event88
      case 4:
        goto Event88
      case 5:
        goto Event88
      case 6:
        goto Event88
      case 7:
        goto Event88
      case 8:
        goto Event88
      case 9:
        goto Event88
      case 10:
        goto Event88
      case 11:
        goto Event88
      case 12:
        goto Event88
      case 13:
        goto Event88
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_034.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event53:
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Rest_00'})
            Event69:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event54:
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Rest_01'})
            goto Event69
          case 2:
            goto Event53
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_034.IsArriveAnchorForRain() {
            Npc_Road_034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_034:Rest_02'})
            goto Event69
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event54
      case 2:
        goto Event53
      case 3:
        goto Event54
    }
}
