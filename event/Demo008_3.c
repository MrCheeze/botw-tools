-------- EventFlow: Demo008_3 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FromCDunToMainField', 'Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerDestinationMove', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ElevatorUpStart', 'Demo_ElevatorUpEnd']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceElevator_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_SetTargetFrameMtx']
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

Actor: DgnObj_Hrl_Warpin_2x2_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
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

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo008_3() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})
    DgnObj_EntranceElevator_A_01.Demo_SetTargetFrameMtx({'IsWaitFinish': False})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})

    fork {
        GameROMPlayer.Demo_PlayerDestinationMove({'StickValue': 0.0010000000474974513, 'IsWaitFinish': True, 'DestPosX': 'Arg_DestinationX', 'DestPosY': 'Arg_DestinationY', 'DestPosZ': 'Arg_DestinationZ'})
    } {
        GameRomCamera.Demo_ElevatorUpStart({'IsWaitFinish': True, 'StartCalcOnly': False, 'Cushion': 0.0, 'Count': 20.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {

        fork {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'ActorName': 'DgnObj_EntranceElevator_A_01', 'PosOffset': [0.0, 0.0, -10.0], 'ObjectId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 'Arg_DestinationDirY', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        } {
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo008_3-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        DgnObj_EntranceElevator_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_ElevatorStart', 'SLinkKey': 'Demo_ElevatorStart', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        DgnObj_Hrl_Warpin_2x2_01.Demo_XLinkEventCreate({'ELinkKey': 'Demo_ElevatorActive', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    }


    fork {
        GameRomCamera.Demo_ElevatorUpEnd({'StartCalcOnly': False, 'Count': 120.0, 'Cushion': 0.0, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})
        EventCameraRumble.Demo_Rumble({'Pattern': 1, 'Count': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.029999999329447746})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo008_3_Exit', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        DgnObj_EntranceElevator_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ExitDungeon', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if !EventSystemActor.CheckEventCancel() {
        Event4:
        EventSystemActor.Demo_FromCDunToMainField({'IsWaitFinish': True, 'StartType': 1, 'EvflName': 'Demo008_4', 'EntryPointName': 'Demo008_4'})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
        goto Event4
    }
}
