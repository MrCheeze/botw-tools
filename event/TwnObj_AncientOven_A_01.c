-------- EventFlow: TwnObj_AncientOven_A_01 --------

Actor: TwnObj_AncientOven_A_01
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_MakeArtifact', 'Demo_ManufactItem', 'Demo_OpenMessageDialogTrig', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: ['RandomChoice4', 'CheckManufactResult', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.RandomChoice2() {
        TwnObj_AncientOven_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk10', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        Event15:
        TwnObj_AncientOven_A_01.Demo_OpenMessageDialogTrig({'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk01', 'IsWaitFinish': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 1})
        Event16:
        TwnObj_AncientOven_A_01.Demo_MakeArtifact({'IsWaitFinish': True})
        switch EventSystemActor.CheckManufactResult() {
          case 0:
            TwnObj_AncientOven_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk03', 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                TwnObj_AncientOven_A_01.Demo_ManufactItem({'IsWaitFinish': True})
                TwnObj_AncientOven_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk04', 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True})
                TwnObj_AncientOven_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                goto Event15
            } else {
                TwnObj_AncientOven_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk09', 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                goto Event15
            }
          case 3:
            TwnObj_AncientOven_A_01.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk06', 'CloseDialogOption': 1})
            goto Event16
          case 4:
            TwnObj_AncientOven_A_01.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk07', 'CloseDialogOption': 1})
            goto Event16
          case 5:
            TwnObj_AncientOven_A_01.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk08', 'CloseDialogOption': 1})
            goto Event16
          case 6:
            TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk02', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Talk'})
        }
    } else {
        TwnObj_AncientOven_A_01.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event15
    }
}

void Near() {
    TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': '', 'IsChecked': False, 'DispFrame': 90})
    switch EventSystemActor.RandomChoice4() {
      case 0:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:near00', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:near01', 'DispFrame': 90, 'IsChecked': False})
      case 2:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:near02', 'DispFrame': 90, 'IsChecked': False})
      case 3:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/TwnObj_AncientOven_A_01:near03', 'DispFrame': 90, 'IsChecked': False})
    }
}
