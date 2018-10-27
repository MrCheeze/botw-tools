-------- EventFlow: Npc_HyrulePlain004 --------

Actor: Npc_HyrulePlain004
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyrulePlain004.CheckActorAction13() {
      case 0:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0003', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0004', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case [1, 2, 3]:
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 10:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0002', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0000', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
