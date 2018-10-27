-------- EventFlow: Demo623_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CloseItemMenu', 'Demo_OpenMap', 'Demo_SetChallengeIcon']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo623_0() {

    call Demo623_0_C01()


    call Demo623_0_C02_C03()

    Event45:

    call Demo623_0_C05()

}

void Demo623_0_C01() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})

    fork {
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo623_0:Demo623_0_Text000'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.1417239904403687, 'Pattern1PosY': 1.6889649629592896, 'Pattern1PosZ': 2.689940929412842, 'Pattern1AtX': -0.9717410206794739, 'Pattern1AtY': 1.1014100313186646, 'Pattern1AtZ': -2.137695074081421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo623_0:Demo623_0_Text005'})
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo623_0:Demo623_0_Text006'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo623_0-C01-Link-A-0_Loop'})
    }

}

void Demo623_0_C02_C03() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'DemoWait', 'ClothWarpMode': 1})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'LngShiftRange': 180.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1AtY': 1.2091000080108643, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'TargetActor1': 3, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'Accept1FrameDelay': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'TargetActorDirReferenceMode': 2, 'DOFUse': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03-0', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'BgCheck': False, 'TargetActorPosReferenceMode': 2, 'Accept1FrameDelay': False})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo623_0-C02-Link-A-0', 'ClothWarpMode': 1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    EventSystemActor.Demo_SetChallengeIcon({'ChallengeName': 'BalladOfHeroes', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'WorldPos': [-1061.0, 249.3000030517578, 1829.0999755859375], 'ScaleLevel': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}

void Demo623_0_C05() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.007323999889194965, 'Pattern1PosY': 2.313477039337158, 'Pattern1PosZ': -5.646483898162842, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'ClothWarpMode': 1, 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Demo623_0-C03-Link-A-0', 'IsEnabledAnimeDriven': -1, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Demo623_3() {

    call Demo623_3_C01()


    call Demo623_3_C02_C03()

    goto Event45
}

void Demo623_3_C01() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})

    fork {
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo623_0:Demo623_0_Text000'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1599119901657104, 'Pattern1PosY': 1.5155940055847168, 'Pattern1PosZ': 2.41162109375, 'Pattern1AtX': 1.1772459745407104, 'Pattern1AtY': 1.3440250158309937, 'Pattern1AtZ': -2.242432117462158, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo623_0:Demo623_0_Text005'})
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo623_0:Demo623_0_Text006'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo623_0-C01-Link-A-0_Loop'})
    }

}

void Demo623_3_C02_C03() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'DemoWait', 'ClothWarpMode': 1})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.4411619901657104, 'Pattern1PosY': 2.317291021347046, 'Pattern1PosZ': -0.5987550020217896, 'Pattern1AtX': -0.19116200506687164, 'Pattern1AtY': 1.2091059684753418, 'Pattern1AtZ': 0.24023400247097015, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'StartCalcOnly': True, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'TargetActorDirReferenceMode': 2, 'DOFUse': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03-0', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'BgCheck': False, 'TargetActorPosReferenceMode': 2, 'Accept1FrameDelay': False})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo623_0-C02-Link-A-0', 'ClothWarpMode': 1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    EventSystemActor.Demo_SetChallengeIcon({'ChallengeName': 'BalladOfHeroes', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'WorldPos': [-1061.0, 249.3000030517578, 1829.0999755859375], 'ScaleLevel': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}
