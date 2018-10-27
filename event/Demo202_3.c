-------- EventFlow: Demo202_3 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_OpenDungeonMessage', 'Demo_OpenDungeonTitleSetLabel', 'Demo_EventCancelEnd', 'Demo_EventCancelStart']
queries: ['CheckFlag', 'CheckGameDataInt', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_XLinkEventCreate', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpEffect]
entrypoint: None()
actions: ['Demo_PlayerWarpEffectSet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_KillAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[ms01]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[cam]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[player]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo202_3() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    fork {

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        } {
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
            EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 1, 'SetFrame': 1.0, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
        }

        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo202_3_Warp', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'Demo_WarpOut_ArrivalEndurance'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 0, 'SetFrame': 60.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'FirstTry_100enemy_Senior'}) {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0, 'Pattern1PosZ': -5.36151123046875, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Pattern1PosY': 2.799999952316284, 'Pattern1AtY': 0.75})
            EventSystemActor[cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0, 'Pattern1PosY': 1.882222056388855, 'Pattern1PosZ': -5.36151123046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.7999999523162842, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 90.0})
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1AtZ': 0.0, 'Pattern1AtX': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 2.384277105331421, 'Pattern1PosY': 2.806670904159546, 'Pattern1PosZ': 3.766845941543579, 'Pattern1AtY': 0.9100000262260437})
            EventSystemActor[cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 2.335448980331421, 'Pattern1PosY': 1.7585749626159668, 'Pattern1PosZ': 3.491455078125, 'Pattern1AtX': -0.02587899938225746, 'Pattern1AtZ': -0.0004879999905824661, 'Pattern1AtY': 1.1200000047683716, 'Count': 110.0})
            EventSystemActor[cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        }
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'FirstTry_100enemy_Senior'}) {
        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
        if !EventSystemActor.CheckEventCancel() {
            Event81:
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0, 'Pattern1PosY': 1.882222056388855, 'Pattern1PosZ': -5.36151123046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.7999999523162842, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0})
            EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})

            call 100enemy.WarpIn()

            if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
                EventSystemActor.Demo_OpenDungeonTitleSetLabel({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'LabelName': 'EnduranceDungeon02'})
                Event12:
                SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
            } else {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
                    EventSystemActor.Demo_OpenDungeonTitleSetLabel({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'LabelName': 'EnduranceDungeon01'})
                    goto Event12
                } else {
                    EventSystemActor.Demo_OpenDungeonTitleSetLabel({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'LabelName': 'EnduranceDungeon'})
                    goto Event12
                }
            }
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
            SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
            goto Event81
        }
    } else {

        fork {
            EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosY': 1.149999976158142, 'Pattern1PosZ': -3.450000047683716, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.149999976158142, 'Pattern1AtZ': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1AtZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 2.25, 'Pattern1PosZ': -3.450000047683716, 'Pattern1PosY': 2.25, 'Pattern1PosX': 0.0, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 240.0})
        }


        fork {
            EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'LookAround'})
        } {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo202_3:Demo202_3_Text000'})
        }


        fork {
            EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 95})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo202_3-C01-Link-A-0_Loop'})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtY': 1.7000000476837158, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosX': 1.350000023841858, 'Pattern1PosY': 1.4500000476837158, 'Pattern1PosZ': 1.600000023841858, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtY': 1.7000000476837158, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosX': 0.44999998807907104, 'Pattern1PosY': 1.4500000476837158, 'Pattern1PosZ': 2.049999952316284, 'Count': 300.0, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo202_3:Demo202_3_Text001'})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C03-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False, 'TargetActorPosReferenceMode': 2})
        } {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo202_3:Demo202_3_Text002'})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C02-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'DgnObj_WarpHole_100Enemy', 'TargetActor': 1, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False})
        } {
            EventSystemActor[ms01].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo202_3:Demo202_3_Text004'})
            EventSystemActor[ms01].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo202_2:Demo202_2_Text005'})
        }


        fork {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 15.0, 'ASName': 'DemoWait'})
        } {

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False, 'SceneName': 'C05-0'})
            } {
                EventSystemActor[ms01].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo202_3:Demo202_3_Text006'})
            }

        }


        call Demo202_1.SkipEnd()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstTry_100enemy_Senior'})

        call 100enemy.WarpIn()

        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
            EventSystemActor.Demo_OpenDungeonTitleSetLabel({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'LabelName': 'EnduranceDungeon02'})
            goto Event12
        } else {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
                EventSystemActor.Demo_OpenDungeonTitleSetLabel({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'LabelName': 'EnduranceDungeon01'})
                goto Event12
            } else {
                EventSystemActor.Demo_OpenDungeonTitleSetLabel({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'LabelName': 'EnduranceDungeon'})
                goto Event12
            }
        }
    }
}
