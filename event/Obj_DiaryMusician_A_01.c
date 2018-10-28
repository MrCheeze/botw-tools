-------- EventFlow: Obj_DiaryMusician_A_01 --------

Actor: Obj_DiaryMusician_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice3', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event1:
    Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    if !EventSystemActor.GeneralChoice3() {
        Event3:
        Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        if !EventSystemActor.GeneralChoice3() {
            Event5:
            Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk02', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            if !EventSystemActor.GeneralChoice3() {
                Event7:
                Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk03', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                if !EventSystemActor.GeneralChoice3() {
                    Event9:
                    Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk04', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    if !EventSystemActor.GeneralChoice3() {
                        Event11:
                        Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        if !EventSystemActor.GeneralChoice3() {
                            Event13:
                            Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk06', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                            if !EventSystemActor.GeneralChoice3() {
                                Event15:
                                Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk07', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event17:
                                    Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk08', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                    if !EventSystemActor.GeneralChoice3() {
                                        Event21:
                                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
                                            Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk10', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        } else {
                                            Obj_DiaryMusician_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryMusician_A_01:talk09', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        }
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event17
                                        }
                                    } else {
                                        goto Event15
                                    }
                                } else {
                                    goto Event13
                                }
                            } else {
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
        } else {
            goto Event1
        }
    } else
    goto Event21
}
