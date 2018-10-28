-------- EventFlow: Npc_Road_028 --------

Actor: Npc_Road_028
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_028"), 'Flag': 'Npc_Road_028_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_028.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Near00'})
          case [2, 3]:
            Npc_Road_028.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Near01'})
          case [4, 5]:
            Npc_Road_028.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Near02'})
          case [6, 7]:
            Npc_Road_028.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_028.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Near04'})
    }
}

void MSG_Orud_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:MSG_Orud_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:MSG_Orud_00_1'})

}

void RetMSG_Orud_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_00_1'})

}

void MSG_Orud_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:MSG_Orud_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:MSG_Orud_01_1'})

}

void RetMSG_Orud_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_01_1'})

}

void MSG_Orud_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:MSG_Orud_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:MSG_Orud_02_1'})

}

void RetMSG_Orud_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_02_1'})

}

void MSG_Orud_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:MSG_Orud_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:MSG_Orud_03_1'})

}

void RetMSG_Orud_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_03_1'})

}

void MSG_Orud_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:MSG_Orud_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:MSG_Orud_04_1'})

}

void RetMSG_Orud_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_028:RetMSG_Orud_04_1'})

}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_028.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Rest_00'})
            Event70:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case [1, 2, 3]:
            Npc_Road_028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Rest_01'})
            goto Event70
        }
    } else
    if Npc_Road_028.IsArriveAnchorForRain() {
        Npc_Road_028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_028:Rest_02'})
        goto Event70
    } else
    if Npc_Road_028.IsOnInstEventFlag() {
        Npc_Road_028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
    } else {
        Npc_Road_028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    }
    goto Event70
}
