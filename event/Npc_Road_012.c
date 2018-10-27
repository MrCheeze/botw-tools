-------- EventFlow: Npc_Road_012 --------

Actor: Npc_Road_012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_012"), 'Flag': 'Npc_Road_012_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near00'})
      case [2, 3]:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near01'})
      case [4, 5]:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near02'})
      case [6, 7]:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near03'})
    }
}

void MSG_Gerud_00() {

    call Rest()

    switch Npc_Road_012.CheckActorAction13() {
      case [0, 1]:
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
            if Npc_Road_012.IsOnInstEventFlag() {
                Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_0100_1'})
                Event94:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {

                call hello()

                Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_0100'})
                goto Event94
            }
        } else
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_00_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_00'})
            goto Event94
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event105:
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_01_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_01'})
            goto Event94
        }
    }
}

void RetMSG_Gerud_00() {

    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_0100_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_0100'})
            goto Event94
        }
    } else
    if Npc_Road_012.IsOnInstEventFlag() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_00_1'})
        goto Event94
    } else {

        call hello()

        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_00'})
        goto Event94
    }
}

void MSG_Gerud_01() {

    call Rest()

    goto Event105
}

void RetMSG_Gerud_01() {

    call Rest()

    if Npc_Road_012.IsOnInstEventFlag() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_01_1'})
        goto Event94
    } else {

        call hello()

        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_01'})
        goto Event94
    }
}

void MSG_Gerud_02() {

    call Rest()

    if Npc_Road_012.IsOnInstEventFlag() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_02_1'})
        goto Event94
    } else {

        call hello()

        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_02'})
        goto Event94
    }
}

void RetMSG_Gerud_02() {

    call Rest()

    if Npc_Road_012.IsOnInstEventFlag() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_02_1'})
        goto Event94
    } else {

        call hello()

        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_02'})
        goto Event94
    }
}

void MSG_Gerud_03() {

    call Rest()

    if Npc_Road_012.IsOnInstEventFlag() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_03_1'})
        goto Event94
    } else {

        call hello()

        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_03'})
        goto Event94
    }
}

void RetMSG_Gerud_03() {

    call Rest()

    switch Npc_Road_012.CheckActorAction13() {
      case [0, 1]:
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_04_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_04'})
            goto Event94
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_03_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_03'})
            goto Event94
        }
    }
}

void MSG_Gerud_04() {

    call Rest()

    if Npc_Road_012.IsOnInstEventFlag() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_04_1'})
        goto Event94
    } else {

        call hello()

        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_04'})
        goto Event94
    }
}

void Rest_End() {
    goto Event94
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_012.IsRest() {
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Rest_00'})

        call Rest_End()

    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Talk04'})
      case [2, 3, 4]:
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Talk05'})
      case [5, 6, 7]:
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Talk06'})
    }
}
