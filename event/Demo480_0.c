-------- EventFlow: Demo480_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_ResetGimmick', 'Demo_WarpPLToPosAndResetGimmick']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PolarCoordPlayerRelative']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[fog]
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_GoddesStatue_A_10[GoddessWisdom]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Dragon_Grudge
entrypoint: None()
actions: ['Demo_ReleaseGrudge', 'Demo_WaitRunel']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void DragonGrudgeAllOff() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    Fader.Demo_FadeOut({'DispMode': 'Auto', 'IsWaitFinish': False, 'Color': 0, 'Frame': 0})
    WorldManagerControl[fog].Demo_EventSetAddFogOff({'IsWaitFinish': True})
    TwnObj_GoddesStatue_A_10[GoddessWisdom].Demo_Join({'IsWaitFinish': False})

    call Common.AirStartUP_Player()

    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'DispMode': 'Auto', 'IsWaitFinish': False, 'Color': 0, 'Frame': 0})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-3', 'UniqueName': 'GoddessWisdom'})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-4', 'UniqueName': 'GoddessWisdom'})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-2', 'IsWaitFinish': False, 'UniqueName': 'GoddessWisdom'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 4})
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 265})
    } {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Enemy_Dragon_Ice_GrudgeDestroyComplete'})
    } {
        Enemy_Dragon_Grudge.Demo_ReleaseGrudge({'ASName': 'Release_Grudge', 'TargetIndex': 0, 'IsWaitFinish': False, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    }

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Enemy_Dragon_Grudge.Demo_WaitRunel({'TargetIndex': 0, 'IsWaitFinish': False, 'ASName': 'Wait_Runel', 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 1.0, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'TargetGroups': 'BgmSpot'})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Pattern1PosX': 3914.75, 'Pattern1PosY': 579.280029296875, 'Pattern1PosZ': 1330.050048828125, 'Pattern1AtX': 3910.429931640625, 'Pattern1AtY': 579.3300170898438, 'Pattern1AtZ': 1328.1700439453125, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 1.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'Destination': [3973.0, 570.0, 1357.0], 'RotationY': 90.0, 'SystemResetOption': 2, 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': False, 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 1, 'TurnPosition': [3952.0, 582.0, 1348.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'ActorName': 'Enemy_Dragon_Grudge', 'IsTurnToLookAtPos': False})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})

    fork {
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_01', 'MessageOpenDelayTime': 80})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_02'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-1', 'IsWaitFinish': True, 'UniqueName': 'GoddessWisdom'})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'IsWaitFinish': True, 'UniqueName': 'GoddessWisdom'})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Enemy_Dragon_Ice_GrudgeDestroyDemoEnd'})
}

void DragonGate() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.157288074493408, 'Pattern1PosY': 8.709945678710938, 'Pattern1PosZ': 45.652099609375, 'Pattern1AtX': -4.130797863006592, 'Pattern1AtY': 6.9270172119140625, 'Pattern1AtZ': 39.489990234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'Count': 100.0, 'Pattern1PosX': -7.28000020980835, 'Pattern1PosY': 8.0600004196167, 'Pattern1PosZ': 20.290000915527344, 'Pattern1AtX': -4.449999809265137, 'Pattern1AtY': 5.320000171661377, 'Pattern1AtZ': 14.460000038146973, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        }
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.10382100194692612, 'Pattern1PosY': 2.433258056640625, 'Pattern1PosZ': 7.308837890625, 'Pattern1AtX': 0.172667995095253, 'Pattern1AtY': 1.9445650577545166, 'Pattern1AtZ': 1.665282964706421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    if NPC_CaptionVoice.IsOnInstEventFlag() {
        Event140:
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_17'})
        GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'OtherActor': 3, 'ReviseMode': 0, 'LngOffset': 0.0, 'FovyParam': 50.0, 'FovyCalcMode': 1, 'ActorIgnoringCollision': -1, 'ReverseOrder': True, 'AtCalcMode': 0, 'RadiusOffset': 1.0, 'Time': 0.0, 'UniqueNameForOtherActor': '', 'ActorNameForOtherActor': 'TwnObj_GoddesStatue_A_10', 'LatOffset': 0.0, 'AtParam': [0.0, 1.600000023841858, -2.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

        call Common.Play_ReadRiddle()

    } else {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_16'})
        goto Event140
    }
}

void PowerFirstDemo() {

    call Matome_Zenhan()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'TurnPosition': [3760.0, 110.0, -2678.0], 'FaceId': 1, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3747.844482421875, 'Pattern1PosY': 111.89022064208984, 'Pattern1PosZ': -2660.98828125, 'Pattern1AtX': 3750.327880859375, 'Pattern1AtY': 112.16427612304688, 'Pattern1AtZ': -2664.661865234375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Matome_Kouhan()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PowerFirstDemoKill'})
}

void CourageFirstDemo() {

    call Matome_Zenhan()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 1, 'IsValid': False, 'TurnPosition': [875.0, 124.0, 2360.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 877.6398315429688, 'Pattern1PosY': 127.5757827758789, 'Pattern1PosZ': 2376.4638671875, 'Pattern1AtX': 876.9232177734375, 'Pattern1AtY': 127.92948913574219, 'Pattern1AtZ': 2371.5263671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Matome_Kouhan()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CourageFirstDemoKill'})
}

void Matome_Kouhan() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_06'})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_04'})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_07'})
}

void Matome_Zenhan() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_05'})
}

void IceDragonPartsFirstGet() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3946.447509765625, 'Pattern1PosY': 574.7968139648438, 'Pattern1PosZ': 1342.3106689453125, 'Pattern1AtX': 3940.45458984375, 'Pattern1AtY': 573.3604736328125, 'Pattern1AtZ': 1341.0601806640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo480_0:Dragon_13'})
}
