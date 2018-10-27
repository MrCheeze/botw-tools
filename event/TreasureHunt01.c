-------- EventFlow: TreasureHunt01 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_UmayadoBook_06[UmayadoBook_06_01]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_TwnObj_UmayadoBook_06_Talk() {
    Event2:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    TwnObj_UmayadoBook_06[UmayadoBook_06_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt01:BookFirst'})
    if !EventSystemActor.GeneralChoice2() {
        TwnObj_UmayadoBook_06[UmayadoBook_06_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt01:Book00'})
        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt01_Activated'}) {
            Event5:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt01_Step01'})
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'TreasureHunt01_Activated', 'IsWaitFinish': True})
            goto Event5
        }
    }
}

void Finish_TwnObj_UmayadoBook_06_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    TwnObj_UmayadoBook_06[UmayadoBook_06_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt01:BookFirst'})
    if !EventSystemActor.GeneralChoice2() {
        TwnObj_UmayadoBook_06[UmayadoBook_06_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt01:Book00'})
    }
}

void Step01_TwnObj_UmayadoBook_06_Talk() {
    goto Event2
}
