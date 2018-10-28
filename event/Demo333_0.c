-------- EventFlow: Demo333_0 --------

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_PolarCoordPlayerRelative']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo333_Cut1() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'Stop'})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'UniqueName', 'IsUseSlowTurn': False, 'ActorName': 'Enemy_Guardian_A_Fixed_Moss', 'IsTurnToLookAtPos': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'WaitAttention', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'Guardian_BootUp_3_Cam'}) {
            GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'FovyCalcMode': 1, 'OtherActor': 3, 'AtParam': [0.0, 3.700000047683716, 0.0], 'FovyParam': 35.0, 'AtCalcMode': 1, 'ReverseOrder': True, 'UniqueNameForOtherActor': 'UniqueName', 'ReviseMode': 2, 'ActorIgnoringCollision': 0, 'LatOffset': 17.1299991607666, 'Time': 30.0, 'RadiusOffset': 17.0, 'LngOffset': 0.0, 'ActorNameForOtherActor': 'Enemy_Guardian_A_Fixed_Moss'})
            Event35:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Guardian_BootUp_2_Cam'}) {
            GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'FovyCalcMode': 1, 'OtherActor': 3, 'AtParam': [0.0, 3.700000047683716, 0.0], 'FovyParam': 35.0, 'AtCalcMode': 1, 'ReverseOrder': True, 'UniqueNameForOtherActor': 'UniqueName', 'ReviseMode': 2, 'ActorIgnoringCollision': 0, 'Time': 30.0, 'ActorNameForOtherActor': 'Enemy_Guardian_A_Fixed_Moss', 'LngOffset': 15.0, 'LatOffset': 5.0, 'RadiusOffset': 20.0})
        } else {
            GameRomCamera.Demo_MovePosFlow({'FovyAppendMode': 1, 'IsWaitFinish': True, 'LatShiftRange': 0.0, 'StartCalcOnly': False, 'Count': 30.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 3.700000047683716, 'PosAppendMode': 0, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Cushion': 0.30000001192092896, 'Pattern1Fovy': 35.0, 'Pattern1PosZ': 5.0, 'Pattern1AtZ': 0.0, 'LngShiftRange': 30.0, 'TargetActor1': 3, 'TargetActor2': 1, 'AtAppendMode': 2, 'ActorName2': '', 'UniqueName2': '', 'UniqueName1': 'UniqueName', 'MotionMode': 1, 'ActorIgnoringCollision': 0, 'ReviseModeEnd': 2, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ActorName1': 'Enemy_Guardian_A_Fixed_Moss', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }
        goto Event35
    }

}

void Demo333_1() {

    call Demo333_Cut1({'UniqueName': 'Guardian_BootUp_1'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guardian_BootUp_1'})

    call Demo333_Cut2({'UniqueName': 'Guardian_BootUp_1'})

}

void Demo333_2() {

    call Demo333_Cut1({'UniqueName': 'Guardian_BootUp_2'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guardian_BootUp_2'})

    call Demo333_Cut2({'UniqueName': 'Guardian_BootUp_2'})

}

void Demo333_3() {

    call Demo333_Cut1({'UniqueName': 'Guardian_BootUp_3'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guardian_BootUp_3'})

    call Demo333_Cut2({'UniqueName': 'Guardian_BootUp_3'})

}

void Demo333_Cut2() {
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Guardian_ReserveEnableScene', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Guardian_BootUp_3_Cam'}) {
        GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'LngOffset': 0.0, 'FovyCalcMode': 1, 'OtherActor': 3, 'AtParam': [0.0, 3.700000047683716, 0.0], 'FovyParam': 35.0, 'Time': 0.0, 'RadiusOffset': 12.0, 'AtCalcMode': 1, 'ReverseOrder': True, 'UniqueNameForOtherActor': 'UniqueName', 'ReviseMode': 2, 'ActorIgnoringCollision': 0, 'LatOffset': 17.1299991607666, 'ActorNameForOtherActor': 'Enemy_Guardian_A_Fixed_Moss'})
    } else {
        GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'LngOffset': 0.0, 'FovyCalcMode': 1, 'OtherActor': 3, 'AtParam': [0.0, 3.700000047683716, 0.0], 'FovyParam': 35.0, 'Time': 0.0, 'RadiusOffset': 12.0, 'LatOffset': -5.710000038146973, 'AtCalcMode': 1, 'ReverseOrder': True, 'UniqueNameForOtherActor': 'UniqueName', 'ReviseMode': 2, 'ActorIgnoringCollision': 0, 'ActorNameForOtherActor': 'Enemy_Guardian_A_Fixed_Moss'})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'Cushion': 0.30000001192092896, 'StartCalcOnly': False, 'Pattern1Fovy': 50.0, 'Pattern1AtY': 1.7999999523162842, 'CollisionInterpolateSkip': True, 'Count': 60.0, 'Pattern1PosY': 1.7899999618530273, 'Pattern1PosZ': -5.289999961853027, 'LngShiftRange': 30.0, 'ReviseModeEnd': 1, 'TargetActor1': 3, 'TargetActor2': 1, 'PosAppendMode': 3, 'AtAppendMode': 3, 'ActorName2': '', 'UniqueName2': '', 'UniqueName1': 'UniqueName', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': 'Enemy_Guardian_A_Fixed_Moss', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guardian_BootUp'})
}
