-------- EventFlow: Demo641_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AutoSave', 'Demo_FlagOFF']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_Bind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RumbleLoop', 'Demo_DemoLoopStopWithDamping']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_StartPointShutter
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[LiftTerminal]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[ForWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType', 'Demo_EventSetFogDirect', 'Demo_EventSetFocusDist']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_Weapon_Sword_502
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[Demo641_1_SheikPadSetOff(FldObj_DownloadTerminal_A_02)]
entrypoint: Demo641_1_SheikPadSetOff(FldObj_DownloadTerminal_A_02)
actions: ['Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_02[BindShiekerStone(FldObj_DownloadTerminal_A_02)]
entrypoint: BindShiekerStone(FldObj_DownloadTerminal_A_02)
actions: ['Demo_TrigNullASPlay', 'Demo_PlayASForDemo']
queries: []
params: None

void Demo641_1() {

    fork {

        call BindShiekerStone({'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_02', 'ShiekerStoneBindTargetUniqueName': 'LiftTerminal', 'FldObj_DownloadTerminal_A_02': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="LiftTerminal")})

    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo641_1-C01-Link-A-0', 'NoErrorCheck': True})
    } {
        EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_Lift_MoveDown', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FinalShutter_Close'})
    } {
        DgnObj_StartPointShutter.Demo_Join({'IsWaitFinish': True})
        DgnObj_DLC_Weapon_Sword_502.Demo_Join({'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'TargetActor': 3, 'UniqueName': 'LiftTerminal', 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-0', 'ActorName': 'FldObj_DownloadTerminal_A_02'})
    } {
        WorldManagerControl.Demo_SetPaletteType({'IsWaitFinish': False, 'ChangeFrame': 0, 'EndFrame': 0, 'PaletteType': 2, 'Speed': 3.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 0.10000000149011612})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        WorldManagerControl.Demo_EventSetFogDirect({'IsWaitFinish': False, 'FogRatio': 0.8500000238418579, 'Near': -5.0, 'Far': 45.0, 'NearUse': True, 'FarUse': True, 'InstantSW': True})
    } {
        EventCameraRumble.Demo_RumbleLoop({'Pattern': 4, 'Sideways': False, 'IsWaitFinish': True, 'Power': 0.10000000149011612})
        EventCameraRumble.Demo_DemoLoopStopWithDamping({'IsWaitFinish': True, 'DampingTime': 210.0})
    }


    fork {

        call Demo641_1_C01()


        call Demo641_1_C02()

    } {
        EventSystemActor[ForWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': False})
    }

    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Demo641_1_C01() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 29})

    call Demo641_1_SheikPadSetOff({'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_02', 'ShiekerStoneBindTargetUniqueName': 'LiftTerminal', 'FldObj_DownloadTerminal_A_02': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="LiftTerminal")})

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_LiftShutter_Open', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'DgnObj_StartPointShutter', 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo643_3'}) {
        WorldManagerControl.Demo_SetPaletteType({'IsWaitFinish': False, 'ChangeFrame': 1, 'EndFrame': 0, 'PaletteType': 56, 'Speed': 0.05000000074505806})
        Event53:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    } else {
        WorldManagerControl.Demo_SetPaletteType({'IsWaitFinish': False, 'PaletteType': 47, 'ChangeFrame': 1, 'EndFrame': 0, 'Speed': 0.05000000074505806})
        goto Event53
    }
}

void Demo641_1_C02() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'TargetActor': 1, 'SceneName': 'C02-0'})
    EventCameraRumble.Demo_RumbleLoop({'Pattern': 4, 'Sideways': False, 'IsWaitFinish': True, 'Power': 0.20000000298023224})
    EventCameraRumble.Demo_DemoLoopStopWithDamping({'IsWaitFinish': True, 'DampingTime': 800.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
}

void Demo641_1_SheikPadSetOff() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadSetOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': 0, 'MorphingFrame': 10.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        FldObj_DownloadTerminal_A_02[Demo641_1_SheikPadSetOff(FldObj_DownloadTerminal_A_02)].Demo_PlayASForDemo({'ASName': 'GetOffStone_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        FldObj_DownloadTerminal_A_02[Demo641_1_SheikPadSetOff(FldObj_DownloadTerminal_A_02)].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo641_1-C01-Obj_DRCStoneStand_A_01-A-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        FldObj_DownloadTerminal_A_02[Demo641_1_SheikPadSetOff(FldObj_DownloadTerminal_A_02)].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo641_1-C01-Obj_DRCStoneStand_A_01-A-1'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    } {

        fork {
            Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'ShiekerStoneBindTargetActorName', 'UniqueName': 'ShiekerStoneBindTargetUniqueName'})
        } {
            Item_Conductor.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Off', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': True})
        }

    }

}

void BindShiekerStone() {

    fork {
        FldObj_DownloadTerminal_A_02[BindShiekerStone(FldObj_DownloadTerminal_A_02)].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'ActivatedWait', 'ASSlot': 0, 'SequenceBank': 0})
        FldObj_DownloadTerminal_A_02[BindShiekerStone(FldObj_DownloadTerminal_A_02)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'ActivatedWait_Skl'})
    } {
        Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'ShiekerStoneBindTargetActorName', 'UniqueName': 'ShiekerStoneBindTargetUniqueName'})
    } {
        Item_Conductor.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Off', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': True})
    }

}
