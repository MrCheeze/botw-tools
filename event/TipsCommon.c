-------- EventFlow: TipsCommon --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayOK', 'Demo_TipsDisplayNG']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Always() {
    TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
}

void Rejection() {
    TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
}

void Before_FirstTouchdown() {
    if TipsSystemActor.CheckFlag({'FlagName': 'FirstTouchdown'}) {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void FirstTouchdown() {
    if TipsSystemActor.CheckFlag({'FlagName': 'FirstTouchdown'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void FindDungeon_Activated() {
    if TipsSystemActor.CheckFlag({'FlagName': 'FindDungeon_Activated'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void FindDungeon_Finish() {
    if TipsSystemActor.CheckFlag({'FlagName': 'FindDungeon_Finish'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void FindDungeon_1stClear() {
    if TipsSystemActor.CheckFlag({'FlagName': 'FindDungeon_1stClear'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsPlayed_Demo103_0() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo103_0'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}
