-------- EventFlow: Obj_Diary_touzoku_02 --------

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt']
queries: ['GeneralChoice3', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_Diary_touzoku_02
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_00'})
    if !EventSystemActor.GeneralChoice3() {
        Event3:
        Obj_Diary_touzoku_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_01'})
        if !EventSystemActor.GeneralChoice2() {
            Event5:
            Obj_Diary_touzoku_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_02'})
            if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku05_Activated'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku05_Activated'})
            }
            if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku05_Step01'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku05_Step01'})
            }
            if !EventSystemActor.GeneralChoice3() {
                Event7:
                Obj_Diary_touzoku_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_03'})
                if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku06_Activated'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku06_Activated'})
                }
                if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku06_Step01'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku06_Step01'})
                }
                if !EventSystemActor.GeneralChoice3() {
                    Event9:
                    Obj_Diary_touzoku_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_04'})
                    if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku07_Activated'}) {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku07_Activated'})
                    }
                    if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku07_Step01'}) {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku07_Step01'})
                    }
                    if !EventSystemActor.GeneralChoice3() {
                        Event11:
                        Obj_Diary_touzoku_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_05'})
                        if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku08_Activated'}) {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku08_Activated'})
                        }
                        if !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_touzoku08_Step01'}) {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_touzoku08_Step01'})
                        }
                        if !EventSystemActor.GeneralChoice3() {
                            Event13:
                            Obj_Diary_touzoku_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_Diary_touzoku_02:Diary_06'})
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event11
                            }
                        } else {
                            goto Event9
                        }
                    } else {
                        goto Event7
                    }
                } else {
                    goto Event5
                }
            } else {
                goto Event3
            }
        }
    } else {
        goto Event13
    }
}

void TreasureHunt_touzoku08_RemainingBox() {
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'TreasureHunt_touzoku08_RemainingBox'})
}
