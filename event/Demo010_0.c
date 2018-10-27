-------- EventFlow: Demo010_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_StartupTelescope']
queries: ['CheckPlayerRideHorse', 'CheckFlag', 'IsRunningOnNX']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnInner', 'Demo_PlayerHide', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo010_0() {
    GameROMPlayer.Demo_PlayerTurnInner({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'LngShiftRange': 180.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'TargetActor1': 1, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1AtY': 1.2091000080108643, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Demo010_0-C01-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo010_0'})
    if EventSystemActor.IsRunningOnNX() {

        fork {
            EventSystemActor.Demo_StartupTelescope({'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
        }

    } else {
        EventSystemActor.Demo_StartupTelescope({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    }
}
