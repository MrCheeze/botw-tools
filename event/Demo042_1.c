-------- EventFlow: Demo042_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraReset', 'Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo042_1() {

    fork {
        EventMessageTransmitter1.Demo_Msg2CameraReset({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtY': 1.2091000080108643, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'LngShiftRange': 180.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadEquipOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo042_1', 'IsWaitFinish': True})
}
