-------- EventFlow: Demo025_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_DummyAction']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo025_2() {
    EventSystemActor.Demo_DummyAction({'IsWaitFinish': True})
}
