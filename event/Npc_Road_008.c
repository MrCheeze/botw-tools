-------- EventFlow: Npc_Road_008 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_008"), 'Flag': 'Npc_Road_008_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_008:Near00'})
          case [2, 3]:
            Npc_Road_008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_008:Near01'})
          case [4, 5]:
            Npc_Road_008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_008:Near02', 'IsChecked': False, 'DispFrame': 90})
          case [6, 7]:
            Npc_Road_008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_008:Near03', 'IsChecked': False, 'DispFrame': 90})
        }
      case [1, 2, 3]:
        Npc_Road_008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_008:Near04', 'IsChecked': False, 'DispFrame': 90})
    }
}

void RetMSG_Futa_00() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_00_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_00'})
    }
}

void MSG_Futa_00() {

    call Rain2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_02_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_02'})
    }
}

void RetMSG_Futa_01() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_02_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_02'})
    }
}

void MSG_Futa_01() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_04_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_04'})
    }
}

void RetMSG_Futa_02() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_01_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_01'})
    }
}

void MSG_Futa_02() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_00_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_00'})
    }
}

void RetMSG_Futa_03() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_01_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_01'})
    }
}

void MSG_Futa_03() {

    call Rest2()

    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_03_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:RetMSG_Futa_03'})
    }
}

void RetMSG_Futa_04() {

    call Rain2()

    switch Npc_Road_008.CheckActorAction13() {
      case [0, 1]:
        Event165:
        if Npc_Road_008.IsOnInstEventFlag() {
            Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_04_1'})
        } else {
            Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_04'})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_008.IsOnInstEventFlag() {
            Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_03_1'})
        } else {
            Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:MSG_Futa_03'})
        }
    }
}

void MSG_Futa_04() {

    call Rest2()

    goto Event165
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_008.IsRest() {
        Event127:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:Rest_00'})
            Event144:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case [1, 2, 3]:
            Event129:
            Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:Rest_01'})
            goto Event144
        }
    } else
    if Npc_Road_008.IsArriveAnchorForRain() {
        Event130:
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_008:Rest_02'})
        goto Event144
    } else
    Event157:
    if Npc_Road_008.IsOnInstEventFlag() {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
    } else {
        Npc_Road_008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    }
    goto Event144
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        goto Event157
      case [1, 2, 3]:
        goto Event129
    }
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_008.IsRest() {
        goto Event127
    } else
    if Npc_Road_008.IsArriveAnchorForRain() {
        goto Event130
    }
}

void Rain2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        goto Event129
    }
}
