-------- EventFlow: SecretofObject --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_CallDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DestinationTurnStarter']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryPoint0() {

    call Common.AirStartUP_Player_NoDrop()

    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1380.694091796875, 'Pattern1PosY': 542.9547729492188, 'Pattern1PosZ': 3525.19873046875, 'Pattern1AtX': -1375.2318115234375, 'Pattern1AtY': 536.4324951171875, 'Pattern1AtZ': 3529.488525390625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 0})

    call Common.RemainsLithograph()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': True, 'EndFade': 0})
    if EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Activated'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'SecretofObject_Finish', 'IsWaitFinish': True})
    }
}
