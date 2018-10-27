-------- EventFlow: Npc_HyruleDepthHatago007 --------

Actor: Npc_HyruleDepthHatago007
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HyruleDepthHatago007.IsOnInstEventFlag() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event5:
            Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago007:talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 1:
            Event6:
            Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago007:talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 2:
            goto Event6
          case 3:
            goto Event6
        }
    } else {
        goto Event5
    }
}
