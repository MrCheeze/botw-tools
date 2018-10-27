-------- EventFlow: TwnObj_UmayadoHeroBook_02 --------

Actor: TwnObj_UmayadoHeroBook_02
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event8:
    TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book00'})
    if !EventSystemActor.GeneralChoice3() {
        Event9:
        TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book01'})
        if !EventSystemActor.GeneralChoice3() {
            Event11:
            TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book02'})
            if !EventSystemActor.GeneralChoice3() {
                Event13:
                TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book03'})
                if !EventSystemActor.GeneralChoice3() {
                    Event15:
                    TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book04'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event21:
                        TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book05'})
                        if !EventSystemActor.GeneralChoice3() {
                            Event23:
                            TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book06'})
                            if !EventSystemActor.GeneralChoice3() {
                                Event25:
                                TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book07'})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event17:
                                    TwnObj_UmayadoHeroBook_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_02:Book08'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event25
                                    }
                                } else {
                                    goto Event23
                                }
                            } else {
                                goto Event21
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
            goto Event8
        }
    } else {
        goto Event17
    }
}
