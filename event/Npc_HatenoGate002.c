-------- EventFlow: Npc_HatenoGate002 --------

Actor: Npc_HatenoGate002
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate002'}) {
        Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk05', 'IsCloseMessageDialog': True})
            Event12:
            switch EventSystemActor.CheckWeather() {
              case 1:
                Event14:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk07'})
              case 2:
                goto Event14
              case 3:
                goto Event14
            }
        } else {
            Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk06', 'IsCloseMessageDialog': True})
            goto Event12
        }
    } else {
        Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk02', 'IsCloseMessageDialog': True})
            Event6:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoGate002', 'IsWaitFinish': True})
            goto Event12
        } else {
            Npc_HatenoGate002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate002:talk03', 'IsCloseMessageDialog': True})
            goto Event6
        }
    }
}
