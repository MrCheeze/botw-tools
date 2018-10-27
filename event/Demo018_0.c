-------- EventFlow: Demo018_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage031
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetEndProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo018_0_Bottom() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})
    Npc_ValleyVillage031.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'CustomRescue', 'IsTargetDemoSLinkUser': False})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo018_0-C10-Link-A-0', 'TargetIndex': -1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        Npc_ValleyVillage031.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo018_0-C10-Npc_Rito_Teba-A-0', 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'GameROMPlayer', 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C30-0', 'Accept1FrameDelay': True, 'TargetActor': 1, 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 46})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    }

    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    Event10:
    EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_Rescued', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo019_0', 'EntryPointName': 'Demo019_0', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_SetEndProc({'CtrlType': 'SkipAll', 'IsWaitFinish': True})
}

void Demo018_0_Side() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})

    fork {
        Npc_ValleyVillage031.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationZ': 0.0, 'DestinationY': 0.0, 'DestinationX': 0.0})
        Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo018_0:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'ASName': 'Demo018_0-C20-Npc_Rito_Teba-A-0', 'CloseDialogOption': 0})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'ActorName': 'Npc_ValleyVillage031', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C20-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'Fall', 'NoErrorCheck': False})
    }

    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    goto Event10
}
