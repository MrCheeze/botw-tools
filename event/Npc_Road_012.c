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
      case 0:
        Event31:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near00'})
      case 1:
        goto Event31
      case 2:
        Event32:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near01'})
      case 3:
        goto Event32
      case 4:
        Event33:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near02'})
      case 5:
        goto Event33
      case 6:
        Event34:
        Npc_Road_012.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Near03'})
      case 7:
        goto Event34
    }
}

void MSG_Gerud_00() {

    call Rest()

    switch Npc_Road_012.CheckActorAction13() {
      case 0:
        Event96:
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
        } else {
            if Npc_Road_012.IsOnInstEventFlag() {
                Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_00_1'})
                goto Event94
            } else {

                call hello()

                Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_00'})
                goto Event94
            }
        }
      case 1:
        goto Event96
      case 2:
        Event105:
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_01_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_01'})
            goto Event94
        }
      case 3:
        goto Event105
      case 4:
        goto Event105
      case 5:
        goto Event105
      case 6:
        goto Event105
      case 7:
        goto Event105
      case 8:
        goto Event105
      case 9:
        goto Event105
      case 10:
        goto Event105
      case 11:
        goto Event105
      case 12:
        goto Event105
      case 13:
        goto Event105
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
    } else {
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_00_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_00'})
            goto Event94
        }
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
      case 0:
        Event106:
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_04_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:RetMSG_Gerud_04'})
            goto Event94
        }
      case 1:
        goto Event106
      case 2:
        Event107:
        if Npc_Road_012.IsOnInstEventFlag() {
            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_03_1'})
            goto Event94
        } else {

            call hello()

            Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:MSG_Gerud_03'})
            goto Event94
        }
      case 3:
        goto Event107
      case 4:
        goto Event107
      case 5:
        goto Event107
      case 6:
        goto Event107
      case 7:
        goto Event107
      case 8:
        goto Event107
      case 9:
        goto Event107
      case 10:
        goto Event107
      case 11:
        goto Event107
      case 12:
        goto Event107
      case 13:
        goto Event107
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
      case 0:
        Event99:
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Talk04'})
      case 1:
        goto Event99
      case 2:
        Event100:
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Talk05'})
      case 3:
        goto Event100
      case 4:
        goto Event100
      case 5:
        Event101:
        Npc_Road_012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_012:Talk06'})
      case 6:
        goto Event101
      case 7:
        goto Event101
    }
}
