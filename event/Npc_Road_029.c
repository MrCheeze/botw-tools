-------- EventFlow: Npc_Road_029 --------

Actor: Npc_Road_029
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

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_029"), 'Flag': 'Npc_Road_029_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event10:
            Npc_Road_029.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Near00'})
          case 1:
            goto Event10
          case 2:
            Event11:
            Npc_Road_029.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Near01'})
          case 3:
            goto Event11
          case 4:
            Event12:
            Npc_Road_029.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Near02'})
          case 5:
            goto Event12
          case 6:
            Event13:
            Npc_Road_029.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Near03'})
          case 7:
            goto Event13
        }
      case 1:
        Event9:
        Npc_Road_029.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Near04'})
      case 2:
        goto Event9
      case 3:
        goto Event9
    }
}

void MSG_Orud_00() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_00_1'})
        Event73:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_00'})
        goto Event73
    }
}

void RetMSG_Orud_00() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_00_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_00'})
        goto Event73
    }
}

void MSG_Orud_01() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_01_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_01'})
        goto Event73
    }
}

void RetMSG_Orud_01() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_01_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_01'})
        goto Event73
    }
}

void MSG_Orud_02() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_02_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_02'})
        goto Event73
    }
}

void RetMSG_Orud_02() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_02_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_02'})
        goto Event73
    }
}

void MSG_Orud_03() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_03_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_03'})
        goto Event73
    }
}

void RetMSG_Orud_03() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_03_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_03'})
        goto Event73
    }
}

void MSG_Orud_04() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_04_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:MSG_Orud_04'})
        goto Event73
    }
}

void RetMSG_Orud_04() {

    call Rest()

    if Npc_Road_029.IsOnInstEventFlag() {
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_04_1'})
        goto Event73
    } else {

        call hello()

        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:RetMSG_Orud_04'})
        goto Event73
    }
}

void Rest_End() {
    goto Event73
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_029.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Rest_00'})
            Event56:

            call Rest_End()

          case 1:
            Event54:
            Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Rest_01'})
            goto Event56
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_029.IsArriveAnchorForRain() {
            Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Rest_02'})
            goto Event56
        }
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event76:
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Talk04'})
      case 1:
        goto Event76
      case 2:
        Event77:
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Talk05'})
      case 3:
        goto Event77
      case 4:
        goto Event77
      case 5:
        Event78:
        Npc_Road_029.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_029:Talk06'})
      case 6:
        goto Event78
      case 7:
        goto Event78
    }
}
