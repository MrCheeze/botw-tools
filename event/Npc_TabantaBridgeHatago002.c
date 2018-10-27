-------- EventFlow: Npc_TabantaBridgeHatago002 --------

Actor: Npc_TabantaBridgeHatago002
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_TabantaBridgeHatago002.CheckActorAction13() {
      case 10:
        Event1:
        Npc_TabantaBridgeHatago002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Run'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_TabantaBridgeHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Run'})
        } else {
            Npc_TabantaBridgeHatago002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Run'})
        }
      case 11:
        Npc_TabantaBridgeHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk50'})
      case 12:
        switch EventSystemActor.CheckWeather() {
          case 0:
            goto Event1
          case 1:
            Event10:
            Npc_TabantaBridgeHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk40'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_TabantaBridgeHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            } else {
                Npc_TabantaBridgeHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago002:talk41', 'ASName': ''})
            }
          case 2:
            goto Event10
          case 3:
            goto Event10
        }
    }
}
