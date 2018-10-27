-------- EventFlow: Cliff_Maze --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_OpenDungeonMessage']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryPoint0() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Cliff_Maze_Activated'}) {
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'LookAround', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Cliff_Maze:talk00'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Cliff_Maze_Activated'})
    }
}
