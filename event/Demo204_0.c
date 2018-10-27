-------- EventFlow: Demo204_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_XLinkEventCreate', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerGoStraightAhead', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_XLinkEventKill']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_CallDemo']
queries: ['IsCurrentMainFieldDungeonStage', 'CheckGameDataInt', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_ElevatorDown', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpHole_100Enemy
entrypoint: None()
actions: ['WarpPlayerToReferenceAnchor', 'Demo_WarpPlayerGimmickReset']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpEffect]
entrypoint: None()
actions: ['Demo_PlayerWarpEffectSet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl', 'Demo_KillAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DispFloorNum]
entrypoint: None()
actions: ['Demo_OpenEnduranceFloorNumber', 'Demo_IncreaseGameDataInt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void WarpIn() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    fork {
        GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': True, 'StickValue': 0.10000000149011612, 'DestPosX': 'Arg_DestinationX', 'DestPosY': 'Arg_DestinationY', 'DestPosZ': 'Arg_DestinationZ'})
    } {
        GameRomCamera.Demo_ElevatorDown({'StartCalcOnly': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'IsWaitFinish': False, 'Count': 45.0, 'Lng': 0.0, 'PlayerRelative': False, 'Lat': 17.0, 'Offset': [0.0, -2.5, -2.5]})
    }

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnDirection': 'Arg_DestinationDirY', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'ActorName': 'DgnObj_WarpHole_100Enemy'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2, 'ASName': 'DemoWait'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'Demo204_0-C01-Link-A-0', 'NoErrorCheck': True})

    fork {
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo204_0_Warp_In'})

        fork {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_WarpIn_Endurance'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        }

    } {
        EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'IsWaitFinish': True, 'ChangeType': 1, 'SetFrame': 120.0})
    }

    EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    GameROMPlayer.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo204_0_Warp_In'})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if EventSystemActor.CheckEventCancel() {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
    }
}

void WarpOut() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': False, 'ShowLogo': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.7915699481964111, 'Pattern1PosZ': -5.29315185546875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.7999999523162842, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'TargetActor1': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 0})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    } {
        EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 1, 'SetFrame': 1.0, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    }

    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo204_0_Warp_Out'})

    fork {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_WarpOut_Endurance'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    }

    EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 0, 'SetFrame': 60.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': False, 'NoFadeIn': False})
    if !EventSystemActor.CheckEventCancel() {
        Event114:
        EventSystemActor[DispFloorNum].Demo_IncreaseGameDataInt({'IsWaitFinish': False, 'GameDataIntName': '100enemy_Now_Floor_Number', 'Value': 1})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
            EventSystemActor[DispFloorNum].Demo_OpenEnduranceFloorNumber({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'GameDataIntFloorNum': '100enemy_Now_Floor_Number', 'LabelName': 'EnduranceDungeon02_floor'})
            Event112:
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
            EventSystemActor[DispFloorNum].Demo_OpenEnduranceFloorNumber({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'GameDataIntFloorNum': '100enemy_Now_Floor_Number', 'LabelName': 'EnduranceDungeon01_floor'})
            goto Event112
        } else {
            EventSystemActor[DispFloorNum].Demo_OpenEnduranceFloorNumber({'IsWaitFinish': False, 'SubMstxt': 'StaticMsg/Dungeon', 'GameDataIntFloorNum': '100enemy_Now_Floor_Number', 'LabelName': 'EnduranceDungeon_floor'})
            goto Event112
        }
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
        goto Event114
    }
}

void Demo204_0() {

    call WarpIn({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    DgnObj_WarpHole_100Enemy.Demo_WarpPlayerGimmickReset({'IsWaitFinish': True})

    call WarpOut({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}

void Demo204_1() {

    call WarpIn({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    DgnObj_WarpHole_100Enemy.Demo_WarpPlayerGimmickReset({'IsWaitFinish': True})
    Event135:
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo211_0', 'EntryPointName': 'Demo211_0'})
}

void Demo204_2() {

    call WarpIn({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    DgnObj_WarpHole_100Enemy.Demo_WarpPlayerGimmickReset({'IsWaitFinish': True})
    goto Event135
}

void Demo204_3() {

    call WarpIn({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    DgnObj_WarpHole_100Enemy.Demo_WarpPlayerGimmickReset({'IsWaitFinish': True})
    goto Event135
}

void Demo204_4() {

    call WarpIn({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    DgnObj_WarpHole_100Enemy.Demo_WarpPlayerGimmickReset({'IsWaitFinish': True})

    call WarpOut({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    if !EventSystemActor.CheckEventCancel() {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.821441888809204, 'Pattern1PosZ': -5.927978992462158, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'Pattern1PosX': 0.0, 'Pattern1AtY': 1.7999999523162842, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 90.0})
        EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.821441888809204, 'Pattern1PosZ': -5.927978992462158, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'Pattern1PosX': 0.0, 'Pattern1AtY': 1.7999999523162842, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0})
        EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    }
}
