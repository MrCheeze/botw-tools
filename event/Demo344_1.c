-------- EventFlow: Demo344_1 --------

Actor: RemainsWater
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerHide', 'Demo_PlayerShow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora030[RelicBattleZora]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_WarpToAnchor', 'Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetWeather', 'Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_IbutsuWaterFall_A_01[waterfall04]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_IbutsuWaterFall_A_01[waterfall01]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_IbutsuWaterFall_A_01[waterfall02]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_IbutsuWaterFall_A_01[waterfall03]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RumbleLoop', 'Demo_RumbleLoopStop', 'Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[RelicWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint1]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint2]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint3]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint4]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera[CameraWait]
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CameraWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo344_1() {
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 2.0, 'BgmName': 'RemainsWaterBattleBgm', 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'rain', 'SoundDelay': 0, 'SLinkInst': ''})
    Npc_Zora030[RelicBattleZora].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    Npc_Zora030[RelicBattleZora].Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': 0.0, 'DestinationX': 3761.5, 'DestinationY': 316.5, 'DestinationZ': -198.33999633789062})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    RemainsWater.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo334_1_WeakFountain', 'IsTargetDemoSLinkUser': False})
    RemainsWater.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo344_1_RemainsWater_Wave'})
    RemainsWater_WeakPoint[WeakPoint1].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo344_1-C05-DgnObj_Faucet_A_01-A-0'})
    RemainsWater_WeakPoint[WeakPoint2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo344_1-C05-DgnObj_Faucet_A_01-C-0'})
    RemainsWater_WeakPoint[WeakPoint3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo344_1-C05-DgnObj_Faucet_A_01-B-0'})
    RemainsWater_WeakPoint[WeakPoint4].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo344_1-C05-DgnObj_Faucet_A_01-D-0'})
    RemainsWater.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'RemainsWater_VoDie', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {
        GameRomCamera[CameraWait].Demo_CameraAnimFlow({'ActorName': 'RemainsWater', 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': True, 'SceneName': 'C51-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False, 'EndFrame': -1.0})
        RemainsWater.Demo_PlayASForDemo({'SeqBank': 0, 'ASName': 'Demo344_1-C01-DgnObj_IbutsuWaterField_A_01-A-0', 'TargetIndex': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 3, 'IsWait': False})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Npc_Zora030[RelicBattleZora].Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora030_S3_001', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'IsWaitFinish': False})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        GameRomCamera[CameraWait].Demo_CameraAnimFlow({'ActorName': 'RemainsWater', 'UniqueName': '', 'CameraName': '', 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': True, 'SceneName': 'C52-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 90.0})
        RemainsWater.Demo_PlayASForDemo({'SeqBank': 0, 'TargetIndex': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo344_1-C02-DgnObj_IbutsuWaterField_A_01-A-1', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
        RemainsWater.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo334_1_NoseFallsDown', 'IsTargetDemoSLinkUser': False})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Power': 2.0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_RainStop'})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        WorldManagerControl.Demo_EventSetWeather({'WeatherType': 0, 'IsWaitFinish': True})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
    } {
        EventCameraRumble.Demo_RumbleLoop({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 5.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        EventCameraRumble.Demo_RumbleLoop({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 3.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'RemainsWater', 'UniqueName': '', 'CameraName': '', 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'TargetActor': 3, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'SceneName': 'C53-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2})
    Npc_Zora030[RelicBattleZora].Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora030_S3_002', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    fork {
        RemainsWater.Demo_PlayASForDemo({'SeqBank': 0, 'TargetIndex': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo344_1-C05-DgnObj_IbutsuWaterField_A_01-A-0', 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Power': 1.0, 'Pattern': 3, 'Count': 5})
    } {
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        RemainsWater.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo344_1_Arrival'})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 6, 'IsWait': False})
        Npc_Zora030[RelicBattleZora].Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora030_S3_003', 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 165})
        Npc_Zora030[RelicBattleZora].Demo_OpenMessageDialog({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora030_S3_004', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        RemainsWater.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo344_1_Arrival'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
        RemainsWater.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo344_1_EntranceOpen'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    }

    RemainsWater.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'Demo344_1_Rise'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1, 'Frame': 2})
    EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    RemainsWater.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo334_1_WeakFountain'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo120_0', 'EndFade': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_Step4'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
    EventSystemActor.Demo_ChangeScene({'StartType': -1, 'IsWaitFinish': True, 'WarpDestMapName': 'MainFieldDungeon/RemainsWater', 'EvflName': 'Demo708_0', 'EntryPointName': 'EnterRemainWater', 'WarpDestPosName': 'StartDemoEnter', 'FadeType': 0})
}

void DemoInitialize() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2, 'Color': 1})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2, 'Color': 1})
}
