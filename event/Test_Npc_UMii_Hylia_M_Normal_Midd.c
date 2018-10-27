-------- EventFlow: Test_Npc_UMii_Hylia_M_Normal_Middle --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Test_Npc_Talk()

}

void Test_Npc_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Starter.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Starter.Demo_Talk({'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
      case 1:
        Starter.Demo_Talk({'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
      case 2:
        Starter.Demo_Talk({'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
      case 3:
        Starter.Demo_Talk({'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Starter.Demo_Talk({'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
          case 1:
            Starter.Demo_Talk({'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
          case 2:
            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_07', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
          case 3:
            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Test_Npc_UMii_Common_M_00:NewText_06', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        }
    }
}
