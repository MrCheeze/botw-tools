-------- EventFlow: Npc_oasis047 --------

Actor: Npc_oasis047
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckTimeType', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis047_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Strategy'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Defeat'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis047_first_rouge'}) {
                            if Npc_oasis047.IsOnInstEventFlag() {
                                Event24:
                                switch Npc_oasis047.CheckActorAction13() {
                                  case [0, 1]:
                                    Npc_oasis047.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_002'})
                                  case 2:
                                    Npc_oasis047.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_011'})
                                  case 3:
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis003_Patricia'}) {
                                        Npc_oasis047.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_014'})
                                    } else {
                                        Npc_oasis047.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_010'})
                                    }
                                }
                            } else {

                                call hello()

                                goto Event24
                            }
                        } else {

                            call hello()

                            Npc_oasis047.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_013'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis047_first_rouge', 'IsWaitFinish': True})
                        }
                    } else
                    if Npc_oasis047.IsOnInstEventFlag() {
                        Event62:
                        Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_013'})
                    } else {

                        call hello()

                        goto Event62
                    }
                } else
                if Npc_oasis047.IsOnInstEventFlag() {
                    Event57:
                    Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_019'})
                } else {

                    call hello()

                    goto Event57
                }
            } else
            if Npc_oasis047.IsOnInstEventFlag() {
                goto Event57
            } else {

                call hello()

                goto Event57
            }
        } else
        if Npc_oasis047.IsOnInstEventFlag() {
            Event39:
            Npc_oasis047.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_015'})
        } else {

            call hello()

            goto Event39
        }
    } else {

        call hello()

        Npc_oasis047.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_001', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': ''})
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Defeat'}) {
                Event15:
                Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_008', 'ASName': '', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis047_first', 'IsWaitFinish': True})
            } else {
                Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_019'})
            }
        } else {
            goto Event15
        }
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_012'})
      case [2, 3, 4]:
        Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_017'})
      case [5, 6, 7]:
        Npc_oasis047.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis047:Npc_oasis047_018'})
    }
}

void Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckLower': False, 'CheckHead': True, 'CheckType': 'Thunder'}) {
        Npc_oasis047.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis047:Near_Raimei_001', 'DispFrame': 90, 'IsChecked': False})
    }
}
