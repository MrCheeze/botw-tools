-------- EventFlow: Demo023_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ReserveConnectTime', 'Demo_GameCamera', 'Demo_BustUpFront', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_XLinkEventCreate', 'Demo_FlagON']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Junior
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_PlayerShow', 'Demo_PlayerHide']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_001
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_002
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_003
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_004
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_005
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_006
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_007
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_008
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_009
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_010
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Junior_Npc_001
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Junior_Npc_002
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Assassin_001[Demo023_0(Npc_Assassin)]
entrypoint: Demo023_0(Npc_Assassin)
actions: ['Demo_Join', 'Demo_ChangeAssasin']
queries: []
params: None

Actor: Enemy_Assassin_Junior[Demo023_0(Enemy_Assassin_Junior)]
entrypoint: Demo023_0(Enemy_Assassin_Junior)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

void Demo023_0() {
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'EndTalk', 'IsWaitFinish': True})
    Npc_Assassin_001[Demo023_0(Npc_Assassin)].Demo_Join({'IsWaitFinish': True})

    call BustUp_PlayerHideOff()

    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Assassin_001[Demo023_0(Npc_Assassin)].Demo_ChangeAssasin({'IsWaitFinish': True, 'Offset': [0.0, 0.0, -1.5]})
    EventSystemActor.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Assassin_Transform', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})

    fork {
        Enemy_Assassin_Junior[Demo023_0(Enemy_Assassin_Junior)].Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Encounter', 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'WaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -2})
        GameROMPlayer.Demo_LookAtObject({'UniqueName': '', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Enemy_Assassin_Junior', 'FaceId': 2})
    }

    GameRomCamera.Demo_ReserveConnectTime({'IsWaitFinish': True, 'InterpolateTime': 5.0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_FirstEncounter'})
}

void Demo023_1() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_001"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior_Npc_001")})

}

void Demo023_2() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_002"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior_Npc_002")})

}

void Demo023_3() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_003"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_4() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_004"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_5() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_005"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_6() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_006"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_7() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_007"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_8() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_008"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_9() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_009"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void Demo023_10() {

    call Demo023_0({'Npc_Assassin': ActorIdentifier(name="Npc_Assassin_010"), 'Enemy_Assassin_Junior': ActorIdentifier(name="Enemy_Assassin_Junior")})

}

void BustUp_PlayerHide() {
    GameRomCamera.Demo_BustUpFront({'Count': 15.0, 'IsWaitFinish': True, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': True, 'Lng': 30.0, 'StartCalcOnly': True, 'Lat': 10.0, 'Offset': [0.0, -0.20000000298023224, 0.20000000298023224]})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
}

void BustUp_PlayerHideOff() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
}
