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
          case [0, 1]:
            Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near00'})
          case [2, 3, 4, 5]:
            Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near02'})
          case [6, 7]:
            Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_017:Near04'})
    }
}

void MSG_Futa_00() {

    call Rain()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_00_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_00'})
    }
    Event66:
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void RetMSG_Futa_00() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_00_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_00'})
    }
    goto Event66
}

void MSG_Futa_01() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_02_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_02'})
    }
    goto Event66
}

void RetMSG_Futa_01() {

    call Rest()

    switch Npc_Road_017.CheckActorAction13() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event82:
        if Npc_Road_017.IsOnInstEventFlag() {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_02_1'})
        } else {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_02'})
        }
        goto Event66
      case 1:
        Event78:
        if Npc_Road_017.IsOnInstEventFlag() {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_01_1'})
        } else {
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_01'})
        }
        goto Event66
    }
}

void MSG_Futa_02() {

    call Rest()

    switch Npc_Road_017.CheckActorAction13() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        goto Event82
      case 1:
        goto Event78
    }
}

void RetMSG_Futa_02() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_03_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_03'})
    }
    goto Event66
}

void MSG_Futa_03() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_03_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_03'})
    }
    goto Event66
}

void RetMSG_Futa_03() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_01_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_01'})
    }
    goto Event66
}

void MSG_Futa_04() {

    call Rest()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_04_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:RetMSG_Futa_04'})
    }
    goto Event66
}

void RetMSG_Futa_04() {

    call Rain()

    if Npc_Road_017.IsOnInstEventFlag() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_04_1'})
    } else {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:MSG_Futa_04'})
    }
    goto Event66
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_017.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:Rest_00'})
            Event54:

            call Rest_End()

          case [1, 2, 3]:
            Event52:
            Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:Rest_01'})
            goto Event54
        }
    } else
    if Npc_Road_017.IsArriveAnchorForRain() {
        Npc_Road_017.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_017:Rest_02'})
        goto Event54
    }
}

void Rest_End() {
    goto Event66
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        goto Event52
    }
}
