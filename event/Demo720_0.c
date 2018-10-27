-------- EventFlow: Demo720_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ResetMasterSwordForceMode']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Ganon[0]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_WarpPos', 'Demo_VisibleOff']
queries: []
params: {'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'IsGrounding': False, 'CreateMode': 2}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayASForDemoWithSword']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[03]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[04]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[05]
entrypoint: None()
actions: ['Demo_ForceMasterSwordFakeForm']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetFocusDist']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo720_0() {

    fork {

        fork {
            WorldManagerControl.Demo_EventSetFocusDist({'FocusDist': 2.0, 'IsWaitFinish': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -246.90286254882812, 'Pattern1PosY': 192.474609375, 'Pattern1PosZ': -1049.091796875, 'Pattern1AtX': -244.9808349609375, 'Pattern1AtY': 191.7342071533203, 'Pattern1AtZ': -1045.952880859375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 59})
        }


        fork {
            WorldManagerControl.Demo_EventSetFocusDist({'FocusDist': 4.0, 'IsWaitFinish': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -242.7596435546875, 'Pattern1PosY': 191.6898956298828, 'Pattern1PosZ': -1046.7344970703125, 'Pattern1AtX': -245.54322814941406, 'Pattern1AtY': 192.5320281982422, 'Pattern1AtZ': -1049.10888671875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

    } {
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': False, 'Frame': 0, 'DispMode': 'Auto'})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Weapon_Sword_070'}) {

            fork {
                EventSystemActor[05].Demo_ForceMasterSwordFakeForm({'IsWaitFinish': True})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'ASName': 'Demo720_0-C01-Link-A-0_On', 'NoErrorCheck': False, 'MorphingFrame': 0.0})
            }


            fork {
                EventSystemActor[03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                EventSystemActor.Demo_ResetMasterSwordForceMode({'IsWaitFinish': True})
            } {
                GameROMPlayer.Demo_PlayASForDemoWithSword({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo720_0-C02-Link-A-0_On', 'IsHold': False})
            }

        } else {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'ASName': 'Demo720_0-C01-Link-A-0_Off', 'NoErrorCheck': False, 'MorphingFrame': 0.0})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'Demo720_0-C02-Link-A-0_Off', 'NoErrorCheck': False})
        }
    } {
        Enemy_Ganon[0].Demo_VisibleOff({'IsWaitFinish': False})

        fork {
            EventSystemActor[04].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        } {
            Enemy_Ganon[0].Demo_WarpPos({'IsWaitFinish': True, 'TargetRot': [0.0, 30.0, 0.0], 'TargetPos': [-253.6999969482422, 191.01199340820312, -1061.9000244140625]})
        }

        Enemy_Ganon[0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
    } {
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'GanonBgm_Start_FirstHalf', 'IsWaitFinish': True})
    } {
        EventSystemActor[02].Demo_WarpPlayerToDestination({'DestinationX': -246.0, 'DestinationZ': -1047.5999755859375, 'DirectionY': 210.0, 'IsWaitFinish': True, 'DestinationY': 191.01199340820312})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Weapon_Sword_070'}) {
        GameROMPlayer.Demo_PlayASForDemoWithSword({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsHold': False, 'ASName': 'WaitAttention', 'IsWaitFinish': False, 'MorphingFrame': 180.0})
        Event7:
        EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    } else {
        goto Event7
    }
}
