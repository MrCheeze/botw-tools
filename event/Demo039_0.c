-------- EventFlow: Demo039_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AutoSave', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_DownloadRemainsMap', 'Demo_CloseItemMenu', 'Demo_RequestOpenPopUpHelp']
queries: ['CheckCurrentMap', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: DgnObj_RemainsDownloadTerminalBody_A
entrypoint: None()
actions: ['Demo_XLinkEventFade', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_SetEndProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[ForGameCameraWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsDownloadTerminalBody_A[C02(DgnObj_RemainsDownloadTerminalBody_A)]
entrypoint: C02(DgnObj_RemainsDownloadTerminalBody_A)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

void C01() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'DestinationX', 'DestinationY': 'DestinationY', 'DestinationZ': 'DestinationZ', 'DirectionY': 'DirectionY'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadSet', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {

        call Demo041_0.DownloadTermial_Activate({'ActorName': 'FldObj_DownloadTerminal_A_01', 'SheikerStoneTarget_UniqueName': '', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01")})

    }

    NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text000', 'IsBecomingSpeaker': False})
}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoadReady', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'IsOneTimeEndKeep': False, 'ClothWarpMode': -1})
    } {
        DgnObj_RemainsDownloadTerminalBody_A[C02(DgnObj_RemainsDownloadTerminalBody_A)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Start', 'SLinkKey': 'Start', 'IsTargetDemoSLinkUser': False})
        DgnObj_RemainsDownloadTerminalBody_A[C02(DgnObj_RemainsDownloadTerminalBody_A)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Start', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'DownloadDemoBgm', 'IsWaitFinish': True})
    }

}

void C03() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
}

void DownloadApp() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsDownloadDemo', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    call C01({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})


    call C02({'DgnObj_RemainsDownloadTerminalBody_A': ActorIdentifier(name="DgnObj_RemainsDownloadTerminalBody_A")})


    call C03()


    call C04({'FlagName': 'FlagName'})


    call C05({'Arg_FlagName': 'FlagName'})

    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_RemainInsideMap'})
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWind'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_App_WindRelic', 'IsWaitFinish': True})
        Event100:

        fork {
            EventSystemActor.Demo_DownloadRemainsMap({'IsPlayerClose': False, 'IsWaitFinish': False})
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text001', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 240})
        } {
            EventSystemActor[ForGameCameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        }

        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

        call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01"), 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': ''})

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWind'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsWind_AccessDownload'})
            if EventSystemActor.CheckFlag({'FlagName': 'Access_AllTerminalWind'}) {
                Event14:
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                EventSystemActor.Demo_RequestOpenPopUpHelp({'HelpType': 17, 'IsWaitFinish': True})
            } else {

                fork {

                    call PlayerLookAround()

                } {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text009'})
                }

                goto Event14
            }
        } else
        if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWater'}) {

            fork {

                call PlayerLookAround()

            } {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text007'})
            }

            goto Event14
        } else
        if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsElectric'}) {

            fork {

                call PlayerLookAround()

            } {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text004', 'IsCloseMessageDialog': True})
            }

            goto Event14
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsFire_OpenWindow'})

            fork {

                call PlayerLookAround()

            } {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text011'})
            }

            SceneSoundCtrlTag.Demo_SetEndProc({'IsWaitFinish': True, 'CtrlType': 'SkipAll'})
            goto Event14
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWater'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_App_WaterRelic', 'IsWaitFinish': True})
        goto Event100
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsElectric'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_App_ElectricRelic', 'IsWaitFinish': True})
        goto Event100
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_App_FireRelic', 'IsWaitFinish': True})
        goto Event100
    }
}

void C04() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        DgnObj_RemainsDownloadTerminalBody_A.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Start'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
    } {

        call Demo041_0.DripCatch({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01")})

    } {
        DgnObj_RemainsDownloadTerminalBody_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

}

void C05() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadLookPad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-1', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

}

void PlayerLookAround() {
    EventSystemActor.Demo_WaitFrame({'Frame': 45, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
}

void FinalTrial() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsDownloadDemo', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    call C01({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})


    call C02({'DgnObj_RemainsDownloadTerminalBody_A': ActorIdentifier(name="DgnObj_RemainsDownloadTerminalBody_A")})


    call C03()


    call C04({'FlagName': 'FlagName'})


    call C05({'Arg_FlagName': 'FlagName'})

    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_RemainInsideMap'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_App_FinalTrial'})

    fork {
        EventSystemActor.Demo_DownloadRemainsMap({'IsPlayerClose': False, 'IsWaitFinish': False})
        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo039_0:Demo039_0_Text001', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageOpenDelayTime': 240})
    } {
        EventSystemActor[ForGameCameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

    call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01"), 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': ''})

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    EventSystemActor.Demo_RequestOpenPopUpHelp({'HelpType': 17, 'IsWaitFinish': True})
}
