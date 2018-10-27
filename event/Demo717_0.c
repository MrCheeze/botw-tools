-------- EventFlow: Demo717_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop', 'Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Ganon[0]
entrypoint: None()
actions: ['Demo_BarrierOnDemo', 'Demo_MoveToFloor', 'Demo_WarpPos', 'Demo_GanonBoneControlOn', 'Demo_RecoverDown', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[GWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo717_0() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    Event38:

    fork {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    } {
        Enemy_Ganon[0].Demo_WarpPos({'TargetPos': [-253.8800048828125, 191.0, -1062.4200439453125], 'IsWaitFinish': True, 'TargetRot': [0.0, 0.0, 0.0]})
    }

    Enemy_Ganon[0].Demo_BarrierOnDemo({'IsWaitFinish': False})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'SceneName': 'C01-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'ActorName': 'Enemy_Ganon', 'UniqueName': '0', 'Accept1FrameDelay': False, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3})
    EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 4, 'Count': 4, 'Power': 1.0})
    EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 2, 'IsWait': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 7})
    EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 4, 'Count': 1, 'Power': 4.0})
    EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 191.0, 'DestinationX': -262.5400085449219, 'DestinationZ': -1038.5400390625, 'IsWaitFinish': True, 'DirectionY': 148.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 29})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Enemy_Ganon', 'UniqueName': '0', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'CameraName': '', 'SceneName': 'C03-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})

    fork {
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        Enemy_Ganon[0].Demo_GanonBoneControlOn({'IsWaitFinish': True, 'IsBattleModeOn': False})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 4, 'Count': 3, 'Power': 2.0})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    } {
        EventSystemActor[GWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 7})
        Enemy_Ganon[0].Demo_PlayASForDemo({'ClothWarpMode': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
    }

    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'GanonBgm_Start_LatterHalf', 'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void Demo717_0_OnWall() {
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    GameRomCamera.Demo_MovePosFlow({'AtAppendMode': 2, 'Pattern1AtY': 5.0, 'FovyAppendMode': 0, 'StartCalcOnly': False, 'Count': 30.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1Fovy': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosY': 5.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'TargetActor2': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False, 'Pattern1PosZ': -5.0, 'Pattern1AtZ': 10.0, 'TargetActor1': 0, 'MotionMode': 0, 'PosAppendMode': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        Enemy_Ganon[0].Demo_MoveToFloor({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'TargetActor2': 1, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'CollisionInterpolateSkip': True, 'Pattern1AtZ': 5.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Accept1FrameDelay': True, 'ActorIgnoringCollision': 1, 'ReviseModeEnd': 0, 'Cushion': 30.0, 'IsWaitFinish': False, 'PosAppendMode': 2, 'Pattern1PosZ': 40.0, 'Pattern1PosY': 5.0, 'Pattern1AtY': 5.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    goto Event38
}

void Demo717_0_Down() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    Enemy_Ganon[0].Demo_RecoverDown({'IsWaitFinish': True})
    goto Event38
}
