-------- EventFlow: Npc_Road_026 --------

Actor: Npc_Road_026
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_026"), 'Flag': 'Npc_Road_026_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_026.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_026:Near00'})
          case [2, 3]:
            Npc_Road_026.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_026:Near01'})
          case [4, 5]:
            Npc_Road_026.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_026:Near02'})
          case [6, 7]:
            Npc_Road_026.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_026:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_026.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_026:Near04'})
    }
}

void MSG_Rane_00() {

    call Rain()

    switch Npc_Road_026.CheckActorAction13() {
      case [0, 1]:
        Event92:
        if Npc_Road_026.IsOnInstEventFlag() {
            Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_00_1'})
        } else {
            Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_00'})
        }
        Event69:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_026.IsOnInstEventFlag() {
            Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_00_1'})
        } else {
            Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_00'})
        }
        goto Event69
    }
}

void RetMSG_Rane_00() {

    call Rest()

    goto Event92
}

void MSG_Rane_01() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_01_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_01'})
    }
    goto Event69
}

void RetMSG_Rane_01() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_01_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_01'})
    }
    goto Event69
}

void MSG_Rane_02() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_02_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_02'})
    }
    goto Event69
}

void RetMSG_Rane_02() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_02_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_02'})
    }
    goto Event69
}

void MSG_Rane_03() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_03_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_03'})
    }
    goto Event69
}

void RetMSG_Rane_03() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_03_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_03'})
    }
    goto Event69
}

void MSG_Rane_04() {

    call Rest()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_04_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:MSG_Rane_04'})
    }
    goto Event69
}

void RetMSG_Rane_04() {

    call Rain()

    if Npc_Road_026.IsOnInstEventFlag() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_04_1'})
    } else {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:RetMSG_Rane_04'})
    }
    goto Event69
}

void Rest_End() {
    goto Event69
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_026.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:Rest_00'})
            Event56:

            call Rest_End()

          case [1, 2, 3]:
            Event54:
            Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:Rest_01'})
            goto Event56
        }
    } else
    if Npc_Road_026.IsArriveAnchorForRain() {
        Npc_Road_026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_026:Rest_02'})
        goto Event56
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        goto Event54
    }
}
