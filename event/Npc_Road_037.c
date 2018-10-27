-------- EventFlow: Npc_Road_037 --------

Actor: Npc_Road_037
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13', 'CheckMapArea', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_037"), 'Flag': 'Npc_Road_037_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        if Npc_Road_037.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
            if Npc_Road_037.CheckMapArea({'MapAreaName': 'HeburaMountains'}) {
                Event12:
                Npc_Road_037.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Near02'})
            } else {
                Event13:
                Npc_Road_037.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Near03'})
            }
        } else
        if Npc_Road_037.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
            goto Event12
        } else
        if Npc_Road_037.CheckActorAction({'ActionName': 'Root/Timeline/Action3/到着'}) {
            goto Event13
        } else {
            Npc_Road_037.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Near00'})
        }
      case [1, 2, 3]:
        Npc_Road_037.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Near04'})
    }
}

void MSG_Taba_00() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_01_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_01'})
    }
}

void RetMSG_Taba_00() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_00_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_00'})
    }
}

void MSG_Taba_01() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_01_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_01'})
    }
}

void RetMSG_Taba_01() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_02_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_02'})
    }
}

void MSG_Taba_02() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_03_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_03'})
    }
}

void RetMSG_Taba_02() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_00_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_00'})
    }
}

void MSG_Taba_03() {

    call Rest()

    Event79:
    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_03_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_03'})
    }
}

void RetMSG_Taba_03() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_02_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_02'})
    }
}

void MSG_Taba_04() {

    call Rest()

    switch Npc_Road_037.CheckActorAction13() {
      case [0, 1]:
        if Npc_Road_037.IsOnInstEventFlag() {
            Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_04_1'})
        } else {
            Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:MSG_Taba_04'})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        goto Event79
    }
}

void RetMSG_Taba_04() {

    call Rest()

    if Npc_Road_037.IsOnInstEventFlag() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_04_1'})
    } else {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:RetMSG_Taba_04'})
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_037.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Rest_00'})
            Event73:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case [1, 2, 3]:
            Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Rest_01'})
            goto Event73
        }
    } else
    if Npc_Road_037.IsArriveAnchorForRain() {
        Npc_Road_037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_037:Rest_02'})
        goto Event73
    }
}
