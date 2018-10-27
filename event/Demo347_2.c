-------- EventFlow: Demo347_2 --------

Actor: Npc_oasis003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_OpenMessageDialog', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayerToAnchor', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_AutoSave', 'Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWakeBoardReady', 'Demo_PlayerGoStraightAnchor', 'Demo_PlayerWait', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis033
entrypoint: None()
actions: ['Demo_ChangeWeaponEquipState']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[tokusei2]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_Sunazarashi_B[tokusei1]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_C[RougeSunaWait]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_B[RougeSuna]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic02]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt0]
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_TimeSpecRumbleSmall', 'Demo_TimeSpecRumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt1]
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt2]
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo() {
    RemainsElectric[Thunder_Relic02].Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Electlic_Relic_Demo347_2', 'IsWaitFinish': True})
    Npc_oasis003.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    Npc_oasis003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo347_2_01'})
    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo347_2_02'})

    fork {
        Animal_Sunazarashi_B[tokusei1].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Animal_SunazarashiSP_C[RougeSunaWait].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    }

    Npc_oasis003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -120.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'TargetActorDirReferenceMode': 2, 'EndFrame': 120.0, 'TargetActorPosReferenceMode': 1, 'ActorName': 'Animal_Sunazarashi_B', 'UniqueName': 'tokusei1', 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-1', 'TargetActorPosReferenceMode': 1, 'ActorName': 'Animal_Sunazarashi_B', 'UniqueName': 'tokusei1', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GerudoLeaderDemoBgm'})
        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_010', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C02-0', 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'ActorName': 'Animal_Sunazarashi_B', 'UniqueName': 'tokusei1', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Npc_oasis003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 65.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_oasis003.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo347_2-C02-Npc_Gerudo_Queen-StartCeremony', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_oasis003.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_011', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } {
        GameROMPlayer.Demo_PlayerGoStraightAnchor({'UniqueName': 'Demo347_2_03', 'AnchorName': 'DestinationAnchor', 'StickValue': 0.0, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'SceneName': 'C03-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'ActorName': 'Animal_Sunazarashi_B', 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    Npc_oasis003.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_020', 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'UniqueName': 'Demo347_2', 'ActorName': 'Npc_oasis003', 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': True, 'EndFrame': 90.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'DemoBgm', 'IsWaitFinish': True, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 4.0, 'FadeOutSec': 2.5})
        Npc_oasis003.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Barrier_Omen', 'SLinkKey': 'Demo_Barrier_Omen', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventCameraRumble.Demo_RotRumble({'Pattern': 4, 'IsWaitFinish': False, 'Count': 7, 'Power': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 28})
        Npc_oasis003.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Barrier_Start', 'SLinkKey': 'Demo_Barrier_Start', 'IsTargetDemoSLinkUser': False})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo347_2_SandSmoke', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': False, 'Count': 2, 'Power': 2.0, 'Pattern': 2})
    } {
        EventControllerRumble[Cnt0].Demo_TimeSpecRumbleSmall({'Seconds': 2, 'IsWait': True, 'IsWaitFinish': True})
        EventControllerRumble[Cnt0].Demo_TimeSpecRumbleLarge({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': True})
        EventControllerRumble[Cnt0].Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'IsWait': False, 'Seconds': 3})
    }

    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'UniqueName': 'Demo347_2', 'ActorName': 'Npc_oasis003', 'SceneName': 'C05-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
    } {
        EventCameraRumble.Demo_RotRumble({'Pattern': 4, 'IsWaitFinish': False, 'Count': 7, 'Power': 1.0})
    }

    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'SceneName': 'C06-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'UniqueName': '', 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'Demo347_2-C06-Link-A-0', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo347_2_SandSmoke'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'SceneName': 'C06-1', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': True, 'ActorName': 'Npc_oasis003', 'UniqueName': 'Demo347_2', 'EndFrame': 150.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Demo347_2-C06-Link-A-1', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'SceneName': 'C07-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'UniqueName': 'Demo347_2', 'ActorName': 'Npc_oasis003', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'SceneName': 'C07-1', 'TargetActorDirReferenceMode': 2, 'EndFrame': 150.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        Npc_oasis003.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo_Barrier_Omen'})
        Npc_oasis003.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'Demo347_2-C07-Npc_Gerudo_Queen-EndCeremony', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Npc_oasis003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_oasis003.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_012', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo347_2-C07-Npc_Gerudo_Queen-BoastWait', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_oasis003.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'Demo347_2-C07-Npc_Gerudo_Queen-EndShyWait', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -1, 'MorphingFrame': -1.0})
    Npc_oasis003.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo347_2-C07-Npc_Gerudo_Queen-A-7', 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_015', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Demo347_2-C07-Npc_Gerudo_Queen-A-6'})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo347_2-C08-Link-A-0', 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'TargetIndex': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Animal_Sunazarashi_B[tokusei1].Demo_PlayASForDemo({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Demo347_2-C08-Sunazarashi-A-0', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C08-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'StartFrame': 0.0, 'EndFrame': 120.0, 'TargetActorPosReferenceMode': 1, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        EventControllerRumble[Cnt0].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
        EventControllerRumble[Cnt1].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
        EventControllerRumble[Cnt2].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    }

    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'ClothWarpMode': 1, 'ASName': 'Demo347_2-C08-Link-A-1', 'TargetIndex': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True})

    fork {
        Npc_oasis003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 45.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_oasis003.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo347_2-C09-Npc_Gerudo_Queen-Prayer', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'SceneName': 'C09-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'EndFrame': 90.0, 'TargetActorPosReferenceMode': 1, 'ActorName': 'Animal_Sunazarashi_B', 'UniqueName': 'tokusei1', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo347_2-C09-Link-A-0', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C10-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_oasis003.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_016', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_PosReset', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Electric_Relic_PosReset', 'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GerudoLeaderDemoBgm', 'FadeSec': 3.0})
    Npc_oasis003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo347_2_04'})
    Npc_oasis003.Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Demo_Barrier_Start', 'SLinkKey': 'Demo_Barrier_Start'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Electlic_Relic_Demo347_2', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electlic_Relic_Sunazarashi'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_SunazarashiRouge'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_Battle'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {
        Animal_SunazarashiSP_A[tokusei2].Demo_PlayASForDemo({'ASName': 'Wait_No_Move', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Animal_SunazarashiSP_B[RougeSuna].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis033.Demo_ChangeWeaponEquipState({'EquipState': 'Hold', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'ibutubattleStart2', 'AnchorName': 'DestinationAnchor'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Animal_SunazarashiSP_A', 'UniqueName': 'tokusei2', 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'FaceId': 2, 'IsValid': True, 'IsTurnToLookAtPos': False})
    GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'CreateSelf': False, 'UniqueName': 'tokusei2'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C11-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'TargetActor': 3, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Animal_SunazarashiSP_A', 'IsWaitFinish': True, 'EndFrame': 210.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'tokusei2', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsElecBattleBgm', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_Strategy'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Demo347_2RougeGenFlg'})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'EnterDungeonProhibition'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'PSavePosNotUpdate', 'IsWaitFinish': True})
}
