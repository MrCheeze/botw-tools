-------- EventFlow: Demo480_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void DragonGateWisdom() {

    call Common.AirStartUP_Player()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.157288074493408, 'Pattern1PosY': 8.709945678710938, 'Pattern1PosZ': 45.652099609375, 'Pattern1AtX': -4.130797863006592, 'Pattern1AtY': 6.9270172119140625, 'Pattern1AtZ': 39.489990234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGateWisdom'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'Count': 100.0, 'Pattern1PosX': -7.28000020980835, 'Pattern1PosY': 8.0600004196167, 'Pattern1PosZ': 20.290000915527344, 'Pattern1AtX': -4.449999809265137, 'Pattern1AtY': 5.320000171661377, 'Pattern1AtZ': 14.460000038146973, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGateWisdom'})

    fork {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        }
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.10382100194692612, 'Pattern1PosY': 2.433258056640625, 'Pattern1PosZ': 7.308837890625, 'Pattern1AtX': 0.172667995095253, 'Pattern1AtY': 1.9445650577545166, 'Pattern1AtZ': 1.665282964706421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGateWisdom'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

    call Common.Play_ReadRiddle()

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'MuteOff', 'IsWaitFinish': True})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo034_0:talk30'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void DragonGatePower() {

    call Common.AirStartUP_Player()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.157288074493408, 'Pattern1PosY': 8.709945678710938, 'Pattern1PosZ': 45.652099609375, 'Pattern1AtX': -4.130797863006592, 'Pattern1AtY': 6.9270172119140625, 'Pattern1AtZ': 39.489990234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGatePower'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'Count': 100.0, 'Pattern1PosX': -7.28000020980835, 'Pattern1PosY': 8.0600004196167, 'Pattern1PosZ': 20.290000915527344, 'Pattern1AtX': -4.449999809265137, 'Pattern1AtY': 5.320000171661377, 'Pattern1AtZ': 14.460000038146973, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGatePower'})

    fork {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        }
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.10382100194692612, 'Pattern1PosY': 2.433258056640625, 'Pattern1PosZ': 7.308837890625, 'Pattern1AtX': 0.172667995095253, 'Pattern1AtY': 1.9445650577545166, 'Pattern1AtZ': 1.665282964706421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGatePower'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

    call Common.Play_ReadRiddle()

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'MuteOff', 'IsWaitFinish': True})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo034_0:talk30'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void DragonGateBrave() {

    call Common.AirStartUP_Player()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.157288074493408, 'Pattern1PosY': 8.709945678710938, 'Pattern1PosZ': 45.652099609375, 'Pattern1AtX': -4.130797863006592, 'Pattern1AtY': 6.9270172119140625, 'Pattern1AtZ': 39.489990234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGateBrave'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'Count': 100.0, 'Pattern1PosX': -7.28000020980835, 'Pattern1PosY': 8.0600004196167, 'Pattern1PosZ': 20.290000915527344, 'Pattern1AtX': -4.449999809265137, 'Pattern1AtY': 5.320000171661377, 'Pattern1AtZ': 14.460000038146973, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGateBrave'})

    fork {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        }
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.10382100194692612, 'Pattern1PosY': 2.433258056640625, 'Pattern1PosZ': 7.308837890625, 'Pattern1AtX': 0.172667995095253, 'Pattern1AtY': 1.9445650577545166, 'Pattern1AtZ': 1.665282964706421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Obj_DragonShutter', 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'UniqueName1': 'DragonGateBrave'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

    call Common.Play_ReadRiddle()

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'MuteOff', 'IsWaitFinish': True})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo034_0:talk30'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}
