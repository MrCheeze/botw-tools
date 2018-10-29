-------- EventFlow: Demo025_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitForCloseFade']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_AccelerateHorse']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo025_0() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': False})
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo146_0'}) {
        GameROMPlayer.Demo_AccelerateHorse({'IsWaitFinish': True})
    }
}
