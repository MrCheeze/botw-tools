-------- EventFlow: Demo347_4 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PolarCoordPlayerRelative', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic01]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ListenerCtrlTag
entrypoint: None()
actions: ['Demo_FixPosition']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo347_4() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    ListenerCtrlTag.Demo_FixPosition({'FixType': 'Fix', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'EnvOutdoorDefault,EnvAir,EnvBaseNoise', 'FadeInSec': 3.0, 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})

    fork {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } {
        EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': True, 'Power': 0.05000000074505806, 'Pattern': 4, 'Count': 20})
        EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Pattern': 3, 'Power': 0.05000000074505806, 'IsWaitFinish': False})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'RemainsElectric_Vo_Cry'})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 4, 'IsWait': False})
    } {
        RemainsElectric[Thunder_Relic01].Demo_Join({'IsWaitFinish': False})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 1, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Count': 12.0, 'Pattern1AtY': 1.0, 'Pattern1PosY': 1.2000000476837158, 'Pattern1PosX': 0.0, 'Pattern1PosZ': -3.5, 'Accept1FrameDelay': False, 'LngShiftRange': 45.0, 'Pattern1Fovy': 50.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'LookAroundAttention', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 115})
        EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
    }

    GameRomCamera.Demo_PolarCoordPlayerRelative({'FovyCalcMode': 1, 'ReviseMode': 0, 'UniqueNameForOtherActor': '', 'LngOffset': 0.0, 'OtherActor': 3, 'ActorNameForOtherActor': 'RemainsElectric', 'IsWaitFinish': True, 'LatOffset': 0.0, 'ActorIgnoringCollision': -1, 'ReverseOrder': True, 'AtCalcMode': 0, 'RadiusOffset': 1.0, 'FovyParam': 55.0, 'AtParam': [0.0, 70.0, 0.0], 'Time': 30.0})
    GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 0, 'AtAppendMode': 0, 'CollisionInterpolateSkip': False, 'Count': 20.0, 'StartCalcOnly': True, 'FovyAppendMode': 0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 0, 'AtAppendMode': 0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'FovyAppendMode': 0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 150.0, 'Pattern1Fovy': -10.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo113_0', 'EndFade': 0})
    WorldManagerControl.Demo_SetPaletteType({'PaletteType': 0, 'ChangeFrame': 0, 'EndFrame': 0, 'IsWaitFinish': False, 'Speed': 1.0})
    ListenerCtrlTag.Demo_FixPosition({'IsWaitFinish': True, 'FixType': 'Unfix'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'})
    && !EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo051_0'}) {

        call Demo051_0.Demo051_0()

    }
}
