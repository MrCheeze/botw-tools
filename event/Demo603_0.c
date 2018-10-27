-------- EventFlow: Demo603_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayerGoStraightAhead', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_CallDemo', 'Demo_KillUIScreen']
queries: ['CheckFlag', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ElevatorDown', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo603_0() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
        Event43:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo008_1', 'EntryPointName': 'Demo008_1', 'EndFade': 0, 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
        goto Event43
    } else {

        fork {
            Starter.Demo_PlayASForDemo({'ASName': 'Wait', 'IsEnabledAnimeDriven': 1, 'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})
        }


        fork {
            GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': True, 'StickValue': 0.10000000149011612, 'DestPosX': 'Arg_DestinationX', 'DestPosY': 'Arg_DestinationY', 'DestPosZ': 'Arg_DestinationZ'})
        } {
            GameRomCamera.Demo_ElevatorDown({'PlayerRelative': False, 'StartCalcOnly': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'IsWaitFinish': False, 'Count': 45.0, 'Lng': 0.0, 'Offset': [0.0, 1.0, 0.0], 'Lat': 5.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
        }


        fork {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'DgnObj_WarpPoint_A_01', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'TurnDirection': 'Arg_DestinationDirY'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }


        fork {
            EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo603_0:Talk01'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo603_0-C01-Link-A-0_Loop', 'SeqBank': 0})
        }

        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
        if !EventSystemActor.CheckEventCancel() {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'MorphingFrame': 20.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        } else {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'MorphingFrame': 0.0})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.2980960011482239, 'Pattern1PosY': 1.8000030517578125, 'Pattern1PosZ': 5.2919921875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.8000030517578125, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
            SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }
    }
}
