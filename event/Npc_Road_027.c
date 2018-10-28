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
          case [0, 1]:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near00'})
          case [2, 3]:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near01'})
          case [4, 5]:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near02'})
          case [6, 7]:
            Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Near04'})
    }
}

void MSG_Orud_00() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case [0, 1]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_00_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_00'})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_01_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_01'})
        }
    }
}

void RetMSG_Orud_00() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_00_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_00'})
        }
      case [2, 3]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_01_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_01'})
        }
    }
}

void MSG_Orud_01() {

    call Rest2()

    switch Npc_Road_027.CheckActorAction13() {
      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_03_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_03'})
        }
      case [2, 3]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_02_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:MSG_Orud_02'})
        }
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
      case [0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_03_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_03'})
        }
      case [4, 5]:
        if Npc_Road_027.IsOnInstEventFlag() {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_04_1'})
        } else {
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:RetMSG_Orud_04'})
        }
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
          case [1, 2, 3]:
            Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Rest_01'})
            goto Event69
        }
    } else
    if Npc_Road_027.IsArriveAnchorForRain() {
        Event55:
        Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_027:Rest_02'})
        goto Event69
    } else
    if Npc_Road_027.IsOnInstEventFlag() {
        Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
    } else {
        Npc_Road_027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    }
    goto Event69
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_027.IsRest() {
        goto Event52
    } else
    if Npc_Road_027.IsArriveAnchorForRain() {
        goto Event55
    }
}
