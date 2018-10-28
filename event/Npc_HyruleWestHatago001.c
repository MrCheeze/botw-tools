-------- EventFlow: Npc_HyruleWestHatago001 --------

Actor: Npc_HyruleWestHatago001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            if !Npc_HyruleWestHatago001.IsOnInstEventFlag() {
                Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk05'})
            }
            Npc_HyruleWestHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case [6, 7]:
            if !Npc_HyruleWestHatago001.IsOnInstEventFlag() {
                Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk04'})
            }
            Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case [1, 2, 3]:
        if !Npc_HyruleWestHatago001.IsOnInstEventFlag() {
            Npc_HyruleWestHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
        Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
