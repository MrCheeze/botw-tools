-------- EventFlow: Npc_Road_018 --------

Actor: Npc_Road_018
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_018"), 'Flag': 'Npc_Road_018_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_018.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_018:Near00'})
          case [2, 3]:
            Npc_Road_018.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_018:Near01'})
          case [4, 5]:
            Npc_Road_018.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_018:Near02'})
          case [6, 7]:
            Npc_Road_018.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_018:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_018.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_018:Near04'})
    }
}

void MSG_Futa_00() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_01_1'})
        Event87:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_01'})
        goto Event87
    }
}

void RetMSG_Futa_00() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_01_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_01'})
        goto Event87
    }
}

void MSG_Futa_01() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_02_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_02'})
        goto Event87
    }
}

void RetMSG_Futa_01() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_02_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_02'})
        goto Event87
    }
}

void MSG_Futa_02() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_00_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_00'})
        goto Event87
    }
}

void RetMSG_Futa_02() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_03_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_03'})
        goto Event87
    }
}

void MSG_Futa_03() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_03_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_03'})
        goto Event87
    }
}

void RetMSG_Futa_03() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_00_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_00'})
        goto Event87
    }
}

void MSG_Futa_04() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_04_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:MSG_Futa_04'})
        goto Event87
    }
}

void RetMSG_Futa_04() {

    call Rest()

    if Npc_Road_018.IsOnInstEventFlag() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_04_1'})
        goto Event87
    } else {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:RetMSG_Futa_04'})
        goto Event87
    }
}

void Rest_End() {
    goto Event87
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_018.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:Rest_00'})
            Event74:

            call Rest_End()

          case [1, 2, 3]:
            Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:Rest_01'})
            goto Event74
        }
    } else
    if Npc_Road_018.IsArriveAnchorForRain() {
        Npc_Road_018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_018:Rest_02'})
        goto Event74
    }
}
