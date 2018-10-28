-------- EventFlow: TipsPlayer --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayOK', 'Demo_TipsDisplayNG']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void IsGet_Obj_Magnetglove() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Magnetglove'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_StopTimer() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_StopTimer'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_RemoteBomb() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_RemoteBomb'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_IceMaker() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_IceMaker'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_Camera() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_SheikSensorLv2() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensorLv2'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_StopTimerLv2() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_StopTimerLv2'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_RemoteBombLv2() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_RemoteBombLv2'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_PortableUnit() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PortableUnit'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_PlayerStole2() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void AmiiboItemOnOff() {
    if TipsSystemActor.CheckFlag({'FlagName': 'AmiiboItemOnOff'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void WolfLink_HasBeenUsed() {
    if TipsSystemActor.CheckFlag({'FlagName': 'WolfLink_HasBeenUsed'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void IsGet_Obj_SheikSensor() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensor'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void WolfLink_And_SheikSensor() {
    if TipsSystemActor.CheckFlag({'FlagName': 'WolfLink_HasBeenUsed'})
    && TipsSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensor'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void Before_IsGet_PlayerStole2() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Horse_Is_Registration() {
    if TipsSystemActor.CheckFlag({'FlagName': 'Horse_Is_Registration'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}
