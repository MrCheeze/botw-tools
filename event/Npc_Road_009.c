-------- EventFlow: Npc_Road_009 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckWeather', 'CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_009"), 'Flag': 'Npc_Road_009_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_009:Near00'})
          case [2, 3]:
            Npc_Road_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_009:Near01'})
          case [4, 5]:
            Npc_Road_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_009:Near02'})
          case [6, 7]:
            Npc_Road_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_009:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_009:Near04'})
    }
}

void MSG_Firo_00() {

    call Rest()

    Event116:
    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_00_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_00'})
    }
    Event140:
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Road_009_Talk_RetMSG_Firo_04', 'IsWaitFinish': True})
    Event110:
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void RetMSG_Firo_00() {

    call Rest()

    switch Npc_Road_009.CheckActorAction13() {
      case [0, 1]:
        goto Event116
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_009.IsOnInstEventFlag() {
            Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_00_1'})
        } else {
            Npc_Road_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_00', 'IsWaitFinish': True})
        }
        goto Event140
    }
}

void MSG_Firo_01() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_01_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_01'})
    }
    goto Event140
}

void RetMSG_Firo_01() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_01_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_01'})
    }
    goto Event140
}

void MSG_Firo_02() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_02_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_02'})
    }
    goto Event140
}

void RetMSG_Firo_02() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_02_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_02'})
    }
    goto Event140
}

void MSG_Firo_03() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_03_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_03'})
    }
    goto Event140
}

void RetMSG_Firo_03() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_03_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_03'})
    }
    goto Event140
}

void MSG_Firo_04() {

    call Rest()

    if Npc_Road_009.IsOnInstEventFlag() {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_04_1'})
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:MSG_Firo_04'})
    }
    goto Event140
}

void RetMSG_Firo_04() {

    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_009_Talk_RetMSG_Firo_04'}) {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_04_1'})
        goto Event110
    } else {
        Npc_Road_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_009:RetMSG_Firo_04'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_009_Talk_RetMSG_Firo_04', 'IsWaitFinish': True})
        goto Event110
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_009.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_009.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_009:Rest_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event98:

            call Rest_End()

          case [1, 2, 3]:
            Npc_Road_009.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_009:Rest_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event98
        }
    } else
    if Npc_Road_009.IsArriveAnchorForRain() {
        Npc_Road_009.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_009:Rest_02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event98
    }
}

void Rest_End() {
    goto Event140
}
