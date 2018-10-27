-------- EventFlow: Npc_Road_014 --------

Actor: Npc_Road_014
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_014"), 'Flag': 'Npc_Road_014_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_014:Near00'})
          case [2, 3]:
            Npc_Road_014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_014:Near01'})
          case [4, 5]:
            Npc_Road_014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_014:Near02'})
          case [6, 7]:
            Npc_Road_014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_014:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_014:Near04'})
    }
}

void MSG_Firo_00() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_01_1'})
        Event75:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_01'})
        goto Event75
    }
}

void RetMSG_Firo_00() {

    call Rain()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_02_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_02'})
        goto Event75
    }
}

void MSG_Firo_01() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_01_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_01'})
        goto Event75
    }
}

void RetMSG_Firo_01() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_00_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_00'})
        goto Event75
    }
}

void MSG_Firo_02() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_03_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_03'})
        goto Event75
    }
}

void RetMSG_Firo_02() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_03_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_03'})
        goto Event75
    }
}

void MSG_Firo_03() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_04_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_04'})
        goto Event75
    }
}

void RetMSG_Firo_03() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_02_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_02'})
        goto Event75
    }
}

void MSG_Firo_04() {

    call Rain()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_00_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:RetMSG_Firo_00'})
        goto Event75
    }
}

void RetMSG_Firo_04() {

    call Rest()

    if Npc_Road_014.IsOnInstEventFlag() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_04_1'})
        goto Event75
    } else {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:MSG_Firo_04'})
        goto Event75
    }
}

void Rest_End() {
    goto Event75
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_014.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:Rest_00'})
            Event63:

            call Rest_End()

          case [1, 2, 3]:
            Event61:
            Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:Rest_01'})
            goto Event63
        }
    } else
    if Npc_Road_014.IsArriveAnchorForRain() {
        Npc_Road_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_014:Rest_02'})
        goto Event63
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        goto Event61
    }
}
