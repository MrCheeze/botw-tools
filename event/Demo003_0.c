-------- EventFlow: Demo003_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayerToDestination', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_OpenItemDownloadDemo', 'Demo_WaitCloseItemDownloadDemo', 'Demo_CloseItemMenu']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DownloadTerminalBody_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DownloadTerminal_A_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[C01(FldObj_DownloadTerminal_A_01)]
entrypoint: C01(FldObj_DownloadTerminal_A_01)
actions: []
queries: []
params: None

Actor: DgnObj_DownloadTerminalBody_A_01[C02(DgnObj_DownloadTerminalBody_A_01)]
entrypoint: C02(DgnObj_DownloadTerminalBody_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_DownloadTerminalBody_A_01[Common(DgnObj_DownloadTerminalBody_A_01)]
entrypoint: Common(DgnObj_DownloadTerminalBody_A_01)
actions: []
queries: []
params: None

Actor: DgnObj_DownloadTerminalBody_A_01[C04(DgnObj_DownloadTerminalBody_A_01)]
entrypoint: C04(DgnObj_DownloadTerminalBody_A_01)
actions: ['Demo_XLinkEventFade']
queries: []
params: None

void C01() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': -1, 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadSet', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DirectionY'})
    } {

        call Demo041_0.DownloadTermial_Activate({'ActorName': 'DgnObj_DownloadTerminal_A_01', 'SheikerStoneTarget_UniqueName': '', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01")})

    }

    NPC_DRCVoice.Demo_Talk({'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text000', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'TargetActor': -1, 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoadReady', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
    } {
        DgnObj_DownloadTerminalBody_A_01[C02(DgnObj_DownloadTerminalBody_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Start', 'SLinkKey': 'Start', 'IsTargetDemoSLinkUser': False})
        DgnObj_DownloadTerminalBody_A_01[C02(DgnObj_DownloadTerminalBody_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Start', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'DownloadDemoBgm', 'IsWaitFinish': True})
    }

}

void C03() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'TargetActor': -1, 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
}

void Item01() {

    call CommonFirst()


    call Common({'FlagName': 'IsGet_Obj_RemoteBomb', 'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DirectionY': 'Arg_DestinationDirY', 'DgnObj_DownloadTerminalBody_A_01': ActorIdentifier(name="DgnObj_DownloadTerminalBody_A_01")})


    fork {
        EventSystemActor.Demo_OpenItemDownloadDemo({'ItemType': 0, 'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': False, 'IsPlayerClose': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        NPC_DRCVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text005'})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {

        call CommonItemDownload()

    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_RemoteBomb'})

    call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01"), 'ShiekerStoneBindTargetActorName': 'DgnObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': ''})

    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    call OperationGuide.Guide_ItemUse()

    Event192:
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
}

void Common() {

    call C01({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DirectionY': 'Arg_DirectionY', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01")})


    call C02({'DgnObj_DownloadTerminalBody_A_01': 'DgnObj_DownloadTerminalBody_A_01'})


    call C03()


    call C04({'FlagName': 'FlagName', 'DgnObj_DownloadTerminalBody_A_01': 'DgnObj_DownloadTerminalBody_A_01'})


    call C05({'Arg_FlagName': 'FlagName'})

}

void C04() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': -1, 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        DgnObj_DownloadTerminalBody_A_01[C04(DgnObj_DownloadTerminalBody_A_01)].Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Start'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoad', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True})
    } {

        call Demo041_0.DripCatch({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01")})

    }

}

void C05() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadLookPad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': -1, 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'SceneName': 'C04-1', 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

}

void Item02() {

    call CommonFirst()


    call Common({'FlagName': 'IsGet_Obj_Magnetglove', 'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DirectionY': 'Arg_DestinationDirY', 'DgnObj_DownloadTerminalBody_A_01': ActorIdentifier(name="DgnObj_DownloadTerminalBody_A_01")})


    fork {
        EventSystemActor.Demo_OpenItemDownloadDemo({'ItemType': 1, 'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': False, 'IsPlayerClose': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        NPC_DRCVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text005'})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {

        call CommonItemDownload()

    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_Magnetglove'})

    call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01"), 'ShiekerStoneBindTargetActorName': 'DgnObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': ''})

    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    call OperationGuide.Guide_ItemUse()

    goto Event192
}

void Item03() {

    call CommonFirst()


    call Common({'FlagName': 'IsGet_Obj_StopTimer', 'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DirectionY': 'Arg_DestinationDirY', 'DgnObj_DownloadTerminalBody_A_01': ActorIdentifier(name="DgnObj_DownloadTerminalBody_A_01")})


    fork {
        EventSystemActor.Demo_OpenItemDownloadDemo({'ItemType': 2, 'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': False, 'IsPlayerClose': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        NPC_DRCVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text005'})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {

        call CommonItemDownload()

    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_StopTimer'})

    call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01"), 'ShiekerStoneBindTargetActorName': 'DgnObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': ''})

    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    call OperationGuide.Guide_ItemUse()

    goto Event192
}

void Item04() {

    call CommonFirst()


    call Common({'FlagName': 'IsGet_Obj_IceMaker', 'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DirectionY': 'Arg_DestinationDirY', 'DgnObj_DownloadTerminalBody_A_01': ActorIdentifier(name="DgnObj_DownloadTerminalBody_A_01")})


    fork {
        EventSystemActor.Demo_OpenItemDownloadDemo({'ItemType': 3, 'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': False, 'IsPlayerClose': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        NPC_DRCVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text005'})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {

        call CommonItemDownload()

    }

    EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_IceMaker', 'IsWaitFinish': True})

    call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="DgnObj_DownloadTerminal_A_01"), 'ShiekerStoneBindTargetActorName': 'DgnObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': ''})

    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    call OperationGuide.Guide_ItemUse()

    goto Event192
}

void CommonFirst() {
    EventSystemActor.Demo_FlagON({'FlagName': 'IsDownloadDemo', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute'})
    DgnObj_DownloadTerminalBody_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'OffWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
}

void CommonItemDownload() {
    EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'BgCheck': False, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}
