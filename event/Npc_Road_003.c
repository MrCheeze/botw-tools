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
          case [0, 1]:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near00'})
          case [2, 3]:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near01'})
          case [4, 5]:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near02', 'IsChecked': False, 'DispFrame': 90})
          case [6, 7]:
            Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near03', 'IsChecked': False, 'DispFrame': 90})
        }
      case [1, 2, 3]:
        Npc_Road_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_003:Near04', 'IsChecked': False, 'DispFrame': 90})
    }
}

void MSG_Rane_00() {

    call Rest()

    switch Npc_Road_003.CheckActorAction13() {
      case [0, 1]:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_00_1'})
            Event88:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_00'})
            goto Event88
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_01_1'})
            goto Event88
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:MSG_Rane_01'})
            goto Event88
        }
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
      case [0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_03_1'})
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_03'})
            goto Event88
        }
      case [4, 5]:
        if Npc_Road_003.IsOnInstEventFlag() {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_04_1'})
        } else {
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:RetMSG_Rane_04'})
            goto Event88
        }
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

          case [1, 2, 3]:
            Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:Rest_01'})
            goto Event75
        }
    } else
    if Npc_Road_003.IsArriveAnchorForRain() {
        Npc_Road_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_003:Rest_02'})
        goto Event75
    }
}
