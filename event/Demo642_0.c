-------- EventFlow: Demo642_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtTheFront', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_FlagOFF', 'Demo_WarpPlayerToDestination', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['GeneralChoice2', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[LiftTerminal]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType', 'Demo_EventSetFogDirect']
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

void C01() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_02', 'UniqueName': 'LiftTerminal', 'Accept1FrameDelay': False})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 'DestinationX', 'DestinationY': 'DestinationY', 'DestinationZ': 'DestinationZ', 'DirectionY': 'DirectionY', 'IsWaitFinish': True})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'NoErrorCheck': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo642_0-C00-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': 10.0})
    }

    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo642_0:Talk01', 'IsCloseMessageDialog': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': False, 'ASName': 'Demo642_0-C01-Link-A-0', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        call Demo041_0.DownloadTermial_Activate({'ActorName': 'FldObj_DownloadTerminal_A_02', 'SheikerStoneTarget_UniqueName': 'LiftTerminal', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="LiftTerminal")})

    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo642_0:Talk02', 'IsCloseMessageDialog': True})
}

void Demo642_0() {
    DgnObj_DLC_Weapon_Sword_502.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'FldObj_DownloadTerminal_A_02', 'UniqueName': 'LiftTerminal', 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'NoErrorCheck': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo642_0-C00-Link-A-0', 'ClothWarpMode': -1, 'MorphingFrame': 10.0})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo642_0:Talk03', 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 15})
    if !EventSystemActor.GeneralChoice2() {

        call C01({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})


        call C02()


        call C03()

        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
        if !EventSystemActor.CheckEventCancel() {
            Event83:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FinalShutter_Close'})
            EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/D-6', 'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'EvflName': 'Demo642_1', 'EntryPointName': 'Demo642_1', 'WarpDestPosName': 'FinalTrial_Terminal'})
        } else {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_LiftShutter_Open'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_Lift_MoveDown', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
            SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
            goto Event83
        }
    }
}

void C02() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    FldObj_DownloadTerminal_A_02[LiftTerminal].Demo_PlayASForDemo({'ASName': 'ToActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    FldObj_DownloadTerminal_A_02[LiftTerminal].Demo_XLinkEventCreate({'ELinkKey': 'DLC_TerminalElevatorRestart', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Power': 0.10000000149011612, 'Pattern': 4, 'Count': 3})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_LiftShutter_Open'})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Power': 0.10000000149011612, 'Pattern': 4, 'Count': 3})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    WorldManagerControl.Demo_SetPaletteType({'PaletteType': 2, 'ChangeFrame': 1, 'IsWaitFinish': False, 'EndFrame': 0, 'Speed': 0.05999999865889549})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    WorldManagerControl.Demo_EventSetFogDirect({'IsWaitFinish': False, 'FogRatio': 0.8500000238418579, 'Near': -5.0, 'Far': 45.0, 'NearUse': True, 'FarUse': True, 'InstantSW': False})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'TurnPosition': [-0.20000000298023224, 0.4000000059604645, 74.69999694824219], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 159})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.10000000149011612, 'Count': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
}

void C03() {
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo642_0_ElevatorUpQuake', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Power': 3.0, 'Pattern': 4, 'Count': 2})
    if !EventSystemActor.CheckEventCancel() {
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 3})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'Demo642_0-C02-Link-A-0', 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
    } {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'FinalTrial_Lift_MoveDown', 'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-1'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    }

}
