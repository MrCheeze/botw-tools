-------- EventFlow: Demo643_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_FlagON', 'Demo_ForceSetPlayerSavePosAngle', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayASAdapt', 'Demo_PlayerAirWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlowAbs', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetDirectionalLight']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo643_0() {
    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_FireByDemo', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'None', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    WorldManagerControl.Demo_SetDirectionalLight({'IsWaitFinish': False, 'angleY': 5.0, 'angleX': -69.0})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo643_0:talk00'})
    } {
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'LookAround', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        } else {
            GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': False})
        }
    }


    call Demo643_0_C02()


    call Demo643_0_C03()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_FirstMessage'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Lift_Complete'})
    EventSystemActor.Demo_ForceSetPlayerSavePosAngle({'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'UniqueName': 'UnderLift', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step05'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_FireByDemo', 'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void Demo643_0_C02() {
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_EnvBase', 'SoundDelay': 0, 'SLinkInst': ''})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})
        }
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo643_0:talk01'})
    } {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-1'})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_EnvLava', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-2'})
    } {
        WorldManagerControl.Demo_SetDirectionalLight({'IsWaitFinish': False, 'angleX': -75.0, 'angleY': 120.0})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 330})
        WorldManagerControl.Demo_SetDirectionalLight({'IsWaitFinish': False, 'angleY': 5.0, 'angleX': -69.0})
    }

    SoundTriggerTag.Demo_SoundTriggerFade({'Sound': 'Demo_EnvLava', 'IsWaitFinish': False})
    SoundTriggerTag.Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'Demo_EnvBase'})
}

void Demo643_0_C03() {

    fork {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo643_0:talk02'})
    } {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0'})
    }

    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}
