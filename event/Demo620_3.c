-------- EventFlow: Demo620_3 --------

Actor: Enemy_SiteBoss_Sword_R[0]
entrypoint: None()
actions: ['Demo_ChemicalPlus', 'Demo_WarpForChemicalPlus', 'Demo_GetUp', 'Demo_WarpAppear', 'Demo_WarpMove', 'Demo_PlayASForDemo', 'Demo_TurnToEmptySpace', 'Demo_XLinkEventCreate']
queries: ['CheckSiteBossDamageAnm']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo620_3() {

    call Demo712_0.Demo712_PlayerWait()

    if !Enemy_SiteBoss_Sword_R[0].CheckSiteBossDamageAnm() {
        Enemy_SiteBoss_Sword_R[0].Demo_PlayASForDemo({'IsIgnoreSame': True, 'TargetIndex': 0, 'IsWaitFinish': True, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'BigDamage_Demo', 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2})
    }
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Event11:
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Enemy_SiteBoss_Sword_R[0].Demo_TurnToEmptySpace({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': False, 'FaceId': 2, 'IsWaitFinish': True, 'ActorName': '', 'ObjectId': 1, 'TurnPosition': [0.0, 93.5999984741211, -2.0], 'RotSpdMax': 0.20000000298023224, 'RotSpdMin': 0.019999999552965164, 'RotInitSpd': 0.019999999552965164, 'RotAccel': 0.009999999776482582, 'RotRate': 0.1599999964237213})

    fork {
        Enemy_SiteBoss_Sword_R[0].Demo_WarpForChemicalPlus({'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-1', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'UniqueName': '0', 'IsWaitFinish': True, 'OverwriteAt': True, 'ActorName': 'Enemy_SiteBoss_Sword_R'})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'LifeVoice', 'Volume': 0.0, 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'StartDelaySec': 0.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Enemy_SiteBoss_Sword_R[0].Demo_WarpMove({'IsWaitFinish': True})
        Enemy_SiteBoss_Sword_R[0].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'Demo_Vo_PreAttack', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
        Enemy_SiteBoss_Sword_R[0].Demo_WarpAppear({'IsPartsWarpEffectSync': True, 'IsPartsActorTgOn': True, 'IsWaitFinish': True, 'TargetPos': [0.0, 0.0, 0.0], 'IsKeepDisableDraw': False})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'ReduceOff'})
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': '0', 'IsTurnToLookAtPos': False, 'ActorName': 'Enemy_SiteBoss_Sword_R'})
        }

        fork {
            Enemy_SiteBoss_Sword_R[0].Demo_ChemicalPlus({'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        }

        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Elec_Start_LatterHalf'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'DgnObj_RemainsClearTerminalBody_A_01', 'CameraName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0', 'OverwriteAt': True})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 1, 'CollisionInterpolateSkip': False, 'Count': 0.0})
}

void Demo620_3_GetUp() {

    call Demo712_0.Demo712_PlayerWait()

    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Sword_R[0].Demo_GetUp({'IsWaitFinish': True})
    goto Event11
}
