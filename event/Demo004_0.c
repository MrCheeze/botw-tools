-------- EventFlow: Demo004_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_AnimFlowForMapTower', 'Demo_PlayerHideOff', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayer', 'Demo_WarpPlayerToDestination', 'Demo_CallDemo', 'Demo_AdvanceTime', 'Demo_ForceSetPlayerSavePosAngle', 'Demo_CloseItemMenu', 'Demo_IncreaseGameDataInt', 'Demo_DownloadSensorMoveIcon', 'Demo_DownloadShiekSensor', 'Demo_StartShiekSensorGaugeDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_ResetBoneCtrl', 'Demo_LookAtObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_Bind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01_First
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal07_Before]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal08]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody07]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal02]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal03]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal04]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal05]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal06]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal09]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal10]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal11]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal12]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal13]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal14]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal15]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing08]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase08]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint08]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody08]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal07]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase07]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint07]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing02]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase02]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint02]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody02]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing03]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint03]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody03]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerLong_A_01[TowerBase03]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing04]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase04]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint04]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody04]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing05]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase05]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint05]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody05]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing06]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase06]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint06]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody06]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing09]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase09]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint09]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody09]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing10]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase10]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint10]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody10]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing11]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase11]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint11]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody11]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing12]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase12]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint12]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody12]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing13]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase13]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint13]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody13]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing14]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase14]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint14]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody14]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing15]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase15]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint15]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody15]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[C10-1]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal', 'Demo_StartMapOpenDemo', 'Demo_WaitUntilMapOpenDemoEnd']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[TowerTerminal01]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTowerWingBefore_A_01[TowerWing01]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01[TowerBase01]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[TowerWarpPoint01]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[TowerTerminalBody01]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_MapTower_A_01_First[C01(FldObj_MapTower_A_01_First)]
entrypoint: C01(FldObj_MapTower_A_01_First)
actions: []
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[C03(FldObj_DownloadTerminal_A_01)]
entrypoint: C03(FldObj_DownloadTerminal_A_01)
actions: []
queries: []
params: None

Actor: FldObj_MapTowerWingBefore_A_01[C04(FldObj_MapTowerWingBefore_A_01)]
entrypoint: C04(FldObj_MapTowerWingBefore_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: FldObj_MapTower_A_01[C04(FldObj_MapTower_A_01)]
entrypoint: C04(FldObj_MapTower_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[C05(DgnObj_WarpPoint_A_01)]
entrypoint: C05(DgnObj_WarpPoint_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: FldObj_MapTower_A_01[C06(FldObj_MapTower_A_01)]
entrypoint: C06(FldObj_MapTower_A_01)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[C06(FldObj_DownloadTerminal_A_01)]
entrypoint: C06(FldObj_DownloadTerminal_A_01)
actions: ['Demo_TrigNullASPlay', 'Demo_PlayASForDemo', 'Demo_OnWaitRevival']
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[C06(DgnObj_WarpPoint_A_01)]
entrypoint: C06(DgnObj_WarpPoint_A_01)
actions: ['Demo_Idling']
queries: []
params: None

Actor: FldObj_DownloadTerminalBody_A_01[C08(FldObj_DownloadTerminalBody_A_01)]
entrypoint: C08(FldObj_DownloadTerminalBody_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: FldObj_DownloadTerminalBody_A_01[C10(FldObj_DownloadTerminalBody_A_01)]
entrypoint: C10(FldObj_DownloadTerminalBody_A_01)
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventFade']
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[C10(FldObj_DownloadTerminal_A_01)]
entrypoint: C10(FldObj_DownloadTerminal_A_01)
actions: []
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[C11(FldObj_DownloadTerminal_A_01)]
entrypoint: C11(FldObj_DownloadTerminal_A_01)
actions: []
queries: []
params: None

Actor: FldObj_DownloadTerminalBody_A_01[MapTower07_After(FldObj_DownloadTerminalBody_A_01)]
entrypoint: MapTower07_After(FldObj_DownloadTerminalBody_A_01)
actions: []
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[MapTower07_After(FldObj_DownloadTerminal_A_01)]
entrypoint: MapTower07_After(FldObj_DownloadTerminal_A_01)
actions: []
queries: []
params: None

Actor: FldObj_MapTower_A_01[MapTower07_After(FldObj_MapTower_A_01)]
entrypoint: MapTower07_After(FldObj_MapTower_A_01)
actions: []
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[MapTower07_After(DgnObj_WarpPoint_A_01)]
entrypoint: MapTower07_After(DgnObj_WarpPoint_A_01)
actions: []
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[Demo004_0_Main(FldObj_DownloadTerminal_A_01)]
entrypoint: Demo004_0_Main(FldObj_DownloadTerminal_A_01)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: FldObj_MapTowerWingBefore_A_01[Demo004_0_Main(FldObj_MapTowerWingBefore_A_01)]
entrypoint: Demo004_0_Main(FldObj_MapTowerWingBefore_A_01)
actions: []
queries: []
params: None

Actor: FldObj_MapTower_A_01[Demo004_0_Main(FldObj_MapTower_A_01)]
entrypoint: Demo004_0_Main(FldObj_MapTower_A_01)
actions: []
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[Demo004_0_Main(DgnObj_WarpPoint_A_01)]
entrypoint: Demo004_0_Main(DgnObj_WarpPoint_A_01)
actions: []
queries: []
params: None

Actor: FldObj_DownloadTerminalBody_A_01[Demo004_0_Main(FldObj_DownloadTerminalBody_A_01)]
entrypoint: Demo004_0_Main(FldObj_DownloadTerminalBody_A_01)
actions: []
queries: []
params: None

void Demo004_0_FirstTower() {
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    FldObj_DownloadTerminal_A_01[TowerTerminal07_Before].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'PlayerCloseInWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})

    call C01({'CameraTagetTerminal_UniqueName': 'TowerTerminal07_Before', 'FldObj_MapTower_A_01_First': ActorIdentifier(name="FldObj_MapTower_A_01_First")})


    call C02()


    call Demo166()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo166_0'})

    call MapTower07_After({'CameraTagetTerminal_UniqueName': 'TowerTerminal07', 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': 'TowerTerminal07', 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody07"), 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal07"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase07"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint07")})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MapTower_DemoFirst'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo164_0', 'EndFade': 0})
    EventSystemActor.Demo_ForceSetPlayerSavePosAngle({'UniqueName': 'DownloadEnd_PlayerSavePos', 'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo164_0'})
}

void C01() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_DRCVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text021', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo004_0-C01-Link-A-0', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 270})

        call Demo041_0.DownloadTermial_Activate({'ActorName': 'FldObj_DownloadTerminal_A_01', 'SheikerStoneTarget_UniqueName': 'TowerTerminal07_Before', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal07_Before")})

    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text015', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text016', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'SceneName': 'C01-1', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'TowerTerminal07_Before', 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            FldObj_MapTower_A_01_First.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_EmblemShining', 'SLinkKey': 'Demo_EmblemShining', 'IsTargetDemoSLinkUser': False})
            FldObj_MapTower_A_01_First.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Appear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo004_0_EarthQuake', 'SoundDelay': 0, 'SLinkInst': ''})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 4})
        }

    }

}

void C03() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadSet', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {

        call Demo041_0.DownloadTermial_Activate({'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01', 'ActorName': 'SheikerStoneTarget_ActorName', 'SheikerStoneTarget_UniqueName': 'SheikerStoneTarget_UniqueName'})

    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text015'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
}

void C04() {

    fork {
        GameRomCamera.Demo_AnimFlowForMapTower({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'SceneName': 'C04-2', 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': -1})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'SheikersTowerOpenBgm', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo004_0-C04-Link-A-0', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        FldObj_MapTowerWingBefore_A_01[C04(FldObj_MapTowerWingBefore_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'Demo_TowerActive', 'IsTargetDemoSLinkUser': False})

        fork {
            FldObj_MapTowerWingBefore_A_01[C04(FldObj_MapTowerWingBefore_A_01)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            FldObj_MapTowerWingBefore_A_01[C04(FldObj_MapTowerWingBefore_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
            FldObj_MapTower_A_01[C04(FldObj_MapTower_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_TowerActive', 'SLinkKey': 'Demo_TowerActive', 'IsTargetDemoSLinkUser': False})
            FldObj_MapTower_A_01[C04(FldObj_MapTower_A_01)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Activate', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            FldObj_MapTower_A_01[C04(FldObj_MapTower_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }

    }

    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
}

void C05() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'SceneName': 'C05-1', 'TargetActor': -1, 'ActorName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        DgnObj_WarpPoint_A_01[C05(DgnObj_WarpPoint_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
        DgnObj_WarpPoint_A_01[C05(DgnObj_WarpPoint_A_01)].Demo_PlayASForDemo({'ASName': 'On', 'IsIgnoreSame': True, 'SeqBank': 0, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': True, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        DgnObj_WarpPoint_A_01[C05(DgnObj_WarpPoint_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'SeqBank': 0, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'ASName': 'OnWait', 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo004_0-C05-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'SceneName': 'C02-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'TowerTerminal07_Before', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo004_0-C02-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 49})
        EventCameraRumble.Demo_Rumble({'Pattern': 1, 'IsWaitFinish': True, 'Sideways': False, 'Power': 1.0, 'Count': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 6})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 0})
    } {
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 9})
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 2})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void C06() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': False, 'FlagName': 'MapTower_07'})
    EventSystemActor.Demo_FlagON({'FlagName': 'MapTower_07_Demo', 'IsWaitFinish': False})

    fork {
        FldObj_MapTower_A_01[C06(FldObj_MapTower_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {

        fork {
            FldObj_DownloadTerminal_A_01[C06(FldObj_DownloadTerminal_A_01)].Demo_TrigNullASPlay({'IsWaitFinish': False, 'SequenceBank': 0, 'IsIgnoreSame': False, 'ASSlot': 1, 'ASName': 'ActivateEnd_Skl'})
        } {
            FldObj_DownloadTerminal_A_01[C06(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ActivateEnd', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }

        FldObj_DownloadTerminal_A_01[C06(FldObj_DownloadTerminal_A_01)].Demo_OnWaitRevival({'IsWaitFinish': False})
    }

    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'MapTower07_Demo', 'WarpDestMapName': 'E-6'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'SceneName': 'C06-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'TowerTerminal07', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameRomCamera.Demo_CameraAnimFlow({'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'SceneName': 'C07-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'UniqueName': 'TowerTerminal07', 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': False, 'GameDataIntName': 'Location_MapTower07', 'Value': 1})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 210})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo004_0-C06-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        DgnObj_WarpPoint_A_01[C06(DgnObj_WarpPoint_A_01)].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    } {
        Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'IsWaitFinish': False, 'UniqueName': 'TowerTerminal07'})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text017', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
}

void C08() {

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'MapTower_DemoFirst'}) {

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C13-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'ASName': 'SheikPadDownLoadReady', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            }

        } else {

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C08-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Demo004_0-C08-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            }

        }
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'DownloadDemoBgm', 'IsWaitFinish': True})
    } {
        FldObj_DownloadTerminalBody_A_01[C08(FldObj_DownloadTerminalBody_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Start', 'SLinkKey': 'Start', 'IsTargetDemoSLinkUser': False})
        FldObj_DownloadTerminalBody_A_01[C08(FldObj_DownloadTerminalBody_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Start', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

}

void C09() {
    if EventSystemActor.CheckFlag({'FlagName': 'MapTower_DemoFirst'}) {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C09-1', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        Event280:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    } else {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C09-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        goto Event280
    }
}

void C10() {

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'MapTower_DemoFirst'}) {

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'SceneName': 'C10-1', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'IsWaitFinish': True, 'TargetActor': -1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor[C10-1].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'SceneName': 'C11-1', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'ActorName': 'FldObj_DownloadTerminal_A_01', 'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'SheikPadDownLoad', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadLookPad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            } {

                call Demo041_0.DripCatch({'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01'})

            }

        } else {

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'TowerTerminal07', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'SceneName': 'C10-1', 'TargetActor': 3, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor[C10-1].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 125})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'TowerTerminal07', 'ActorName': 'FldObj_DownloadTerminal_A_01', 'SceneName': 'C11-1', 'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo004_0-C10-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            } {

                call Demo041_0.DripCatch({'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01'})

            }

        }
    } {
        FldObj_DownloadTerminalBody_A_01[C10(FldObj_DownloadTerminalBody_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'ActivatedWait'})
        FldObj_DownloadTerminalBody_A_01[C10(FldObj_DownloadTerminalBody_A_01)].Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Start'})
    }

}

void C11() {
    Starter.Demo_StartMapOpenDemo({'IsWaitFinish': True, 'IsPlayerClose': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
    if EventSystemActor.CheckFlag({'FlagName': 'MapTower_01'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MapTower_02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MapTower_03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'MapTower_04'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'MapTower_05'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'MapTower_06'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'MapTower_07'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'MapTower_08'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'MapTower_09'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'MapTower_10'}) {
                                            if EventSystemActor.CheckFlag({'FlagName': 'MapTower_11'}) {
                                                if EventSystemActor.CheckFlag({'FlagName': 'MapTower_12'}) {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'MapTower_13'}) {
                                                        if EventSystemActor.CheckFlag({'FlagName': 'MapTower_14'}) {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'MapTower_15'}) {
                                                                SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_MapDownloadComplete', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
                                                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                                                NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text025'})
                                                                Event591:
                                                                EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

                                                                fork {
                                                                    if EventSystemActor.CheckFlag({'FlagName': 'MapTower_DemoFirst'}) {
                                                                        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C10-1', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                                                                    } else {
                                                                        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C10-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                                                                    }
                                                                } {

                                                                    call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetActorName': 'ShiekerStoneBindTargetActorName', 'ShiekerStoneBindTargetUniqueName': 'ShiekerStoneBindTargetUniqueName'})

                                                                }

                                                                if EventSystemActor.CheckFlag({'FlagName': 'MapTower_DemoFirst'}) {
                                                                    if EventSystemActor.CheckFlag({'FlagName': 'IsStart_Obj_SheikSensor'}) {

                                                                        call OperationGuide.Guide_Scope()

                                                                    } else {
                                                                        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                                                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text023'})
                                                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniMapSensor_Demo'})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                                                        EventSystemActor.Demo_StartShiekSensorGaugeDemo({'ReactionNum': 1, 'IsWaitFinish': True})
                                                                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text027'})
                                                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsStart_Obj_SheikSensor'})
                                                                    }
                                                                }
                                                            } else {
                                                                Event597:
                                                                if EventSystemActor.CheckFlag({'FlagName': 'MapTower_DemoFirst'}) {
                                                                    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensor'}) {
                                                                        Event672:
                                                                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text026'})
                                                                        goto Event591
                                                                    } else {
                                                                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text019', 'IsBecomingSpeaker': True, 'MessageOpenDelayTime': 0})
                                                                        EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_SheikSensor', 'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                                                        EventSystemActor.Demo_DownloadShiekSensor({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
                                                                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text020', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                                                        EventSystemActor.Demo_DownloadSensorMoveIcon({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                                                        goto Event591
                                                                    }
                                                                } else {
                                                                    goto Event672
                                                                }
                                                            }
                                                        } else {
                                                            goto Event597
                                                        }
                                                    } else {
                                                        goto Event597
                                                    }
                                                } else {
                                                    goto Event597
                                                }
                                            } else {
                                                goto Event597
                                            }
                                        } else {
                                            goto Event597
                                        }
                                    } else {
                                        goto Event597
                                    }
                                } else {
                                    goto Event597
                                }
                            } else {
                                goto Event597
                            }
                        } else {
                            goto Event597
                        }
                    } else {
                        goto Event597
                    }
                } else {
                    goto Event597
                }
            } else {
                goto Event597
            }
        } else {
            goto Event597
        }
    } else {
        goto Event597
    }
}

void Demo166() {
    EventSystemActor.Demo_AdvanceTime({'DirectTime': 11, 'IsWaitFinish': True, 'DestTime': -1, 'PassTime': -1, 'ActReset': False})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo166_0', 'EndFade': 0})
}

void C012() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'SceneName': 'C12-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'CameraTagetTerminal_UniqueName', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo004_0-C12-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo004_0:Demo004_0_Text014', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
}

void Demo004_0_08() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'CameraTargetTerminal_UniqueName': 'TowerTerminal08', 'SheikerStoneTarget_UniqueName': 'TowerTerminal08', 'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal08"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing08"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase08"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint08"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody08")})

}

void MapTower07_After() {

    call C06({'FldObj_MapTower_A_01': 'FldObj_MapTower_A_01', 'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01', 'DgnObj_WarpPoint_A_01': 'DgnObj_WarpPoint_A_01'})


    call C08({'CameraTagetTerminal_UniqueName': 'CameraTagetTerminal_UniqueName', 'FldObj_DownloadTerminalBody_A_01': 'FldObj_DownloadTerminalBody_A_01'})


    call C09({'CameraTagetTerminal_UniqueName': 'CameraTagetTerminal_UniqueName'})


    call C10({'CameraTagetTerminal_UniqueName': 'CameraTagetTerminal_UniqueName', 'FldObj_DownloadTerminalBody_A_01': 'FldObj_DownloadTerminalBody_A_01', 'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01'})


    call C11({'CameraTagetTerminal_UniqueName': 'CameraTagetTerminal_UniqueName', 'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetActorName': 'ShiekerStoneBindTargetActorName', 'ShiekerStoneBindTargetUniqueName': 'ShiekerStoneBindTargetUniqueName'})

}

void Demo004_0() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_FirstTower()

}

void Demo004_0_Main() {
    FldObj_DownloadTerminal_A_01[Demo004_0_Main(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'ASName': 'PlayerCloseInWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})

    call C03({'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01', 'SheikerStoneTarget_ActorName': 'SheikerStoneTarget_ActorName', 'SheikerStoneTarget_UniqueName': 'SheikerStoneTarget_UniqueName'})


    call C04({'FldObj_MapTowerWingBefore_A_01': 'FldObj_MapTowerWingBefore_A_01', 'FldObj_MapTower_A_01': 'FldObj_MapTower_A_01', 'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName'})


    call C05({'DgnObj_WarpPoint_A_01': 'DgnObj_WarpPoint_A_01', 'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName'})


    call C012({'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName'})


    call C08({'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName', 'FldObj_DownloadTerminalBody_A_01': 'FldObj_DownloadTerminalBody_A_01'})


    call C09({'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName'})


    call C10({'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName', 'FldObj_DownloadTerminalBody_A_01': 'FldObj_DownloadTerminalBody_A_01', 'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01'})


    call C11({'CameraTagetTerminal_UniqueName': 'CameraTargetTerminal_UniqueName', 'FldObj_DownloadTerminal_A_01': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetActorName': 'SheikerStoneTarget_ActorName', 'ShiekerStoneBindTargetUniqueName': 'SheikerStoneTarget_UniqueName'})

}

void Demo004_0_Common() {
    EventSystemActor.Demo_FlagON({'FlagName': 'IsDownloadDemo', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce'})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'BgCheck': False, 'CameraName': '', 'FocalLength': 0.0, 'Aperture': 0.0, 'InterpolateCount': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActor': -1, 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
}

void Demo004_0_01() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal01"), 'CameraTargetTerminal_UniqueName': 'TowerTerminal01', 'SheikerStoneTarget_UniqueName': 'TowerTerminal01', 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing01"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase01"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint01"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody01")})

}

void Demo004_0_02() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal02', 'SheikerStoneTarget_UniqueName': 'TowerTerminal02', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal02"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing02"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase02"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint02"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody02")})

}

void Demo004_0_03() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal03', 'SheikerStoneTarget_UniqueName': 'TowerTerminal03', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal03"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing03"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTowerLong_A_01", sub_name="TowerBase03"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint03"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody03")})

}

void Demo004_0_04() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal04', 'SheikerStoneTarget_UniqueName': 'TowerTerminal04', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal04"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing04"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase04"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint04"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody04")})

}

void Demo004_0_05() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal05', 'SheikerStoneTarget_UniqueName': 'TowerTerminal05', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal05"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing05"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase05"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint05"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody05")})

}

void Demo004_0_06() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal06', 'SheikerStoneTarget_UniqueName': 'TowerTerminal06', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal06"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing06"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase06"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint06"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody06")})

}

void Demo004_0_09() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal09', 'SheikerStoneTarget_UniqueName': 'TowerTerminal09', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal09"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing09"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase09"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint09"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody09")})

}

void Demo004_0_10() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal10', 'SheikerStoneTarget_UniqueName': 'TowerTerminal10', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal10"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing10"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase10"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint10"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody10")})

}

void Demo004_0_11() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal11', 'SheikerStoneTarget_UniqueName': 'TowerTerminal11', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal11"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing11"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase11"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint11"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody11")})

}

void Demo004_0_12() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal12', 'SheikerStoneTarget_UniqueName': 'TowerTerminal12', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal12"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing12"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase12"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint12"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody12")})

}

void Demo004_0_13() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal13', 'SheikerStoneTarget_UniqueName': 'TowerTerminal13', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal13"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing13"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase13"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint13"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody13")})

}

void Demo004_0_14() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal14', 'SheikerStoneTarget_UniqueName': 'TowerTerminal14', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal14"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing14"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase14"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint14"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody14")})

}

void Demo004_0_15() {

    call Demo004_0_Common({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call Demo004_0_Main({'SheikerStoneTarget_ActorName': 'FldObj_DownloadTerminal_A_01', 'CameraTargetTerminal_UniqueName': 'TowerTerminal15', 'SheikerStoneTarget_UniqueName': 'TowerTerminal15', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="TowerTerminal15"), 'FldObj_MapTowerWingBefore_A_01': ActorIdentifier(name="FldObj_MapTowerWingBefore_A_01", sub_name="TowerWing15"), 'FldObj_MapTower_A_01': ActorIdentifier(name="FldObj_MapTower_A_01", sub_name="TowerBase15"), 'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01", sub_name="TowerWarpPoint15"), 'FldObj_DownloadTerminalBody_A_01': ActorIdentifier(name="FldObj_DownloadTerminalBody_A_01", sub_name="TowerTerminalBody15")})

}
