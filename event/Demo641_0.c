-------- EventFlow: Demo641_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_ResetBoneCtrl']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToAnchor', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckEventCancel', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_StartPointShutter
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble', 'Demo_RumbleLoop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[FinalTrial_Entrance]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_Weapon_Sword_502
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo641_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    DgnObj_StartPointShutter.Demo_Join({'IsWaitFinish': True})
    DgnObj_DLC_Weapon_Sword_502.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})

    call Demo641_0_C01()


    call Demo641_0_C02()


    call Demo641_0_C03()


    call Demo641_0_C04()

    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_FirstMessage'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Lift_Complete'})
    }
    EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'WarpDestMapName': 'MainFieldDungeon/FinalTrial', 'EvflName': 'Demo641_1', 'EntryPointName': 'Demo641_1', 'WarpDestPosName': 'LiftTerminal'})
}

void Demo641_0_C01() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0', 'TargetActor': 3, 'UniqueName': 'FinalTrial_Entrance', 'TargetActorDirReferenceMode': 1, 'ActorName': 'FldObj_DownloadTerminal_A_02', 'Accept1FrameDelay': False})
    } {
        EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'Demo641_0_Start', 'AnchorName': 'DestinationAnchor', 'IsWaitFinish': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'NoErrorCheck': True, 'ASName': 'Demo641_0-C00-Link-A-0', 'ClothWarpMode': 1})
    }

    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})
    NPC_DRCVoice.Demo_Talk({'MessageId': 'DemoMsg/Demo641_0:Talk01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 30})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'Demo641_0-C01-Link-A-0', 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        call Demo041_0.DownloadTermial_Activate({'SheikerStoneTarget_UniqueName': 'FinalTrial_Entrance', 'ActorName': 'FldObj_DownloadTerminal_A_02', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="FinalTrial_Entrance")})

    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo641_0:Talk03'})
}

void Demo641_0_C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0', 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Power': 0.10000000149011612, 'Pattern': 4, 'Count': 3})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FinalShutter_Close'})
        WorldManagerControl.Demo_SetPaletteType({'PaletteType': 2, 'ChangeFrame': 1, 'Speed': 1.0, 'IsWaitFinish': False, 'EndFrame': 0})
        GameROMPlayer.Demo_LookAtObject({'ActorName': 'DgnObj_StartPointShutter', 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
        EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.10000000149011612, 'Count': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    }

}

void Demo641_0_C03() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'SceneName': 'C01-0', 'TargetActor': 3, 'UniqueName': 'FinalTrial_Entrance', 'TargetActorDirReferenceMode': 1, 'ActorName': 'FldObj_DownloadTerminal_A_02'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo641_0:Talk02', 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': False, 'FaceId': 1, 'ActorName': 'FldObj_DownloadTerminal_A_02', 'UniqueName': 'FinalTrial_Entrance'})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'ASName': 'ToActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_TerminalElevatorStart', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    if !EventSystemActor.CheckEventCancel() {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo641_0_ElevatorDownQuake', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Count': 2, 'Power': 0.699999988079071})
        EventCameraRumble.Demo_RumbleLoop({'IsWaitFinish': True, 'Sideways': False, 'Power': 0.30000001192092896, 'Pattern': 3})
        if !EventSystemActor.CheckEventCancel() {
            EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 3})
        }
    }
}

void Demo641_0_C04() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True, 'ASName': 'Demo641_0-C02-Link-A-0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C04-0'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_LiftShutter_Open', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_Lift_MoveDown', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C04-1'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if EventSystemActor.CheckEventCancel() {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FinalShutter_Close'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_LiftShutter_Open', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_Lift_MoveDown', 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
    }
}
