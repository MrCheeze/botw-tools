-------- EventFlow: Npc_SmallOasis005 --------

Actor: Npc_SmallOasis005
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis005.CheckActorAction13() {
      case 0:
        Event8:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis005:Talk007'})
        } else {
            Npc_SmallOasis005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SmallOasis005:Talk006', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 1:
        goto Event8
      case 2:
        goto Event8
      case 3:
        goto Event8
      case 4:
        goto Event8
      case 5:
        goto Event8
      case 6:
        goto Event8
      case 7:
        goto Event8
      case 8:
        goto Event8
      case 9:
        goto Event8
      case 10:
        goto Event8
      case 11:
        Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis005:Talk008'})
      case 12:
        goto Event8
      case 13:
        goto Event8
    }
}
