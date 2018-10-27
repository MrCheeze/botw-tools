-------- EventFlow: Demo644_1 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_Giant[Priest_Boss_Giant]
entrypoint: None()
actions: ['Demo_WarpToAnchor', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'IsGrounding': False, 'PosX': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4, 'IsWorld': True, 'PosZ': 0.0, 'PosY': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_Join', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'PosX': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosZ': 900.0, 'IsWorld': True, 'PosY': 11.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObjectNow', 'Demo_DisableUnequipInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
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
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
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
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'DLC_Demo644_1_EnvRain_01'})
    Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'Volume': 0.6000000238418579, 'FadeOutSec': 2.0, 'FadeInSec': 2.200000047683716, 'ExceptGroups': '', 'StartDelaySec': 0.0})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'PriestBossBgm_TransformDemo', 'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Dm_Locator_DLC2nd', 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 2, 'LngShiftRange': 60.0, 'LatShiftRange': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'Pattern1AtX': 0.0, 'GameDataVec3fCameraAt': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Count': 60.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.0, 'Pattern1PosY': -1.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 1.0, 'Pattern1PosZ': 10.0, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_Demo_BossWarp', 'SLinkKey': 'DLC_Demo_BossWarp', 'IsTargetDemoSLinkUser': True})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Count': 1, 'Power': 1.2000000476837158})
    EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DestinationX': 0.0, 'DestinationY': 0.0, 'DirectionY': 180.0, 'DestinationZ': 920.0})
    GameROMPlayer.Demo_LookAtObjectNow({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Priest_Boss_Giant', 'UniqueName': 'Priest_Boss_Giant', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

    call C01()

    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void C01() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Dm_Locator_DLC2nd', 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 2, 'LngShiftRange': 60.0, 'LatShiftRange': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'Pattern1AtX': 0.0, 'GameDataVec3fCameraAt': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'FovyAppendMode': 1, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 1.0, 'Pattern1PosZ': 6.0, 'Pattern1PosY': -0.800000011920929, 'IsWaitFinish': True, 'Count': 180.0})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        SoundTriggerTag.Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'DLC_Demo644_1_EnvRain_01'})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'DLC_Demo644_1_EnvRain_02', 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'SceneName': 'C01-2', 'EndFrame': 59.0})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'SceneName': 'C01-1', 'StartFrame': 20.0, 'EndFrame': 79.0})
        SoundTriggerTag.Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'DLC_Demo644_1_EnvRain_02'})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'DLC_Demo644_1_EnvRain_03', 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'Accept1FrameDelay': True, 'SceneName': 'C01-3', 'UniqueName': '', 'TargetActor': -1, 'ActorName': '', 'EndFrame': 349.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'StartFrame': 50.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 175})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 360})
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'PriestBossBgm_Level3Track'})
    } {
        Priest_Boss_Giant[Priest_Boss_Giant].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationZ': 900.0, 'DestinationX': 0.0, 'DestinationY': 11.0})
        Priest_Boss_Giant[Priest_Boss_Giant].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo644_1-C01-Priest_Boss_Giant-A-0', 'IsWaitFinish': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        Priest_Boss_Giant[Priest_Boss_Giant].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BossPowerCharge', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
        Priest_Boss_Giant[Priest_Boss_Giant].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BossGiant', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 342})
        Priest_Boss_Giant[Priest_Boss_Giant].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BossRoar', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 7})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        Priest_Boss_Giant[Priest_Boss_Giant].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'BossRoar', 'SLinkKey': ''})
    }

    SoundTriggerTag.Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'DLC_Demo644_1_EnvRain_02'})
}
