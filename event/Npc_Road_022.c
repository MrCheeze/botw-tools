-------- EventFlow: Npc_Road_022 --------

Actor: Npc_Road_022
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_022"), 'Flag': 'Npc_Road_022_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event96:
            Npc_Road_022.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_022:Near00'})
          case 1:
            goto Event96
          case 2:
            Event97:
            Npc_Road_022.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_022:Near01'})
          case 3:
            goto Event97
          case 4:
            Event5:
            Npc_Road_022.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_022:Near02'})
          case 5:
            goto Event5
          case 6:
            Event6:
            Npc_Road_022.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_022:Near03'})
          case 7:
            goto Event6
        }
      case 1:
        Event7:
        Npc_Road_022.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_022:Near04'})
      case 2:
        goto Event7
      case 3:
        goto Event7
    }
}

void RetMSG_Futa_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_00_1'})

}

void MSG_Futa_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:MSG_Futa_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:MSG_Futa_02_1'})

}

void RetMSG_Futa_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_02_1'})

}

void MSG_Futa_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:MSG_Futa_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:MSG_Futa_01_1'})

}

void RetMSG_Futa_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_03_1'})

}

void MSG_Futa_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:MSG_Futa_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:MSG_Futa_03_1'})

}

void RetMSG_Futa_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_01_1'})

}

void MSG_Futa_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:MSG_Futa_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:MSG_Futa_00_1'})

}

void RetMSG_Futa_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:MSG_Futa_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:MSG_Futa_04_1'})

}

void MSG_Futa_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_022:RetMSG_Futa_04_1'})

}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_022.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_022:Rest_00'})
            Event95:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event80:
            Npc_Road_022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_022:Rest_01'})
            goto Event95
          case 2:
            goto Event80
          case 3:
            goto Event80
        }
    } else {
        if Npc_Road_022.IsArriveAnchorForRain() {
            Npc_Road_022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_022:Rest_02'})
            goto Event95
        } else {
            if Npc_Road_022.IsOnInstEventFlag() {
                Npc_Road_022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
                goto Event95
            } else {
                Npc_Road_022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
                goto Event95
            }
        }
    }
}
