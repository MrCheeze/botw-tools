-------- EventFlow: Npc_Road_027 --------

Actor: Npc_Road_027
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_027({'Self': ActorIdentifier(name="Npc_Road_027"), 'Flag': 'Npc_Road_027_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event10:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near00'})
          case 1:
            goto Event10
          case 2:
            Event11:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near01'})
          case 3:
            goto Event11
          case 4:
            Event12:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near02'})
          case 5:
            goto Event12
          case 6:
            Event13:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near03'})
          case 7:
            goto Event13
        }
      case 1:
        Event9:
        Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near04'})
      case 2:
        goto Event9
      case 3:
        goto Event9
    }
}

void MSG_Orud_00() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case 0:
        Event93:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_00_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_00'})
        }
      case 1:
        goto Event93
      case 2:
        Event98:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_01_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_01'})
        }
      case 3:
        goto Event98
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

void RetMSG_Orud_00() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case 0:
        Event116:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_00_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_00'})
        }
      case 1:
        goto Event116
      case 2:
        Event118:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_01_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_01'})
        }
      case 3:
        goto Event118
      case 4:
        goto Event116
      case 5:
        goto Event116
      case 6:
        goto Event116
      case 7:
        goto Event116
      case 8:
        goto Event116
      case 9:
        goto Event116
      case 10:
        goto Event116
      case 11:
        goto Event116
      case 12:
        goto Event116
      case 13:
        goto Event116
    }
}

void MSG_Orud_01() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case 0:
        Event106:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_03_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_03'})
        }
      case 1:
        goto Event106
      case 2:
        Event100:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_02_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_02'})
        }
      case 3:
        goto Event100
      case 4:
        goto Event106
      case 5:
        goto Event106
      case 6:
        goto Event106
      case 7:
        goto Event106
      case 8:
        goto Event106
      case 9:
        goto Event106
      case 10:
        goto Event106
      case 11:
        goto Event106
      case 12:
        goto Event106
      case 13:
        goto Event106
    }
}

void RetMSG_Orud_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_02_1'})

}

void MSG_Orud_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_027:MSG_Orud_04_1'})

}

void RetMSG_Orud_02() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case 0:
        Event110:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_03_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_03'})
        }
      case 1:
        goto Event110
      case 2:
        goto Event110
      case 3:
        goto Event110
      case 4:
        Event108:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_04_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_04'})
        }
      case 5:
        goto Event108
      case 6:
        goto Event110
      case 7:
        goto Event110
      case 8:
        goto Event110
      case 9:
        goto Event110
      case 10:
        goto Event110
      case 11:
        goto Event110
      case 12:
        goto Event110
      case 13:
        goto Event110
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_027.IsRest() {
        Event52:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Rest_00'})
            Event69:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event54:
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Rest_01'})
            goto Event69
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_027.IsArriveAnchorForRain() {
            Event55:
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Rest_02'})
            goto Event69
        } else {
            if Npc_Road_027.IsOnInstEventFlag() {
                Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
                goto Event69
            } else {
                Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
                goto Event69
            }
        }
    }
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_027.IsRest() {
        goto Event52
    } else {
        if Npc_Road_027.IsArriveAnchorForRain() {
            goto Event55
        }
    }
}
