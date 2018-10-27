-------- EventFlow: Npc_Road_017 --------

Actor: Npc_Road_017
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_017"), 'Flag': 'Npc_Road_017_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event15:
            Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near00'})
          case 1:
            goto Event15
          case 2:
            Event20:
            Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near02'})
          case 3:
            goto Event20
          case 4:
            goto Event20
          case 5:
            goto Event20
          case 6:
            Event21:
            Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near03'})
          case 7:
            goto Event21
        }
      case 1:
        Event18:
        Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near04'})
      case 2:
        goto Event18
      case 3:
        goto Event18
    }
}

void MSG_Futa_00() {

    call Rain()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_00_1'})
        Event66:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_00'})
        goto Event66
    }
}

void RetMSG_Futa_00() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_00_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_00'})
        goto Event66
    }
}

void MSG_Futa_01() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_02_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_02'})
        goto Event66
    }
}

void RetMSG_Futa_01() {

    call Rest()

    switch Npc_Road_017.CheckActorAction13() {
      case 0:
        Event82:
        if Npc_Road_017.IsOnInstEventFlag() {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_02_1'})
            goto Event66
        } else {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_02'})
            goto Event66
        }
      case 1:
        Event78:
        if Npc_Road_017.IsOnInstEventFlag() {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_01_1'})
            goto Event66
        } else {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_01'})
            goto Event66
        }
      case 2:
        goto Event82
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

void MSG_Futa_02() {

    call Rest()

    switch Npc_Road_017.CheckActorAction13() {
      case 0:
        goto Event82
      case 1:
        goto Event78
      case 2:
        goto Event82
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

void RetMSG_Futa_02() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_03_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_03'})
        goto Event66
    }
}

void MSG_Futa_03() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_03_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_03'})
        goto Event66
    }
}

void RetMSG_Futa_03() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_01_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_01'})
        goto Event66
    }
}

void MSG_Futa_04() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_04_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_04'})
        goto Event66
    }
}

void RetMSG_Futa_04() {

    call Rain()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_04_1'})
        goto Event66
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_04'})
        goto Event66
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_017.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:Rest_00'})
            Event54:

            call Rest_End()

          case 1:
            Event52:
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:Rest_01'})
            goto Event54
          case 2:
            goto Event52
          case 3:
            goto Event52
        }
    } else {
        if Npc_Road_017.IsArriveAnchorForRain() {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:Rest_02'})
            goto Event54
        }
    }
}

void Rest_End() {
    goto Event66
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event52
      case 2:
        goto Event52
      case 3:
        goto Event52
    }
}
