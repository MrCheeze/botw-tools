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
          case 0:
            Event13:
            if Npc_HyruleWestHatago001.IsOnInstEventFlag() {
                Event1:
                Npc_HyruleWestHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            } else {
                Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk05'})
                goto Event1
            }
          case 1:
            goto Event13
          case 2:
            goto Event13
          case 3:
            goto Event13
          case 4:
            goto Event13
          case 5:
            goto Event13
          case 6:
            Event11:
            if Npc_HyruleWestHatago001.IsOnInstEventFlag() {
                Event7:
                Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            } else {
                Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk04'})
                goto Event7
            }
          case 7:
            goto Event11
        }
      case 1:
        Event9:
        if Npc_HyruleWestHatago001.IsOnInstEventFlag() {
            Event6:
            Npc_HyruleWestHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            Npc_HyruleWestHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event6
        }
      case 2:
        goto Event9
      case 3:
        goto Event9
    }
}
