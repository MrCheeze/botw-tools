-------- EventFlow: Demo712_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CallDemo', 'Demo_FlagON']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_SiteBoss_Lsword[0]
entrypoint: None()
actions: ['Demo_ChemicalPlus', 'Demo_WarpForChemicalPlus', 'Demo_PlayASForDemo', 'Demo_GetUp', 'Demo_Join', 'Demo_WarpAppear', 'Demo_WarpMove', 'Demo_TurnAndLookPos', 'Demo_TurnToEmptySpace']
queries: ['CheckSiteBossDamageAnm']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayerTurnAndLookToObject', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_SiteBoss_Lsword_Castle[0]
entrypoint: None()
actions: ['Demo_ChemicalPlus', 'Demo_WarpForChemicalPlus', 'Demo_PlayASForDemo', 'Demo_GetUp', 'Demo_WarpAppear', 'Demo_WarpMove', 'Demo_TurnAndLookPos', 'Demo_TurnToEmptySpace', 'Demo_Join']
queries: ['CheckSiteBossDamageAnm']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo712_1() {

    call Demo712_0.Demo712_PlayerWait()

    if !Enemy_SiteBoss_Lsword[0].CheckSiteBossDamageAnm() {
        Enemy_SiteBoss_Lsword[0].Demo_PlayASForDemo({'IsIgnoreSame': True, 'TargetIndex': 0, 'IsWaitFinish': True, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'BigDamage_Demo', 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2})
    }
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Event55:
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Enemy_SiteBoss_Lsword[0].Demo_TurnToEmptySpace({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'TurnPosition': [0.0, 22.5, 7.0], 'ObjectId': 1, 'ActorName': '', 'RotSpdMax': 0.20000000298023224, 'RotSpdMin': 0.019999999552965164, 'RotInitSpd': 0.019999999552965164, 'RotAccel': 0.009999999776482582, 'RotRate': 0.1599999964237213})

    fork {
        Enemy_SiteBoss_Lsword[0].Demo_WarpForChemicalPlus({'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'ActorName': 'Enemy_SiteBoss_Lsword', 'UniqueName': '0', 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'OverwriteAt': True})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'LifeVoice', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'ReduceOff'})
        Enemy_SiteBoss_Lsword[0].Demo_WarpMove({'IsWaitFinish': True})
        Enemy_SiteBoss_Lsword[0].Demo_WarpAppear({'IsPartsActorTgOn': False, 'IsPartsWarpEffectSync': True, 'IsWaitFinish': True, 'TargetPos': [0.0, 0.0, 0.0], 'IsKeepDisableDraw': False})
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': '0', 'ActorName': 'Enemy_SiteBoss_Lsword', 'IsTurnToLookAtPos': False})
        }

        fork {
            Enemy_SiteBoss_Lsword[0].Demo_ChemicalPlus({'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        }

        Enemy_SiteBoss_Lsword[0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'CurseGanon_Fire_Start_LatterHalf', 'IsWaitFinish': True})
        Enemy_SiteBoss_Lsword[0].Demo_TurnAndLookPos({'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'RotSpdMin': 0.009999999776482582, 'RotInitSpd': 0.009999999776482582, 'RotRate': 0.07999999821186066, 'RotSpdMax': 0.10000002384185791, 'RotAccel': 0.004999999888241291, 'IsValid': True, 'FaceId': 2})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 3, 'ActorName': 'DgnObj_RemainsClearTerminalBody_A_01', 'CameraName': '', 'UniqueName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'SceneName': 'C01-0', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'OverwriteAt': True})
    }

    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'TargetActor2': 1, 'AtAppendMode': 2, 'PosAppendMode': 3, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '0', 'ActorName1': 'Enemy_SiteBoss_Lsword', 'Count': 0.0, 'IsWaitFinish': True, 'ReviseModeEnd': 1, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'StartCalcOnly': False, 'ActorIgnoringCollision': 1, 'Pattern1Fovy': 50.0, 'Pattern1PosZ': -2.0, 'Pattern1PosY': 1.2000000476837158, 'FovyAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    } else {
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 45.0})
    }
}

void Demo712_1_Castle() {

    call Demo712_0.Demo712_PlayerWait()

    if !Enemy_SiteBoss_Lsword_Castle[0].CheckSiteBossDamageAnm() {
        Enemy_SiteBoss_Lsword_Castle[0].Demo_PlayASForDemo({'ASName': 'BigDamage', 'IsIgnoreSame': True, 'TargetIndex': 0, 'IsWaitFinish': True, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2})
    }
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Event69:
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Enemy_SiteBoss_Lsword_Castle[0].Demo_TurnToEmptySpace({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': False, 'FaceId': 2, 'IsWaitFinish': True, 'TurnPosition': [-253.8000030517578, 294.29998779296875, -1061.199951171875], 'ActorName': '', 'ObjectId': 1, 'RotSpdMax': 0.20000000298023224, 'RotSpdMin': 0.019999999552965164, 'RotInitSpd': 0.019999999552965164, 'RotAccel': 0.009999999776482582, 'RotRate': 0.1599999964237213})

    fork {
        Enemy_SiteBoss_Lsword_Castle[0].Demo_WarpForChemicalPlus({'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'OverwriteAtDist': 1.0, 'ActorName': 'Enemy_SiteBoss_Lsword_Castle', 'SceneName': 'C02-1', 'BgCheck': False, 'UniqueName': '0', 'OverwriteAt': True})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'LifeVoice', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'ReduceOff'})
        Enemy_SiteBoss_Lsword_Castle[0].Demo_WarpMove({'IsWaitFinish': True})
        Enemy_SiteBoss_Lsword_Castle[0].Demo_WarpAppear({'IsPartsActorTgOn': False, 'IsPartsWarpEffectSync': True, 'IsWaitFinish': True, 'TargetPos': [0.0, 0.0, 0.0], 'IsKeepDisableDraw': False})
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Enemy_SiteBoss_Lsword_Castle', 'IsValid': True, 'UniqueName': '0', 'IsTurnToLookAtPos': False})
        }

        fork {
            Enemy_SiteBoss_Lsword_Castle[0].Demo_ChemicalPlus({'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        }

        Enemy_SiteBoss_Lsword_Castle[0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'CurseGanon_Fire_Start_LatterHalf', 'IsWaitFinish': True})
        Enemy_SiteBoss_Lsword_Castle[0].Demo_TurnAndLookPos({'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'RotSpdMin': 0.009999999776482582, 'RotInitSpd': 0.009999999776482582, 'RotRate': 0.07999999821186066, 'IsValid': False, 'RotSpdMax': 0.10000002384185791, 'RotAccel': 0.004999999888241291, 'FaceId': 2})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': True, 'TargetActor': 3, 'CameraName': '', 'UniqueName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0', 'ActorName': 'TwnObj_HyruleCastleSealCover_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'OverwriteAt': True})
    }

    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'TargetActor1': 3, 'TargetActor2': 1, 'AtAppendMode': 2, 'PosAppendMode': 3, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorName1': 'Enemy_SiteBoss_Lsword_Castle', 'Pattern1Fovy': 50.0, 'Pattern1PosY': 1.2000000476837158, 'Pattern1PosZ': -2.0, 'UniqueName1': '0', 'FovyAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    } else {
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 45.0})
    }
}

void Demo712_1_GetUp() {

    call Demo712_0.Demo712_PlayerWait()

    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Lsword[0].Demo_GetUp({'IsWaitFinish': True})
    goto Event55
}

void Demo712_1_Castle_GetUp() {

    call Demo712_0.Demo712_PlayerWait()

    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Lsword_Castle[0].Demo_GetUp({'IsWaitFinish': True})
    goto Event69
}

void Die() {
    Enemy_SiteBoss_Lsword[0].Demo_Join({'IsWaitFinish': True})

    call Demo712_0.Demo712_PlayerWait()


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo115_0', 'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'Die_PGanonFire', 'IsWaitFinish': True})
}

void Die_Castle() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce'})
    Enemy_SiteBoss_Lsword_Castle[0].Demo_Join({'IsWaitFinish': True})

    call Demo712_0.Demo712_PlayerWait()


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'HyruleCastle', 'EntryPointName': 'BossRoom1', 'EndFade': 1})
}
