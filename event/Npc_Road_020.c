-------- EventFlow: Npc_Road_020 --------

Actor: Npc_Road_020
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['CheckTimeType', 'CheckWeather', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_020"), 'Flag': 'Npc_Road_020_CookReward'})

}

void RetMSG_Futa_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_00_1'})

}

void MSG_Futa_00() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:MSG_Futa_00', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:MSG_Futa_00_1'})

}

void RetMSG_Futa_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_01_1'})

}

void MSG_Futa_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:MSG_Futa_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:MSG_Futa_01_1'})

}

void RetMSG_Futa_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_02_1'})

}

void MSG_Futa_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:MSG_Futa_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:MSG_Futa_02_1'})

}

void RetMSG_Futa_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_03_1'})

}

void MSG_Futa_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:MSG_Futa_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:MSG_Futa_03_1'})

}

void RetMSG_Futa_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:RetMSG_Futa_04_1'})

}

void MSG_Futa_04() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_020:MSG_Futa_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_020:MSG_Futa_04_1'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_020.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_020:Near00'})
          case [2, 3]:
            Npc_Road_020.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_020:Near01'})
          case [4, 5]:
            Npc_Road_020.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_020:Near02'})
          case [6, 7]:
            Npc_Road_020.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_020:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_020.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_020:Near04'})
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NpcRoad020_First'}) {
        Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:talk01'})
        Event68:
        if Npc_Road_020.IsRest() {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:Rest_00'})
                Event74:

                call Rest_End()

              case [1, 2, 3]:
                Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:Rest_01'})
                goto Event74
            }
        } else
        if Npc_Road_020.IsArriveAnchorForRain() {
            Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:Rest_02'})
            goto Event74
        } else
        if Npc_Road_020.IsOnInstEventFlag() {
            Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
            goto Event74
        } else {
            Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
            goto Event74
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NpcRoad020_First', 'IsWaitFinish': True})
        Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:talk00'})
        goto Event68
    }
}

void Rest_End() {
    Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:Talk01'})
    Event59:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_020")})

        Event65:
        Npc_Road_020.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_020:Talk02'})
        goto Event59
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_020")})

        goto Event65
      case 2:
        Npc_Road_020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_020:GoodBye00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}
