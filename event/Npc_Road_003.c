-------- EventFlow: Npc_Road_003 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_003"), 'Flag': 'Npc_Road_003_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event90:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near00'})
          case 1:
            goto Event90
          case 2:
            Event89:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near01'})
          case 3:
            goto Event89
          case 4:
            Event9:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near02', 'IsChecked': False, 'DispFrame': 90})
          case 5:
            goto Event9
          case 6:
            Event12:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near03', 'IsChecked': False, 'DispFrame': 90})
          case 7:
            goto Event12
        }
      case 1:
        Event7:
        Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near04', 'IsChecked': False, 'DispFrame': 90})
      case 2:
        goto Event7
      case 3:
        goto Event7
    }
}

void MSG_Rane_00() {

    call Rest()

    switch Npc_Road_003.CheckActorAction13() {
      case 0:
        Event96:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_00_1'})
            Event88:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_00'})
            goto Event88
        }
      case 1:
        goto Event96
      case 2:
        Event95:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_01_1'})
            goto Event88
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_01'})
            goto Event88
        }
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

void RetMSG_Rane_00() {

    call Rest()

    if Npc_Road_003.IsOnInstEventFlag() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_00_1'})
    } else {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_00'})
        goto Event88
    }
}

void MSG_Rane_01() {

    call Rest()

    if Npc_Road_003.IsOnInstEventFlag() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_02_1'})
        goto Event88
    } else {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_02'})
        goto Event88
    }
}

void RetMSG_Rane_01() {

    call Rest()

    if Npc_Road_003.IsOnInstEventFlag() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_01_1'})
    } else {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_01'})
        goto Event88
    }
}

void MSG_Rane_02() {

    call Rest()

    if Npc_Road_003.IsOnInstEventFlag() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_03_1'})
    } else {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_03'})
        goto Event88
    }
}

void RetMSG_Rane_02() {

    call Rest()

    if Npc_Road_003.IsOnInstEventFlag() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_02_1'})
    } else {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_02'})
        goto Event88
    }
}

void MSG_Rane_03() {

    call Rest()

    if Npc_Road_003.IsOnInstEventFlag() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_04_1'})
    } else {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_04'})
        goto Event88
    }
}

void RetMSG_Rane_03() {

    call Rest()

    switch Npc_Road_003.CheckActorAction13() {
      case 0:
        Event98:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_03_1'})
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_03'})
            goto Event88
        }
      case 1:
        goto Event98
      case 2:
        goto Event98
      case 3:
        goto Event98
      case 4:
        Event97:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_04_1'})
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_04'})
            goto Event88
        }
      case 5:
        goto Event97
      case 6:
        goto Event98
      case 7:
        goto Event98
      case 8:
        goto Event98
      case 9:
        goto Event98
      case 10:
        goto Event98
      case 11:
        goto Event98
      case 12:
        goto Event98
      case 13:
        goto Event98
    }
}

void Rest_End() {
    goto Event88
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_003.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:Rest_00'})
            Event75:

            call Rest_End()

          case 1:
            Event73:
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:Rest_01'})
            goto Event75
          case 2:
            goto Event73
          case 3:
            goto Event73
        }
    } else {
        if Npc_Road_003.IsArriveAnchorForRain() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:Rest_02'})
            goto Event75
        }
    }
}
