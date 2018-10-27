-------- EventFlow: Demo347_1 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayerToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Senior[AssassinBoss]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_Kill', 'Demo_Idling', 'Demo_PlayASForDemo', 'Demo_VisibleOff', 'Demo_PartsSleep']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: DemoAssassinIronBall
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtTheFront', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BasicSignalTag[DemoIronBallCreate]
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo347_1_IronBallEffect]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo347_1_TreasureBoxEffect]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_RumbleSmall', 'Demo_TimeSpecRumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Defeat() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'WaitAttention', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'BlowDemoPlayerPoint', 'AnchorName': 'DestinationAnchor'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_Idling({'IsWaitFinish': False})
        Enemy_Assassin_Senior[AssassinBoss].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'BlowDemoBossPoint', 'IsWaitFinish': True})
        Enemy_Assassin_Senior[AssassinBoss].Demo_PartsSleep({'IsWaitFinish': False})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C01-1', 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo347_1-C01-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo347_1:C01-0', 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageOpenDelayTime': 0, 'AnimName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 0})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C01-2', 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo347_1-C01-Assassin_Boss-A-1', 'ClothWarpMode': -2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo347_1:C01-1', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'AnimName': '', 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 1})
    }

    Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo347_1-C02-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo347_1:C02-0', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'AnimName': ''})
    Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo347_1-C02-Assassin_Boss-A-1', 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo347_1:C02-1', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'AnimName': '', 'MessageOpenDelayTime': 0})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': 'camera1', 'SceneName': 'C04-0', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'ActorName': 'DemoViewTag', 'TargetActor': 0, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': True, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo347_1-C04-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AssassinBossDemoBgm'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})

        fork {
            Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo347_1:C04-0', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 1, 'IsWaitFinish': False, 'AnimName': '', 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        }


        fork {
            Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo347_1:C04-1', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 1, 'IsWaitFinish': False, 'AnimName': '', 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        }

        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C04-2', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'AnimName': '', 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'CloseDialogOption': 1})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': 'camera1', 'IsWaitFinish': True, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'ActorName': 'DemoViewTag', 'TargetActor': 0, 'TargetActorDirReferenceMode': 1, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C04-1', 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo347_1:C04-3', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'AnimName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C04-4', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'AnimName': 'Demo347_1-C04-Assassin_Boss-A-2', 'CloseDialogOption': 1})
    }


    fork {
        DemoAssassinIronBall.Demo_PlayASForDemo({'ASName': 'Demo347_1-C05-Assassin_Boss_BigBall-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        BasicSignalTag[DemoIronBallCreate].Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventCameraRumble.Demo_RotRumble({'Pattern': 4, 'IsWaitFinish': False, 'Power': 2.0, 'Count': 15})
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': False, 'Seconds': 4, 'IsWait': False})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_EarthQuake', 'SoundDelay': 0, 'SLinkInst': ''})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        Dm_Locator[Demo347_1_IronBallEffect].Demo_XLinkEventCreate({'ELinkKey': 'Demo347_1_IronBallAppear', 'IsWaitFinish': True, 'SLinkKey': 'Demo347_1_IronBallAppear', 'IsTargetDemoSLinkUser': True})
        DemoAssassinIronBall.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo347_1-C05-Assassin_Boss_BigBall-A-1'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C05-2', 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C05-3', 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': False})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'ASName': 'Demo347_1-C05-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'SceneName': 'C08-2', 'OverwriteAtDist': 1.0, 'OverwriteAt': False})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C08-0', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 64, 'AnimName': 'Demo347_1-C08-Assassin_Boss-A-0', 'IsCloseMessageDialog': False, 'CloseDialogOption': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

        fork {
            EventCameraRumble.Demo_RotRumble({'IsWaitFinish': False, 'Count': 2, 'Pattern': 3, 'Power': 3.0})
        } {
            DemoAssassinIronBall.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Land', 'SLinkKey': 'Demo_Land'})
        } {
            EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': False})
        }

    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'SceneName': 'C08-1', 'OverwriteAt': False})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C08-1', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'AnimName': '', 'MessageOpenDelayTime': 0})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C08-2', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'AnimName': 'Demo347_1-C08-Assassin_Boss-A-2'})
    }


    fork {
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C08-3', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'AnimName': '', 'MessageOpenDelayTime': 0, 'CloseDialogOption': 1})
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo347_1-C10-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'SceneName': 'C10-3', 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'OverwriteAt': False})
    } {
        DemoAssassinIronBall.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'Demo_Roll', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
        DemoAssassinIronBall.Demo_PlayASForDemo({'ASName': 'Demo347_1-C10-Assassin_Boss_BigBall-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    } {
        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'AssassinBossDemoBgm', 'FadeSec': 7.0})
    } {
        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'SeqBank': 0, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'IsEnabledAnimeDriven': -1, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'SceneName': 'C10-4', 'IsWaitFinish': False, 'OverwriteAt': True})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_VisibleOff({'IsWaitFinish': False})
        DemoAssassinIronBall.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo347_1-C10-Assassin_Boss_BigBall-A-1'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo347_1:C10-0', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsWaitFinish': True, 'AnimName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsWaitFinish': True, 'AnimName': '', 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo347_1:C10-1', 'MessageOpenDelayTime': 0})

        fork {
            EventCameraRumble.Demo_RotRumble({'Pattern': 4, 'Count': 3, 'Power': 2.0, 'IsWaitFinish': True})
        } {
            Enemy_Assassin_Senior[AssassinBoss].Demo_Kill({'IsWaitFinish': True})
        } {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_IronBallCrash', 'SoundDelay': 0, 'SLinkInst': ''})
        } {
            EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': False})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    BasicSignalTag[DemoIronBallCreate].Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Dm_Locator[Demo347_1_TreasureBoxEffect].Demo_XLinkEventCreate({'ELinkKey': 'Demo347_1_TBoxAppear', 'IsWaitFinish': True, 'SLinkKey': 'Demo347_1_TBoxAppear', 'IsTargetDemoSLinkUser': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventSystemActor.Demo_FlagON({'FlagName': 'AssassinBoss_TreasureBoxCreate', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': 'camera1', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C13-0', 'UniqueName': '', 'ActorName': 'DemoViewTag', 'TargetActor': 0, 'IsWaitFinish': True, 'TargetActorDirReferenceMode': 1, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    }

    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
}
