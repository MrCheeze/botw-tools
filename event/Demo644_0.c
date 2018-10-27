-------- EventFlow: Demo644_0 --------

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1]
entrypoint: None()
actions: ['Demo_Join', 'Demo_ShadowClone_Make', 'Demo_PlayASForDemo', 'Demo_ChangeFreeMoving', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_Join', 'Demo_XLinkEventCreate']
queries: []
params: {'IsWorld': True, 'CreateMode': 1, 'PosX': 0.0, 'PosZ': 900.0, 'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'PosY': 15.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect', 'Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerAirWait', 'Demo_PlayerTurnAndLookToObject', 'Demo_DisableUnequipInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2]
entrypoint: None()
actions: ['Demo_ShadowClone_Make', 'Demo_Join', 'Demo_PlayASForDemo', 'Demo_ChangeFreeMoving', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4, 'IsGrounding': True}

Actor: Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_ChangeFreeMoving', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'PosX': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'PosY': 10.0, 'PosZ': 900.0, 'CreateMode': 4, 'IsGrounding': True, 'IsWorld': True}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3]
entrypoint: None()
actions: ['Demo_ShadowClone_Make', 'Demo_Join', 'Demo_ChangeFreeMoving', 'Demo_PlayASForDemo', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4]
entrypoint: None()
actions: ['Demo_ShadowClone_Make', 'Demo_Join', 'Demo_ChangeFreeMoving', 'Demo_PlayASForDemo', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Priest_Boss_ShadowClone_3-4]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Priest_Boss_ShadowClone_5-6]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5]
entrypoint: None()
actions: ['Demo_ShadowClone_Make', 'Demo_Join', 'Demo_ChangeFreeMoving', 'Demo_PlayASForDemo', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6]
entrypoint: None()
actions: ['Demo_ShadowClone_Make', 'Demo_Join', 'Demo_ChangeFreeMoving', 'Demo_PlayASForDemo', 'Demo_WarpToAnchor', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7]
entrypoint: None()
actions: ['Demo_Join', 'Demo_WarpToAnchor', 'Demo_ShadowClone_Make', 'Demo_ChangeFreeMoving', 'Demo_PlayASForDemo', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8]
entrypoint: None()
actions: ['Demo_Join', 'Demo_WarpToAnchor', 'Demo_ShadowClone_Make', 'Demo_ChangeFreeMoving', 'Demo_PlayASForDemo', 'Demo_TriggerToggleVisible', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Priest_Boss_ShadowClone_7-8]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble', 'Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStop', 'Demo_SetStartProc', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[00]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[03]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[04]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[05]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[06]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[07]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[08]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[09]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Main() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce'})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'DLC_Demo644_0_EnvRain'})
    Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'Volume': 0.6000000238418579, 'FadeOutSec': 2.0, 'FadeInSec': 2.200000047683716, 'ExceptGroups': '', 'StartDelaySec': 0.0})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'PriestBossBgm_TransformDemo', 'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Dm_Locator_DLC2nd', 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 2, 'LngShiftRange': 60.0, 'LatShiftRange': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'Pattern1AtX': 0.0, 'GameDataVec3fCameraAt': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Count': 60.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.0, 'Pattern1PosY': -1.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 1.0, 'Pattern1PosZ': 10.0, 'IsWaitFinish': True})
    } {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': True})
        }
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'SLinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Count': 1, 'Power': 1.2000000476837158})
    EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': True})
    WorldManagerControl.Demo_SetWind({'IsWaitFinish': False, 'WindDirX': 0.0, 'IsAutoWind': True, 'WindDirY': 15.0, 'WindDirZ': 920.0, 'WindPower': 6.0})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 1, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [0.0, 1.7999999523162842, 900.0]})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-0'})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Dm_Locator_DLC2nd', 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 2, 'LngShiftRange': 60.0, 'LatShiftRange': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'Pattern1AtX': 0.0, 'GameDataVec3fCameraAt': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'IsWaitFinish': False, 'FovyAppendMode': 1, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 1.0, 'Count': 250.0, 'Pattern1PosZ': 6.0, 'Pattern1PosY': -0.800000011920929})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC_Demo_BossStripe_R_01'})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC_Demo_BossStripe_L_01'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 225})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'DLC_Demo_BossStripe_R_01'})
    Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'DLC_Demo_BossStripe_L_01'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Dm_Locator_DLC2nd', 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 2, 'LngShiftRange': 60.0, 'LatShiftRange': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'Pattern1AtX': 0.0, 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Pattern1AtZ': 10.0, 'IsWaitFinish': False, 'FovyAppendMode': 1, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.0, 'Cushion': 0.800000011920929, 'Count': 45.0, 'Pattern1AtY': 0.0, 'Pattern1PosZ': 17.0, 'Pattern1PosY': -1.0})
    } {
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-0'})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_Join({'IsWaitFinish': True})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 60, 'Offset': [-8.0, 0.0, 0.0], 'DecelerationFrame': 0})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_Join({'IsWaitFinish': True})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': True})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 60, 'Offset': [8.0, 0.0, 0.0], 'DecelerationFrame': 0})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    } {
        EventSystemActor[Priest_Boss_ShadowClone_3-4].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})

        fork {
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_Join({'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 48, 'Offset': [-6.0, 0.0, 0.0], 'DecelerationFrame': 0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        } {
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_Join({'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 48, 'Offset': [6.0, 0.0, 0.0], 'DecelerationFrame': 0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        }

    } {
        EventSystemActor[Priest_Boss_ShadowClone_5-6].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})

        fork {
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_Join({'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 36, 'Offset': [-4.0, 0.0, 0.0], 'DecelerationFrame': 0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        } {
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_Join({'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 36, 'Offset': [4.0, 0.0, 0.0], 'DecelerationFrame': 0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        }

    } {
        EventSystemActor[Priest_Boss_ShadowClone_7-8].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})

        fork {
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_Join({'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 24, 'Offset': [-2.0, 0.0, 0.0], 'DecelerationFrame': 0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        } {
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_Join({'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 0.0, 'DestinationZ': 900.0, 'DestinationY': 15.0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_ShadowClone_Make({'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-3', 'DurationFrame': 24, 'Offset': [2.0, 0.0, 0.0], 'DecelerationFrame': 0})
            Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossReplica', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 28})

    fork {
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'ClothWarpMode': -2, 'IsWaitFinish': False})
        EventSystemActor[00].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[00].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[00].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'ClothWarpMode': -2, 'IsWaitFinish': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'ClothWarpMode': 0, 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[05].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[05].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[05].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[06].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[06].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[06].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[07].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[07].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[07].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-2', 'MorphingFrame': 45.0, 'IsWaitFinish': False})
        EventSystemActor[08].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[08].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-5'})
        EventSystemActor[08].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_0-C01-Priest_Boss_Normal-A-4'})
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossMark', 'SLinkKey': ''})
    } {
        EventSystemActor[09].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Count': 1, 'Power': 1.5, 'Pattern': 4})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'PriestBossBgm_Level2Track', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    fork {
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'SLinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'SLinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'SLinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'SLinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DLC_Demo_BossWarp'})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DLC_Demo_BossWarp'})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DLC_Demo_BossWarp'})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DLC_Demo_BossWarp'})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DLC_Demo_BossWarp'})
    }


    fork {
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_ChangeFreeMoving({'SetFreeMoving': False, 'IsWaitFinish': True})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_ChangeFreeMoving({'IsWaitFinish': True, 'SetFreeMoving': False})
    }


    fork {
        Priest_Boss_ShadowClone_Real[Priest_Boss_ShadowClone_Real].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_1].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsClothHandling': False, 'IsXLinkHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_2].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsClothHandling': False, 'IsXLinkHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_3].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_4].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_5].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_6].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_7].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    } {
        Priest_Boss_ShadowClone[Priest_Boss_ShadowClone_8].Demo_TriggerToggleVisible({'IsWaitFinish': False, 'IsVisible': False, 'IsXLinkHandling': False, 'IsClothHandling': False})
    }

    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'DLC_Demo644_0_EnvRain'})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}
