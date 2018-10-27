-------- EventFlow: TwnObj_UmayadoHeroBook_01 --------

Actor: TwnObj_UmayadoHeroBook_01
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
    TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book00'})
    if !EventSystemActor.GeneralChoice3() {
        Event10:
        TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book01'})
        if !EventSystemActor.GeneralChoice3() {
            Event12:
            TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book02'})
            if !EventSystemActor.GeneralChoice3() {
                Event14:
                TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book03'})
                if !EventSystemActor.GeneralChoice3() {
                    Event16:
                    TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book04'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event22:
                        TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book05'})
                        if !EventSystemActor.GeneralChoice3() {
                            Event24:
                            TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book06'})
                            if !EventSystemActor.GeneralChoice3() {
                                Event26:
                                TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book07'})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event18:
                                    TwnObj_UmayadoHeroBook_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoHeroBook_01:Book08'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event26
                                    }
                                } else {
                                    goto Event24
                                }
                            } else {
                                goto Event22
                            }
                        } else {
                            goto Event16
                        }
                    } else {
                        goto Event14
                    }
                } else {
                    goto Event12
                }
            } else {
                goto Event10
            }
        } else {
            goto Event8
        }
    } else {
        goto Event18
    }
}
