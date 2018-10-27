-------- EventFlow: Threebros_giant --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_LookStone', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput', 'Demo_FlagON', 'Demo_CallDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_SignboardStone_giant
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_GiantBrotherBall_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithogragh_A_02[bros1]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_GiantBrotherBall_02
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithogragh_A_02[bros2]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_GiantBrotherBall_03
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithogragh_A_02[bros3]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_FldObj_SignboardStone_giant_Talk() {
    GameROMPlayer.Demo_LookAtObject({'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameRomCamera.Demo_LookStone({'IsWaitFinish': True, 'NoConnect': False, 'CameraReset': True})
    FldObj_SignboardStone_giant.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/SignboardStone:Talk_giant_bros', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Threebros_giant_Activated'})
    if EventSystemActor.CheckFlag({'FlagName': 'giant_dungeon'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Threebros_giant_Finish'})
    }
}

void flashbros1() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2655.043212890625, 'Pattern1PosY': 323.6453552246094, 'Pattern1PosZ': 2814.44189453125, 'Pattern1AtX': 2649.66162109375, 'Pattern1AtY': 321.5742492675781, 'Pattern1AtZ': 2817.962158203125, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})

    call Common.RemainsLithogragh_Giant({'Self': ActorIdentifier(name="FldObj_GiantBrotherBall_01"), 'DgnObj_RemainsLithogragh_A_02': ActorIdentifier(name="DgnObj_RemainsLithogragh_A_02", sub_name="bros1")})

    Event19:
    if EventSystemActor.CheckFlag({'FlagName': 'giant_ball1'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'giant_ball2'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'giant_ball3'}) {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'FaceId': 1, 'IsValid': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
                EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
                if EventSystemActor.CheckFlag({'FlagName': 'Threebros_giant_Activated'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Threebros_giant_Finish'})
                }
            }
        }
    }
}

void flashbros2() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2628.222900390625, 'Pattern1PosY': 323.9705810546875, 'Pattern1PosZ': 2860.2119140625, 'Pattern1AtX': 2628.56689453125, 'Pattern1AtY': 321.2965087890625, 'Pattern1AtZ': 2853.977783203125, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})

    call Common.RemainsLithogragh_Giant({'Self': ActorIdentifier(name="FldObj_GiantBrotherBall_02"), 'DgnObj_RemainsLithogragh_A_02': ActorIdentifier(name="DgnObj_RemainsLithogragh_A_02", sub_name="bros2")})

    goto Event19
}

void flashbros3() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2608.2333984375, 'Pattern1PosY': 323.6606750488281, 'Pattern1PosZ': 2815.807861328125, 'Pattern1AtX': 2612.506103515625, 'Pattern1AtY': 321.677978515625, 'Pattern1AtZ': 2818.714599609375, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})

    call Common.RemainsLithogragh_Giant({'Self': ActorIdentifier(name="FldObj_GiantBrotherBall_03"), 'DgnObj_RemainsLithogragh_A_02': ActorIdentifier(name="DgnObj_RemainsLithogragh_A_02", sub_name="bros3")})

    goto Event19
}
