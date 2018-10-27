-------- EventFlow: Demo203_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look', 'Demo_PolarCoordPlayerRelative', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpHole_100Enemy
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo203_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'None', 'IsWaitFinish': True})

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3.412597894668579, 'Pattern1PosY': 3.0074920654296875, 'Pattern1PosZ': 8.476539611816406, 'Pattern1AtX': -0.6534420251846313, 'Pattern1AtY': 1.1872860193252563, 'Pattern1AtZ': 1.7441710233688354, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ActorName1': 'DgnObj_WarpHole_100Enemy'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3.189574956893921, 'Pattern1PosY': 2.8603670597076416, 'Pattern1PosZ': 7.9323811531066895, 'Pattern1AtX': -1.117676019668579, 'Pattern1AtY': 1.493468999862671, 'Pattern1AtZ': 2.876671075820923, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 30.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ActorName1': 'DgnObj_WarpHole_100Enemy'})
    }


    fork {
        DgnObj_WarpHole_100Enemy.Demo_PlayASForDemo({'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        DgnObj_WarpHole_100Enemy.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        DgnObj_WarpHole_100Enemy.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': False})
    }

    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_PolarCoordPlayerRelative({'FovyCalcMode': 1, 'IsWaitFinish': True, 'UniqueNameForOtherActor': '', 'LngOffset': 0.0, 'OtherActor': 3, 'ReverseOrder': True, 'FovyParam': 50.0, 'AtCalcMode': 0, 'Time': 0.0, 'AtParam': [0.0, 2.0, 0.0], 'LatOffset': 4.0, 'RadiusOffset': 3.0, 'ActorIgnoringCollision': 0, 'ActorNameForOtherActor': 'DgnObj_WarpHole_100Enemy', 'ReviseMode': 2})
}
