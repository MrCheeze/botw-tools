-------- EventFlow: Demo008_4 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAhead']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo008_4() {

    call main({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ'})

}

void main() {

    fork {
        GameROMPlayer.Demo_PlayerGoStraightAhead({'DestPosX': 'Arg_DestinationX', 'DestPosY': 'Arg_DestinationY', 'DestPosZ': 'Arg_DestinationZ', 'StickValue': 0.009999999776482582, 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    }

}
