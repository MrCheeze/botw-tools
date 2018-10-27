-------- EventFlow: Npc_Road_002 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_002"), 'Flag': 'Npc_Road_002_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event32:
            Npc_Road_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_002:Near00', 'DispFrame': 90, 'IsChecked': False})
          case 1:
            goto Event32
          case 2:
            Event36:
            Npc_Road_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_002:Near01', 'DispFrame': 90, 'IsChecked': False})
          case 3:
            goto Event36
          case 4:
            Event37:
            Npc_Road_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_002:Near02', 'IsChecked': False, 'DispFrame': 90})
          case 5:
            goto Event37
          case 6:
            Event40:
            Npc_Road_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_002:Near03', 'IsChecked': False, 'DispFrame': 90})
          case 7:
            goto Event40
        }
      case 1:
        Event35:
        Npc_Road_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_002:Near04', 'IsChecked': False, 'DispFrame': 90})
      case 2:
        goto Event35
      case 3:
        goto Event35
    }
}

void MSG_Futa_03() {

    call Rest()

    if Npc_Road_002.IsOnInstEventFlag() {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_02_1'})
        Event45:
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:Talk01'})
        Event29:
        switch EventSystemActor.GeneralChoice3() {
          case 0:

            call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_002")})

            Event75:
            Npc_Road_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:Talk02'})
            goto Event29
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_002")})

            goto Event75
          case 2:
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_002:GoodBye00'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_02'})
        goto Event45
    }
}

void MSG_Futa_02() {

    call Rest()

    if Npc_Road_002.IsOnInstEventFlag() {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_03_1'})
        goto Event45
    } else {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_03'})
        goto Event45
    }
}

void MSG_Futa_01() {

    call Rest()

    if Npc_Road_002.IsOnInstEventFlag() {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_01_1'})
        goto Event45
    } else {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_01'})
        goto Event45
    }
}

void MSG_Futa_00() {

    call Rest()

    switch Npc_Road_002.CheckActorAction13() {
      case 0:
        Event113:
        if Npc_Road_002.IsOnInstEventFlag() {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_00_1'})
            goto Event45
        } else {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_00'})
            goto Event45
        }
      case 1:
        goto Event113
      case 2:
        Event108:
        if Npc_Road_002.IsOnInstEventFlag() {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_00_1'})
            goto Event45
        } else {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_00'})
            goto Event45
        }
      case 3:
        goto Event108
      case 4:
        goto Event108
      case 5:
        goto Event108
      case 6:
        goto Event108
      case 7:
        goto Event108
      case 8:
        goto Event108
      case 9:
        goto Event108
      case 10:
        goto Event108
      case 11:
        goto Event108
      case 12:
        goto Event108
      case 13:
        goto Event108
    }
}

void RetMSG_Futa_00() {

    call Rest()

    if Npc_Road_002.IsOnInstEventFlag() {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_01_1'})
        goto Event45
    } else {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_01'})
        goto Event45
    }
}

void RetMSG_Futa_01() {

    call Rest()

    if Npc_Road_002.IsOnInstEventFlag() {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_02_1'})
        goto Event45
    } else {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_02'})
        goto Event45
    }
}

void RetMSG_Futa_02() {

    call Rest()

    if Npc_Road_002.IsOnInstEventFlag() {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_03_1'})
        goto Event45
    } else {
        Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_03'})
        goto Event45
    }
}

void RetMSG_Futa_03() {

    call Rest()

    switch Npc_Road_002.CheckActorAction13() {
      case 0:
        Event125:
        if Npc_Road_002.IsOnInstEventFlag() {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_04_1'})
            goto Event45
        } else {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:MSG_Futa_04'})
            goto Event45
        }
      case 1:
        goto Event125
      case 2:
        Event109:
        if Npc_Road_002.IsOnInstEventFlag() {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_04_1'})
            goto Event45
        } else {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:RetMSG_Futa_04'})
            goto Event45
        }
      case 3:
        goto Event109
      case 4:
        goto Event109
      case 5:
        goto Event109
      case 6:
        goto Event109
      case 7:
        goto Event109
      case 8:
        goto Event109
      case 9:
        goto Event109
      case 10:
        goto Event109
      case 11:
        goto Event109
      case 12:
        goto Event109
      case 13:
        goto Event109
    }
}

void Rest_End() {
    goto Event45
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_002.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:Rest_00'})
            Event90:

            call Rest_End()

          case 1:
            Event88:
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:Rest_01'})
            goto Event90
          case 2:
            goto Event88
          case 3:
            goto Event88
        }
    } else {
        if Npc_Road_002.IsArriveAnchorForRain() {
            Npc_Road_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_002:Rest_02'})
            goto Event90
        }
    }
}
