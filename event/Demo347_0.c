-------- EventFlow: Demo347_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_WaitForASTriggerEvent', 'Demo_WarpPlayerToDestination', 'Demo_WarpPlayerToActor', 'Demo_AutoSave', 'Demo_FlagOFF']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAnchor', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_PlayerGoStraightAhead', 'Demo_LookAtTheFront', 'Demo_StopInAir', 'Demo_PlayerWait']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Enemy_Assassin_Senior[AssassinBoss]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_MoveCenter', 'Demo_SecondCall', 'Demo_ThirdCall', 'Demo_HoverASPlay', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay', 'Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_PublicVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[C03-1_Player]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo347_0_AssassinBossEffect]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
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
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Appear() {

    call Common.AirStartUP_Player()

    GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': False, 'DestPosX': -3491.840087890625, 'DestPosY': 441.2699890136719, 'DestPosZ': 1312.0400390625, 'StickValue': 0.6000000238418579})
    Fader.Demo_FadeOut({'DispMode': 'Auto', 'Color': 1, 'IsWaitFinish': False, 'Frame': 2})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -3500.159912109375, 'DestinationY': 441.29998779296875, 'DestinationZ': 1311.449951171875, 'DirectionY': 71.43000030517578, 'IsWaitFinish': True})
    WorldManagerControl.Demo_SetPaletteType({'IsWaitFinish': False, 'PaletteType': 0, 'ChangeFrame': 0, 'EndFrame': 0, 'Speed': 1.0})
    Fader.Demo_FadeIn({'DispMode': 'Auto', 'Color': 1, 'IsWaitFinish': False, 'Frame': 0})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': False, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'SceneName': 'C02-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayerGoStraightAnchor({'StickValue': 0.4000000059604645, 'UniqueName': 'AppearDemoPlayerPoint', 'AnchorName': 'DestinationAnchor', 'IsWaitFinish': False})
    }

    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'UniqueName': '', 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [-3429.510009765625, 457.8299865722656, 1324.9300537109375], 'ObjectId': 1, 'TurnDirection': 40.0, 'IsValid': True, 'FaceId': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': False, 'CameraName': '', 'SceneName': 'C01-0', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduceOff'})
    GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': False, 'CameraName': '', 'SceneName': 'C01-1', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-2', 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DestinationX': -3469.590087890625, 'DestinationY': 440.79998779296875, 'DestinationZ': 1319.8399658203125, 'DirectionY': 71.16999816894531})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'SceneName': 'C01-3', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {

        fork {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_NV_Greeting00', 'SoundDelay': 0, 'SLinkInst': ''})
            NPC_PublicVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo347_0:C03-0', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 20})
        } {
            GameROMPlayer.Demo_PlayerGoStraightAnchor({'StickValue': 0.4000000059604645, 'UniqueName': 'AppearDemoPlayerPoint', 'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': True, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'LookAround', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
    GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'SceneName': 'C01-4', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    fork {
        Dm_Locator[Demo347_0_AssassinBossEffect].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo347_0_BossAppear', 'SLinkKey': 'Demo347_0_BossAppear', 'IsTargetDemoSLinkUser': True})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventSystemActor.Demo_FlagON({'FlagName': 'AssassinBoss_Create', 'IsWaitFinish': True})
        Enemy_Assassin_Senior[AssassinBoss].Demo_VisibleOff({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'ASName': 'Demo347_0-C03-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0})
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'ASName': 'Demo347_0-C03-Assassin_Boss-A-1', 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': -1})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo347_0:C03-1', 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0})
    } {
        EventSystemActor[C03-1_Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'Demo347_0-C01-Link-A-0', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'SceneName': 'C01-5', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AssassinBossDemoBgm'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Enemy_Assassin_Senior[AssassinBoss].Demo_TrigNullASPlay({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo347_0-C04-Assassin_Boss-A-0'})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsBecomingSpeaker': False, 'MessageId': 'DemoMsg/Demo347_0:C04-0', 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': -3462.06005859375, 'Pattern1PosY': 441.5899963378906, 'Pattern1PosZ': 1323.02001953125, 'Pattern1AtX': -3462.14990234375, 'Pattern1AtY': 441.2099914550781, 'Pattern1AtZ': 1319.3299560546875, 'Count': 0.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_NV_Think00', 'SoundDelay': 0, 'SLinkInst': ''})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsBecomingSpeaker': False, 'MessageId': 'DemoMsg/Demo347_0:C05-0', 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'SheikPadLookWaist', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C01-6', 'IsWaitFinish': False, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'ASName': 'Demo347_0-C06-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo347_0:C06-0', 'ASName': 'Demo347_0-C06-Assassin_Boss-A-0', 'IsCloseMessageDialog': True})

        fork {
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
        } {
            Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo347_0-C06-Assassin_Boss-A-1'})
            NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo347_0-C06-Assassin_Boss-A-1', 'MessageId': 'DemoMsg/Demo347_0:C06-4', 'IsCloseMessageDialog': True})
        }

        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo347_0-C06-Assassin_Boss-A-2', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo347_0:C06-2'})
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'ASName': 'Demo347_0-C07-Assassin_Boss-A-0', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo347_0:C07-0', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C01-7', 'IsWaitFinish': False, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo347_0-C08-Assassin_Boss-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitForASTriggerEvent({'EventType': 0, 'IsWaitFinish': True, 'ActorName': 'Enemy_Assassin_Senior', 'UniqueName': 'AssassinBoss'})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo347_0:C08-0', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitForASTriggerEvent({'EventType': 0, 'IsWaitFinish': True, 'ActorName': 'Enemy_Assassin_Senior', 'UniqueName': 'AssassinBoss'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C01-8', 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'SceneName': 'C01-9', 'IsWaitFinish': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo347_0:C08-1', 'CloseDialogOption': 1, 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_WaitForASTriggerEvent({'EventType': 0, 'IsWaitFinish': True, 'ActorName': 'Enemy_Assassin_Senior', 'UniqueName': 'AssassinBoss'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActor': 3, 'ActorName': 'FldObj_SecretBaseHoleBrock_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'SceneName': 'C08-1', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo347_0:C08-2', 'CloseDialogOption': 1, 'IsCloseMessageDialog': False})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': 'camera1', 'ActorName': 'Enemy_Assassin_Senior', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'SceneName': 'C10-0', 'UniqueName': '', 'IsWaitFinish': True, 'TargetActorDirReferenceMode': 1, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo347_0:C10-0', 'AnimName': 'Demo347_0-C10-Assassin_Boss-A-0', 'MessageOpenDelayTime': 60, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'IsWaitAS': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'AssassinBossDemoBgm', 'FadeSec': 0.10000000149011612})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Bgm_Impact', 'SoundDelay': 0, 'SLinkInst': ''})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    }

    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'SceneName': 'C10-1', 'TargetActor': 1, 'BgCheck': False, 'ActorName': '', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibitionArea'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void ChangeToSecond() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'ActorName1': 'Enemy_Assassin_Senior', 'TargetActor1': 0, 'StartCalcOnly': True, 'Pattern1PosY': 2.0, 'Pattern1AtY': 2.0, 'Count': 30.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosZ': 10.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Pattern1Fovy': 50.0})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'HeadGroundEnd', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        }
    }

    SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'Assassin_BattleMuteOn'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'IsWaitFinish': False, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 45.0, 'Pattern1PosY': 3.0, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'PosAppendMode': 3, 'Pattern1PosZ': 6.0, 'TargetActor2': 1, 'Pattern1AtX': 0.0, 'Count': 30.0, 'Cushion': 12.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_MoveCenter({'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'ActorName1': 'Enemy_Assassin_Senior', 'TargetActor1': 0, 'StartCalcOnly': True, 'Pattern1Fovy': 40.0, 'Count': 30.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosZ': 8.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosY': 2.0, 'Pattern1AtY': 2.200000047683716, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_HoverASPlay({'IsIgnoreSame': True, 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'IsChangeable': False, 'ASName': 'DemoMoveEnd2'})
    } {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToActor({'ActorName': 'Enemy_Assassin_Senior', 'IsWaitFinish': True, 'DestinationX': 0.0, 'DestinationY': 0.0, 'DirectionY': 0.0, 'RotToVec3f': False, 'GameDataVec3fRotDir': '', 'DestinationZ': 23.0, 'RelativeDist': 0.0, 'OnGround': False, 'IsOffsetBaseTargetActor': True})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        }
    }


    fork {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_SecondCall({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 170})
        GameRomCamera.Demo_MovePosFlow({'ActorName1': 'Enemy_Assassin_Senior', 'TargetActor1': 0, 'StartCalcOnly': True, 'Pattern1AtY': 2.0, 'Pattern1Fovy': 40.0, 'Count': 30.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 15.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        }

    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_HoverASPlay({'IsIgnoreSame': True, 'IsChangeable': True, 'ASSlot': 0, 'SequenceBank': 0, 'IsWaitFinish': False, 'ASName': 'FlyWait'})
    }

    SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'Assassin_BattleMuteOff'})
}

void ChangeToThird() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'ActorName1': 'Enemy_Assassin_Senior', 'TargetActor1': 0, 'StartCalcOnly': True, 'Pattern1PosY': 2.0, 'Pattern1AtY': 2.0, 'Count': 30.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosZ': 10.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Pattern1Fovy': 50.0})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'HeadGroundEnd', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        }
    }

    SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'Assassin_BattleMuteOn'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'IsWaitFinish': False, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 45.0, 'Pattern1PosY': 3.0, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'PosAppendMode': 3, 'Pattern1PosZ': 6.0, 'TargetActor2': 1, 'Pattern1AtX': 0.0, 'Count': 30.0, 'Cushion': 12.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_MoveCenter({'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'ActorName1': 'Enemy_Assassin_Senior', 'TargetActor1': 0, 'StartCalcOnly': True, 'Pattern1Fovy': 40.0, 'Count': 30.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosY': 2.0, 'Pattern1PosZ': 10.0, 'Pattern1AtY': 2.299999952316284, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_HoverASPlay({'IsIgnoreSame': True, 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'IsChangeable': False, 'ASName': 'DemoMoveEnd3'})
    } {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToActor({'ActorName': 'Enemy_Assassin_Senior', 'IsWaitFinish': True, 'DestinationX': 0.0, 'DirectionY': 0.0, 'RotToVec3f': False, 'GameDataVec3fRotDir': '', 'IsOffsetBaseTargetActor': True, 'RelativeDist': 0.0, 'DestinationY': 0.0, 'OnGround': False, 'DestinationZ': 13.0})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        }
    }


    fork {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_ThirdCall({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 170})
        GameRomCamera.Demo_MovePosFlow({'ActorName1': 'Enemy_Assassin_Senior', 'TargetActor1': 0, 'StartCalcOnly': True, 'Pattern1Fovy': 40.0, 'Count': 30.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosZ': 15.0, 'Pattern1AtY': 3.799999952316284, 'Pattern1PosY': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        } {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': False})
        }

    } {
        Enemy_Assassin_Senior[AssassinBoss].Demo_HoverASPlay({'IsIgnoreSame': True, 'IsChangeable': True, 'ASSlot': 0, 'SequenceBank': 0, 'IsWaitFinish': False, 'ASName': 'FlyWait'})
    }

    SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'Assassin_BattleMuteOff'})
}
