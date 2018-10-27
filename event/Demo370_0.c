-------- EventFlow: Demo370_0 --------

Actor: Npc_Zora005[Kuroida_Ichikara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_OpenMessageDialog']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: Npc_Goron023[Gureda_Ichikara]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: Npc_Goron025[Pupunda_Ichikara]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: Npc_HighMountain010[Peda_Ichikara]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_AdvanceTime', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayerHideOff', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage032
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_Idling', 'Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_ChangePosture', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage030
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_Idling', 'Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject', 'Demo_ChangePosture', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage031_2
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_Idling', 'Demo_TurnAndLookToObject', 'Demo_XLinkEventCreate', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis050_2
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_Idling', 'Demo_BecomeSpeaker', 'Demo_LookAtObject', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_PlayerHorseGetOff']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_IchikaraBell_A_02
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[01]
entrypoint: None()
actions: ['Demo_EventSetWeather']
queries: []
params: {'CreateMode': 1, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[02]
entrypoint: None()
actions: ['Demo_EventCloudShadowOff']
queries: []
params: {'CreateMode': 1, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[03]
entrypoint: None()
actions: ['Demo_EventSetDirectionalYang']
queries: []
params: {'CreateMode': 1, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[kuroida]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[camera]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[enokida]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[gureda]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[pupunda]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[pauda]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[peda]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[sakurada]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[katsurada]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag[forReverb]
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag[forApplause]
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo370_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    WorldManagerControl.Demo_SetWind({'WindDirY': 0.0, 'IsAutoWind': False, 'IsWaitFinish': False, 'WindDirX': 0.6000000238418579, 'WindDirZ': 0.6000000238418579, 'WindPower': 1.5})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MakeVillage_KaidoNPC_Delete'})
    GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC031_Reward'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC031_Demo370'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC050_Reward'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC050_Demo370'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellNormalAppear'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellDemoAppear'})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-3', 'WarpDestPosName': 'Marry_Player'})
    Npc_Zora005[Kuroida_Ichikara].Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_Zora005[Kuroida_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Kuroida'})
    Npc_Zora005[Kuroida_Ichikara].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})

    fork {
        Npc_UMiiVillage031_2.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[enokida].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage031_2.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Enokida'})
        Npc_UMiiVillage031_2.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'Npc_Zora005', 'ObjectId': 1, 'UniqueName': 'Kuroida_Ichikara', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'IsWaitFinish': False, 'IsValid': False, 'FaceId': 1})
    } {
        Npc_Goron023[Gureda_Ichikara].Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[gureda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_Goron023[Gureda_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Gureda'})
        Npc_Goron023[Gureda_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_Zora005', 'UniqueName': 'Kuroida_Ichikara', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False, 'IsValid': True})
    } {
        Npc_Goron025[Pupunda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[pupunda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Goron025[Pupunda_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Pupunda'})
        Npc_Goron025[Pupunda_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_Zora005', 'UniqueName': 'Kuroida_Ichikara', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False, 'IsValid': True})
    } {
        Npc_oasis050_2.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[pauda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_oasis050_2.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Pauda'})
        Npc_oasis050_2.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'Npc_Zora005', 'ObjectId': 1, 'UniqueName': 'Kuroida_Ichikara', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'IsWaitFinish': False, 'IsValid': False, 'FaceId': 1})
    } {
        Npc_HighMountain010[Peda_Ichikara].Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[peda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_HighMountain010[Peda_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Peda'})
        Npc_HighMountain010[Peda_Ichikara].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'Npc_Zora005', 'ObjectId': 1, 'UniqueName': 'Kuroida_Ichikara', 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'FaceId': 2, 'IsWaitFinish': False})
    } {
        Npc_UMiiVillage032.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Sakurada'})
        Npc_UMiiVillage032.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Rest'})
        EventSystemActor[sakurada].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage032.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Sit'})
        Npc_UMiiVillage032.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_Zora005', 'UniqueName': 'Kuroida_Ichikara', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'PosOffset': [0.0, 2.0, 0.0]})
    } {
        Npc_UMiiVillage030.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[katsurada].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage030.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'Marry_Katsurada'})
        Npc_UMiiVillage030.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        EventSystemActor[katsurada].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage030.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
        Npc_UMiiVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'ActorName': 'Npc_Zora005', 'UniqueName': 'Kuroida_Ichikara', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False, 'FaceId': 2})
    }

    EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 1, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
    WorldManagerControl[01].Demo_EventSetWeather({'WeatherType': 0, 'IsWaitFinish': True})
    WorldManagerControl[02].Demo_EventCloudShadowOff({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    WorldManagerControl[03].Demo_EventSetDirectionalYang({'IsWaitFinish': False, 'angleY': 75.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'DemoBgm', 'FadeOutSec': 0.20000000298023224, 'ExceptGroups': '', 'StartDelaySec': 0.0, 'Volume': 0.44999998807907104, 'FadeInSec': 5.0})

    fork {
        Npc_Goron025[Pupunda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'IchikaraWeddingBgm', 'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Zora005[Kuroida_Ichikara].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text000', 'ASName': 'Demo370_0-C07-UMii_Zora_X-A-0', 'IsBecomingSpeaker': True, 'IsWaitAS': False, 'IsWaitFinish': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'MessageOpenDelayTime': 25})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 84})
        Npc_Zora005[Kuroida_Ichikara].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'ClothWarpMode': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    }

    Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text023', 'ASName': ''})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-2', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text019', 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'FaceId': 1, 'IsValid': False, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_UMiiVillage031_2', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text001'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text022'})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text002', 'IsCloseMessageDialog': True})
        Npc_UMiiVillage031_2.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_UMiiVillage031_2.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text004', 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text005'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'FaceId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_oasis050_2', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text006'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-2', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text022'})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text003', 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-3', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text007', 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
    } {
        Npc_oasis050_2.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_oasis050_2.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_UMiiVillage031_2', 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis050_2.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text008', 'IsCloseMessageDialog': True})
        Npc_UMiiVillage031_2.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_UMiiVillage031_2.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'ActorName': 'Npc_oasis050_2', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_UMiiVillage031_2.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text009'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_UMiiVillage032.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_Zora005', 'UniqueName': 'Kuroida_Ichikara', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_UMiiVillage032.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo370_0-C05-Npc_Hylia_Carpenter_000-A', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        Npc_UMiiVillage032.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})

        fork {
            Npc_UMiiVillage032.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text010', 'IsCloseMessageDialog': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Npc_UMiiVillage030.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsConfront': True, 'ActorName': 'Npc_UMiiVillage032', 'IsWaitFinish': False})
        }

    }

    Npc_UMiiVillage030.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text011', 'ASName': ''})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-4', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_HighMountain010[Peda_Ichikara].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text012'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-3', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Goron025[Pupunda_Ichikara].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text013'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-2', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Goron023[Gureda_Ichikara].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text014', 'IsCloseMessageDialog': False})
        Npc_UMiiVillage030.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_Goron023', 'UniqueName': 'Gureda_Ichikara', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [-0.5, 0.0, 0.0]})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_UMiiVillage031_2.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'ActorName': 'Npc_HighMountain010', 'UniqueName': 'Peda_Ichikara'})
        Npc_UMiiVillage031_2.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_UMiiVillage031_2.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text016', 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_oasis050_2.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text020'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-2', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_oasis050_2.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_Zora005', 'TurnDirection': 0.0, 'ObjectId': 1, 'FaceId': 1, 'UniqueName': 'Kuroida_Ichikara', 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_oasis050_2.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text015', 'ASName': 'Talk_Sigh', 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 30})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_UMiiVillage030.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_oasis050_2', 'UniqueName': '', 'PosOffset': [0.30000001192092896, 0.0, 0.0]})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-3', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text005'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 0, 'IsValid': False, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora005[Kuroida_Ichikara].Demo_BecomeSpeaker({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 84})
        } {
            Npc_Zora005[Kuroida_Ichikara].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text017', 'ASName': 'Demo370_0-C07-UMii_Zora_X-A-0', 'IsWaitAS': False, 'CloseDialogOption': 3, 'IsWaitFinish': False, 'IsCloseMessageDialog': False, 'MessageOpenDelayTime': 25})
        }


        fork {
            Npc_UMiiVillage031_2.Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': True})
            Npc_UMiiVillage031_2.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_UMiiVillage031_2.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora005', 'IsValid': False, 'UniqueName': 'Kuroida_Ichikara', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1, 'FaceId': 1, 'IsConfront': True, 'IsWaitFinish': True})
        } {
            Npc_Goron023[Gureda_Ichikara].Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': True})
            Npc_Goron023[Gureda_Ichikara].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_Goron023[Gureda_Ichikara].Demo_TurnAndLookToObject({'ObjectId': 1, 'FaceId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_UMiiVillage031_2', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True})
            Npc_Goron023[Gureda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo370_0-C01-UMii_Goron_M-A-0', 'IsWaitFinish': False, 'MorphingFrame': 0.0})
        } {
            Npc_Goron025[Pupunda_Ichikara].Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': True})
            Npc_Goron025[Pupunda_Ichikara].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_Goron025[Pupunda_Ichikara].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'FaceId': 1, 'ObjectId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_UMiiVillage031_2', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True})
        } {
            Npc_HighMountain010[Peda_Ichikara].Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': True})
            Npc_HighMountain010[Peda_Ichikara].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_HighMountain010[Peda_Ichikara].Demo_TurnAndLookToObject({'ObjectId': 1, 'FaceId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_UMiiVillage031_2', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True})
        } {
            Npc_UMiiVillage030.Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': True})
            Npc_UMiiVillage030.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_UMiiVillage030.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'FaceId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'ActorName': 'Npc_UMiiVillage031_2', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True})
            Npc_UMiiVillage030.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo370_0-C01-UMii_Hylia_M-A-0', 'MorphingFrame': 0.0})
        } {
            Npc_Zora005[Kuroida_Ichikara].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'MorphingFrame': 15.0})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': False})
        }

    }

    Npc_UMiiVillage032.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo370_0-C07-Npc_Hylia_Carpenter_000-A', 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'ClothWarpMode': 1})
    GameRomCamera.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo370_FlowerShower', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    TwnObj_Village_IchikaraBell_A_02.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo370_0-C06-TwnObj_Village_IchikaraBell_A_01-A-0'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    SoundTriggerTag[forApplause].Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Applause', 'SoundDelay': 0, 'SLinkInst': ''})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-1', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True, 'IsWaitFinish': False})
    } {
        EventSystemActor[kuroida].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text018'})
    } {
        Npc_Goron025[Pupunda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo370_0-C01-UMii_Goron_B-A-0', 'MorphingFrame': 0.0})
    } {
        Npc_HighMountain010[Peda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo370_0-C01-UMii_Rito_M-A-0', 'MorphingFrame': 0.0})
    } {
        Npc_UMiiVillage031_2.Demo_LookAtObject({'TurnDirection': 0.0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1, 'ActorName': 'Npc_oasis050_2', 'UniqueName': '', 'IsValid': True, 'FaceId': 2})
    } {
        Npc_oasis050_2.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo370_0-C07-Npc_Gerudo_Wedding-A-0_Loop'})
        Npc_oasis050_2.Demo_LookAtObject({'TurnDirection': 0.0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'ObjectId': 1, 'ActorName': 'Npc_UMiiVillage031_2', 'UniqueName': '', 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 1.5]})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo370_0-C07-Link-A-0', 'MorphingFrame': 0.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    } {
        EventSystemActor[camera].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellRing'})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_BellDry', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        SoundTriggerTag[forReverb].Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_BellReverb', 'SoundDelay': 0, 'SLinkInst': ''})
    }

    Npc_UMiiVillage031_2.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_FacePetals', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    SoundTriggerTag.Demo_SoundTriggerFade({'Sound': 'Demo_BellDry', 'IsWaitFinish': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-2', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo370_0:Demo370_0_Text021', 'IsBecomingSpeaker': False})
    }

    EventBgmCtrlTag.Demo_Stop({'BgmName': 'IchikaraWeddingBgm', 'IsWaitFinish': True, 'FadeSec': 5.5})
    SoundTriggerTag[forReverb].Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'Demo_BellReverb'})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellRing'})
    GameRomCamera.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo370_FlowerShower', 'SLinkKey': ''})
    WorldManagerControl[03].Demo_EventSetDirectionalYang({'IsWaitFinish': False, 'angleY': 44.91999816894531})

    fork {
        Npc_UMiiVillage031_2.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[enokida].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage031_2.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction4'})
    } {
        Npc_Goron023[Gureda_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction4'})
        EventSystemActor[gureda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_Goron023[Gureda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0, 'ASName': 'Rest'})
    } {
        Npc_Goron025[Pupunda_Ichikara].Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[pupunda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_Goron025[Pupunda_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction5', 'UniqueName': ''})
    } {
        Npc_oasis050_2.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[pauda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_oasis050_2.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction5', 'UniqueName': ''})
    } {
        Npc_HighMountain010[Peda_Ichikara].Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[peda].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_HighMountain010[Peda_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction5', 'UniqueName': ''})
    } {
        Npc_Zora005[Kuroida_Ichikara].Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[kuroida].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_Zora005[Kuroida_Ichikara].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction5', 'UniqueName': ''})
    } {
        Npc_UMiiVillage032.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction5'})
        EventSystemActor[sakurada].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage032.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Rest', 'MorphingFrame': 0.0})
    } {
        Npc_UMiiVillage030.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction5'})
        EventSystemActor[katsurada].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_UMiiVillage030.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Rest', 'MorphingFrame': 0.0})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC031_Reward'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC031_Demo370'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC050_Reward'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC050_Demo370'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellDemoAppear'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellNormalAppear'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3979.883544921875, 'Pattern1PosY': 235.0775604248047, 'Pattern1PosZ': -1613.456298828125, 'Pattern1AtX': 3974.781005859375, 'Pattern1AtY': 235.2322998046875, 'Pattern1AtZ': -1612.640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'FaceId': 1, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [3967.699951171875, 233.0, -1611.5999755859375], 'IsTurnToLookAtPos': False, 'IsValid': True})
    EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True, 'DestTime': 11})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MakeVillage_KaidoNPC_Delete'})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
}
