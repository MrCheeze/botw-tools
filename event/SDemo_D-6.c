-------- EventFlow: SDemo_D-6 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_FlagON']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo103_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo103_0', 'EntryPointName': '', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant001_Move'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Open_StartPoint'})
}
