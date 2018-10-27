-------- EventFlow: RememberTag --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: ['CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk_Demo126_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo126_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo126_0', 'IsWaitFinish': True})
    Event64:
    EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'PictureMemory_Spot_Int', 'Value': -1})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 11}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_First1'})
    } else {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 0}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_Find11'})
        }
    }
}

void Talk_Demo127_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo127_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo127_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo128_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo128_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo128_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo129_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo129_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo129_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo130_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo130_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo130_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo131_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo131_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo131_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo132_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo132_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo132_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo133_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo133_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo133_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo135_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo135_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo135_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo136_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo136_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo136_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo137_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo137_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo137_0', 'IsWaitFinish': True})
    goto Event64
}

void Talk_Demo138_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo138_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo138_0', 'IsWaitFinish': True})
}

void Talk_Demo134_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo309_2', 'EntryPointName': 'Demo134_309', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo134_0'})
    goto Event64
}
