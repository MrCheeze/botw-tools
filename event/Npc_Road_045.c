-------- EventFlow: Npc_Road_045 --------

Actor: Npc_Road_045
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_045"), 'Flag': 'Npc_Road_045_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_045.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_045:Near00'})
          case [2, 3]:
            Npc_Road_045.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_045:Near01'})
          case [4, 5]:
            Npc_Road_045.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_045:Near02'})
          case [6, 7]:
            Npc_Road_045.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_045:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_045.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_045:Near04'})
    }
}

void RetMSG_Ichika_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_00', 'MessageId_01': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_00_1'})

}

void MSG_Ichika_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_00', 'MessageId_01': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_00_1'})

}

void RetMSG_Ichika_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_01', 'MessageId_01': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_01_1'})

}

void MSG_Ichika_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_01', 'MessageId_01': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_01_1'})

}

void RetMSG_Ichika_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_03', 'MessageId_01': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_03_1'})

}

void MSG_Ichika_02() {

    call Rest2()

    if Npc_Road_045.IsOnInstEventFlag() {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_03_1'})
    } else {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_03'})
    }
}

void RetMSG_Ichika_03() {

    call Rest2()

    Event129:
    if Npc_Road_045.IsOnInstEventFlag() {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_02_1'})
    } else {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_02'})
    }
}

void MSG_Ichika_03() {

    call Rest2()

    Event114:
    if Npc_Road_045.IsOnInstEventFlag() {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_02_1'})
    } else {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_02'})
    }
}

void RetMSG_Ichika_04() {

    call Rest2()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite05'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
            goto Event129
        } else
        if Npc_Road_045.IsOnInstEventFlag() {
            Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_04_1'})
        } else {
            Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:RetMSG_Ichika_04'})
        }
    } else
    goto Event129
}

void MSG_Ichika_04() {

    call Rest2()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite05'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
            goto Event114
        } else
        if Npc_Road_045.IsOnInstEventFlag() {
            Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_04_1'})
        } else {
            Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:MSG_Ichika_04'})
        }
    } else
    goto Event114
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_045.IsRest() {
        Event83:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:Rest_00'})
            Event99:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case [1, 2, 3]:
            Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:Rest_01'})
            goto Event99
        }
    } else
    if Npc_Road_045.IsArriveAnchorForRain() {
        Event86:
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_045:Rest_02'})
        goto Event99
    } else
    if Npc_Road_045.IsOnInstEventFlag() {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_01'})
        goto Event99
    } else {
        Npc_Road_045.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
        goto Event99
    }
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_045.IsRest() {
        goto Event83
    } else
    if Npc_Road_045.IsArriveAnchorForRain() {
        goto Event86
    }
}
