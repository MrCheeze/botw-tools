-------- EventFlow: TipsItem --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayOK', 'Demo_TipsDisplayNG']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void IsGet_AncientArrow() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_AncientArrow'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_BombArrow_A() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_BombArrow_A'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_ElectricArrow() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_ElectricArrow'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_FireArrow() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_FireArrow'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_IceArrow() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_IceArrow'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_NormalArrow() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_NormalArrow'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Weapon_Sword_070() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Weapon_Sword_070'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}
