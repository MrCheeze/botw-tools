-------- EventFlow: Demo300_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerPullSword', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_PlayerPullSwordFirstFail']
queries: ['IsSuccessEndLastDemoAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_WaitForKeyInput', 'Demo_WaitFrame', 'Demo_SetDispHeartGauge']
queries: ['ComparePlayerHeart', 'CheckFlag', 'ComparePlayerOriginalHeart']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_SetEndProc', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Sword_070
entrypoint: None()
actions: ['Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo300_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'Player', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 3.0, 'FadeOutSec': 2.0})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsGetDemo': False, 'IsDisplay': False, 'IsDisplayEx': False})

    fork {
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'F-2', 'IsWaitFinish': True, 'WarpDestPosName': 'MasterSword'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo300_0-C01-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'ActorName': 'TwnObj_MasterSwordBase_A_01', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsCenterHeartGauge_Demo'})
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsGetDemo': False, 'IsDisplay': True, 'IsDisplayEx': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    call HeartCheck()


    fork {
        GameROMPlayer.Demo_PlayerPullSword({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 3})
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-1', 'TargetActor': 3, 'ActorName': 'TwnObj_MasterSwordBase_A_01', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    if GameROMPlayer.IsSuccessEndLastDemoAction() {
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsGetDemo': False, 'IsDisplay': False, 'IsDisplayEx': False})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo300_0-C01-Link-A-6', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        } {
            EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 460})
            Weapon_Sword_070.Demo_TrigNullASPlay({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo300_0-C01-Weapon_Sword_070-A-0', 'ASSlot': 0, 'SequenceBank': 0})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'TwnObj_MasterSwordBase_A_01', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-3', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'TwnObj_MasterSwordBase_A_01', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-2', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'GetMasterSwordBgm', 'IsWaitFinish': True})
            GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'TwnObj_MasterSwordBase_A_01', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C02-0', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'TwnObj_MasterSwordBase_A_01', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C02-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'TwnObj_MasterSwordBase_A_01', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C03-0', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        }


        call Get_MasterSword.NukiGameFinish()

    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_FirstFailure'}) {
            if !EventSystemActor.ComparePlayerHeart({'Threshold': 1}) {
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Get_MasterSword_Heart52', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Get_MasterSword_Heart40'})
                EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsGetDemo': False, 'IsDisplay': False, 'IsDisplayEx': False})
                SceneSoundCtrlTag.Demo_SetEndProc({'IsWaitFinish': True, 'CtrlType': 'SkipAll'})
            } else {
                Event6:

                call Get_MasterSword.NukiGameCancel()

            }
        } else {
            if !EventSystemActor.ComparePlayerHeart({'Threshold': 2}) {
                TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo300_0:Deku_FirstFailure00', 'IsWaitFinish': False})
                GameROMPlayer.Demo_PlayerPullSwordFirstFail({'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo300_0-C02-Link-A-1', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'ActorName': 'TwnObj_MasterSwordBase_A_01', 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 1.2000000476837158, 0.0]})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                call Get_MasterSword.NukiGameFirstFailure()

            } else {
                goto Event6
            }
        }
    }
}

void Demo300_0_a() {

    fork {
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'F-2', 'IsWaitFinish': True, 'WarpDestPosName': 'MasterSword'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo300_0-C01-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'ActorName': 'TwnObj_MasterSwordBase_A_01', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
}

void HeartCheck() {
    if !EventSystemActor.ComparePlayerOriginalHeart({'Threshold': 52}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Get_MasterSword_Heart52', 'IsWaitFinish': True})
        if EventSystemActor.ComparePlayerOriginalHeart({'Threshold': 40}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Get_MasterSword_Heart40'})
        }
    }
}
