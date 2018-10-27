-------- EventFlow: TreasureHunt04 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_UmayadoBook_08[UmayadoBook_08_01]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_TwnObj_UmayadoBook_08_Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    TwnObj_UmayadoBook_08[UmayadoBook_08_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt04:BookFirst'})
    if !EventSystemActor.GeneralChoice2() {
        TwnObj_UmayadoBook_08[UmayadoBook_08_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt04:Book00'})
        if EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt04_Activated'}) {
            Event4:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt04_Step01'})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt04_Activated'})
            goto Event4
        }
    }
}

void Finish_TwnObj_UmayadoBook_08_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    TwnObj_UmayadoBook_08[UmayadoBook_08_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt04:BookFirst'})
    if !EventSystemActor.GeneralChoice2() {
        TwnObj_UmayadoBook_08[UmayadoBook_08_01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TreasureHunt04:Book00'})
    }
}

void Step01_TwnObj_UmayadoBook_08_Talk() {
    goto Event1
}

void TreasureHunt04_RemainingBox() {
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'TreasureHunt04_RemainingBox'})
}
