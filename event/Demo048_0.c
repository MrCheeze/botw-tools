-------- EventFlow: Demo048_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerRestart', 'Demo_PlayerDrown', 'Demo_PlayerCleaningAround']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ResetGimmick', 'Demo_DeleteAllIceMakerForDemo', 'Demo_WaitFrame', 'Demo_DeleteActorFromSystem']
queries: ['CheckPlayerState', 'CheckPlayerHellType', 'CheckStage']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Abyss', 'Demo_GameCamera', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo048_0() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
        EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})

        fork {
            GameROMPlayer.Demo_PlayerDrown({'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'Frame': 0, 'IsWaitFinish': True})
        }

        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'StartCalcOnly': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 0})
    } else {

        fork {
            if EventSystemActor.CheckPlayerHellType({'PlayerHellType': 2}) {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            }
            Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
            if EventSystemActor.CheckPlayerHellType({'PlayerHellType': 2}) {
                EventSystemActor.Demo_DeleteActorFromSystem({'ActorName': 'FldObj_DeathMtArtifactTrain_A_02', 'IsWaitFinish': True})
            }
        } {
            GameROMPlayer.Demo_PlayerRestart({'IsNoDamage': False, 'IsWaitFinish': True})
        } {
            if EventSystemActor.CheckPlayerHellType({'PlayerHellType': 0}) {
                GameRomCamera.Demo_Abyss({'IsWaitFinish': True})
            } else
            if EventSystemActor.CheckStage() {
                Event24:
                GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'StartCalcOnly': True, 'ReviseModeEnd': 2, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            } else
            if EventSystemActor.CheckPlayerHellType({'PlayerHellType': 2}) {
                goto Event24
            } else {
                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            }
        }

        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 1, 'IsResetCamera': True})
        GameROMPlayer.Demo_PlayerCleaningAround({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'StartCalcOnly': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
    }
}
