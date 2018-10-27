-------- EventFlow: Obj_Diary_touzoku_01 --------

Actor: Obj_Diary_touzoku_01
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt']
queries: ['GeneralChoice3', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_00'})
    if !EventSystemActor.GeneralChoice3() {
        Event3:
        Obj_Diary_touzoku_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_01'})
        if !EventSystemActor.GeneralChoice2() {
            Event5:
            Obj_Diary_touzoku_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_02'})
            if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku01_Activated'}) {
                Event18:
                if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku01_Step01'}) {
                    Event6:
                    if !EventSystemActor.GeneralChoice3() {
                        Event7:
                        Obj_Diary_touzoku_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_03'})
                        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku03_Activated'}) {
                            Event19:
                            if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku03_Step01'}) {
                                Event8:
                                if !EventSystemActor.GeneralChoice3() {
                                    Event9:
                                    Obj_Diary_touzoku_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_04'})
                                    if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku02_Activated'}) {
                                        Event20:
                                        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku02_Step01'}) {
                                            Event10:
                                            if !EventSystemActor.GeneralChoice3() {
                                                Event11:
                                                Obj_Diary_touzoku_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_05'})
                                                if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku04_Activated'}) {
                                                    Event21:
                                                    if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku04_Step01'}) {
                                                        Event12:
                                                        if !EventSystemActor.GeneralChoice3() {
                                                            Event13:
                                                            Obj_Diary_touzoku_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_01:Diary_06'})
                                                            if !EventSystemActor.GeneralChoice2() {
                                                                goto Event11
                                                            }
                                                        } else {
                                                            goto Event9
                                                        }
                                                    } else {
                                                        EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku04_Step01', 'IsWaitFinish': True})
                                                        goto Event12
                                                    }
                                                } else {
                                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku04_Activated'})
                                                    goto Event21
                                                }
                                            } else {
                                                goto Event7
                                            }
                                        } else {
                                            EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku02_Step01', 'IsWaitFinish': True})
                                            goto Event10
                                        }
                                    } else {
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku02_Activated'})
                                        goto Event20
                                    }
                                } else {
                                    goto Event5
                                }
                            } else {
                                EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku03_Step01', 'IsWaitFinish': True})
                                goto Event8
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku03_Activated'})
                            goto Event19
                        }
                    } else {
                        goto Event3
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt_touzoku01_Step01', 'IsWaitFinish': True})
                    goto Event6
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku01_Activated'})
                goto Event18
            }
        }
    } else {
        goto Event13
    }
}

void TreasureHunt_touzoku03_RemainingBox() {
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'TreasureHunt_touzoku03_RemainingBox'})
}

void TreasureHunt_touzoku04_RemainingBox() {
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'TreasureHunt_touzoku04_RemainingBox'})
}
