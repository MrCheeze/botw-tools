-------- EventFlow: Demo026_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlowAbs', 'Demo_PolarCoordPlayerRelative', 'Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTag
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent', 'Demo_TurnAndLookToObjectNow', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Enemy_Guardian_Mini_Senior
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Guardian_Mini_Middle
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Guardian_Mini_Baby
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Guardian_Mini_Junior_Wipe
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Guardian_Mini_Practice
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_TimeSpecRumbleSmall', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance(Enemy)]
entrypoint: Guardian_Mini_Appearance(Enemy)
actions: ['Demo_PlayASForDemo', 'Demo_TimeredAS', 'Demo_Transform', 'Demo_FindPlayer']
queries: []
params: None

Actor: Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_TutorialDungeon(Enemy)]
entrypoint: Guardian_Mini_Appearance_TutorialDungeon(Enemy)
actions: ['Demo_PlayASForDemo', 'Demo_TimeredAS', 'Demo_Transform', 'Demo_FindPlayer']
queries: []
params: None

Actor: Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_Relative(Enemy)]
entrypoint: Guardian_Mini_Appearance_Relative(Enemy)
actions: ['Demo_PlayASForDemo', 'Demo_TimeredAS', 'Demo_Transform', 'Demo_FindPlayer']
queries: []
params: None

void Guardian_Mini_Appearance() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade'})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'WeaponDefault', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'IsWaitFinish': False, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        GameROMPlayer.Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 0, 'ObjectId': 1, 'IsValid': True, 'UniqueName': '', 'ActorName': '', 'TurnPosition': [0.0, 10.0, -8.0], 'IsWaitFinish': False})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'IsIgnoreSame': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventTag.Demo_SendSignal({'Value': True, 'SignalType': 0, 'IsWaitFinish': True})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 4})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    } {
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance(Enemy)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'FoldWait', 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'TargetIndex': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventCameraRumble.Demo_RotRumble({'Pattern': 4, 'IsWaitFinish': False, 'Power': 2.0, 'Count': 11})
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance(Enemy)].Demo_TimeredAS({'IsWaitFinish': True})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-3', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-2', 'IsWaitFinish': False, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})

    fork {
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance(Enemy)].Demo_Transform({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'BattleDungeon_StartBattleBGM', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': False})
    Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance(Enemy)].Demo_FindPlayer({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': False})
    }
    GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'OtherActor': 3, 'ActorNameForOtherActor': 'TargetActor', 'AtCalcMode': 0, 'FovyParam': 50.0, 'FovyCalcMode': 1, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'UniqueNameForOtherActor': '', 'LatOffset': 0.0, 'LngOffset': 0.0, 'RadiusOffset': 5.0, 'ReverseOrder': True, 'AtParam': [0.0, 2.0, 0.0], 'Time': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
}

void Guardian_Mini_Senior_Appearance() {

    call Guardian_Mini_Appearance({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'TargetActor': 'Enemy_Guardian_Mini_Senior', 'Enemy': ActorIdentifier(name="Enemy_Guardian_Mini_Senior")})

}

void Guardian_Mini_Junior_Wipe_Appearance() {

    call Guardian_Mini_Appearance({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'Enemy': ActorIdentifier(name="Enemy_Guardian_Mini_Junior_Wipe"), 'TargetActor': 'Enemy_Guardian_Mini_Junior_Wipe'})

}

void Guardian_Mini_Middle_Appearance() {

    call Guardian_Mini_Appearance({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'Enemy': ActorIdentifier(name="Enemy_Guardian_Mini_Middle"), 'TargetActor': 'Enemy_Guardian_Mini_Middle'})

}

void Guardian_Mini_Appearance_Baby() {

    call Guardian_Mini_Appearance({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'Enemy': ActorIdentifier(name="Enemy_Guardian_Mini_Baby"), 'TargetActor': 'Enemy_Guardian_Mini_Baby'})

}

void Guardian_Mini_Practice_Appearance() {

    call Guardian_Mini_Appearance_TutorialDungeon({'TargetActor': 'Enemy_Guardian_Mini_Practice', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'Enemy': ActorIdentifier(name="Enemy_Guardian_Mini_Practice")})


    call Demo719_0.StartTutorial_SideStep()

}

void Guardian_Mini_Appearance_TutorialDungeon() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade'})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'WeaponDefault', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 0, 'ObjectId': 1, 'IsValid': True, 'UniqueName': '', 'ActorName': '', 'TurnPosition': [0.0, 10.0, -8.0], 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'IsIgnoreSame': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})

    fork {
        EventTag.Demo_SendSignal({'Value': True, 'SignalType': 0, 'IsWaitFinish': False})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_TutorialDungeon(Enemy)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'DemoFoldWait'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})

        fork {
            Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_TutorialDungeon(Enemy)].Demo_TimeredAS({'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 3, 'IsWait': False})
    } {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-3', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-2', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    fork {
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_TutorialDungeon(Enemy)].Demo_Transform({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'BattleDungeon_StartBattleBGM', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': False})
    Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_TutorialDungeon(Enemy)].Demo_FindPlayer({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': False})
    }
    GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'OtherActor': 3, 'ActorNameForOtherActor': 'TargetActor', 'AtCalcMode': 0, 'FovyParam': 50.0, 'FovyCalcMode': 1, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'UniqueNameForOtherActor': '', 'LatOffset': 0.0, 'LngOffset': 0.0, 'RadiusOffset': 5.0, 'ReverseOrder': True, 'AtParam': [0.0, 2.0, 0.0], 'Time': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
}

void Guardian_Mini_Appearance_Relative() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade'})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'WeaponDefault', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'IsWaitFinish': False, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False})
    } {
        GameROMPlayer.Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 0, 'IsValid': True, 'UniqueName': '', 'TurnPosition': [0.0, 10.0, -8.0], 'IsWaitFinish': False, 'ObjectId': 0, 'ActorName': 'LookTag'})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'IsIgnoreSame': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventTag.Demo_SendSignal({'Value': True, 'SignalType': 0, 'IsWaitFinish': False})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 4})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    } {
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_Relative(Enemy)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'FoldWait', 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'TargetIndex': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventCameraRumble.Demo_RotRumble({'Pattern': 4, 'IsWaitFinish': False, 'Power': 2.0, 'Count': 11})
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_Relative(Enemy)].Demo_TimeredAS({'IsWaitFinish': True})
    }

    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-3', 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-2', 'IsWaitFinish': False, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False})

    fork {
        Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_Relative(Enemy)].Demo_Transform({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'BattleDungeon_StartBattleBGM', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': False})
    Enemy_Guardian_Mini_Senior[Guardian_Mini_Appearance_Relative(Enemy)].Demo_FindPlayer({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': False})
    }
    GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'OtherActor': 3, 'AtCalcMode': 0, 'FovyParam': 50.0, 'FovyCalcMode': 1, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'UniqueNameForOtherActor': '', 'LatOffset': 0.0, 'LngOffset': 0.0, 'RadiusOffset': 5.0, 'ReverseOrder': True, 'AtParam': [0.0, 2.0, 0.0], 'Time': 0.0, 'ActorNameForOtherActor': 'TargetActor'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
}

void Guardian_Mini_Senior_Appearance_Relative() {

    call Guardian_Mini_Appearance_Relative({'TargetActor': 'Enemy_Guardian_Mini_Senior', 'Enemy': ActorIdentifier(name="Enemy_Guardian_Mini_Senior"), 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

}
