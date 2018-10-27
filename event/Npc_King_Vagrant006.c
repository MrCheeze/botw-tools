-------- EventFlow: Npc_King_Vagrant006 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckPlayerState', 'CheckTimeType', 'CheckGameDataInt', 'GeneralChoice2', 'CheckE3Mode']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Vagrant006
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_Talk'}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 3}) {
            Npc_King_Vagrant006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Near01', 'IsChecked': False, 'DispFrame': 90})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 2}) {
            Npc_King_Vagrant006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Near02', 'IsChecked': False, 'DispFrame': 90})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 1, 'Operator': 'Equal'}) {
            Npc_King_Vagrant006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Near03', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Event2:
            Npc_King_Vagrant006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        }
    } else {
        goto Event2
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_Talk_Kotsu'}) {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 2, 'Operator': 'GreaterThanOrEqualTo'}) {
                if Npc_King_Vagrant006.IsOnInstEventFlag() {
                    Event134:
                    Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    Event139:
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'GreaterThanOrEqualTo', 'Value': 3}) {
                            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Clear3_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            Event129:
                            if !EventSystemActor.GeneralChoice2() {
                                switch EventSystemActor.CheckE3Mode() {
                                  case 0:
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_Talk_Kotsu'}) {
                                        Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Kotsu02'})
                                    } else {
                                        Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Kotsu00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})

                                        call OperationGuide.Guide_SystemMenu()

                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_PadMenu'})
                                        Event176:
                                        Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Kotsu01'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant006_Talk_Kotsu'})
                                    }
                                  case [1, 2, 3]:
                                    goto Event176
                                }
                            } else {
                                Event146:

                                call GoodBye()

                            }
                        } else
                        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 2, 'Operator': 'GreaterThanOrEqualTo'}) {
                            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Clear2_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event129
                        } else {
                            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Clear1_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event129
                        }
                    } else {
                        goto Event146
                    }
                } else
                if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                    Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    Event161:
                    Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event139
                } else
                switch EventSystemActor.CheckTimeType() {
                  case [0, 1, 2, 3]:
                    goto Event134
                  case [4, 5]:
                    Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event161
                  case [6, 7]:
                    Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event161
                }
            } else {
                Event126:
                Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event129
            }
        } else {
            goto Event126
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 2, 'Operator': 'GreaterThanOrEqualTo'}) {
        Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk07'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant003_Talk'}) {
            Event121:
            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event166:
            Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk14'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant006_Talk', 'IsWaitFinish': True})
            Npc_King_Vagrant006.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
        } else {
            Event122:
            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk10', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

            call OperationGuide.Guide_Scope()

            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk11', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_Talk_ToshinoKou'}) {
                    Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk13'})
                    goto Event166
                } else {
                    Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk12'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant006_Talk_ToshinoKou'})
                    goto Event166
                }
            } else {
                goto Event166
            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_TooLate'}) {
        Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Event120:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant003_Talk'}) {
                goto Event121
            } else {
                Event118:
                Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk08'})
                goto Event122
            }
        } else {
            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event120
        }
    } else {
        Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk01'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant006_Talk_ToshinoKou'})
            goto Event118
        } else {
            Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:FirstTalk02'})
            goto Event118
        }
    }
}

void GoodBye() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant006_TooLate'}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 3, 'Operator': 'GreaterThanOrEqualTo'}) {
            Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:GoodBye03'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 2, 'Operator': 'GreaterThanOrEqualTo'}) {
            Npc_King_Vagrant006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:GoodBye02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } else {
            Event91:
            Npc_King_Vagrant006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant006:GoodBye01'})
        }
    } else {
        goto Event91
    }
}
