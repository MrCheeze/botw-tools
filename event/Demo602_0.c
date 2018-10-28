-------- EventFlow: Demo602_0 --------

Actor: DgnObj_EntranceElevatorSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceShutterSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPointSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceTerminalSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckPlayerRideHorse', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_StopInAir', 'Demo_VisibleOff', 'Demo_PlayerWait', 'Demo_TurnAndLookToObjectNow', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_CameraAnimFlow', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_SweepCollision
entrypoint: None()
actions: ['Demo_Sweep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle', 'Demo_RumbleLarge', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_ChampionsDungeonEntrance_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_TrigNullASPlay', 'Demo_OnMUAssignSaveForUsed', 'Demo_PlayASForDemoPreMove']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_WaterShrineGround_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: EventSystemActor[PlayerController]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Shake]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void DungeonArrival_DLC() {
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        Event100:
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})

        fork {
            if EventSystemActor.CheckPlayerState({'PlayerState': 4})
            && !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Dungeon01_ForDemo602_0'}) {
                EventSystemActor[PlayerController].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 1, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
            }
        } {

            call Demo602_0_Cam_Gerudo02()

        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_OnMUAssignSaveForUsed({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'ReadRiddle'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        if EventSystemActor.CheckFlag({'FlagName': 'NotBack_Demo016Camera'}) {
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
        } else {
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_VisibleOff({'IsWaitFinish': False})
    } else {
        GameROMPlayer.Demo_StopInAir({'NoFixed': True, 'IsWaitFinish': False})
    }
    goto Event100
}

void Demo602_0() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void Demo602_0_Camera() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    } {

        call Demo602_0_CDungeonAnm()

    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_0', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01'})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'SceneName': 'C01_1', 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01'})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_3', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01'})
    }

}

void Demo602_0_Cam_Gerudo03() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Dungeon03_ForDemo602_0'}) {

        fork {

            call Demo602_0_CDungeonAnm()

        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3455.690673828125, 'Pattern1PosY': 460.1050109863281, 'Pattern1PosZ': 1325.4197998046875, 'Pattern1AtX': -3451.1748046875, 'Pattern1AtY': 455.77423095703125, 'Pattern1AtZ': 1327.1416015625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.2556149959564209, 'Pattern1PosY': 25.50946044921875, 'Pattern1PosZ': 22.61328125, 'Pattern1AtX': -0.25, 'Pattern1AtY': 25.476318359375, 'Pattern1AtZ': 21.613525390625, 'Pattern1Fovy': 33.39850997924805, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'Count': 30.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C02_0'})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'SceneName': 'C01_1', 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01'})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_3', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01'})
        }

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_Dungeon03_ForDemo602_0'})
    } else {

        call Demo602_0_Cam_OneHit01()

    }
}

void Demo602_0_Cam_Gerudo02() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Dungeon02_ForDemo602_0'}) {

        fork {

            call Demo602_0_CDungeonAnm()

        } {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C03_0'})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C03_1'})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C03_3'})
        }

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_Dungeon02_ForDemo602_0'})
    } else {

        call Demo602_0_Cam_Gerudo03()

    }
}

void Demo602_0_Cam_Water() {

    fork {

        call Demo602_0_Camera()

    } {
        FldObj_DLC_WaterShrineGround_A_01.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Rising'})
        FldObj_DLC_WaterShrineGround_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Rising'})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Dungeon01_ForDemo602_0'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_TargetEffect'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Dungeon01_ForDemo602_0'})
    }
}

void Demo602_0_CDungeonAnm() {

    fork {
        DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Close', 'IsIgnoreSame': True, 'ASSlot': 0, 'SequenceBank': 0})
        DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0, 'TargetIndex': 1})
    } {
        DgnObj_EntranceElevatorSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    } {
        DgnObj_EntranceShutterSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'IsEnabledAnimeDriven': 1, 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0, 'ASName': 'Rising'})
    } {
        Obj_SweepCollision.Demo_Sweep({'DynScalingTime': 90.0, 'IsWaitFinish': True})
    } {
        DgnObj_WarpPointSP.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'OffWait', 'ASSlot': 0, 'IsIgnoreSame': True, 'SequenceBank': 0})
        DgnObj_WarpPointSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    } {
        DgnObj_EntranceTerminalSP.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'OffWait', 'ASSlot': 0, 'IsIgnoreSame': True, 'SequenceBank': 0})
        DgnObj_EntranceTerminalSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    }


    fork {
        DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0, 'TargetIndex': 1})
    } {
        DgnObj_EntranceElevatorSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    } {
        DgnObj_EntranceShutterSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    } {
        DgnObj_WarpPointSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    } {
        DgnObj_EntranceTerminalSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo602_0_DungeonAppearanceTrigger', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'Demo602_0_DungeonArrival_Snow'}) {
            DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo602_0_DungeonArrival_Snow', 'SLinkKey': 'Demo602_0_DungeonArrival_Snow'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Demo602_0_DungeonArrival_Snow'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Demo602_0_DungeonArrival_Water'}) {
            DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo602_0_DungeonArrival_Water', 'SLinkKey': 'Demo602_0_DungeonArrival_Water'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Demo602_0_DungeonArrival_Water'})
        } else {
            DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo602_0_DungeonArrival_Normal', 'SLinkKey': 'Demo602_0_DungeonArrival_Normal'})
        }
    } {
        EventSystemActor[Shake].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor[Shake].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 14})
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
    }

}

void DungeonArrival_DLC_Water() {
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        Event420:
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})

        fork {
            if EventSystemActor.CheckPlayerState({'PlayerState': 4})
            && !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Dungeon02_ForDemo602_0'}) {
                EventSystemActor[PlayerController].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 1, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
            }
        } {

            call Demo602_0_Cam_Water()

        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DLC_ChampionsDungeonEntrance_A_01.Demo_OnMUAssignSaveForUsed({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'ReadRiddle'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        if EventSystemActor.CheckFlag({'FlagName': 'NotBack_Demo016Camera'}) {
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
        } else {
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_VisibleOff({'IsWaitFinish': False})
    } else {
        GameROMPlayer.Demo_StopInAir({'NoFixed': True, 'IsWaitFinish': False})
    }
    goto Event420
}

void Demo602_0_Cam_OneHit01() {
    if EventSystemActor.CheckFlag({'FlagName': 'OneHitDungeon000_ForDemo602_0'}) {

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        } {

            call Demo602_0_CDungeonAnm()

        } {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C04_0'})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C04_1'})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True, 'ActorName': 'DgnObj_DLC_ChampionsDungeonEntrance_A_01', 'SceneName': 'C04_3'})
        }

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'OneHitDungeon000_ForDemo602_0'})
    } else {

        call Demo602_0_Camera()

    }
}
