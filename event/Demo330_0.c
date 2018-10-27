-------- EventFlow: Demo330_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_MiniGameStart', 'Demo_MiniGameTime', 'Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_ChkExistenceOfParticipant']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis039
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWakeBoardReady', 'Demo_PlayASAdapt', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis038
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[race]
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis023[Demo330_0_Spectator]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_ChangeEquipState', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis020[Demo330_0_Spectator]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_MoveToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis067[Demo330_0_Spectator]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_MoveToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis068[Demo330_0_Spectator]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_MoveToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis062[Demo330_0_Spectator]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis064[Demo330_0_Spectator]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_CustomDuckingStop', 'Demo_Ctrl', 'Demo_NotifyTalk', 'Demo_StartDucking', 'Demo_StopDucking']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoSys]
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo00]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo03]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo04]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo05]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo06]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo08]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo330_0() {
    EventSystemActor[DemoSys].Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_1st_Demo330_0'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Field1'})
    EventSystemActor.Demo_ChkExistenceOfParticipant({'ActorName': 'Animal_SunazarashiSP_A', 'InstanceName': 'race', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Animal_SunazarashiSP_A', 'Accept1FrameDelay': True, 'SceneName': 'C01-0', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': 'race'})
    } {
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'B-8', 'WarpDestPosName': 'Demo330_0_1_010'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo330_0-C01-Link-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        Animal_SunazarashiSP_A[race].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis039.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo330_0_1_020', 'AnchorName': 'AnchorAction3'})
        Npc_oasis039.Demo_PlayASForDemo({'ASName': 'Wait', 'ClothWarpMode': 1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0})
        Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'FaceId': 1, 'IsValid': True, 'ActorName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_oasis038.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'IsValid': True, 'FaceId': 1, 'ActorName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_oasis023[Demo330_0_Spectator].Demo_ChangeEquipState({'IsWaitFinish': False, 'EquipState': 'Hold'})
        Npc_oasis023[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis020[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis062[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Call_Hello', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis064[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'ClothWarpMode': -1})
    } {
        NPC_oasis067[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis068[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Wait', 'ClothWarpMode': -1})
    }

    Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1, 'ASName': 'Act_Champion_Wait', 'IsWaitFinish': False})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_RaceStartBgm', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 120, 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'TargetGroups': 'Player', 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        EventSystemActor[Demo06].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        NPC_oasis068[Demo330_0_Spectator].Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Demo330_0_Spectator068', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': True, 'IsWaitFinish': False})
    } {
        EventSystemActor[Demo00].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        NPC_oasis067[Demo330_0_Spectator].Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Demo330_0_Spectator067', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': True, 'IsWaitFinish': False})
    } {
        EventSystemActor[Demo01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_oasis020[Demo330_0_Spectator].Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Demo330_0_Spectator020', 'ASKeyName': 'Walk', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': True, 'IsWaitFinish': False})
    } {
        EventSystemActor[Demo02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_oasis023[Demo330_0_Spectator].Demo_TurnAndLookToObject({'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C02-0', 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor[Demo03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        SceneSoundCtrlTag.Demo_StartDucking({'IsWaitFinish': True, 'DuckerType': 'cRaceAudience'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': -1.0})
        EventSystemActor[Demo03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        EventSystemActor[Demo04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        NPC_oasis062[Demo330_0_Spectator].Demo_TurnAndLookToObject({'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': False, 'ObjectId': 1, 'ActorName': 'Npc_oasis020', 'UniqueName': 'Demo330_0_Spectator'})
        EventSystemActor[Demo04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 95})
        NPC_oasis062[Demo330_0_Spectator].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Act_Call_Hello', 'ClothWarpMode': -1})
        EventSystemActor[Demo04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        NPC_oasis062[Demo330_0_Spectator].Demo_TurnAndLookToObject({'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Demo330_0_Spectator', 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': False})
    } {
        EventSystemActor[Demo05].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 38})
        NPC_oasis064[Demo330_0_Spectator].Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'UniqueName': 'Demo330_0_Spectator', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'NPC_oasis062', 'IsConfront': False})
        EventSystemActor[Demo08].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 160})
        NPC_oasis064[Demo330_0_Spectator].Demo_TurnAndLookToObject({'IsWaitFinish': False, 'IsValid': True, 'UniqueName': 'Demo330_0_Spectator', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False, 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Call0', 'SoundDelay': 0, 'SLinkInst': ''})
        Npc_oasis039.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo330_0:Npc_oasis039_Demo330_0_010', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    }

    SceneSoundCtrlTag.Demo_StopDucking({'IsWaitFinish': True, 'DuckerType': 'cRaceAudience'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_oasis038', 'SceneName': 'C08-0', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_Call1'})
        Npc_oasis039.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo330_0:Npc_oasis039_Demo330_0_020', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': 'Talk', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        NPC_oasis068[Demo330_0_Spectator].Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ClothWarpMode': -1})
    } {
        NPC_oasis067[Demo330_0_Spectator].Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ClothWarpMode': -1})
    } {
        Npc_oasis020[Demo330_0_Spectator].Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ClothWarpMode': -1})
    }


    fork {
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'SceneName': 'C06-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Animal_SunazarashiSP_A', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': 'race'})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_Call2'})
        Npc_oasis039.Demo_OpenMessageDialog({'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo330_0:Npc_oasis039_Demo330_0_030', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor[DemoSys].Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_Call3'})
        Npc_oasis039.Demo_OpenMessageDialog({'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo330_0:Npc_oasis039_Demo330_0_040', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor[DemoSys].Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

    SoundTriggerTag.Demo_SoundTriggerFade({'Sound': 'Demo_RaceStartBgm', 'IsWaitFinish': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_oasis039', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C05-0', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduceOff'})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'SceneName': 'C07-0', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Animal_SunazarashiSP_A', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': 'race'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
    } {
        GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'CreateSelf': False, 'UniqueName': 'race'})
        Animal_SunazarashiSP_A[race].Demo_Idling({'IsWaitFinish': False})
    } {
        Npc_oasis039.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo330_0:Npc_oasis039_Demo330_0_050', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 30, 'ASName': 'Demo330_0_C04_Npc_Gerudo_Promoter', 'IsCloseMessageDialog': True})
        EventSystemActor[DemoSys].Demo_CloseMessageDialog({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'EndTalk'})
    }

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_1st_Demo330_0'})
    Event7:
    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
    EventSystemActor.Demo_MiniGameTime({'CountMode': 0, 'IsWaitFinish': True, 'CountStartTime': 0, 'IsShowTimeUI': True, 'MaxTime': -1})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
}

void Demo330_0_1() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Field1'})
    SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'EndTalk'})
    EventSystemActor.Demo_ChkExistenceOfParticipant({'ActorName': 'Animal_SunazarashiSP_A', 'InstanceName': 'race', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'SceneName': 'C07-0', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Animal_SunazarashiSP_A', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': 'race'})
    } {
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'B-8', 'WarpDestPosName': 'Demo330_0_1_010'})
        GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'CreateSelf': False, 'UniqueName': 'race'})
    } {
        Animal_SunazarashiSP_A[race].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis039.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo330_0_1_020', 'AnchorName': 'AnchorAction3'})
        Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'FaceId': 1, 'IsValid': True, 'ActorName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis039.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_0_C04_Npc_Gerudo_Promoter', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis038.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'IsValid': True, 'FaceId': 1, 'ActorName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0]})
    }

    Animal_SunazarashiSP_A[race].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduceOff'})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
    goto Event7
}
