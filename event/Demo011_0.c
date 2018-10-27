-------- EventFlow: Demo011_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_OffWaitRevival', 'Demo_CallDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetMoonType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo011_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Stop', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_GanonGroan', 'SoundDelay': 0, 'SLinkInst': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo165_5'}) {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo165_4'})
        Event3:
        EventSystemActor.Demo_OffWaitRevival({'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo165_5'})
        goto Event3
    }
}
