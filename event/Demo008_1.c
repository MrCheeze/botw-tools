-------- EventFlow: Demo008_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_ToCDungeon', 'Demo_FlagON', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckFlag', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAhead', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: ['IsSuccessEndLastDemoAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ElevatorDown']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_KillAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo008_1() {

    fork {
        Starter.Demo_PlayASForDemo({'ASName': 'Wait', 'IsEnabledAnimeDriven': 1, 'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})

    fork {
        GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': True, 'StickValue': 0.10000000149011612, 'DestPosX': 'Arg_DestinationX', 'DestPosY': 'Arg_DestinationY', 'DestPosZ': 'Arg_DestinationZ'})
    } {
        GameRomCamera.Demo_ElevatorDown({'PlayerRelative': False, 'StartCalcOnly': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'IsWaitFinish': False, 'Count': 45.0, 'Lat': 17.0, 'Lng': 0.0, 'Offset': [0.0, 0.30000001192092896, 0.0]})
    }


    fork {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'DgnObj_WarpPoint_A_01', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnDirection': 'Arg_DestinationDirY', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }


    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo008_1'}) {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo008_1-C02-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        } else {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo008_1-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }
    } {
        Starter.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'PlayerIn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        Starter.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_ElevatorStart', 'SLinkKey': 'Demo_ElevatorStart', 'IsTargetDemoSLinkUser': False})
    }

    if GameROMPlayer.IsSuccessEndLastDemoAction() in [1, 0] {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})

        fork {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo008_1_Start', 'SoundDelay': 0, 'SLinkInst': ''})
            Starter.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'IntoDungeon', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
            EventCameraRumble.Demo_Rumble({'Pattern': 1, 'Count': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.019999999552965164})
        }

        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
        if !EventSystemActor.CheckEventCancel() {
            Event5:
            EventSystemActor.Demo_ToCDungeon({'StartType': 0, 'IsWaitFinish': True, 'EvflName': 'Demo008_2', 'EntryPointName': 'Demo008_2'})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
            SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
            goto Event5
        }
    }
}
