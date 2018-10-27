-------- EventFlow: TwnObj_Village_SheikerHeirDiary_A_02 --------

Actor: TwnObj_Village_SheikerHeirDiary_A_02
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

    TwnObj_Village_SheikerHeirDiary_A_02.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Diary_00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    if !EventSystemActor.GeneralChoice3() {
        Event4:
        TwnObj_Village_SheikerHeirDiary_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Diary_01'})
        if !EventSystemActor.GeneralChoice2() {
            TwnObj_Village_SheikerHeirDiary_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Diary_02'})
            Event9:
            if !EventSystemActor.GeneralChoice3() {
                Event8:
                TwnObj_Village_SheikerHeirDiary_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Diary_03'})
                if !EventSystemActor.GeneralChoice3() {
                    Event11:
                    TwnObj_Village_SheikerHeirDiary_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Diary_04'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event13:
                        TwnObj_Village_SheikerHeirDiary_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Diary_05'})
                        if !EventSystemActor.GeneralChoice2() {
                            goto Event11
                        }
                    } else {
                        goto Event8
                    }
                } else
                goto Event9
            } else {
                goto Event4
            }
        }
    } else {
        goto Event13
    }
}
