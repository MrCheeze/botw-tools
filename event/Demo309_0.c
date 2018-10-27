-------- EventFlow: Demo309_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko001
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_WarpToScheduleAnchor', 'Demo_WarpToAnchor', 'Demo_Talk', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialogTrig', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoSys]
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo309_0() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-0', 'TargetActor': 3, 'ActorName': 'Npc_Kakariko001', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_Demo309_0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 228.91000366210938, 'DirectionY': -99.23999786376953, 'IsWaitFinish': True, 'DestinationZ': 984.4000244140625, 'DestinationX': 1775.699951171875})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'IsIgnoreSame': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_OhomeTalk'}) {
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Connective_Comp_Find_4Relic'})
        } else {
            Npc_Kakariko001.Demo_Talk({'MessageId': 'DemoMsg/Demo309_0:Talk_00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo309_0-C02-Link-A-0', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'Volume': 0.0, 'ExceptGroups': 'Player,Npc', 'StartDelaySec': 0.0, 'FadeOutSec': 5.0, 'FadeInSec': 3.0})
        Npc_Kakariko001.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo309_0:Talk_01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'EndFrame': 90.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    EventBgmCtrlTag.Demo_Start({'BgmName': 'ImpaDemoBgm', 'IsWaitFinish': True})

    fork {
        Npc_Kakariko001.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo309_0:Talk_02', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 30, 'ASName': 'Demo309_0-C04-Npc_Shiekah_Impa-A-0', 'IsBecomingSpeaker': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_Kakariko001', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C04-0', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C04-1', 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    fork {
        Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo309_0-C05-Npc_Shiekah_Impa-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Kakariko001.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo309_0:Talk_03', 'CloseDialogOption': 3})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 175})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'IsWaitFinish': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo309_0-C05-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': False})
    Npc_Kakariko001.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo309_0:Talk_04', 'IsWaitFinish': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'ASName': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 90.0, 'SceneName': 'C08-0', 'ActorName': 'TwnObj_Village_SheikerMayorHouse_A_01', 'TargetActor': 3, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 228.91000366210938, 'IsWaitFinish': True, 'DestinationZ': 984.4000244140625, 'DestinationX': 1776.3299560546875, 'DirectionY': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo309_0-C07-Link-A-0', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
        EventSystemActor[DemoSys].Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_Kakariko001', 'SceneName': 'C07-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Kakariko001.Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 1773.699951171875, 'DestinationY': 228.89999389648438, 'DestinationZ': 989.9000244140625, 'DirectionY': 45.0})
        Npc_Kakariko001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo309_0-C07-Npc_Shiekah_Impa-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
        Npc_Kakariko001.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 20.0, 'ActorName': 'GameRomCamera', 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [1775.8299560546875, 229.7100067138672, 992.0999755859375]})
    }

    Npc_Kakariko001.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo309_0:Talk_05', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 30, 'IsBecomingSpeaker': False})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 228.91000366210938, 'DestinationX': 1776.0999755859375, 'DestinationZ': 988.9000244140625, 'DirectionY': 0.0, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'IsIgnoreSame': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'SceneName': 'C11-0', 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        Npc_Kakariko001.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo309_0:Talk_06', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 45})
    }

    EventBgmCtrlTag.Demo_Stop({'BgmName': 'ImpaDemoBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    Npc_Kakariko001.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
    Npc_Kakariko001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'Frame': 45, 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.00030499999411404133, 'Pattern1PosZ': -2.998656988143921, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.5, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'TargetActor1': 1, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosY': 2.079833984375, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'PictureMemory_Demo309_0'})
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko001_GaveChampionShirt'}) {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        Event1:
        EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo309_0', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_Last1'})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade', 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    } else {
        goto Event1
    }
}
