-------- EventFlow: DarkWoods --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_OpenDungeonMessage', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckPlayerState', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_DisableUnequipInEvent', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHorseGetOff', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DarkWoodsBall_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithogragh_A_02
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryPoint1() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 384.5624694824219, 'Pattern1PosY': 287.4423522949219, 'Pattern1PosZ': -3124.544921875, 'Pattern1AtX': 389.89727783203125, 'Pattern1AtY': 282.4398193359375, 'Pattern1AtZ': -3121.66015625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithogragh_Giant({'Self': ActorIdentifier(name="FldObj_DarkWoodsBall_01"), 'DgnObj_RemainsLithogragh_A_02': ActorIdentifier(name="DgnObj_RemainsLithogragh_A_02")})

    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Event98:
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 1, 'TurnDirection': 270.0, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'IsWaitFinish': False, 'EndFade': 0, 'EntryPointName': 'DungeonArrival_DarkWoods'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'DarkWoods_Finish'})
    } else {
        goto Event98
    }
}

void EntryPoint0() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        Event36:
        if EventSystemActor.CheckFlag({'FlagName': 'DarkWoods_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'DarkWoods_Warp'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'DarkWoods_Dark', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'DarkWoods_AirWall', 'IsWaitFinish': True})
                WorldManagerControl.Demo_SetPaletteType({'PaletteType': 7, 'ChangeFrame': 0, 'EndFrame': 0, 'IsWaitFinish': False, 'Speed': 1.0})
            } else {
                Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
                EventSystemActor.Demo_FlagON({'FlagName': 'DarkWoods_AirWall', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'DarkWoods_Dark', 'IsWaitFinish': True})
                WorldManagerControl.Demo_SetPaletteType({'PaletteType': 7, 'ChangeFrame': 0, 'EndFrame': 0, 'IsWaitFinish': False, 'Speed': 1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'DarkWoods_AirWall', 'IsWaitFinish': True})
                Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
            }
        } else {
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
            Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
            EventSystemActor.Demo_FlagON({'FlagName': 'DarkWoods_Dark', 'IsWaitFinish': True})
            WorldManagerControl.Demo_SetPaletteType({'PaletteType': 7, 'ChangeFrame': 0, 'EndFrame': 0, 'IsWaitFinish': False, 'Speed': 1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/DarkWoods:talk00'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'DarkWoods_AirWall', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'DarkWoods_Activated'})
        }
    } else {

        call PlayerCheck()

        goto Event36
    }
}

void EntryPoint2() {
    if EventSystemActor.CheckFlag({'FlagName': 'DarkWoods_DarkClear'}) {

        call PlayerCheck()

        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'DarkWoods_Dark', 'IsWaitFinish': True})
        WorldManagerControl.Demo_SetPaletteType({'PaletteType': 0, 'ChangeFrame': 0, 'EndFrame': 0, 'IsWaitFinish': False, 'Speed': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'DarkWoods_AirWall', 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 0, 'IsWaitFinish': True})
    } else {
        WorldManagerControl.Demo_SetPaletteType({'PaletteType': 0, 'IsWaitFinish': False, 'ChangeFrame': 1, 'EndFrame': 1, 'Speed': 10.0})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'DarkWoods_Dark', 'IsWaitFinish': True})
    }
}

void PlayerCheck() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': False})
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        Event103:

        call Common.AirStartUP_Player()

    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        goto Event103
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 6}) {
        goto Event103
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'DarkWoods_AirWall', 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } else {
        goto Event103
    }
}
