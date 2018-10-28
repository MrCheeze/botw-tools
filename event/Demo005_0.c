-------- EventFlow: Demo005_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Warp', 'Demo_WarpStart', 'Demo_GameCamera', 'Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_ImmediateStopOwnedHorse']
queries: ['CheckPlayerRideHorse', 'CheckPlayerState', 'IsCurrentAocFieldStage']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayerShow', 'Demo_XLinkEventCreate', 'Demo_Unequip', 'Demo_PlayerHorseGetOffInDemo', 'Demo_PlayerWait', 'Demo_PlayASAdapt', 'Demo_XLinkEventKill', 'Demo_EnableSquatInEvent']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetInterpolate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

void Demo005_0() {
    GameROMPlayer.Demo_EnableSquatInEvent({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    if EventSystemActor.CheckPlayerRideHorse() {
        EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': False, 'NoFixed': False})
        Event58:
        if EventSystemActor.CheckPlayerRideHorse() {
            GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'Count': 20.0, 'Cushion': 0.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1, 'LatShiftRange': 60.0, 'LngShiftRange': 180.0, 'ActorIgnoringCollision': -1, 'TargetActor1': 1, 'PosAppendMode': 2, 'Pattern1PosX': 3.0, 'Pattern1PosZ': 4.199999809265137, 'AtAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 35.0, 'Accept1FrameDelay': False, 'MotionMode': 0, 'Pattern1PosY': 2.0, 'Pattern1AtY': -0.20000000298023224, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } else {
            GameRomCamera.Demo_WarpStart({'StartCalcOnly': False, 'Count': 20.0, 'Cushion': 0.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1, 'LatShiftRange': 60.0, 'LngShiftRange': 180.0, 'ActorIgnoringCollision': -1})
        }
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        fork {
            if EventSystemActor.CheckPlayerRideHorse() {
                Event34:
                GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo005_0_warp', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo005_0_warp', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Warp', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
                if EventSystemActor.CheckPlayerRideHorse() {
                    GameRomCamera.Demo_MovePosFlow({'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1, 'ActorIgnoringCollision': -1, 'TargetActor1': 1, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'FovyAppendMode': 1, 'Accept1FrameDelay': False, 'Pattern1Fovy': 20.0, 'Count': 60.0, 'IsWaitFinish': False, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': True, 'Cushion': 3.0, 'AtAppendMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 0, 'PosAppendMode': 2, 'Pattern1PosX': 5.0, 'Pattern1PosZ': 6.199999809265137, 'Pattern1AtY': 5.199999809265137, 'Pattern1PosY': 1.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                } else {
                    GameRomCamera.Demo_Warp({'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Cushion': 3.0, 'Count': 60.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True})
                }
            } else
            if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
                if EventSystemActor.CheckPlayerState({'PlayerState': 14}) {
                    Event35:
                    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo005_0_warp', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo005_0_warp', 'SoundDelay': 0, 'SLinkInst': ''})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
                    GameRomCamera.Demo_Warp({'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Count': 60.0, 'Cushion': 3.0})
                } else
                if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
                    goto Event35
                } else {
                    goto Event34
                }
            } else {
                goto Event35
            }
        } {
            EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'IsWaitFinish': True, 'ChangeType': 1, 'SetFrame': 120.0})
        }

        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOffInDemo({'IsWaitFinish': False})
        }
        if EventSystemActor.IsCurrentAocFieldStage() {

            call AocResident.100EnemyWarpReset()

        }
        EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'Arg_WarpDestMapName', 'WarpDestPosName': 'Arg_WarpDestPosName', 'IsWaitFinish': True, 'StartType': 2, 'EvflName': 'Demo005_1', 'EntryPointName': 'Demo005_1', 'FadeType': 0})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 20}) {
        Event22:
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': False, 'NoFixed': False})
        goto Event58
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        } else {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        }
        goto Event58
    } else {
        goto Event22
    }
}
