-------- EventFlow: Npc_Road_033 --------

Actor: Npc_Road_033
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_033"), 'Flag': 'Npc_Road_033_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event10:
            Npc_Road_033.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Near00'})
          case 1:
            goto Event10
          case 2:
            Event11:
            Npc_Road_033.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Near01'})
          case 3:
            goto Event11
          case 4:
            Event12:
            Npc_Road_033.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Near02'})
          case 5:
            goto Event12
          case 6:
            Event13:
            Npc_Road_033.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Near03'})
          case 7:
            goto Event13
        }
      case 1:
        Event9:
        Npc_Road_033.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Near04'})
      case 2:
        goto Event9
      case 3:
        goto Event9
    }
}

void MSG_Kyu_00() {

    call Rain()

    if Npc_Road_033.IsOnInstEventFlag() {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_00_1'})
    } else {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_00'})
    }
}

void RetMSG_Kyu_00() {

    call Rest()

    if Npc_Road_033.IsOnInstEventFlag() {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_04_1'})
    } else {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_04'})
    }
}

void MSG_Kyu_01() {

    call Rest()

    if Npc_Road_033.IsOnInstEventFlag() {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_01_1'})
    } else {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_01'})
    }
}

void RetMSG_Kyu_01() {

    call Rest()

    if Npc_Road_033.IsOnInstEventFlag() {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_01_1'})
    } else {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_01'})
    }
}

void MSG_Kyu_02() {

    call Rain()

    Event86:
    if Npc_Road_033.IsOnInstEventFlag() {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_02_1'})
    } else {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_02'})
    }
}

void RetMSG_Kyu_02() {

    call Rain()

    switch Npc_Road_033.CheckActorAction13() {
      case 0:
        goto Event86
      case 1:
        goto Event86
      case 2:
        Event92:
        if Npc_Road_033.IsOnInstEventFlag() {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_02_1'})
        } else {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_02'})
        }
      case 3:
        goto Event92
      case 4:
        goto Event92
      case 5:
        goto Event92
      case 6:
        goto Event92
      case 7:
        goto Event92
      case 8:
        goto Event92
      case 9:
        goto Event92
      case 10:
        goto Event92
      case 11:
        goto Event92
      case 12:
        goto Event92
      case 13:
        goto Event92
    }
}

void MSG_Kyu_03() {

    call Rest()

    switch Npc_Road_033.CheckActorAction13() {
      case 0:
        goto Event86
      case 1:
        goto Event86
      case 2:
        Event80:
        if Npc_Road_033.IsOnInstEventFlag() {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_03_1'})
        } else {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_03'})
        }
      case 3:
        goto Event80
      case 4:
        goto Event80
      case 5:
        goto Event80
      case 6:
        goto Event80
      case 7:
        goto Event80
      case 8:
        goto Event80
      case 9:
        goto Event80
      case 10:
        goto Event80
      case 11:
        goto Event80
      case 12:
        goto Event80
      case 13:
        goto Event80
    }
}

void RetMSG_Kyu_03() {

    call Rest()

    switch Npc_Road_033.CheckActorAction13() {
      case 0:
        Event105:
        if Npc_Road_033.IsOnInstEventFlag() {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_04_1'})
        } else {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:MSG_Kyu_04'})
        }
      case 1:
        goto Event105
      case 2:
        Event84:
        if Npc_Road_033.IsOnInstEventFlag() {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_03_1'})
        } else {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_03'})
        }
      case 3:
        goto Event84
      case 4:
        goto Event84
      case 5:
        goto Event84
      case 6:
        goto Event84
      case 7:
        goto Event84
      case 8:
        goto Event84
      case 9:
        goto Event84
      case 10:
        goto Event84
      case 11:
        goto Event84
      case 12:
        goto Event84
      case 13:
        goto Event84
    }
}

void MSG_Kyu_04() {

    call Rest()

    if Npc_Road_033.IsOnInstEventFlag() {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_00_1'})
    } else {
        Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:RetMSG_Kyu_00'})
    }
}

void RetMSG_Kyu_04() {

    call Rain()

    goto Event105
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_033.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Rest_00'})
            Event69:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event54:
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Rest_01'})
            goto Event69
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_033.IsArriveAnchorForRain() {
            Npc_Road_033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_033:Rest_02'})
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
        goto Event54
      case 3:
        goto Event54
    }
}
