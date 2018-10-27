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
      case [0, 2]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near00'})
          case [2, 3]:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near01'})
          case [4, 5]:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near02'})
          case [6, 7]:
            Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near03'})
        }
      case [1, 3]:
        Npc_Road_040.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Near04'})
    }
}

void MSG_Taba_00() {

    call Rain()

    switch Npc_Road_040.CheckActorAction13() {
      case [0, 1]:
        Event92:
        if Npc_Road_040.IsOnInstEventFlag() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_00_1'})
        } else {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_00'})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_040.IsOnInstEventFlag() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_00_1'})
        } else {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:MSG_Taba_00'})
        }
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
      case [0, 1]:
        goto Event75
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_040.IsOnInstEventFlag() {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_04_1'})
        } else {
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:RetMSG_Taba_04'})
        }
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
          case [1, 2, 3]:
            Event54:
            Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Rest_01'})
            goto Event68
        }
    } else
    if Npc_Road_040.IsArriveAnchorForRain() {
        Npc_Road_040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_040:Rest_02'})
        goto Event68
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        goto Event54
    }
}
