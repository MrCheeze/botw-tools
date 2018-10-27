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
      case 1:
        Event14:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0004', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 1:
            Event15:
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 2:
            goto Event15
          case 3:
            goto Event15
        }
      case 2:
        goto Event14
      case 3:
        goto Event14
      case 4:
        goto Event14
      case 5:
        goto Event14
      case 6:
        goto Event14
      case 7:
        goto Event14
      case 8:
        goto Event14
      case 9:
        goto Event14
      case 10:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0002', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_0000', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 12:
        goto Event14
      case 13:
        goto Event14
    }
}
