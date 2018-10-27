-------- EventFlow: TwnObj_Village_SheikerHeirDiary_A_01 --------

Actor: Npc_Kakariko002
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerHeirDiary_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_002in002house'}) {
        switch Npc_Kakariko002.CheckActorAction13() {
          case 0:
            Event77:

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko002")})

            Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk25', 'ASName': 'Talk_Surprised', 'IsWaitFinish': True})
            Npc_Kakariko002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk26', 'ASName': 'Talk_Shy'})
          case 1:
            goto Event77
          case 2:
            goto Event77
          case 3:
            goto Event77
          case 4:
            goto Event77
          case 5:
            goto Event77
          case 6:
            goto Event77
          case 7:
            goto Event77
          case 8:
            goto Event77
          case 9:
            goto Event77
          case 10:
            goto Event77
          case 11:
            Event79:

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_Finish'}) {
                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:DiaryFirst'})
                if !EventSystemActor.GeneralChoice3() {
                    Event62:
                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary08'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event61:
                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary09'})
                        if !EventSystemActor.GeneralChoice3() {
                            Event59:
                            TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary10', 'IsBecomingSpeaker': True})
                            if !EventSystemActor.GeneralChoice3() {
                                Event58:
                                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary11', 'IsBecomingSpeaker': True})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event63:
                                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary12', 'IsBecomingSpeaker': True})
                                    if !EventSystemActor.GeneralChoice3() {
                                        Event70:
                                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary00'})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event63
                                        }
                                    } else {
                                        goto Event58
                                    }
                                } else {
                                    goto Event59
                                }
                            } else {
                                goto Event61
                            }
                        } else {
                            goto Event62
                        }
                    }
                } else {
                    goto Event70
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_3rdClear'}) {
                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:DiaryFirst'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event43:
                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary08', 'IsBecomingSpeaker': True})
                        if !EventSystemActor.GeneralChoice2() {
                            Event44:
                            TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary09', 'IsBecomingSpeaker': True})
                            if !EventSystemActor.GeneralChoice3() {
                                Event46:
                                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary10', 'IsBecomingSpeaker': True})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event47:
                                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary11', 'IsBecomingSpeaker': True})
                                    if !EventSystemActor.GeneralChoice3() {
                                        Event50:
                                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary05', 'IsBecomingSpeaker': True})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event47
                                        }
                                    } else {
                                        goto Event46
                                    }
                                } else {
                                    goto Event44
                                }
                            } else {
                                goto Event43
                            }
                        }
                    } else {
                        goto Event50
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_2ndClear'}) {
                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:DiaryFirst'})
                        if !EventSystemActor.GeneralChoice3() {
                            Event34:
                            TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary08', 'IsBecomingSpeaker': True})
                            if !EventSystemActor.GeneralChoice2() {
                                Event35:
                                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary09', 'IsBecomingSpeaker': True})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event37:
                                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary10', 'IsBecomingSpeaker': True})
                                    if !EventSystemActor.GeneralChoice3() {
                                        Event39:
                                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary04', 'IsBecomingSpeaker': True})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event37
                                        }
                                    } else {
                                        goto Event35
                                    }
                                } else {
                                    goto Event34
                                }
                            }
                        } else {
                            goto Event39
                        }
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_1stClear'}) {
                            TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:DiaryFirst'})
                            if !EventSystemActor.GeneralChoice3() {
                                Event26:
                                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary08', 'IsBecomingSpeaker': True})
                                if !EventSystemActor.GeneralChoice2() {
                                    Event27:
                                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary09', 'IsBecomingSpeaker': True})
                                    if !EventSystemActor.GeneralChoice3() {
                                        Event29:
                                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary03', 'IsBecomingSpeaker': True})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event27
                                        }
                                    } else {
                                        goto Event26
                                    }
                                }
                            } else {
                                goto Event29
                            }
                        } else {
                            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Repaired'}) {
                                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:DiaryFirst'})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event23:
                                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary08', 'IsBecomingSpeaker': True})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Event24:
                                        TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary01', 'IsBecomingSpeaker': True})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event23
                                        }
                                    }
                                } else {
                                    goto Event24
                                }
                            } else {
                                TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:DiaryFirst_ch2'})
                                if !EventSystemActor.GeneralChoice2() {
                                    TwnObj_Village_SheikerHeirDiary_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Diary02', 'IsBecomingSpeaker': True})
                                }
                            }
                        }
                    }
                }
            }
          case 12:
            goto Event77
          case 13:
            goto Event79
        }
    } else {
        goto Event79
    }
}
