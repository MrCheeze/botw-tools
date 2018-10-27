-------- EventFlow: Npc_oasis036 --------

Actor: Npc_oasis036
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'CheckTimeType', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis028
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
        EventSystemActor.Demo_CallDemo({'EndFade': 1, 'DemoName': 'Npc_oasis036', 'EntryPointName': 'TalkExistOasis028', 'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_CallDemo({'EndFade': 1, 'DemoName': 'Npc_oasis036', 'EntryPointName': 'TalkWithoutOasis028', 'IsWaitFinish': True})
    }
}

void Electric_Relic_Deliver_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
        EventSystemActor.Demo_CallDemo({'EndFade': 1, 'DemoName': 'Npc_oasis036', 'IsWaitFinish': True, 'EntryPointName': 'Electric_Relic_Deliver_TalkExistOasis028'})
    } else {
        EventSystemActor.Demo_CallDemo({'EndFade': 1, 'DemoName': 'Npc_oasis036', 'IsWaitFinish': True, 'EntryPointName': 'Electric_Relic_Deliver_TalkWithoutOasis028'})
    }
}

void Electric_Relic_Defeat_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
        EventSystemActor.Demo_CallDemo({'EndFade': 1, 'DemoName': 'Npc_oasis036', 'IsWaitFinish': True, 'EntryPointName': 'Electric_Relic_Defeat_TalkExistOasis028'})
    } else {
        EventSystemActor.Demo_CallDemo({'EndFade': 1, 'DemoName': 'Npc_oasis036', 'IsWaitFinish': True, 'EntryPointName': 'Electric_Relic_Defeat_TalkWithoutOasis028'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_30'})
      case [2, 3, 4]:
        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_31'})
      case [5, 6, 7]:
        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_32'})
    }
}

void Electric_Relic_Finished_Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckLower': False, 'CheckHead': True, 'CheckType': 'Thunder'}) {
        Npc_oasis036.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Near_Raimei_001', 'DispFrame': 90, 'IsChecked': False})
    }
}

void TalkExistOasis028() {
    Npc_oasis028.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

    call TalkWithoutOasis028()

}

void TalkWithoutOasis028() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
            if Npc_oasis036.IsOnInstEventFlag() {
                Event126:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis036_first'}) {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_25', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SandWarm_Finish'}) {
                        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_18'})
                    }
                } else {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_16', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SandWarm_Finish'}) {
                        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_18'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis036_first', 'IsWaitFinish': True})
                    }
                }
            } else {

                call hello()

                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_17'})
                goto Event126
            }
        } else
        if Npc_oasis036.IsOnInstEventFlag() {
            Event124:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis036_first'}) {
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_25'})
            } else {
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_16'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis036_first', 'IsWaitFinish': True})
            }
        } else {

            call hello()

            goto Event124
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SandWarm_Finish'}) {
            if Npc_oasis036.IsOnInstEventFlag() {
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_29'})
                Event23:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_06'})
                } else {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_07'})
                }
            } else {

                call hello()

                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_28'})
                goto Event23
            }
        } else
        if Npc_oasis036.IsOnInstEventFlag() {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_14'})
            goto Event23
        } else {

            call hello()

            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_05'})
            goto Event23
        }
    } else
    if Npc_oasis036.IsOnInstEventFlag() {
        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_15'})
        Event11:
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_06'})
        } else {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_07'})
        }
    } else {

        call hello()

        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event11
    }
}

void Electric_Relic_Deliver_TalkExistOasis028() {
    Npc_oasis028.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

    call Electric_Relic_Deliver_TalkWithoutOasis028()

}

void Electric_Relic_Deliver_TalkWithoutOasis028() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Defeat'}) {
        if Npc_oasis036.IsOnInstEventFlag() {
            Event137:
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_26'})
        } else {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_27'})
            goto Event137
        }
    } else
    if Npc_oasis036.IsOnInstEventFlag() {
        Event55:
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis036_Deliver_first'}) {
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_21'})
                Event67:
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_13'})
            } else {
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_08'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis036_Deliver_first', 'IsWaitFinish': True})
                goto Event67
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis036_Deliver_first'}) {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_21'})
        } else {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_08'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis036_Deliver_first', 'IsWaitFinish': True})
        }
    } else {

        call hello()

        goto Event55
    }
}

void Electric_Relic_Defeat_TalkExistOasis028() {
    Npc_oasis028.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

    call Electric_Relic_Defeat_TalkWithoutOasis028()

}

void Electric_Relic_Defeat_TalkWithoutOasis028() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_oasis036.IsOnInstEventFlag() {
        Event110:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis036_Clear_first'}) {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_22'})
            Event38:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_23'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_24'})
                    Event119:
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
                        Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_02'})
                        Event121:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis036_Clear_first', 'IsWaitFinish': True})
                    } else {
                        goto Event121
                    }
                } else
                Event113:
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_oasis036and028'}) {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_02'})
                    Event112:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis036_Clear_first', 'IsWaitFinish': True})
                } else {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_11'})
                    goto Event112
                }
              case 1:
                Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_10', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_09'})
                    goto Event119
                } else
                goto Event113
              case 2:
                goto Event113
            }
        } else {
            Npc_oasis036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis036:Talk_12'})
            goto Event38
        }
    } else {

        call hello()

        goto Event110
    }
}
