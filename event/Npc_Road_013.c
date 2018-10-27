-------- EventFlow: Npc_Road_013 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_013
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_013"), 'Flag': 'Npc_Road_013_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event36:
            Npc_Road_013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_013:Near01'})
          case 1:
            goto Event36
          case 2:
            goto Event36
          case 3:
            goto Event36
          case 4:
            goto Event36
          case 5:
            goto Event36
          case 6:
            Event38:
            Npc_Road_013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_013:Near03'})
          case 7:
            goto Event38
        }
      case 1:
        Event35:
        Npc_Road_013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_013:Near04'})
      case 2:
        goto Event35
      case 3:
        goto Event35
    }
}

void MSG_Firo_00() {

    call Rest()

    Event99:
    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_00_1'})
        Event94:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_00'})
        goto Event94
    }
}

void RetMSG_Firo_00() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_02_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_02'})
        goto Event94
    }
}

void MSG_Firo_01() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_01_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_01'})
        goto Event94
    }
}

void RetMSG_Firo_01() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_01_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_01'})
        goto Event94
    }
}

void MSG_Firo_02() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_03_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_03'})
        goto Event94
    }
}

void RetMSG_Firo_02() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_02_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_02'})
        goto Event94
    }
}

void MSG_Firo_03() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_00_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_00'})
        goto Event94
    }
}

void RetMSG_Firo_03() {

    call Rest()

    if Npc_Road_013.IsOnInstEventFlag() {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_03_1'})
        goto Event94
    } else {
        Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_03'})
        goto Event94
    }
}

void MSG_Firo_04() {

    call Rest()

    switch Npc_Road_013.CheckActorAction13() {
      case 0:
        Event95:
        if Npc_Road_013.IsOnInstEventFlag() {
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_04_1'})
            goto Event94
        } else {
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:RetMSG_Firo_04'})
            goto Event94
        }
      case 1:
        Event100:
        if Npc_Road_013.IsOnInstEventFlag() {
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_04_1'})
            goto Event94
        } else {
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:MSG_Firo_04'})
            goto Event94
        }
      case 2:
        goto Event95
      case 3:
        goto Event95
      case 4:
        goto Event95
      case 5:
        goto Event95
      case 6:
        goto Event95
      case 7:
        goto Event95
      case 8:
        goto Event95
      case 9:
        goto Event95
      case 10:
        goto Event95
      case 11:
        goto Event95
      case 12:
        goto Event95
      case 13:
        goto Event95
    }
}

void RetMSG_Firo_04() {

    call Rest()

    goto Event100
}

void Rest_End() {
    goto Event94
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_013.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:Rest_00'})
            Event81:

            call Rest_End()

          case 1:
            Event79:
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:Rest_01'})
            goto Event81
          case 2:
            goto Event79
          case 3:
            goto Event79
        }
    } else {
        if Npc_Road_013.IsArriveAnchorForRain() {
            Npc_Road_013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_013:Rest_02'})
            goto Event81
        }
    }
}

void RetMSG_Firo_00_A() {

    call Rest()

    goto Event99
}
