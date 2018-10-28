-------- EventFlow: Demo008_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk', 'Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_FlagON', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_WarpPlayerToAnchor', 'Demo_KillUIScreen', 'Demo_ForceSetPlayerSavePosAngle']
queries: ['CheckFlag', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_UnbindSheikPad', 'Demo_PlayerWait', 'Demo_PlayASAdapt', 'Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: DgnObj_EntranceShutter_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DungeonEntrance_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceTerminal_A_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect', 'Demo_Msg2CameraKeepState', 'Demo_Msg2CameraReset']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetFocusDist']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[EntryPoint0(DungeonEntranceTerminal)]
entrypoint: EntryPoint0(DungeonEntranceTerminal)
actions: []
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[EntryPoint0(DungeonEntranceWarpPoint)]
entrypoint: EntryPoint0(DungeonEntranceWarpPoint)
actions: []
queries: []
params: None

Actor: DgnObj_DungeonEntrance_A_01[EntryPoint0(DungeonEntrance)]
entrypoint: EntryPoint0(DungeonEntrance)
actions: []
queries: []
params: None

Actor: DgnObj_EntranceShutter_A_01[EntryPoint0(DungeonEntranceShutter)]
entrypoint: EntryPoint0(DungeonEntranceShutter)
actions: []
queries: []
params: None

Actor: DgnObj_EntranceShutter_A_01[execute_skip(DungeonEntranceShutter)]
entrypoint: execute_skip(DungeonEntranceShutter)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[execute_skip(DungeonEntranceWarpPoint)]
entrypoint: execute_skip(DungeonEntranceWarpPoint)
actions: ['Demo_XLinkEventKill']
queries: []
params: None

Actor: FldObj_Terminal_A_01[c02(DungeonEntranceTerminal)]
entrypoint: c02(DungeonEntranceTerminal)
actions: []
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[c03_first(DungeonEntranceWarpPoint)]
entrypoint: c03_first(DungeonEntranceWarpPoint)
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[c03(DungeonEntranceWarpPoint)]
entrypoint: c03(DungeonEntranceWarpPoint)
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: None

Actor: FldObj_Terminal_A_01[c03(DungeonEntranceTerminal)]
entrypoint: c03(DungeonEntranceTerminal)
actions: []
queries: []
params: None

Actor: DgnObj_DungeonEntrance_A_01[common_first(DungeonEntrance)]
entrypoint: common_first(DungeonEntrance)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_EntranceShutter_A_01[common_first(DungeonEntranceShutter)]
entrypoint: common_first(DungeonEntranceShutter)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_DungeonEntrance_A_01[common(DungeonEntrance)]
entrypoint: common(DungeonEntrance)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_EntranceShutter_A_01[common(DungeonEntranceShutter)]
entrypoint: common(DungeonEntranceShutter)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C02-0', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DirectionY', 'IsWaitFinish': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouch', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo008_0-C02-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call Demo041_0.Demo041({'FldObj_Terminal_A_01': ActorIdentifier(name="DgnObj_EntranceTerminal_A_01")})

    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text003', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}

void C03_firsttime() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-2', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        DgnObj_WarpPoint_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        DgnObj_WarpPoint_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        if !EventSystemActor.CheckEventCancel() {
            DgnObj_WarpPoint_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
        }
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo008_0-C04-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text004', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void C03() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': 0, 'MotionMode': 0, 'Pattern1AtX': -1.7553000450134277, 'Pattern1AtY': 3.9851999282836914, 'Pattern1AtZ': 0.8953999876976013, 'Pattern1PosX': 6.329699993133545, 'Pattern1PosY': 1.4843000173568726, 'Pattern1PosZ': 14.458100318908691, 'Pattern1Fovy': 50.0, 'LngShiftRange': 30.0, 'LatShiftRange': 60.0, 'CollisionInterpolateSkip': False, 'FovyAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Accept1FrameDelay': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY', 'IsWaitFinish': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadTouch', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo008_0-C03-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call Demo041_0.Demo041({'FldObj_Terminal_A_01': ActorIdentifier(name="DgnObj_EntranceTerminal_A_01")})

    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})

        fork {
            DgnObj_WarpPoint_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            DgnObj_WarpPoint_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            if !EventSystemActor.CheckEventCancel() {
                DgnObj_WarpPoint_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
            }
        }

    }

}

void Common() {
    if EventSystemActor.CheckFlag({'FlagName': 'Open_FirstDungeon'}) {

        fork {
            DgnObj_DungeonEntrance_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            DgnObj_DungeonEntrance_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            if !EventSystemActor.CheckEventCancel() {
                DgnObj_EntranceShutter_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            }
        } {
            if !EventSystemActor.CheckEventCancel() {
                EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
                EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'Power': 0.10000000149011612, 'IsWaitFinish': True, 'Count': 5})
                EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'Power': 0.07000000029802322, 'Count': 3, 'IsWaitFinish': True})
            }
        } {
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'MotionMode': 0, 'Pattern1AtX': -1.7553000450134277, 'Pattern1AtY': 3.9851999282836914, 'Pattern1AtZ': 0.8953999876976013, 'Pattern1Fovy': 50.0, 'LngShiftRange': 30.0, 'LatShiftRange': 60.0, 'CollisionInterpolateSkip': False, 'FovyAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1PosX': 6.897799968719482, 'Pattern1PosY': 1.642799973487854, 'Pattern1PosZ': 15.644100189208984, 'IsWaitFinish': False, 'Cushion': 1.0, 'Count': 100.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        Event179:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    } else {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C03-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text005', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-1', 'IsWaitFinish': True, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C03-5', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            if !EventSystemActor.CheckEventCancel() {
                EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 2})
                EventCameraRumble.Demo_Rumble({'Pattern': 1, 'Count': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.05999999865889549})
                EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.05000000074505806, 'Count': 7})
            }
        } {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo008_0-C05-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        } {
            DgnObj_EntranceShutter_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'ASName': 'Open', 'MorphingFrame': -1.0})
        } {
            DgnObj_DungeonEntrance_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            DgnObj_DungeonEntrance_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }

        goto Event179
    }
}

void ExecuteSkip() {

    fork {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameROMPlayer.Demo_UnbindSheikPad({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MessageSp_00'})
        NPC_DRCVoice.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    } {
        DgnObj_EntranceShutter_A_01.Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsIgnoreSame': False, 'MorphingFrame': -1.0})
    } {
        DgnObj_WarpPoint_A_01.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate'})
    } {
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
    }

    EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'PosAfterDemoSkip', 'IsWaitFinish': True, 'UniqueName': 'Demo008_0_PlayerEndPos'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1AtY': 1.5, 'Pattern1PosY': 2.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': False, 'Pattern1PosZ': -4.5, 'TargetActor1': 1, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})
}

void EntryPoint0() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Open_FirstDungeon'}) {

        call c03({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY', 'DungeonEntranceWarpPoint': 'DungeonEntranceWarpPoint', 'DungeonEntranceTerminal': 'DungeonEntranceTerminal', 'C03-Link-ASName': 'C03-Link-ASName'})


        call common({'DungeonEntrance': 'DungeonEntrance', 'DungeonEntranceShutter': 'DungeonEntranceShutter'})

        Event308:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
        if EventSystemActor.CheckEventCancel() {

            call execute_skip({'DungeonEntranceShutter': 'DungeonEntranceShutter', 'DungeonEntranceWarpPoint': 'DungeonEntranceWarpPoint', 'PlayerEndPosUniqueName': 'PlayerEndPosUniqueName'})

        }
        EventSystemActor.Demo_FlagON({'FlagName': 'Open_FirstDungeon', 'IsWaitFinish': True})
        EventSystemActor.Demo_ForceSetPlayerSavePosAngle({'IsWaitFinish': True, 'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'UniqueName': ''})
    } else {

        call c02({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DirectionY': 'Arg_DestinationDirY', 'DungeonEntranceTerminal': 'DungeonEntranceTerminal', 'C02-Link-ASName': 'C02-Link-ASName'})


        call c03_first({'DungeonEntranceWarpPoint': 'DungeonEntranceWarpPoint', 'C04-Link-ASName': 'C04-Link-ASName'})


        call common_first({'DungeonEntrance': 'DungeonEntrance', 'DungeonEntranceShutter': 'DungeonEntranceShutter', 'C05-Link-ASName': 'C05-Link-ASName'})

        goto Event308
    }
}

void execute_skip() {

    fork {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameROMPlayer.Demo_UnbindSheikPad({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MessageSp_00'})
        NPC_DRCVoice.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    } {
        DgnObj_EntranceShutter_A_01[execute_skip(DungeonEntranceShutter)].Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsIgnoreSame': False, 'MorphingFrame': -1.0})
    } {
        DgnObj_WarpPoint_A_01[execute_skip(DungeonEntranceWarpPoint)].Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate'})
    }

    EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'PosAfterDemoSkip', 'IsWaitFinish': True, 'UniqueName': 'PlayerEndPosUniqueName'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1AtY': 1.5, 'Pattern1PosY': 2.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': False, 'Pattern1PosZ': -4.5, 'TargetActor1': 1, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})
}

void c02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C02-0', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DirectionY'})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouch', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'C02-Link-ASName'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call Demo041_0.Demo041({'FldObj_Terminal_A_01': 'DungeonEntranceTerminal'})

    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text003', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}

void c03_first() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-2', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        DgnObj_WarpPoint_A_01[c03_first(DungeonEntranceWarpPoint)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        DgnObj_WarpPoint_A_01[c03_first(DungeonEntranceWarpPoint)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        if !EventSystemActor.CheckEventCancel() {
            DgnObj_WarpPoint_A_01[c03_first(DungeonEntranceWarpPoint)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
        }
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'C04-Link-ASName'})
    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text004', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void c03() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': 0, 'MotionMode': 0, 'Pattern1AtX': -1.7553000450134277, 'Pattern1AtY': 3.9851999282836914, 'Pattern1AtZ': 0.8953999876976013, 'Pattern1PosX': 6.329699993133545, 'Pattern1PosY': 1.4843000173568726, 'Pattern1PosZ': 14.458100318908691, 'Pattern1Fovy': 50.0, 'LngShiftRange': 30.0, 'LatShiftRange': 60.0, 'CollisionInterpolateSkip': False, 'FovyAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Accept1FrameDelay': True})
    } {
        WorldManagerControl.Demo_EventSetFocusDist({'FocusDist': 2.0, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadTouch', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'C03-Link-ASName', 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call Demo041_0.Demo041({'FldObj_Terminal_A_01': 'DungeonEntranceTerminal'})

    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})

        fork {
            DgnObj_WarpPoint_A_01[c03(DungeonEntranceWarpPoint)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            DgnObj_WarpPoint_A_01[c03(DungeonEntranceWarpPoint)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            if !EventSystemActor.CheckEventCancel() {
                DgnObj_WarpPoint_A_01[c03(DungeonEntranceWarpPoint)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
            }
        }

    }

}

void common_first() {
    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C03-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text005', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-1', 'IsWaitFinish': True, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C03-5', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        if !EventSystemActor.CheckEventCancel() {
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 2})
            EventCameraRumble.Demo_Rumble({'Pattern': 1, 'Count': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.05999999865889549})
            EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.05000000074505806, 'Count': 7})
        }
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'C05-Link-ASName'})
    } {
        DgnObj_EntranceShutter_A_01[common_first(DungeonEntranceShutter)].Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'ASName': 'Open', 'MorphingFrame': -1.0})
    } {
        DgnObj_DungeonEntrance_A_01[common_first(DungeonEntrance)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        DgnObj_DungeonEntrance_A_01[common_first(DungeonEntrance)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

}

void common() {

    fork {
        DgnObj_DungeonEntrance_A_01[common(DungeonEntrance)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        DgnObj_DungeonEntrance_A_01[common(DungeonEntrance)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        if !EventSystemActor.CheckEventCancel() {
            DgnObj_EntranceShutter_A_01[common(DungeonEntranceShutter)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }
    } {
        if !EventSystemActor.CheckEventCancel() {
            EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'Power': 0.10000000149011612, 'IsWaitFinish': True, 'Count': 5})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'Power': 0.07000000029802322, 'Count': 3, 'IsWaitFinish': True})
        }
    } {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'MotionMode': 0, 'Pattern1AtX': -1.7553000450134277, 'Pattern1AtY': 3.9851999282836914, 'Pattern1AtZ': 0.8953999876976013, 'Pattern1Fovy': 50.0, 'LngShiftRange': 30.0, 'LatShiftRange': 60.0, 'CollisionInterpolateSkip': False, 'FovyAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1PosX': 6.897799968719482, 'Pattern1PosY': 1.642799973487854, 'Pattern1PosZ': 15.644100189208984, 'IsWaitFinish': False, 'Cushion': 1.0, 'Count': 100.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

}

void Demo008_0() {

    call EntryPoint0({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY', 'C03-Link-ASName': 'Demo008_0-C03-Link-A-0', 'C02-Link-ASName': 'Demo008_0-C02-Link-A-0', 'C04-Link-ASName': 'Demo008_0-C04-Link-A-0', 'C05-Link-ASName': 'Demo008_0-C05-Link-A-0', 'DungeonEntranceTerminal': ActorIdentifier(name="DgnObj_EntranceTerminal_A_01"), 'DungeonEntranceWarpPoint': ActorIdentifier(name="DgnObj_WarpPoint_A_01"), 'DungeonEntrance': ActorIdentifier(name="DgnObj_DungeonEntrance_A_01"), 'DungeonEntranceShutter': ActorIdentifier(name="DgnObj_EntranceShutter_A_01"), 'PlayerEndPosUniqueName': 'Demo008_0_PlayerEndPos'})

}
