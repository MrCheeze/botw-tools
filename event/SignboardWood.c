-------- EventFlow: SignboardWood --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_LookStone']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_Talk', 'Demo_DisableUnequipInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_OpenMessageDialogOfUnique']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo_LookSignboard() {

    fork {
        GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        GameRomCamera.Demo_LookStone({'NoConnect': False, 'CameraReset': True, 'IsWaitFinish': False})
    }

    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
}

void Talk() {

    call Demo_LookSignboard()

    Starter.Demo_OpenMessageDialogOfUnique({'IsWaitFinish': True, 'MstxtName': 'SignboardWood'})
}
