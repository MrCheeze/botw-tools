-------- EventFlow: XXX --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DestinationTurnRefActor']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_StartupTelescope']
queries: ['CheckSelectPicture', 'CheckProConUse', 'WhatMoonName', 'CheckRainRatio']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: ['Demo_EventMiniGameStart', 'Demo_EventMiniGameTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void FurimukiTest() {
    GameROMPlayer.Demo_DestinationTurnRefActor({'IsWaitFinish': True, 'UniqName': 'furimukitest1'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_DestinationTurnRefActor({'IsWaitFinish': True, 'UniqName': 'furimukitest2'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_DestinationTurnRefActor({'IsWaitFinish': True, 'UniqName': 'furimukitest3'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}
