-------- EventFlow: Demo299_0 --------

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    NPC_DRCVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo299_0:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
}
