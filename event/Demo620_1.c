-------- EventFlow: Demo620_1 --------

Actor: Enemy_SiteBoss_Bow_R[0]
entrypoint: None()
actions: ['Demo_CreateChildDevice', 'Demo_Warp', 'Demo_GetUp', 'Demo_WarpAppear', 'Demo_WarpMove', 'Demo_TurnAndLookPos', 'Demo_PlayASForDemo', 'Demo_TurnToEmptySpace', 'Demo_XLinkEventCreate']
queries: ['CheckSiteBossDamageAnm']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_CameraAnimFlow', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['CheckPlayerState']
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

void Demo620_1() {

    call Demo712_0.Demo712_PlayerWait()

    if Enemy_SiteBoss_Bow_R[0].CheckSiteBossDamageAnm() {
        Event7:
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
        Event5:
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Enemy_SiteBoss_Bow_R[0].Demo_TurnToEmptySpace({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 17.799999237060547, 21.0], 'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': '', 'RotSpdMax': 0.20000000298023224, 'RotSpdMin': 0.019999999552965164, 'RotInitSpd': 0.019999999552965164, 'RotAccel': 0.009999999776482582, 'RotRate': 0.1599999964237213})

        fork {
            Enemy_SiteBoss_Bow_R[0].Demo_Warp({'IsWaitFinish': True})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-1', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'OverwriteAt': True, 'ActorName': 'Enemy_SiteBoss_Bow_R'})
        } {
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
        }

        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'LifeVoice', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'ReduceOff'})
            Enemy_SiteBoss_Bow_R[0].Demo_WarpMove({'IsWaitFinish': True})
            Enemy_SiteBoss_Bow_R[0].Demo_WarpAppear({'IsPartsActorTgOn': True, 'IsPartsWarpEffectSync': True, 'IsWaitFinish': True, 'TargetPos': [0.0, 0.0, 0.0], 'IsKeepDisableDraw': False})
            if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': '0', 'IsTurnToLookAtPos': False, 'ActorName': 'Enemy_SiteBoss_Bow_R'})
                Event40:
                Enemy_SiteBoss_Bow_R[0].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'Demo_Vo_DeviceAppear', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
                Enemy_SiteBoss_Bow_R[0].Demo_CreateChildDevice({'IsCreateA': True, 'IsCreateB': True, 'IsCreateC': True, 'IsCreateD': True, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
                SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Wind_Start_LatterHalf'})
            } else {
                goto Event40
            }
        } {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'DgnObj_RemainsClearTerminalBody_A_01', 'CameraName': '', 'SceneName': 'C01-0', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
        }

        Enemy_SiteBoss_Bow_R[0].Demo_TurnAndLookPos({'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'RotSpdMin': 0.009999999776482582, 'RotInitSpd': 0.009999999776482582, 'RotRate': 0.07999999821186066, 'RotSpdMax': 0.10000002384185791, 'RotAccel': 0.004999999888241291, 'IsValid': True, 'FaceId': 2})
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'TargetActor1': 3, 'TargetActor2': 1, 'AtAppendMode': 2, 'PosAppendMode': 3, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '0', 'Pattern1Fovy': 50.0, 'Pattern1PosY': 1.2000000476837158, 'Pattern1PosZ': -2.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ActorName1': 'Enemy_SiteBoss_Bow_R'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        } else {
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
        }
    } else {
        Enemy_SiteBoss_Bow_R[0].Demo_PlayASForDemo({'IsIgnoreSame': True, 'TargetIndex': 0, 'IsWaitFinish': True, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'BigDamage_Demo', 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2})
        goto Event7
    }
}

void Demo620_1_GetUp() {

    call Demo712_0.Demo712_PlayerWait()

    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Bow_R[0].Demo_GetUp({'IsWaitFinish': True})
    goto Event5
}
