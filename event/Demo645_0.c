-------- EventFlow: Demo645_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_WaitFrame', 'Demo_OpenItemDownloadDemo', 'Demo_CloseItemMenu', 'Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerWarp', 'Demo_XLinkEventCreate', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: FldObj_DownloadTerminal_A_01[Boss]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_GameROMMotorcycle
entrypoint: None()
actions: ['Demo_WarpEffectValueSetter', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 1, 'IsGrounding': False, 'RotZ': 0.0, 'IsWorld': True, 'PosY': 10.668499946594238, 'PosZ': 900.1566772460938, 'PosX': 0.27250000834465027, 'RotX': -10.788999557495117, 'RotY': 60.0}

Actor: Priest_Boss_Normal[Priest_Boss_Normal]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_ChangeFreeMoving', 'Demo_WarpToPos', 'Demo_VisibleOn']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'RotX': 0.0, 'RotZ': 0.0, 'PosY': 2.299999952316284, 'PosZ': 925.0, 'RotY': 180.0, 'CreateMode': 4}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpEffect]
entrypoint: None()
actions: ['Demo_PlayerWarpEffectSet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStop', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_02
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_IbutsuEx_BossBattleTerminal_Demo_A_02
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01[Boss]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventCloudShadowOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[C01(FldObj_DownloadTerminal_A_01)]
entrypoint: C01(FldObj_DownloadTerminal_A_01)
actions: []
queries: []
params: None

Actor: DgnObj_RemainsDownloadTerminalBody_A[C02(DgnObj_RemainsDownloadTerminalBody_A)]
entrypoint: C02(DgnObj_RemainsDownloadTerminalBody_A)
actions: []
queries: []
params: None

Actor: DgnObj_RemainsDownloadTerminalBody_A[C04(DgnObj_RemainsDownloadTerminalBody_A)]
entrypoint: C04(DgnObj_RemainsDownloadTerminalBody_A)
actions: []
queries: []
params: None

Actor: DgnObj_RemainsDownloadTerminalBody_A[Common(DgnObj_DownloadTerminalBody_A_01)]
entrypoint: Common(DgnObj_DownloadTerminalBody_A_01)
actions: []
queries: []
params: None

void Demo645_0() {
    WorldManagerControl.Demo_EventCloudShadowOff({'IsWaitFinish': False})

    call Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY', 'FlagName': 'IsGet_Obj_Motorcycle', 'DgnObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="Boss")})


    fork {
        EventSystemActor.Demo_OpenItemDownloadDemo({'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': False, 'IsPlayerClose': False, 'ItemType': 5})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        NPC_DRCVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text005'})
        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    } {

        call CommonItemDownload()

    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_Motorcycle'})

    call CommonEnd()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Die_Boss_FinalTrial'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Clear_FinalTrial'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step06'})
    EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'WarpDestPosName': 'BalladOfHeroes_ending', 'WarpDestMapName': 'MainField/D-6', 'EvflName': 'Demo646_0', 'EntryPointName': 'Demo646_0'})
}

void C01() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'TargetActorPosReferenceMode': 1, 'UniqueName': 'Boss'})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadSet', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DestinationX': 'Arg_DestinationX', 'DirectionY': 'Arg_DestinationDirY'})
        EventSystemActor.Demo_FlagON({'FlagName': 'IsDownloadDemo', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        Fader.Demo_FadeIn({'DispMode': 'NoLogo', 'IsWaitFinish': False, 'Color': 0, 'Frame': 0})
    } {

        call Demo041_0.DownloadTermial_Activate({'SheikerStoneTarget_UniqueName': 'Boss', 'ActorName': 'FldObj_DownloadTerminal_A_01', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="Boss")})

    } {
        Dm_GameROMMotorcycle.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo645_0-C01-Motorcycle_Demo-A-0', 'MorphingFrame': 0.0})
        DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01[Boss].Demo_PlayASForDemo({'ASName': 'OffWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_VisibleOn({'IsWaitFinish': True})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_ChangeFreeMoving({'SetFreeMoving': True, 'IsWaitFinish': True})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_WarpToPos({'IsWaitFinish': True, 'TargetRot': [0.0, 210.0, 0.0], 'TargetPos': [13.890000343322754, -5.0, 923.7999877929688]})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo645_0-C01-Priest_Boss_Normal-A-0'})
    } {
        DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_02.Demo_PlayASForDemo({'ASName': 'Stop', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        DgnObj_DLC_IbutsuEx_BossBattleTerminal_Demo_A_02.Demo_PlayASForDemo({'ASName': 'Stop', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    NPC_DRCVoice.Demo_Talk({'MessageId': 'DemoMsg/Demo003_0:Demo003_0_Text000', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0', 'StartFrame': 30.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoadReady', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
    } {
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_WarpToPos({'IsWaitFinish': True, 'TargetPos': [13.890000343322754, 3.75, 923.7999877929688], 'TargetRot': [0.0, 210.0, 0.0]})
    } {
        DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01[Boss].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Start', 'SLinkKey': 'Start', 'IsTargetDemoSLinkUser': False})
        DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01[Boss].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Start', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'DownloadDemoBgm', 'IsWaitFinish': True})
    }

}

void C03() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'Boss'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
}

void C04() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'TargetActorPosReferenceMode': 1, 'UniqueName': 'Boss'})
        DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01[Boss].Demo_XLinkEventFade({'ELinkKey': 'Start', 'IsWaitFinish': True, 'SLinkKey': ''})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoad', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True})
    } {

        call Demo041_0.DripCatch({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="Boss")})

    }

}

void C05() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadLookPad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C04-1', 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'TargetActorPosReferenceMode': 1, 'UniqueName': 'Boss'})
    }

}

void Common() {

    call C01({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="Boss"), 'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call C01B()


    call C02({'DgnObj_RemainsDownloadTerminalBody_A': ActorIdentifier(name="DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01", sub_name="Boss")})


    call C03()


    call C04({'FlagName': 'FlagName', 'DgnObj_RemainsDownloadTerminalBody_A': ActorIdentifier(name="DgnObj_DLC_IbutsuEx_BossBattleRoomDownloadTerminalBody_A_01", sub_name="Boss")})


    call C05({'Arg_FlagName': 'FlagName'})

}

void C01B() {
    Dm_GameROMMotorcycle.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo645_0-C01-Motorcycle_Demo-A-1', 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 0.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-2'})
    } {
        Dm_GameROMMotorcycle.Demo_WarpEffectValueSetter({'SetFrame': 120.0, 'ChangeType': 1, 'IsWaitFinish': False})
        Dm_GameROMMotorcycle.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo645_BikeDrip', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo645_BikeDrip'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    }

}

void C08() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'Boss', 'TargetActorPosReferenceMode': 1, 'SceneName': 'C08-0'})
    } {

        call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="Boss"), 'ShiekerStoneBindTargetUniqueName': 'Boss', 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_01'})

        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        call OperationGuide.Guide_ItemUse()

    }

    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Priest_Boss_Normal', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnDirection': -20.0})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'Boss', 'TargetActorPosReferenceMode': 1, 'SceneName': 'C08-1'})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsUseSlowTurn': True, 'IsWaitFinish': True, 'IsValid': True, 'IsTurnToLookAtPos': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 2, 'FaceId': 0, 'ActorName': '', 'TurnDirection': -30.0})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void C09() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C09-0', 'StartFrame': 0.0, 'EndFrame': -1.0})
    } {
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo645_0:Demo645_0_Text000'})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo645_0:Demo645_0_Text003'})
    }

}

void C10-11() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'Boss', 'TargetActorPosReferenceMode': 1, 'SceneName': 'C08-2'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

        fork {
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C10-0'})
        } {
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 26})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduceOff'})
        }

        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C11-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Fader.Demo_FadeOut({'Frame': 1, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 1, 'SetFrame': 120.0, 'IsWaitFinish': False})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo005_0_warp', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo005_0_warp', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayerWarp({'IsWaitFinish': False})
    }

}

void CommonItemDownload() {
    EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'BgCheck': False, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'SceneName': 'C04-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void CommonEnd() {

    call C08()


    call C09()


    call C10-11()

}
