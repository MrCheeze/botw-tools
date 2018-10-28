-------- EventFlow: Demo348_1 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble', 'Demo_RumbleLoop', 'Demo_RumbleLoopStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWind[RemainsWind_Battle]
entrypoint: None()
actions: ['Demo_RailTrace', 'Demo_SkipInitializeMtx', 'Demo_RailTraceNormal']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ListenerCtrlTag
entrypoint: None()
actions: ['Demo_FixPosition']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo348_1() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    RemainsWind[RemainsWind_Battle].Demo_RailTrace({'IsWaitFinish': False, 'DynSpeedScale': 1.0, 'DynInitPosByRailRatio': 5.599999904632568})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    ListenerCtrlTag.Demo_FixPosition({'FixType': 'Fix', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'EnvOutdoorDefault,EnvAir,EnvBaseNoise', 'FadeInSec': 3.0, 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})

    fork {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } {
        EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': True, 'Power': 0.05000000074505806, 'Pattern': 4, 'Count': 20})
        EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Pattern': 3, 'Power': 0.05000000074505806, 'IsWaitFinish': False})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'RemainsWind_Vo_Cry'})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 3, 'IsWait': False})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 1, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Count': 12.0, 'Pattern1AtY': 1.0, 'Pattern1PosY': 1.2000000476837158, 'Pattern1PosX': 0.0, 'Pattern1PosZ': -3.5, 'Accept1FrameDelay': False, 'LngShiftRange': 45.0, 'Pattern1Fovy': 50.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAroundAttention', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 115})
        EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C01-0', 'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo111_0', 'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0})
    RemainsWind[RemainsWind_Battle].Demo_RailTraceNormal({'IsWaitFinish': False})
    ListenerCtrlTag.Demo_FixPosition({'IsWaitFinish': True, 'FixType': 'Unfix'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
        Event57:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Event52:
        RemainsWind[RemainsWind_Battle].Demo_SkipInitializeMtx({'IsWaitFinish': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo051_0'}) {
        goto Event57
    } else {

        call Demo051_0.Demo051_0()

    }
    goto Event52
}
