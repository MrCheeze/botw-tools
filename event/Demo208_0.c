-------- EventFlow: Demo208_0 --------

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_ResetMasterSwordForceMode']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_ResetBoneCtrl', 'Demo_PlayerWait', 'Demo_PlayerEquipNearMasterSword', 'Demo_XLinkEventCreate']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_MasterSwordBase_100Enemy[Base_3]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_XLinkEventEnable']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[05]
entrypoint: None()
actions: ['Demo_ForceMasterSwordFakeForm']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo208_0() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'UniqueName': 'Base_3'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerEquipNearMasterSword({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 0})
    DgnObj_MasterSwordBase_100Enemy[Base_3].Demo_XLinkEventEnable({'IsEnable': False, 'IsWaitFinish': True})
    DgnObj_MasterSwordBase_100Enemy[Base_3].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})

    fork {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'NoErrorCheck': True, 'ASName': 'Demo208_0-C01-Link-A-0', 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'IsEnabledAnimeDriven': 0})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-0', 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 175})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'ASName': 'Demo208_0-C02-Link-A-0', 'NoErrorCheck': True, 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'SceneName': 'C02-0'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        DgnObj_MasterSwordBase_100Enemy[Base_3].Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo'})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'NoErrorCheck': True, 'IsWaitFinish': True, 'ASName': 'Demo208_0-C03-Link-A-0'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'NoErrorCheck': True, 'IsWaitFinish': False, 'ASName': 'Demo208_0-C03-Link-A-0_Loop', 'ClothWarpMode': -2})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C03-0', 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 235})

        fork {
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_100Dungeon_MasterSwordGlow01', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'Demo_MasterSwordGlow_L'})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo208_0_CompleteMasterSword', 'IsWaitFinish': False})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Player', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C04-0', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'NoErrorCheck': True, 'ASName': 'Demo208_0-C04-Link-A-0_Loop'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C05-0', 'IsWaitFinish': False})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'ASName': 'Demo208_0-C05-Link-A-0_Loop'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'SceneName': 'C06-0'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 0, 'Frame': 1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'NoErrorCheck': True, 'IsWaitFinish': False, 'ASName': 'Demo208_0-C03-Link-A-0_Loop', 'ClothWarpMode': 1})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

    call 100enemy.Clear()

}
