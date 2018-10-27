-------- EventFlow: Npc_Road_016 --------

Actor: Npc_Road_016
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_016"), 'Flag': 'Npc_Road_016_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event1:
            Npc_Road_016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_016:Near00'})
          case 1:
            goto Event1
          case 2:
            Event5:
            Npc_Road_016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_016:Near01'})
          case 3:
            goto Event5
          case 4:
            Event6:
            Npc_Road_016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_016:Near02'})
          case 5:
            goto Event6
          case 6:
            Event7:
            Npc_Road_016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_016:Near03'})
          case 7:
            goto Event7
        }
      case 1:
        Event4:
        Npc_Road_016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_016:Near04'})
      case 2:
        goto Event4
      case 3:
        goto Event4
    }
}

void MSG_Firo_00() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_00_1'})
        Event80:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_00'})
        goto Event80
    }
}

void RetMSG_Firo_00() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_00_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_00'})
        goto Event80
    }
}

void MSG_Firo_01() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_03_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_03'})
        goto Event80
    }
}

void RetMSG_Firo_01() {

    call Rest()

    Event89:
    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_02_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_02'})
        goto Event80
    }
}

void MSG_Firo_02() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_01_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_01'})
        goto Event80
    }
}

void RetMSG_Firo_02() {

    call Rest()

    switch Npc_Road_016.CheckActorAction13() {
      case 0:
        Event88:
        if Npc_Road_016.IsOnInstEventFlag() {
            Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_01_1'})
            goto Event80
        } else {
            Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_01'})
            goto Event80
        }
      case 1:
        goto Event88
      case 2:
        goto Event89
      case 3:
        goto Event89
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

void MSG_Firo_03() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_02_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_02'})
        goto Event80
    }
}

void RetMSG_Firo_03() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_03_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_03'})
        goto Event80
    }
}

void MSG_Firo_04() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_04_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:MSG_Firo_04'})
        goto Event80
    }
}

void RetMSG_Firo_04() {

    call Rest()

    if Npc_Road_016.IsOnInstEventFlag() {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_04_1'})
        goto Event80
    } else {
        Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:RetMSG_Firo_04'})
        goto Event80
    }
}

void Rest_End() {
    goto Event80
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_016.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:Rest_00'})
            Event63:

            call Rest_End()

          case 1:
            Event61:
            Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:Rest_01'})
            goto Event63
          case 2:
            goto Event61
          case 3:
            goto Event61
        }
    } else {
        if Npc_Road_016.IsArriveAnchorForRain() {
            Npc_Road_016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_016:Rest_02'})
            goto Event63
        }
    }
}
