-------- EventFlow: Npc_Road_032 --------

Actor: Npc_Road_032
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsRest', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_032"), 'Flag': 'Npc_Road_032_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event10:
        Npc_Road_032.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:Near00'})
      case 1:
        goto Event10
      case 2:
        Event11:
        Npc_Road_032.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:Near01'})
      case 3:
        goto Event11
      case 4:
        Event12:
        Npc_Road_032.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:Near02'})
      case 5:
        goto Event12
      case 6:
        Event13:
        Npc_Road_032.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:Near03'})
      case 7:
        goto Event13
    }
}

void MSG_Gerud_00() {

    call First()


    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_0100_1'})
            Event73:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_0100'})
            goto Event73
        }
    } else {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_00_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_00'})
            goto Event73
        }
    }
}

void RetMSG_Gerud_00() {

    call First()


    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_0100_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_0100'})
            goto Event73
        }
    } else {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_00_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_00'})
            goto Event73
        }
    }
}

void MSG_Gerud_01() {

    call First()


    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        Event136:
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_01_3'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_01_2'})
            goto Event73
        }
    } else {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_01_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_01'})
            goto Event73
        }
    }
}

void RetMSG_Gerud_01() {

    call First()


    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        goto Event136
    } else {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_01_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_01'})
            goto Event73
        }
    }
}

void MSG_Gerud_02() {

    call First()


    call Rest()

    if Npc_Road_032.IsOnInstEventFlag() {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_02_1'})
        goto Event73
    } else {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_02'})
        goto Event73
    }
}

void RetMSG_Gerud_02() {

    call First()


    call Rest()

    if Npc_Road_032.IsOnInstEventFlag() {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_02_1'})
        goto Event73
    } else {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_02'})
        goto Event73
    }
}

void MSG_Gerud_03() {

    call First()


    call Rest()

    if Npc_Road_032.IsOnInstEventFlag() {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_03_1'})
        goto Event73
    } else {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_03'})
        goto Event73
    }
}

void RetMSG_Gerud_03() {

    call First()


    call Rest()

    if Npc_Road_032.IsOnInstEventFlag() {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_03_1'})
        goto Event73
    } else {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_03'})
        goto Event73
    }
}

void MSG_Gerud_04() {

    call First()


    call Rest()

    if Npc_Road_032.IsOnInstEventFlag() {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_04_1'})
        goto Event73
    } else {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:MSG_Gerud_04'})
        goto Event73
    }
}

void RetMSG_Gerud_04() {

    call First()


    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_0400_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_0400'})
            goto Event73
        }
    } else {
        if Npc_Road_032.IsOnInstEventFlag() {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_04_1'})
            goto Event73
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:RetMSG_Gerud_04'})
            goto Event73
        }
    }
}

void Rest_End() {
    goto Event73
}

void Rest() {
    if Npc_Road_032.IsRest() {
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:Rest_00'})

        call Rest_End()

    }
}

void First() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_032_first'}) {
            if !Npc_Road_032.IsOnInstEventFlag() {

                call hello()

            }
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:first_00'})
            Event143:
            Npc_Road_032.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_032_first', 'IsWaitFinish': True})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_032_first'}) {
            if !Npc_Road_032.IsOnInstEventFlag() {

                call hello()

            }
        } else {
            Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:first'})
            goto Event143
        }
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event87:
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:hello'})
      case 1:
        goto Event87
      case 2:
        Event88:
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:hello01'})
      case 3:
        goto Event88
      case 4:
        goto Event88
      case 5:
        Event89:
        Npc_Road_032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_032:hello02'})
      case 6:
        goto Event89
      case 7:
        goto Event89
    }
}
