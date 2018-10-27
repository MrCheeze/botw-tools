-------- EventFlow: Demo305_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_WarpToActor', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_OpenMessageDialogTrig']
queries: []
params: {'CreateMode': 0, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'IsGrounding': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerDestinationMove', 'Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_GetOffFromHorse']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraReset', 'Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo305_0() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': 'Brosrock_Now_Npc_HighMountain035', 'ActorName': 'Npc_HighMountain035', 'TargetActorDirReferenceMode': 2, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction2', 'IsWaitFinish': True, 'UniqueName': ''})
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction2', 'IsWaitFinish': True, 'UniqueName': ''})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction2', 'IsWaitFinish': True, 'UniqueName': ''})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction2', 'IsWaitFinish': True, 'UniqueName': ''})
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction2', 'IsWaitFinish': True, 'UniqueName': ''})
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': False, 'ClearDemoMemberIfNotOwned': False})
        GameROMPlayer.Demo_PlayerDestinationMove({'IsWaitFinish': True, 'DestPosX': -3985.64990234375, 'DestPosY': 272.3800048828125, 'DestPosZ': -1738.5899658203125, 'StickValue': 0.0})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HighMountain035', 'UniqueName': 'Brosrock_Now_Npc_HighMountain035'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo305_0-C01-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': 'Brosrock_Now_Npc_HighMountain035', 'ActorName': 'Npc_HighMountain035', 'TargetActorDirReferenceMode': 2, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_01', 'ASName': 'Demo305_0-C02-UMii_Rito_G-A-0'})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'UniqueName': 'Brosrock_Now_Npc_HighMountain035', 'ActorName': 'Npc_HighMountain035', 'TargetActorDirReferenceMode': 2, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    } {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 2, 'TurnPosition': [-4002.35009765625, 277.4800109863281, -1730.030029296875]})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})

        fork {
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            fork {
                Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 2, 'TurnPosition': [-4002.35009765625, 277.4800109863281, -1730.030029296875]})
                Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            }

        }

    } {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'IsConfront': True, 'ObjectId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [-4002.35009765625, 277.4800109863281, -1730.030029296875]})
    }

    Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_02', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'ASName': 'Demo305_0-C01-UMii_Rito_G-A-0'})

    fork {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_03', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsWaitAS': False, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-1'})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-1_End', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo305_0-C01-UMii_Rito_G-A-1', 'IsWaitFinish': True, 'ClothWarpMode': -1})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 5.0, 'ClothWarpMode': -1})
    }

    Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_04', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 15, 'ASName': 'Demo305_0-C02-UMii_Rito_G-A-0'})
    Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_Talk({'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_05', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsBecomingSpeaker': False})

    fork {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': 'Brosrock_Now_Npc_HighMountain035', 'ActorName': 'Npc_HighMountain035', 'TargetActorDirReferenceMode': 2, 'SceneName': 'C04-1', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
        } {
            Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_06', 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-1'})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'TargetActor1': 3, 'StartCalcOnly': True, 'ActorName1': 'Npc_HighMountain033', 'UniqueName1': 'Brosrock_Now_Npc_HighMountain033', 'Pattern1PosX': 0.3789060115814209, 'Pattern1PosY': 0.890625, 'Pattern1PosZ': 5.408936023712158, 'Pattern1AtX': 0.002440999960526824, 'Pattern1AtY': 0.6695860028266907, 'Pattern1AtZ': 0.48718300461769104, 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-1_End', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        }

    } {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    }

    EventBgmCtrlTag.Demo_Start({'BgmName': 'RitoBrosDemoBgm', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 135.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})

        fork {
            Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 135.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            fork {
                Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 135.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})

                fork {
                    Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 135.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                    Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                } {
                    Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 135.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                    Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                }

            }

        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': 'Brosrock_Now_Npc_HighMountain035', 'ActorName': 'Npc_HighMountain035', 'TargetActorDirReferenceMode': 2, 'SceneName': 'C06-0', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_07', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-2'})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-2_End', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C08-0', 'ActorName': 'Npc_HighMountain032', 'UniqueName': 'Brosrock_Now_Npc_HighMountain032', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Pleasure', 'IsOnlyFace': True})
    Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_Talk({'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_08', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-1'})

    fork {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C03-UMii_Rito_G-A-1_End', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo305_0-C04-UMii_Rito_G-D-0', 'ClothWarpMode': -1})
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Demo305_0_09', 'CloseDialogOption': 1})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C10-0', 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 2, 'ActorName': 'DgnObj_RemainsLithograph_A_01', 'UniqueName': '', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})

    fork {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C04-UMii_Rito_G-E-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

        fork {
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C04-UMii_Rito_G-F-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-0', 'ClothWarpMode': -1})
        } {
            Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C04-UMii_Rito_G-E-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

            fork {
                Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo305_0-C04-UMii_Rito_G-F-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            } {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            }

        }

    }

    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_WarpToScheduleAnchor({'IsWaitFinish': False, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo305_HighMountain035'})

    fork {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})

        fork {
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})

            fork {
                Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            } {

                fork {
                    Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

                    fork {
                        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo305_0-C04-UMii_Rito_G-B-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                        EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
                    }

                    Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo305_0-C04-UMii_Rito_G-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                }

            }

        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'RitoBrosDemoBgm', 'IsWaitFinish': True, 'FadeSec': 3.5})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventMessageTransmitter1.Demo_Msg2CameraReset({'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Finish'})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}
