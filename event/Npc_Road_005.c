-------- EventFlow: Npc_Road_005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_005"), 'Flag': 'Npc_Road_005_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event24:
            Npc_Road_005.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Near00'})
          case 1:
            goto Event24
          case 2:
            Event25:
            Npc_Road_005.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Near01'})
          case 3:
            goto Event25
          case 4:
            Event26:
            Npc_Road_005.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Near02'})
          case 5:
            goto Event26
          case 6:
            Event27:
            Npc_Road_005.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Near03'})
          case 7:
            goto Event27
        }
      case 1:
        Event23:
        Npc_Road_005.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Near04'})
      case 2:
        goto Event23
      case 3:
        goto Event23
    }
}

void MSG_Taba_00() {

    call Rest()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_00_1'})
        Event47:
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Talk01'})
        Event41:
        switch EventSystemActor.GeneralChoice3() {
          case 0:

            call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_005")})

            Event55:
            Npc_Road_005.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Talk02'})
            goto Event41
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_005")})

            goto Event55
          case 2:
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_005:GoodBye00'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_00'})
        goto Event47
    }
}

void RetMSG_Taba_00() {

    call Rain()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_00_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_00'})
        goto Event47
    }
}

void MSG_Taba_01() {

    call Rest()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_01_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_01'})
        goto Event47
    }
}

void RetMSG_Taba_01() {

    call Rest()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_01_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_01'})
        goto Event47
    }
}

void MSG_Taba_02() {

    call Rain()

    switch Npc_Road_005.CheckActorAction13() {
      case 0:
        Event98:
        if Npc_Road_005.IsOnInstEventFlag() {
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_02_1'})
            goto Event47
        } else {
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_02'})
            goto Event47
        }
      case 1:
        goto Event98
      case 2:
        Event118:
        if Npc_Road_005.IsOnInstEventFlag() {
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_04_1'})
            goto Event47
        } else {
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_04'})
            goto Event47
        }
      case 3:
        goto Event118
      case 4:
        goto Event98
      case 5:
        goto Event98
      case 6:
        goto Event98
      case 7:
        goto Event98
      case 8:
        goto Event98
      case 9:
        goto Event98
      case 10:
        goto Event98
      case 11:
        goto Event98
      case 12:
        goto Event98
      case 13:
        goto Event98
    }
}

void RetMSG_Taba_02() {

    call Rain()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_02_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_02'})
        goto Event47
    }
}

void MSG_Taba_03() {

    call Rest()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_03_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_03'})
        goto Event47
    }
}

void RetMSG_Taba_03() {

    call Rest()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_03_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:RetMSG_Taba_03'})
        goto Event47
    }
}

void MSG_Taba_04() {

    call Rain()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_04_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_04'})
        goto Event47
    }
}

void RetMSG_Taba_04() {

    call Rest()

    if Npc_Road_005.IsOnInstEventFlag() {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_04_1'})
        goto Event47
    } else {
        Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:MSG_Taba_04'})
        goto Event47
    }
}

void Rest_End() {
    goto Event47
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_005.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event67:
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Rest_00'})
            Event70:

            call Rest_End()

          case 1:
            goto Event67
          case 2:
            Event68:
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Rest_01'})
            goto Event70
          case 3:
            goto Event67
        }
    } else {
        if Npc_Road_005.IsArriveAnchorForRain() {
            Npc_Road_005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_005:Rest_02'})
            goto Event70
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event67
      case 2:
        goto Event68
      case 3:
        goto Event67
    }
}
