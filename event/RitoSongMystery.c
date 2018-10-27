-------- EventFlow: RitoSongMystery --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HighMountain012_Talk() {

    call Npc_HighMountain012.Ready_MysterySong_Talk()

}

void Finished_Npc_HighMountain012_Talk() {

    call Npc_HighMountain012.Finish_MysterySong_Talk()

}

void Finished_Npc_HighMountain012_Near() {

    call Npc_HighMountain012.Finish_MysterySong_Near()

}

void Ready_Npc_HighMountain030_Talk() {

    call Npc_HighMountain030.Ready_MysterySong_Talk()

}

void Ready_Npc_HighMountain030_Near() {

    call Npc_HighMountain030.Ready_MysterySong_Near()

}

void Finished_Npc_HighMountain030_Talk() {

    call Npc_HighMountain030.Finish_MysterySong_Talk()

}

void Finished_Npc_HighMountain030_Near() {

    call Npc_HighMountain030.Finish_MysterySong_Near()

}

void Ready_Npc_HighMountain012_Near() {

    call Npc_HighMountain012.Ready_MysterySong_Near()

}

void DungeonArrival() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'ChemicalFire', 'FadeInSec': 2.0, 'FadeOutSec': 2.0, 'Volume': 0.0, 'StartDelaySec': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3608.509765625, 'Pattern1PosY': 253.4800262451172, 'Pattern1PosZ': -1595.518310546875, 'Pattern1AtX': -3609.4775390625, 'Pattern1AtY': 249.1864471435547, 'Pattern1AtZ': -1591.526123046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithograph()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoSongMystery_Shrine'})
}

void Sister_Npc_HighMountain012_Talk() {

    call Npc_HighMountain012.Sister_MysterySong_Talk()

}

void Sister_Npc_HighMountain012_Near() {

    call Npc_HighMountain012.Sister_MysterySong_Near()

}

void Sister_Npc_HighMountain030_Near() {

    call Npc_HighMountain030.Sister_MysterySong_Near()

}

void Sister_Npc_HighMountain030_Talk() {

    call Npc_HighMountain030.Sister_MysterySong_Talk()

}
