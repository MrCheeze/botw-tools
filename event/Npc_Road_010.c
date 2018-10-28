-------- EventFlow: Npc_Road_010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_010"), 'Flag': 'Npc_Road_010_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case [0, 2]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Near00'})
          case [2, 3]:
            Npc_Road_010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Near01'})
          case [4, 5]:
            Npc_Road_010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Near02'})
          case [6, 7]:
            Npc_Road_010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Near03'})
        }
      case [1, 3]:
        Npc_Road_010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Near04'})
    }
}

void MSG_Kyu_00() {

    call Rain()

    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_00_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_00'})
    }
    Event47:
    Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Talk01'})
    Event41:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_010")})

        Event55:
        Npc_Road_010.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Talk02'})
        goto Event41
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_010")})

        goto Event55
      case 2:
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_010:GoodBye00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void RetMSG_Kyu_00() {

    call Rest()

    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_01_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_01'})
    }
    goto Event47
}

void MSG_Kyu_01() {

    call Rest()

    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_00_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_00'})
    }
    goto Event47
}

void RetMSG_Kyu_01() {

    call Rest()

    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_02_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_02'})
    }
    goto Event47
}

void MSG_Kyu_02() {

    call Rain()

    switch Npc_Road_010.CheckActorAction13() {
      case [0, 1]:
        Event96:
        if Npc_Road_010.IsOnInstEventFlag() {
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_02_1'})
        } else {
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_02'})
        }
        goto Event47
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_010.IsOnInstEventFlag() {
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_04_1'})
        } else {
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_04'})
        }
        goto Event47
    }
}

void RetMSG_Kyu_02() {

    call Rain()

    switch Npc_Road_010.CheckActorAction13() {
      case [0, 1]:
        goto Event96
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_010.IsOnInstEventFlag() {
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_01_1'})
        } else {
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_01'})
        }
        goto Event47
    }
}

void MSG_Kyu_03() {

    call Rest()

    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_03_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_03'})
    }
    goto Event47
}

void RetMSG_Kyu_03() {

    call Rest()

    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_03_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:RetMSG_Kyu_03'})
    }
    goto Event47
}

void MSG_Kyu_04() {

    call Rest()

    Event91:
    if Npc_Road_010.IsOnInstEventFlag() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_04_1'})
    } else {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:MSG_Kyu_04'})
    }
    goto Event47
}

void RetMSG_Kyu_04() {

    call Rain()

    goto Event91
}

void Rest_End() {
    goto Event47
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_010.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case [0, 2]:
            Event67:
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Rest_00'})
            Event70:

            call Rest_End()

          case [1, 3]:
            Event68:
            Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Rest_01'})
            goto Event70
        }
    } else
    if Npc_Road_010.IsArriveAnchorForRain() {
        Npc_Road_010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_010:Rest_02'})
        goto Event70
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case [1, 3]:
        goto Event68
      case 2:
        goto Event67
    }
}
