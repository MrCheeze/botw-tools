-------- EventFlow: Npc_NorthHatelHatago001 --------

Actor: Npc_NorthHatelHatago001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckPlayerState', 'CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_NorthHatelHatago001.CheckActorAction13() {
      case [0, 2]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_NorthHatelHatago001_Talk'}) {
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk001'})
        } else {
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk000'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_NorthHatelHatago001_Talk', 'IsWaitFinish': True})
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_NorthHatelHatago001_Talk2'}) {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk004'})
            } else
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk030'})
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk002'})
                Event60:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_NorthHatelHatago001_Talk2', 'IsWaitFinish': True})
            } else {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk003'})
                goto Event60
            }
          case [1, 2, 3]:
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk005'})
        }
      case 3:
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago001:talk100'})
    }
}
