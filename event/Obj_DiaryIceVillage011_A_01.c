-------- EventFlow: Obj_DiaryIceVillage011_A_01 --------

Actor: Obj_DiaryIceVillage011_A_01
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice3', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event2:
    Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:DiaryFirst', 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
    if !EventSystemActor.GeneralChoice3() {
        Event4:
        Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:Obj_DiaryIceVillage011_A_01_010', 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
        if !EventSystemActor.GeneralChoice3() {
            Event6:
            Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:Obj_DiaryIceVillage011_A_01_020', 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
            if !EventSystemActor.GeneralChoice3() {
                Event8:
                Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:Obj_DiaryIceVillage011_A_01_030', 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
                if !EventSystemActor.GeneralChoice3() {
                    Event13:
                    Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:Obj_DiaryIceVillage011_A_01_040'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event14:
                        Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:Obj_DiaryIceVillage011_A_01_050'})
                        if !EventSystemActor.GeneralChoice3() {
                            Event15:
                            Obj_DiaryIceVillage011_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryIceVillage011_A_01:Obj_DiaryIceVillage011_A_01_060'})
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event14
                            }
                        } else {
                            goto Event13
                        }
                    } else {
                        goto Event8
                    }
                } else {
                    goto Event6
                }
            } else {
                goto Event4
            }
        } else {
            goto Event2
        }
    } else {
        goto Event15
    }
}
