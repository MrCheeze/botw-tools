-------- EventFlow: Npc_HiddenKorokGround --------

Actor: Npc_HiddenKorokGround
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'NotAndNot', 'Arg_Turn': 1})

    Npc_HiddenKorokGround.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorok:talk00'})
}
