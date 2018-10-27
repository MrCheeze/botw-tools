-------- EventFlow: Obj_DRStone_A_01 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo700_0', 'EntryPointName': 'Demo700_0', 'IsWaitFinish': True, 'EndFade': 0})
}
