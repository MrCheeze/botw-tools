-------- EventFlow: Npc_SouthHateru006 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthHateru006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_Finish'}) {
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk09'})
    } else {
        Npc_SouthHateru006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
    Event8:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_Finish'}) {
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk08', 'IsCloseMessageDialog': True})
        } else {
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk03', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }
        Event12:
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk06', 'IsOverWriteLabelActorName': False})
        goto Event8
      case 1:
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk04', 'IsOverWriteLabelActorName': False})
        goto Event12
      case 2:
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk05', 'IsOverWriteLabelActorName': False})
        goto Event12
      case 3:
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk07'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_Ready'})
    }
}

void Near() {
    Npc_SouthHateru006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:near00', 'IsChecked': False, 'DispFrame': 90})
}
