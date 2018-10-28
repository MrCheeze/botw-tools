-------- EventFlow: Npc_Road_011 --------

Actor: Npc_Road_011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'CheckEquipArmorSeriesType', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_011"), 'Flag': 'Npc_Road_011_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Road_011.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:Near00'})
      case [2, 3]:
        Npc_Road_011.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:Near01'})
      case [4, 5, 6, 7]:
        Npc_Road_011.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:Near02'})
    }
}

void MSG_Gerud_00() {

    call First()


    call Rest()

    if Npc_Road_011.IsOnInstEventFlag() {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_00_1'})
    } else {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_00'})
    }
    Event83:
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void RetMSG_Gerud_00() {

    call First()


    call Rest()

    if Npc_Road_011.IsOnInstEventFlag() {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_00_1'})
    } else {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_00'})
    }
    Event141:
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void MSG_Gerud_01() {

    call First()


    call Rest()

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_01_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_01'})
        }
        goto Event83
    } else
    if Npc_Road_011.IsOnInstEventFlag() {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_05_1'})
    } else {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_05'})
    }
    goto Event83
}

void RetMSG_Gerud_01() {

    call First()


    call Rest()

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_01_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_01'})
        }
        goto Event141
    } else {

        call boy()

        goto Event141
    }
}

void MSG_Gerud_02() {

    call First()


    call Rest()

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
            if Npc_Road_011.IsOnInstEventFlag() {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_02_1'})
            } else {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_02'})
            }
            goto Event83
        } else
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_06_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_06'})
        }
        goto Event83
    } else {

        call boy()

        goto Event83
    }
}

void RetMSG_Gerud_02() {

    call First()


    call Rest()

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
            if Npc_Road_011.IsOnInstEventFlag() {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_02_1'})
            } else {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_02'})
            }
            goto Event141
        } else
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_06_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_06'})
        }
        goto Event141
    } else {

        call boy()

        goto Event141
    }
}

void MSG_Gerud_03() {

    call First()


    call Rest()

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_03_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_03'})
        }
        goto Event83
    } else {

        call boy()

        goto Event83
    }
}

void RetMSG_Gerud_03() {

    call First()


    call Rest()

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_03_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_03'})
        }
        goto Event141
    } else {

        call boy()

        goto Event141
    }
}

void MSG_Gerud_04() {

    call First()


    call Rest()

    switch Npc_Road_011.CheckActorAction13() {
      case [0, 1]:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
            if Npc_Road_011.IsOnInstEventFlag() {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_04_1'})
            } else {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:MSG_Gerud_04'})
            }
            goto Event83
        } else {

            call boy()

            goto Event83
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event123:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
            if Npc_Road_011.IsOnInstEventFlag() {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_04_1'})
            } else {
                Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:RetMSG_Gerud_04'})
            }
            goto Event141
        } else {

            call boy()

            goto Event141
        }
    }
}

void RetMSG_Gerud_04() {

    call First()


    call Rest()

    goto Event123
}

void Rest_End() {
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void Rest() {
    if Npc_Road_011.IsRest() {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:Rest_00'})

        call Rest_End()

    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:hello'})
      case [2, 3, 4]:
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:hello_00'})
      case [5, 6, 7]:
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:hello_01'})
    }
}

void First() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_011_first_girl'}) {
            if !Npc_Road_011.IsOnInstEventFlag() {

                call hello()

            }
        } else {

            call hello()

            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_011_first_girl', 'IsWaitFinish': True})
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_05'})
            Event157:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_011_first_boy'}) {
        if !Npc_Road_011.IsOnInstEventFlag() {

            call hello()

        }
    } else {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_011_first_boy', 'IsWaitFinish': True})

        call hello()

        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_00', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_02'})
            goto Event157
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_01'})
            goto Event157
        }
    }
}

void boy() {
    Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_03'})
    if !EventSystemActor.GeneralChoice2() {
        if Npc_Road_011.IsOnInstEventFlag() {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_04_1'})
        } else {
            Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_04'})
        }
    } else
    if Npc_Road_011.IsOnInstEventFlag() {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_01_1'})
    } else {
        Npc_Road_011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_011:first_01'})
    }
}
