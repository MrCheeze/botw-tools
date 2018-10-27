-------- EventFlow: StatueofZora --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora027_Talk() {

    call Npc_Zora027.Ready_MorudenStatue()

}

void Finish_Npc_Zora027_Talk() {

    call Npc_Zora027.Finish_MorudenStatue()

}

void DungeonAppear() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3075.648681640625, 'Pattern1PosY': 279.1722106933594, 'Pattern1PosZ': -462.76556396484375, 'Pattern1AtX': 3080.00439453125, 'Pattern1AtY': 278.5061340332031, 'Pattern1AtZ': -458.8702087402344, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithograph()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': True, 'ObjectId': 2, 'TurnPosition': [3141.10009765625, 280.0, -422.29998779296875], 'TurnDirection': 60.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StatueofZora_Finish'})
    }
}

void Finish_Npc_Zora012_Talk() {

    call Npc_Zora012.Finish_AnteStatue()

}

void Finish_Npc_Zora007_Talk() {

    call Npc_Zora007.Finish_RurachuStatue()

}

void Step1_Npc_Zora027_Talk() {

    call Npc_Zora027.Step1_MorudenStatue()

}

void Step1_Npc_Zora012_Talk() {

    call Npc_Zora012.Step1_AnteStatue()

}

void Step1_Npc_Zora007_Talk() {

    call Npc_Zora007.Step1_RurachuStatue()

}

void Ready_Npc_Zora027_Near() {

    call Npc_Zora027.ReadyNear_MorudenStatue()

}

void Step1_Npc_Zora027_Near() {

    call Npc_Zora027.Step1Near_MorudenStatue()

}

void Finish_Npc_Zora027_Near() {

    call Npc_Zora027.FinishNear_MorudenStatue()

}

void Step1_Npc_Zora012_Near() {

    call Npc_Zora012.Step1Near_AnteStatue()

}

void Step1_Npc_Zora007_Near() {

    call Npc_Zora007.Step1Near_RurachuStatue()

}

void Finish_Npc_Zora012_Near() {

    call Npc_Zora012.FinishNear_AnteStatue()

}

void Finish_Npc_Zora007_Near() {

    call Npc_Zora007.FinishNear_RurachuStatue()

}

void Ready_Npc_Zora007_Near() {

    call Npc_Zora007.ReadyNear_RurachuStatue()

}

void Ready_Npc_Zora007_Talk() {

    call Npc_Zora007.Ready_RurachuStatue()

}

void Ready_Npc_Zora012_Near() {

    call Npc_Zora012.ReadyNear_AnteStatue()

}

void Ready_Npc_Zora012_Talk() {

    call Npc_Zora012.Ready_AnteStatue()

}

void Spear_049_Magne() {
    if !EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Weapon_Spear_049'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'StatueofZora_Weapon_Spear_049', 'IsWaitFinish': True})
    }
}
