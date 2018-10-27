-------- EventFlow: TwnObj_GerudoTown_RougeDiary_A_01 --------

Actor: TwnObj_GerudoTown_RougeDiary_A_01
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:DiaryFirst'})
    if !EventSystemActor.GeneralChoice3() {
        Event3:
        TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk01'})
        if !EventSystemActor.GeneralChoice2() {
            Event5:
            TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk02'})
            if !EventSystemActor.GeneralChoice3() {
                Event7:
                TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk03'})
                if !EventSystemActor.GeneralChoice3() {
                    Event9:
                    TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk04'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event11:
                        TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk05'})
                        if !EventSystemActor.GeneralChoice3() {
                            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                                Event21:
                                TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk08'})
                                if !EventSystemActor.GeneralChoice3() {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Helmet_Finish'}) {
                                        Event25:
                                        TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk09'})
                                        if !EventSystemActor.GeneralChoice3() {
                                            Event28:
                                            TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk10'})
                                            if !EventSystemActor.GeneralChoice2() {
                                                goto Event25
                                            }
                                        } else {
                                            goto Event21
                                        }
                                    } else {
                                        Event15:
                                        TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk07'})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event21
                                        }
                                    }
                                } else {
                                    goto Event11
                                }
                            } else {
                                Event13:
                                TwnObj_GerudoTown_RougeDiary_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_GerudoTown_RougeDiary_A_01:Talk06'})
                                if !EventSystemActor.GeneralChoice2() {
                                    goto Event11
                                }
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
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Helmet_Finish'}) {
                goto Event28
            } else {
                goto Event15
            }
        } else {
            goto Event13
        }
    }
}
