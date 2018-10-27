-------- EventFlow: Demo038_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_ResetGimmick']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayerWait', 'Demo_PlayeHellNoFade', 'Demo_DisableUnequipInEvent', 'Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_PlayerCleaningAround']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStop', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void ForestFogSafe() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    Starter.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': False})
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        Event46:
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        Event49:

        fork {
            Fader.Demo_FadeOut({'Color': 0, 'DispMode': 'NoLogo', 'Frame': 2, 'IsWaitFinish': True})
        } {
            SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'MazeForest_EndLostState'})
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_MayoiForestLaughter'})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'PV319_00', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.799999952316284})
        GameROMPlayer.Demo_PlayeHellNoFade({'IsWaitFinish': True})
        EventSystemActor.Demo_ResetGimmick({'SystemResetOption': 1, 'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': False})
        GameROMPlayer.Demo_PlayerCleaningAround({'IsWaitFinish': True})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': -5.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.5, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'Pattern1PosY': 0.800000011920929, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Fader.Demo_FadeIn({'IsWaitFinish': False, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosY': 2.299999952316284, 'Pattern1PosZ': -5.0, 'Pattern1AtY': 2.0, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Fader.Demo_FadeIn({'IsWaitFinish': False, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'LookAround', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 84})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': 30.0, 'ClothWarpMode': -1, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
            goto Event46
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 6}) {
                goto Event46
            } else {
                if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
                    goto Event49
                } else {
                    goto Event46
                }
            }
        }
    }
}
