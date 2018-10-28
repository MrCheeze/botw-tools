-------- EventFlow: Npc_Road_030 --------

Actor: Npc_Road_030
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_030"), 'Flag': 'Npc_Road_030_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Road_030.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Near00'})
      case [2, 3]:
        Npc_Road_030.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Near01'})
      case [4, 5]:
        Npc_Road_030.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Near02'})
      case [6, 7]:
        Npc_Road_030.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Near03'})
    }
}

void MSG_Gerud_00() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_00_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_00'})
    }
    Event33:
    Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Talk01'})
    Event27:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_030")})

        Event41:
        Npc_Road_030.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Talk02'})
        goto Event27
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_030")})

        goto Event41
      case 2:
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_030:GoodBye00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void RetMSG_Gerud_00() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_00_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_00'})
    }
    goto Event33
}

void MSG_Gerud_01() {

    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        Event93:
        if Npc_Road_030.IsOnInstEventFlag() {
            Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_01_3'})
        } else {
            Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_01_2'})
        }
        goto Event33
    } else
    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_01_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_01'})
    }
    goto Event33
}

void RetMSG_Gerud_01() {

    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        goto Event93
    } else
    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_01_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_01'})
    }
    goto Event33
}

void MSG_Gerud_02() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_02_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_02'})
    }
    goto Event33
}

void RetMSG_Gerud_02() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_02_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_02'})
    }
    goto Event33
}

void MSG_Gerud_03() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_03_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_03'})
    }
    goto Event33
}

void RetMSG_Gerud_03() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_03_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_03'})
    }
    goto Event33
}

void MSG_Gerud_04() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_04_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:MSG_Gerud_04'})
    }
    goto Event33
}

void RetMSG_Gerud_04() {

    call Rest()

    if Npc_Road_030.IsOnInstEventFlag() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_04_1'})
    } else {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:RetMSG_Gerud_04'})
    }
    goto Event33
}

void Rest_End() {
    goto Event33
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_030.IsRest() {
        Npc_Road_030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_030:Rest_00'})

        call Rest_End()

    }
}
