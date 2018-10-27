-------- EventFlow: Demo042_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_OpenItemMenu', 'Demo_FlagON']
queries: ['CheckPlayerRideHorse', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOn', 'Demo_MovePosFlow', 'Demo_Join', 'Demo_WarpStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo042_0() {
    if !EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo042_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_PortableUnit'}) {
            if !EventSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
                if !EventSystemActor.CheckPlayerRideHorse() {
                    GameRomCamera.Demo_Join({'IsWaitFinish': True})

                    fork {
                        GameRomCamera.Demo_MovePosFlow({'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'LngShiftRange': 180.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'TargetActor1': 1, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1AtY': 1.2091000080108643, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
                    } {
                        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                    }


                    fork {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'TargetActorDirReferenceMode': 2, 'DOFUse': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    } {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'Demo042_0-C01-Link-A-0', 'NoErrorCheck': False, 'ClothWarpMode': -1})
                    }

                    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo042_0', 'IsWaitFinish': True})
                    EventSystemActor.Demo_OpenItemMenu({'MenuType': 1, 'IsWaitFinish': True})
                }
            }
        }
    }
}
