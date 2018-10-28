-------- EventFlow: Npc_Road_041 --------

Actor: Npc_Road_041
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_041"), 'Flag': 'Npc_Road_041_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_041.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_041:Near00'})
          case [2, 3]:
            Npc_Road_041.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_041:Near01'})
          case [4, 5]:
            Npc_Road_041.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_041:Near02'})
          case [6, 7]:
            Npc_Road_041.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_041:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_041.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_041:Near04'})
    }
}

void MSG_Akka_00() {

    call Rain({'MessageId': 'EventFlowMsg/Npc_Road_041:MSG_Akka_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_041:MSG_Akka_00_1'})

}

void RetMSG_Akka_00() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_00_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_00'})

}

void MSG_Akka_01() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:MSG_Akka_01_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:MSG_Akka_01'})

}

void RetMSG_Akka_01() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_01_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_01'})

}

void MSG_Akka_02() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:MSG_Akka_02_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:MSG_Akka_02'})

}

void RetMSG_Akka_02() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_02_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_02'})

}

void MSG_Akka_03() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:MSG_Akka_03_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:MSG_Akka_03'})

}

void RetMSG_Akka_03() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_03_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_03'})

}

void MSG_Akka_04() {

    call Rest({'MessageId_1': 'EventFlowMsg/Npc_Road_041:MSG_Akka_04_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:MSG_Akka_04'})

}

void RetMSG_Akka_04() {

    call Rain({'MessageId_1': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_04_1', 'MessageId': 'EventFlowMsg/Npc_Road_041:RetMSG_Akka_04'})

}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_041.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_041:Rest_00'})
            Event62:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case [1, 2, 3]:
            Event48:
            Npc_Road_041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_041:Rest_01'})
            goto Event62
        }
    } else
    if Npc_Road_041.IsArriveAnchorForRain() {
        Npc_Road_041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_041:Rest_02'})
        goto Event62
    } else
    Event92:
    if Npc_Road_041.IsOnInstEventFlag() {
        Npc_Road_041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
    } else {
        Npc_Road_041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    }
    goto Event62
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        goto Event92
      case [1, 2, 3]:
        goto Event48
    }
}
