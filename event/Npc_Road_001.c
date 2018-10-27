-------- EventFlow: Npc_Road_001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['CheckTimeType', 'CheckWeather', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_001"), 'Flag': 'Npc_Road_001_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event15:
            Npc_Road_001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Near00', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            goto Event15
          case 2:
            Event22:
            Npc_Road_001.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Road_001:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
          case 3:
            goto Event22
          case 4:
            Event23:
            Npc_Road_001.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Road_001:Near02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
          case 5:
            goto Event23
          case 6:
            Event139:
            Npc_Road_001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Near03', 'IsChecked': False, 'DispFrame': 90})
          case 7:
            goto Event139
        }
      case 1:
        Event21:
        Npc_Road_001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Near04', 'IsChecked': False, 'DispFrame': 90})
      case 2:
        goto Event21
      case 3:
        goto Event21
    }
}

void MSG_Bado_03() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_03_1'})
        Event233:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_001_Talk'}) {
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Talk01_1'})
            Event205:
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_001")})

                Event210:
                Npc_Road_001.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Talk02'})
                goto Event205
              case 1:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_001")})

                goto Event210
              case 2:
                Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:GoodBye00'})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_001_Talk', 'IsWaitFinish': True})
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Talk01'})
            goto Event205
        }
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_03'})
        goto Event233
    }
}

void MSG_Bado_02() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_02_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_02'})
        goto Event233
    }
}

void MSG_Bado_01() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_01_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_01'})
        goto Event233
    }
}

void MSG_Bado_00() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_00_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_00'})
        goto Event233
    }
}

void RetMSG_Bado_04() {
    if Npc_Road_001.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {

        call Rest()

        if Npc_Road_001.IsOnInstEventFlag() {
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_04_1'})
            goto Event233
        } else {
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:MSG_Bado_04'})
            goto Event233
        }
    } else {

        call Rest()

        if Npc_Road_001.IsOnInstEventFlag() {
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_04_1'})
            goto Event233
        } else {
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_04'})
            goto Event233
        }
    }
}

void RetMSG_Bado_03() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_03_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_03'})
        goto Event233
    }
}

void RetMSG_Bado_02() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_02_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_02'})
        goto Event233
    }
}

void RetMSG_Bado_01() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_01_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_01'})
        goto Event233
    }
}

void RetMSG_Bado_00() {

    call Rest()

    if Npc_Road_001.IsOnInstEventFlag() {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_00_1'})
        goto Event233
    } else {
        Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:RetMSG_Bado_00'})
        goto Event233
    }
}

void Rest_End() {
    goto Event233
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_001.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Rest_00'})
            Event193:

            call Rest_End()

          case 1:
            Event191:
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Rest_01'})
            goto Event193
          case 2:
            goto Event191
          case 3:
            goto Event191
        }
    } else {
        if Npc_Road_001.IsArriveAnchorForRain() {
            Npc_Road_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Rest_02'})
            goto Event193
        }
    }
}
