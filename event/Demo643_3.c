-------- EventFlow: Demo643_3 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_DisableCameraInput', 'Demo_FlagOFF', 'Demo_ForceOffMagneGrabbed']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlowAbs', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayASAdapt', 'Demo_PlayerShow', 'Demo_PlayerHide']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_Door_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

void Demo643_3() {
    EventSystemActor.Demo_ForceOffMagneGrabbed({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_InterceptLineOfSight', 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_DisableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})

    call C01()


    call C02()

    EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_InterceptLineOfSight', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_Open_DoorBoss', 'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void C01() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    EventCameraRumble.Demo_Rumble({'Pattern': 4, 'Count': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.4000000059604645})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.6000000238418579, 'Count': 5})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo643_3_DoorQuake', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 15})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_OpenAnim_DoorBoss', 'IsWaitFinish': True})
    DgnObj_DLC_Door_A_01.Demo_XLinkEventCreate({'ELinkKey': 'DoorOpen', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
}

void C02() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_FlagON({'FlagName': 'IsChange_DLC2LastBossRoom', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 188})
    EventCameraRumble.Demo_Rumble({'Pattern': 4, 'Count': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.800000011920929})
    EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': False})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo643_3_DoorQuake_End', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    DgnObj_DLC_Door_A_01.Demo_XLinkEventFade({'ELinkKey': 'DoorOpen', 'IsWaitFinish': True, 'SLinkKey': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
}
