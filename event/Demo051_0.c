-------- EventFlow: Demo051_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent', 'Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_FlagON']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join', 'Demo_GameCamera', 'Demo_ReserveConnectTime', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[AS_wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince01]
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo051_0() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.00024399999529123306, 'Pattern1PosY': 1.5670469999313354, 'Pattern1PosZ': -5.09912109375, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'NoErrorCheck': False})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo051_0:sinjyu_demo_after_00', 'IsBecomingSpeaker': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo051_0'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '3Relic_ZeldaVoice'})
}

void Demo051_0_Water() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 245})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1464840173721313, 'Pattern1PosY': 1.5164790153503418, 'Pattern1PosZ': 0.6046140193939209, 'Pattern1AtX': 5.187987804412842, 'Pattern1AtY': 0.9735720157623291, 'Pattern1AtZ': -3.381226062774658, 'Pattern1Fovy': 28.529747009277344, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_LookAtObject({'TurnPosition': [3662.39990234375, 273.1099853515625, -175.4199981689453], 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 90.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.2744140625, 'Pattern1PosY': 1.5164790153503418, 'Pattern1PosZ': 0.8786619901657104, 'Pattern1AtX': 3.982909917831421, 'Pattern1AtY': 0.44290199875831604, 'Pattern1AtZ': -3.12158203125, 'Pattern1Fovy': 28.529747009277344, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Cushion': 5.0, 'Count': 90.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3387.084228515625, 'Pattern1PosY': 278.7488708496094, 'Pattern1PosZ': -502.0975036621094, 'Pattern1AtX': 3391.77099609375, 'Pattern1AtY': 281.03497314453125, 'Pattern1AtZ': -496.0484924316406, 'Pattern1Fovy': 35.009666442871094, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3392.53173828125, 'Pattern1PosY': 278.7488708496094, 'Pattern1PosZ': -495.64923095703125, 'Pattern1AtX': 3396.91259765625, 'Pattern1AtY': 282.2674865722656, 'Pattern1AtZ': -489.9737548828125, 'Pattern1Fovy': 35.009666442871094, 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.025391101837158, 'Pattern1PosY': 1.39068603515625, 'Pattern1PosZ': 2.014404058456421, 'Pattern1AtX': 2.269287109375, 'Pattern1AtY': 0.17556799948215485, 'Pattern1AtZ': -4.608643054962158, 'Pattern1Fovy': 35.009666442871094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.3288569450378418, 'Pattern1PosY': 1.39068603515625, 'Pattern1PosZ': 1.5294189453125, 'Pattern1AtX': 2.924804925918579, 'Pattern1AtY': 0.6565859913825989, 'Pattern1AtZ': -5.190308094024658, 'Pattern1Fovy': 35.009666442871094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 150.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo051_0:sinjyu_demo_after_00', 'IsBecomingSpeaker': False})
    } {
        EventSystemActor[AS_wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_ZoraB001[Prince01].Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo051_0'})
}
