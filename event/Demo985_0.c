-------- EventFlow: Demo985_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenThanksE3', 'Demo_WaitFrame', 'Demo_ExitGame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo985_0() {
    EventSystemActor.Demo_OpenThanksE3({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
    EventSystemActor.Demo_ExitGame({'IsWaitFinish': True, 'ShowLogo': 0})
}
