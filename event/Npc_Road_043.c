-------- EventFlow: Npc_Road_043 --------

Actor: Npc_Road_043
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_043"), 'Flag': 'Npc_Road_043_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event88:
            Npc_Road_043.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_043:Near00'})
          case 1:
            goto Event88
          case 2:
            Event87:
            Npc_Road_043.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_043:Near01'})
          case 3:
            goto Event87
          case 4:
            Event6:
            Npc_Road_043.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_043:Near02'})
          case 5:
            goto Event6
          case 6:
            Event7:
            Npc_Road_043.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_043:Near03'})
          case 7:
            goto Event7
        }
      case 1:
        Event4:
        Npc_Road_043.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_043:Near04'})
      case 2:
        goto Event4
      case 3:
        goto Event4
    }
}

void RetMSG_Akka_00() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_00_1'})
        Event86:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_00'})
        goto Event86
    }
}

void MSG_Akka_00() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_00_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_00'})
        goto Event86
    }
}

void RetMSG_Akka_01() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_01_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_01'})
        goto Event86
    }
}

void MSG_Akka_01() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_01_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_01'})
        goto Event86
    }
}

void RetMSG_Akka_02() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_02_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_02'})
        goto Event86
    }
}

void MSG_Akka_02() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_02_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_02'})
        goto Event86
    }
}

void RetMSG_Akka_03() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_03_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_03'})
        goto Event86
    }
}

void MSG_Akka_03() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_03_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_03'})
        goto Event86
    }
}

void RetMSG_Akka_04() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_04_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:RetMSG_Akka_04'})
        goto Event86
    }
}

void MSG_Akka_04() {

    call Rest()

    if Npc_Road_043.IsOnInstEventFlag() {
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_04_1'})
        goto Event86
    } else {

        call hello()

        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:MSG_Akka_04'})
        goto Event86
    }
}

void Rest_End() {
    goto Event86
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_043.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:Rest_00'})
            Event74:

            call Rest_End()

          case 1:
            Event72:
            Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:Rest_01'})
            goto Event74
          case 2:
            goto Event72
          case 3:
            goto Event72
        }
    } else {
        if Npc_Road_043.IsArriveAnchorForRain() {
            Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:Rest_02'})
            goto Event74
        }
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event112:
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:Talk04'})
      case 1:
        goto Event112
      case 2:
        Event113:
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:Talk05'})
      case 3:
        goto Event113
      case 4:
        goto Event113
      case 5:
        Event114:
        Npc_Road_043.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_043:Talk06'})
      case 6:
        goto Event114
      case 7:
        goto Event114
    }
}
