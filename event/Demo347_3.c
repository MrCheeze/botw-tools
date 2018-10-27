-------- EventFlow: Demo347_3 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_ChangeScene', 'Demo_CallDemo', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_IncreaseGameDataInt']
queries: ['CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayerWakeBoardEnd', 'Demo_DisableGetOffSunaZInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic02]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[tokusei2]
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[EffectWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Shake0]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Shake1]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Shake2]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Shake3]
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetFogDirect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo() {
    GameROMPlayer.Demo_DisableGetOffSunaZInEvent({'IsWaitFinish': False})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 2.0, 'BgmName': 'RemainsElecBattleBgm', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    fork {
        Animal_SunazarashiSP_A[tokusei2].Demo_Stop({'IsWaitFinish': False})
        EventSystemActor[EffectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        RemainsElectric[Thunder_Relic02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'ASName': 'Demo347_3-C01-DgnObj_IbutsuElectricField_A_01', 'MorphingFrame': 0.0})
        WorldManagerControl.Demo_EventSetFogDirect({'FarUse': True, 'Near': -60.0, 'InstantSW': False, 'FogRatio': 0.4300000071525574, 'NearUse': True, 'Far': 500.0, 'IsWaitFinish': False})
        EventSystemActor[EffectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        RemainsElectric[Thunder_Relic02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo347_3-C01-DgnObj_IbutsuElectricField_A_01-A-0'})
        RemainsElectric[Thunder_Relic02].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo347_3_Damage', 'SLinkKey': ''})
        EventSystemActor[EffectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        RemainsElectric[Thunder_Relic02].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo347_3_Step_LegR'})
        EventControllerRumble[Shake0].Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor[EffectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
        RemainsElectric[Thunder_Relic02].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo347_3_Step_LegL'})
        EventControllerRumble[Shake1].Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor[EffectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
        RemainsElectric[Thunder_Relic02].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo347_3_Step_ArmL'})
        EventControllerRumble[Shake2].Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor[EffectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        RemainsElectric[Thunder_Relic02].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo347_3_Step_LegR'})
        EventControllerRumble[Shake3].Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'RemainsElectric', 'SceneName': 'C10-0', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 4, 'Count': 3, 'Power': 2.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 4, 'Count': 3, 'Power': 2.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'RemainsElectric', 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'SceneName': 'C02-0', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 0.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 210})
        RemainsElectric[Thunder_Relic02].Demo_XLinkEventKill({'IsWaitFinish': False, 'ELinkKey': 'Demo347_3_Damage', 'SLinkKey': ''})
    } {
        EventControllerRumble[Shake3].Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 2, 'IsWait': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'RemainsElectric', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'EndFrame': -1.0, 'SceneName': 'C11-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    GameROMPlayer.Demo_Talk({'IsWaitFinish': False, 'GreetingType': 'NotAndNot'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'NoLogo'})
    GameROMPlayer.Demo_PlayerWakeBoardEnd({'IsWaitFinish': False})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo123_0', 'EndFade': 1})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Electric_Relic_Battle', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_SunazarashiRouge'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Invasion', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'EnterDungeonProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Location_RemainsElectric', 'Operator': 'LessThan', 'Value': 1}) {
        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Location_RemainsElectric', 'Value': 1})
        Event47:

        call Electric_Relic.Electric_Relic_Recovery()

        EventSystemActor.Demo_ChangeScene({'StartType': -1, 'IsWaitFinish': True, 'WarpDestMapName': 'MainFieldDungeon/RemainsElectric', 'EvflName': 'Demo706_0', 'EntryPointName': 'EnterRemainElectric', 'WarpDestPosName': 'StartDemoEnter', 'FadeType': 0})
    } else {
        goto Event47
    }
}
