-------- EventFlow: Demo700_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_KillUIScreen']
queries: ['CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Obj_DRStone_A_01
entrypoint: None()
actions: ['Demo_EventBind', 'Demo_BindOff', 'Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DemoVoiceEmitTag
entrypoint: None()
actions: ['Demo_VoiceTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_DRStoneStand
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_StartPointShutter
entrypoint: None()
actions: ['Demo_Join', 'Demo_TrigNullASPlay', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ListenerCtrlTag
entrypoint: None()
actions: ['Demo_SetMode']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo700_0() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'IsWaitFinish': True, 'Mode': 'EvtBack'})

    fork {
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'None'})
    } {
        EventSystemActor.Demo_FlagON({'FlagName': 'OP_DRC', 'IsWaitFinish': True})
    } {
        Obj_DRStoneStand.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ReadyWait_FirstShrine', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_FlagON({'FlagName': 'PortableUnit_PowerOn', 'IsWaitFinish': True})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Obj_DRStoneStand', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C10-0', 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 237.3000030517578, 'DestinationX': -1126.5, 'DestinationZ': 1905.0, 'DirectionY': 141.0})
    } {
        Obj_DRStone_A_01.Demo_EventBind({'IsWaitFinish': True, 'UniqueName': '', 'TransOffsetX': 0.0, 'IsContinueBind': True, 'ActorName': 'Obj_DRStoneStand', 'NodeName': 'Loc_Stone', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0})
    }

    Obj_DRStoneStand.Demo_PlayASForDemo({'ASName': 'Access_FirstShrine', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': True, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        Obj_DRStoneStand.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo700_0-C01-Obj_DRCStoneStand_First-A-0', 'MorphingFrame': -1.0})
    } {
        Obj_DRStoneStand.Demo_TrigNullASPlay({'IsIgnoreSame': True, 'ASName': 'ActivatedWait', 'ASSlot': 0, 'IsWaitFinish': False, 'SequenceBank': 0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -1125.6600341796875, 'DestinationY': 237.3000030517578, 'DestinationZ': 1903.969970703125, 'DirectionY': 141.0, 'IsWaitFinish': True})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo700_0:OP_DRC04', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Obj_DRStoneStand', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C11-0', 'EndFrame': 120.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo700_0-C04-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Obj_DRStoneStand', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C14-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
    } {
        Obj_DRStone_A_01.Demo_EventBind({'ActorName': 'GameROMPlayer', 'NodeName': 'Weapon_L', 'IsWaitFinish': True, 'UniqueName': '', 'TransOffsetX': 0.0, 'IsContinueBind': True, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo700_0-C05-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Obj_DRStoneStand', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C12-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Obj_DRStone_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'Demo_DRStone_PowerOn', 'IsTargetDemoSLinkUser': False})
    Obj_DRStone_A_01.Demo_PlayASForDemo({'ASName': 'Demo_OffToOn', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DRStone_Get'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Open_FirstDoor'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Obj_DRStoneStand', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C13-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Obj_DRStoneStand.Demo_PlayASForDemo({'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'ASName': 'Demo700_0-C04-Obj_DRCStoneStand_First-A-0', 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 237.3000030517578, 'DirectionY': 141.0, 'IsWaitFinish': True, 'DestinationX': -1126.1600341796875, 'DestinationZ': 1904.5799560546875})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    Obj_StartPointShutter.Demo_Join({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 190})
    EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Count': 1, 'Power': 1.0, 'Pattern': 4})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    Obj_DRStone_A_01.Demo_BindOff({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_PortableUnit'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtY': 1.5, 'Pattern1PosY': 2.0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 0, 'IsWaitFinish': False, 'Pattern1PosZ': -4.5, 'Count': 20.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void SkipToC03() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'Obj_DRStoneStand', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C14-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo700_0-C05-Link-A-0', 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        Obj_DRStone_A_01.Demo_EventBind({'ActorName': 'GameROMPlayer', 'NodeName': 'Weapon_L', 'IsWaitFinish': True, 'UniqueName': '', 'TransOffsetX': 0.0, 'IsContinueBind': True, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0})
    } {
        EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MessageSp_00', 'IsWaitFinish': True})
        NPC_CaptionVoice.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    } {
        Obj_DRStoneStand.Demo_PlayASForDemo({'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'ASName': 'Demo700_0-C05-Obj_DRCStoneStand_First-A-0', 'MorphingFrame': -1.0})
    } {
        Obj_DRStoneStand.Demo_TrigNullASPlay({'IsIgnoreSame': True, 'ASName': 'ActivatedWait', 'ASSlot': 0, 'IsWaitFinish': False, 'SequenceBank': 0})
    }

    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -1125.6600341796875, 'DestinationY': 237.3000030517578, 'DestinationZ': 1903.969970703125, 'DirectionY': 141.0, 'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
    }

}
