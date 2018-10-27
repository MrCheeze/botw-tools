-------- EventFlow: Demo378_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_FlagOFF', 'Demo_SwitchPlayerEquipment', 'Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_XLinkEventCreate', 'Demo_OpenMessageDialog', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayerWait', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic02]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo() {
    RemainsElectric[Thunder_Relic02].Demo_Join({'IsWaitFinish': True})
    WorldManagerControl.Demo_SetWind({'WindDirY': 0.0, 'IsAutoWind': False, 'WindPower': 7.75, 'WindDirZ': 1.0, 'IsWaitFinish': False, 'WindDirX': -0.20000000298023224})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': -3262.179931640625, 'DestinationY': 164.38999938964844, 'DestinationZ': 2610.14990234375})
    Npc_SmallOasis008.Demo_TurnAndLookToObject({'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 0, 'IsConfront': False, 'ObjectId': 3, 'IsValid': False, 'IsWaitFinish': False, 'TurnDirection': 260.0})
    Npc_SmallOasis008.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo378_1_DressUp'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'PorchItemName_ArmorHead': 'Armor_053_Head', 'PorchItemName_ArmorUpper': 'Armor_053_Upper', 'PorchItemName_ArmorLower': 'Armor_053_Lower', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_Arrow': ''})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo378_1_DressUpBgm'})

    fork {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 1})
    } {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo_Disguise', 'IsTargetDemoSLinkUser': False})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'UniqueName': '', 'ActorName': '', 'IsWaitFinish': True, 'TargetActor': 1, 'TargetActorDirReferenceMode': 2, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'ActorName': '', 'IsWaitFinish': True, 'TargetActor': 1, 'TargetActorDirReferenceMode': 2, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C01-1', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'ActorName': '', 'IsWaitFinish': True, 'TargetActor': 1, 'TargetActorDirReferenceMode': 2, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C01-2', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo_Disguise'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'ActorName': '', 'TargetActor': 1, 'IsWaitFinish': True, 'TargetActorDirReferenceMode': 2, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C02-0', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_009', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo378_1-C03-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo_CheeksBlush', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    }

    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff'})

    fork {
        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_011'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo378_1-C03-Link-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo_CheeksBlush'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'SceneName': 'C02-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': 30.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_014', 'IsCloseMessageDialog': False})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_019', 'IsCloseMessageDialog': True})
    }

    Npc_SmallOasis008.Demo_XLinkEventCreate({'ELinkKey': 'Demo_Wind', 'IsWaitFinish': True, 'SLinkKey': 'Demo_Wind', 'IsTargetDemoSLinkUser': False})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Mute'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'SceneName': 'C03-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_SmallOasis008.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_020', 'IsWaitAS': False, 'ASName': 'Demo378_1-C05-Npc_Hylia_Drag-A-0', 'IsWaitFinish': True, 'MessageOpenDelayTime': 30, 'CloseDialogOption': 1, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo378_1-C03-Link-A-2', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-1', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True})
    } {
        Npc_SmallOasis008.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Thinking', 'IsOnlyFace': False})
        Npc_SmallOasis008.Demo_PlayASForDemo({'ASName': 'Demo378_1-C07-Npc_Hylia_Drag-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': True, 'MorphingFrame': 0.0})
        Npc_SmallOasis008.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_012', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo378_1-C04-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'MorphingFrame': 10.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'ASName': 'Demo378_1-C04-Link-A-1', 'ClothWarpMode': -1, 'NoErrorCheck': False})
    }

    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_021'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_Step1'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_Demo378_1_ElectlicRelic'})
}
