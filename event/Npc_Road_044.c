-------- EventFlow: Npc_Road_044 --------

Actor: Npc_Road_044
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_044"), 'Flag': 'Npc_Road_044_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_044.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_044:Near00'})
          case [2, 3]:
            Npc_Road_044.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_044:Near01'})
          case [4, 5]:
            Npc_Road_044.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_044:Near02'})
          case [6, 7]:
            Npc_Road_044.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_044:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_044.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_044:Near04'})
    }
}

void RetMSG_Ichika_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_00_1'})

}

void MSG_Ichika_00() {
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {

        call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_00_1'})

    } else {
        Event95:

        call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_01_1'})

    }
}

void RetMSG_Ichika_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_01_1'})

}

void MSG_Ichika_01() {
    goto Event95
}

void RetMSG_Ichika_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_02_1'})

}

void MSG_Ichika_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_02_1'})

}

void RetMSG_Ichika_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_03_1'})

}

void MSG_Ichika_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_03_1'})

}

void RetMSG_Ichika_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_04_1'})

}

void MSG_Ichika_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_044:MSG_Ichika_04_1'})

}

void Rest_End() {
    Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_044:Talk01'})
    Event60:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_044")})

        Event66:
        Npc_Road_044.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_044:Talk02'})
        goto Event60
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_044")})

        goto Event66
      case 2:
        Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_044:GoodBye00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_044.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
                Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_044:Rest_00'})
            } else {
                Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_044:RetMSG_Ichika_01_1'})
            }
            Event90:

            call Rest_End()

          case [1, 2, 3]:
            Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_044:Rest_01'})
            goto Event90
        }
    } else
    if Npc_Road_044.IsArriveAnchorForRain() {
        Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_044:Rest_02'})
        goto Event90
    } else
    if Npc_Road_044.IsOnInstEventFlag() {
        Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
    } else {
        Npc_Road_044.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    }
    goto Event90
}
