-------- EventFlow: FourJewel --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_FlagON', 'Demo_OpenDungeonMessage', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Join', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHorseGetOff', 'Demo_PlayerWait', 'Demo_DisableUnequipInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryPoint0() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'DungeonAppearanceTrigger', 'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': ''})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        Event19:
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2268.62158203125, 'Pattern1PosY': 247.65672302246094, 'Pattern1PosZ': -858.860595703125, 'Pattern1AtX': -2268.593994140625, 'Pattern1AtY': 243.38807678222656, 'Pattern1AtZ': -865.1114501953125, 'Pattern1Fovy': 50.00001907348633, 'Count': 90.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'MotionMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 1, 'IsValid': False, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FourJewel_Finish'})
    } else {
        goto Event19
    }
}

void EntryPoint1() {
    if !EventSystemActor.CheckFlag({'FlagName': 'FourJewel_Activated'}) {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FourJewel:talk00'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FourJewel:talk01'})
        } {
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2154.755859375, 'Pattern1PosY': 249.2609100341797, 'Pattern1PosZ': -833.80029296875, 'Pattern1AtX': -2160.0615234375, 'Pattern1AtY': 246.76820373535156, 'Pattern1AtZ': -837.4075927734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Cushion': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2137.774658203125, 'Pattern1PosY': 253.45663452148438, 'Pattern1PosZ': -850.7230834960938, 'Pattern1AtX': -2143.583740234375, 'Pattern1AtY': 251.06089782714844, 'Pattern1AtZ': -853.4334716796875, 'Pattern1Fovy': 50.00001907348633, 'Count': 180.0, 'Cushion': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 0})
        }

        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 0, 'Count': 30.0, 'CollisionInterpolateSkip': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FourJewel_Activated'})
    }
}
