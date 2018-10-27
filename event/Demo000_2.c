-------- EventFlow: Demo000_2 --------

Actor: Starter
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_SetFixed', 'Demo_SetDynamic']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_EnableSquatInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo000_2() {

    fork {
        Starter.Demo_SetFixed({'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_EnableSquatInEvent({'IsWaitFinish': True})
    }


    call Demo000_0.Open({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ'})


    call GetDemo.TresureBoxPorchFull({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Arg_CurrentActorName'})

    Starter.Demo_SetDynamic({'IsWaitFinish': True})
}

void Close() {
    Starter.Demo_PlayASForDemo({'ASName': 'Close', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
}
