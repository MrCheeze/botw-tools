-------- EventFlow: Npc_Road_019 --------

Actor: Npc_Road_019
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_019"), 'Flag': 'Npc_Road_019_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event88:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near00'})
          case 1:
            goto Event88
          case 2:
            Event87:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near01'})
          case 3:
            goto Event87
          case 4:
            Event34:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near02'})
          case 5:
            goto Event34
          case 6:
            Event37:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near03'})
          case 7:
            goto Event37
        }
      case 1:
        Event32:
        Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near04'})
      case 2:
        goto Event32
      case 3:
        goto Event32
    }
}

void MSG_Futa_04() {

    call Rest()

    Event90:
    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_04_1'})
        Event40:
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Talk01'})
        Event26:
        switch EventSystemActor.GeneralChoice3() {
          case 0:

            call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_019")})

            Event61:
            Npc_Road_019.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Talk02'})
            goto Event26
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_019")})

            goto Event61
          case 2:
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_019:GoodBye00'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_04'})
        goto Event40
    }
}

void MSG_Futa_03() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_03_1'})
        goto Event40
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_03'})
        goto Event40
    }
}

void MSG_Futa_02() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_01_1'})
        goto Event40
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_01'})
        goto Event40
    }
}

void MSG_Futa_01() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_02_1'})
        goto Event40
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_02'})
        goto Event40
    }
}

void MSG_Futa_00() {

    call Rest()

    switch Npc_Road_019.CheckActorAction13() {
      case 0:
        Event94:
        if Npc_Road_019.IsOnInstEventFlag() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_00_1'})
            goto Event40
        } else {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_00'})
            goto Event40
        }
      case 1:
        goto Event94
      case 2:
        Event99:
        if Npc_Road_019.IsOnInstEventFlag() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_00_1'})
            goto Event40
        } else {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_00'})
            goto Event40
        }
      case 3:
        goto Event99
      case 4:
        goto Event99
      case 5:
        goto Event99
      case 6:
        goto Event99
      case 7:
        goto Event99
      case 8:
        goto Event99
      case 9:
        goto Event99
      case 10:
        goto Event99
      case 11:
        goto Event99
      case 12:
        goto Event99
      case 13:
        goto Event99
    }
}

void RetMSG_Futa_00() {

    call Rest()

    goto Event99
}

void RetMSG_Futa_01() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_01_1'})
        goto Event40
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_01'})
        goto Event40
    }
}

void RetMSG_Futa_02() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_02_1'})
        goto Event40
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_02'})
        goto Event40
    }
}

void RetMSG_Futa_03() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_03_1'})
        goto Event40
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_03'})
        goto Event40
    }
}

void RetMSG_Futa_04() {

    call Rest()

    switch Npc_Road_019.CheckActorAction13() {
      case 0:
        goto Event90
      case 1:
        goto Event90
      case 2:
        Event95:
        if Npc_Road_019.IsOnInstEventFlag() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_04_1'})
            goto Event40
        } else {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_04'})
            goto Event40
        }
      case 3:
        goto Event95
      case 4:
        goto Event95
      case 5:
        goto Event95
      case 6:
        goto Event95
      case 7:
        goto Event95
      case 8:
        goto Event95
      case 9:
        goto Event95
      case 10:
        goto Event95
      case 11:
        goto Event95
      case 12:
        goto Event95
      case 13:
        goto Event95
    }
}

void Rest_End() {
    goto Event40
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_019.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Rest_00'})
            Event74:

            call Rest_End()

          case 1:
            Event72:
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Rest_01'})
            goto Event74
          case 2:
            goto Event72
          case 3:
            goto Event72
        }
    } else {
        if Npc_Road_019.IsArriveAnchorForRain() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Rest_02'})
            goto Event74
        }
    }
}
