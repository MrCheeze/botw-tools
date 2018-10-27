-------- EventFlow: Demo617_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_XLinkEventCreate']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayerToDestination', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo617_0() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'World', 'FadeInSec': 2.0, 'FadeOutSec': 0.0, 'Volume': 0.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'StartDelaySec': 0.0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 170.0, 'DestinationX': -3627.800048828125, 'DestinationY': 515.0, 'DestinationZ': -1802.0})
    Event34:

    call Demo617_0_1()

    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
}

void Demo617_0Rudania() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'World', 'FadeInSec': 2.0, 'FadeOutSec': 0.0, 'Volume': 0.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'StartDelaySec': 0.0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2478.89990234375, 'DestinationY': 987.0, 'DestinationZ': -2548.5, 'DirectionY': -126.5999984741211})
    goto Event34
}

void Demo617_0Lutta() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'World', 'FadeInSec': 2.0, 'FadeOutSec': 0.0, 'Volume': 0.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'StartDelaySec': 0.0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 10.0, 'DestinationX': 2944.800048828125, 'DestinationY': 407.0, 'DestinationZ': 131.6999969482422})
    goto Event34
}

void Demo617_0Navoris() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'World', 'FadeInSec': 2.0, 'FadeOutSec': 0.0, 'Volume': 0.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'StartDelaySec': 0.0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2143.0400390625, 'DestinationY': 470.1000061035156, 'DestinationZ': 2548.0, 'DirectionY': 25.0})
    goto Event34
}

void Demo617_0_1() {
    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo617_Fringe', 'SLinkKey': 'Demo617_Fringe', 'IsTargetDemoSLinkUser': False})

    fork {
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWait': True, 'IsWaitFinish': False, 'Seconds': 1})
        GameRomCamera.Demo_CameraAnimFlow({'UniqueName': '', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'TargetActorDirReferenceMode': 1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo617_0-C01-Link-A-0_Loop'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo617_0-C01-Link-A-0', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
    }

}
