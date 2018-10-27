-------- EventFlow: Npc_HyruleDepthHatago004 --------

Actor: Npc_HyruleDepthHatago004
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyruleDepthHatago004.CheckActorAction13() {
      case [0, 1]:
        Npc_HyruleDepthHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago004:Talk_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HyruleDepthHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago004:Talk_002', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 2:
        Npc_HyruleDepthHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago004:Talk_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago004:Talk_004'})
      case 3:
        Npc_HyruleDepthHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago004:Talk_003', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
