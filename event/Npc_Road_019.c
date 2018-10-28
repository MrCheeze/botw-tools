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
          case [0, 1]:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near00'})
          case [2, 3]:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near01'})
          case [4, 5]:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near02'})
          case [6, 7]:
            Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_019.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_019:Near04'})
    }
}

void MSG_Futa_04() {

    call Rest()

    Event90:
    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_04_1'})
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_04'})
    }
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
}

void MSG_Futa_03() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_03_1'})
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_03'})
    }
    goto Event40
}

void MSG_Futa_02() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_01_1'})
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_01'})
    }
    goto Event40
}

void MSG_Futa_01() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_02_1'})
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_02'})
    }
    goto Event40
}

void MSG_Futa_00() {

    call Rest()

    switch Npc_Road_019.CheckActorAction13() {
      case [0, 1]:
        if Npc_Road_019.IsOnInstEventFlag() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_00_1'})
        } else {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:MSG_Futa_00'})
        }
        goto Event40
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event99:
        if Npc_Road_019.IsOnInstEventFlag() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_00_1'})
        } else {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_00'})
        }
        goto Event40
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
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_01'})
    }
    goto Event40
}

void RetMSG_Futa_02() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_02_1'})
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_02'})
    }
    goto Event40
}

void RetMSG_Futa_03() {

    call Rest()

    if Npc_Road_019.IsOnInstEventFlag() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_03_1'})
    } else {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_03'})
    }
    goto Event40
}

void RetMSG_Futa_04() {

    call Rest()

    switch Npc_Road_019.CheckActorAction13() {
      case [0, 1]:
        goto Event90
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_019.IsOnInstEventFlag() {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_04_1'})
        } else {
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:RetMSG_Futa_04'})
        }
        goto Event40
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

          case [1, 2, 3]:
            Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Rest_01'})
            goto Event74
        }
    } else
    if Npc_Road_019.IsArriveAnchorForRain() {
        Npc_Road_019.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_019:Rest_02'})
        goto Event74
    }
}
