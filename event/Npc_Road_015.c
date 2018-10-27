-------- EventFlow: Npc_Road_015 --------

Actor: Npc_Road_015
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_015"), 'Flag': 'Npc_Road_015_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event1:
            Npc_Road_015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_015:Near00', 'DispFrame': 90, 'IsChecked': False})
          case 1:
            goto Event1
          case 2:
            Event5:
            Npc_Road_015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_015:Near01', 'DispFrame': 90, 'IsChecked': False})
          case 3:
            goto Event5
          case 4:
            Event6:
            Npc_Road_015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_015:Near02', 'DispFrame': 90, 'IsChecked': False})
          case 5:
            goto Event6
          case 6:
            Event7:
            Npc_Road_015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_015:Near03', 'DispFrame': 90, 'IsChecked': False})
          case 7:
            goto Event7
        }
      case 1:
        Event4:
        Npc_Road_015.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_015:Near04'})
      case 2:
        goto Event4
      case 3:
        goto Event4
    }
}

void MSG_Firo_00() {

    call Rest()

    switch Npc_Road_015.CheckActorAction13() {
      case 0:
        Event88:
        if Npc_Road_015.IsOnInstEventFlag() {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_00_1'})
            Event40:
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:Talk01'})
            Event34:
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_015")})

                Event48:
                Npc_Road_015.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:Talk02'})
                goto Event34
              case 1:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_015")})

                goto Event48
              case 2:
                Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_015:GoodBye00'})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_00'})
            goto Event40
        }
      case 1:
        goto Event88
      case 2:
        Event93:
        if Npc_Road_015.IsOnInstEventFlag() {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_00_1'})
            goto Event40
        } else {
            Npc_Road_015.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_00', 'IsWaitFinish': True})
            goto Event40
        }
      case 3:
        goto Event93
      case 4:
        goto Event93
      case 5:
        goto Event93
      case 6:
        goto Event93
      case 7:
        goto Event93
      case 8:
        goto Event93
      case 9:
        goto Event93
      case 10:
        goto Event93
      case 11:
        goto Event93
      case 12:
        goto Event93
      case 13:
        goto Event93
    }
}

void RetMSG_Firo_00() {

    call Rain()

    switch Npc_Road_015.CheckActorAction13() {
      case 0:
        goto Event88
      case 1:
        goto Event88
      case 2:
        goto Event93
      case 3:
        goto Event93
      case 4:
        goto Event93
      case 5:
        goto Event93
      case 6:
        goto Event93
      case 7:
        goto Event93
      case 8:
        goto Event93
      case 9:
        goto Event93
      case 10:
        goto Event93
      case 11:
        goto Event93
      case 12:
        goto Event93
      case 13:
        goto Event93
    }
}

void MSG_Firo_01() {

    call Rest()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_03_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_03'})
        goto Event40
    }
}

void RetMSG_Firo_01() {

    call Rest()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_01_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_01'})
        goto Event40
    }
}

void MSG_Firo_02() {

    call Rain()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_02_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_02'})
        goto Event40
    }
}

void RetMSG_Firo_02() {

    call Rain()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_02_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_02'})
        goto Event40
    }
}

void MSG_Firo_03() {

    call Rest()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_01_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_01'})
        goto Event40
    }
}

void RetMSG_Firo_03() {

    call Rest()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_02_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_02'})
        goto Event40
    }
}

void MSG_Firo_04() {

    call Rain()

    switch Npc_Road_015.CheckActorAction13() {
      case 0:
        Event84:
        if Npc_Road_015.IsOnInstEventFlag() {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_04_1'})
            goto Event40
        } else {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:MSG_Firo_04'})
            goto Event40
        }
      case 1:
        goto Event84
      case 2:
        Event114:
        if Npc_Road_015.IsOnInstEventFlag() {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_04_1'})
            goto Event40
        } else {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_04'})
            goto Event40
        }
      case 3:
        goto Event114
      case 4:
        goto Event114
      case 5:
        goto Event114
      case 6:
        goto Event114
      case 7:
        goto Event114
      case 8:
        goto Event114
      case 9:
        goto Event114
      case 10:
        goto Event114
      case 11:
        goto Event114
      case 12:
        goto Event114
      case 13:
        goto Event114
    }
}

void RetMSG_Firo_04() {

    call Rest()

    if Npc_Road_015.IsOnInstEventFlag() {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_03_1'})
        goto Event40
    } else {
        Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:RetMSG_Firo_03'})
        goto Event40
    }
}

void Rest_End() {
    goto Event40
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_015.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:Rest_00'})
            Event63:

            call Rest_End()

          case 1:
            Event61:
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:Rest_01'})
            goto Event63
          case 2:
            goto Event61
          case 3:
            goto Event61
        }
    } else {
        if Npc_Road_015.IsArriveAnchorForRain() {
            Npc_Road_015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_015:Rest_02'})
            goto Event63
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event61
      case 2:
        goto Event61
      case 3:
        goto Event61
    }
}
