-------- EventFlow: TipsGameOver --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayNG', 'Demo_TipsDisplayOK']
queries: ['CheckPlayerDeadCause', 'CheckFlag', 'CheckLastDamageAttacker']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void GameOver() {
    TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
}

void Fall() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event1:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event1
      case 2:
        goto Event1
      case 3:
        goto Event1
      case 4:
        goto Event1
      case 5:
        goto Event1
      case 6:
        goto Event1
      case 7:
        goto Event1
      case 8:
        Event0:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 9:
        goto Event1
      case 10:
        goto Event1
      case 11:
        goto Event1
      case 12:
        goto Event1
      case 13:
        goto Event0
    }
}

void Fall_Before_Parasail() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event3:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        goto Event3
      case 4:
        goto Event3
      case 5:
        goto Event3
      case 6:
        goto Event3
      case 7:
        goto Event3
      case 8:
        Event6:
        if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
            goto Event3
        } else {
            TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
        }
      case 9:
        goto Event3
      case 10:
        goto Event3
      case 11:
        goto Event3
      case 12:
        goto Event3
      case 13:
        goto Event6
    }
}

void Fall_After_Paraseil() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event8:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event8
      case 2:
        goto Event8
      case 3:
        goto Event8
      case 4:
        goto Event8
      case 5:
        goto Event8
      case 6:
        goto Event8
      case 7:
        goto Event8
      case 8:
        Event10:
        if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
            TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
        } else {
            goto Event8
        }
      case 9:
        goto Event8
      case 10:
        goto Event8
      case 11:
        goto Event8
      case 12:
        goto Event8
      case 13:
        goto Event10
    }
}

void Hot() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 1:
        Event17:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 2:
        goto Event17
      case 3:
        goto Event17
      case 4:
        goto Event17
      case 5:
        goto Event17
      case 6:
        goto Event17
      case 7:
        goto Event17
      case 8:
        goto Event17
      case 9:
        goto Event17
      case 10:
        goto Event17
      case 11:
        goto Event17
      case 12:
        goto Event17
      case 13:
        goto Event17
    }
}

void Cold() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event20:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 2:
        goto Event20
      case 3:
        goto Event20
      case 4:
        goto Event20
      case 5:
        goto Event20
      case 6:
        goto Event20
      case 7:
        goto Event20
      case 8:
        goto Event20
      case 9:
        goto Event20
      case 10:
        goto Event20
      case 11:
        goto Event20
      case 12:
        goto Event20
      case 13:
        goto Event20
    }
}

void Fire() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event23:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event23
      case 2:
        goto Event23
      case 3:
        goto Event23
      case 4:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 5:
        goto Event23
      case 6:
        goto Event23
      case 7:
        goto Event23
      case 8:
        goto Event23
      case 9:
        goto Event23
      case 10:
        goto Event23
      case 11:
        goto Event23
      case 12:
        goto Event23
      case 13:
        goto Event23
    }
}

void Ice() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event26:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event26
      case 2:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 3:
        goto Event26
      case 4:
        goto Event26
      case 5:
        goto Event26
      case 6:
        goto Event26
      case 7:
        goto Event26
      case 8:
        goto Event26
      case 9:
        goto Event26
      case 10:
        goto Event26
      case 11:
        goto Event26
      case 12:
        goto Event26
      case 13:
        goto Event26
    }
}

void Shock() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event29:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event29
      case 2:
        goto Event29
      case 3:
        goto Event29
      case 4:
        goto Event29
      case 5:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 6:
        goto Event29
      case 7:
        goto Event29
      case 8:
        goto Event29
      case 9:
        goto Event29
      case 10:
        goto Event29
      case 11:
        goto Event29
      case 12:
        goto Event29
      case 13:
        goto Event29
    }
}

void Lightning() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event32:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event32
      case 2:
        goto Event32
      case 3:
        goto Event32
      case 4:
        goto Event32
      case 5:
        goto Event32
      case 6:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 7:
        goto Event32
      case 8:
        goto Event32
      case 9:
        goto Event32
      case 10:
        goto Event32
      case 11:
        goto Event32
      case 12:
        goto Event32
      case 13:
        goto Event32
    }
}

void Poison() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event35:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event35
      case 2:
        goto Event35
      case 3:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 4:
        goto Event35
      case 5:
        goto Event35
      case 6:
        goto Event35
      case 7:
        goto Event35
      case 8:
        goto Event35
      case 9:
        goto Event35
      case 10:
        goto Event35
      case 11:
        goto Event35
      case 12:
        goto Event35
      case 13:
        goto Event35
    }
}

void Bomb() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event38:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event38
      case 2:
        goto Event38
      case 3:
        goto Event38
      case 4:
        goto Event38
      case 5:
        goto Event38
      case 6:
        goto Event38
      case 7:
        goto Event38
      case 8:
        goto Event38
      case 9:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 10:
        goto Event38
      case 11:
        goto Event38
      case 12:
        goto Event38
      case 13:
        goto Event38
    }
}

void Drown() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event41:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event41
      case 2:
        goto Event41
      case 3:
        goto Event41
      case 4:
        goto Event41
      case 5:
        goto Event41
      case 6:
        goto Event41
      case 7:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 8:
        goto Event41
      case 9:
        goto Event41
      case 10:
        goto Event41
      case 11:
        goto Event41
      case 12:
        goto Event41
      case 13:
        goto Event41
    }
}

void Press() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event44:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event44
      case 2:
        goto Event44
      case 3:
        goto Event44
      case 4:
        goto Event44
      case 5:
        goto Event44
      case 6:
        goto Event44
      case 7:
        goto Event44
      case 8:
        goto Event44
      case 9:
        goto Event44
      case 10:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 11:
        goto Event44
      case 12:
        goto Event44
      case 13:
        goto Event44
    }
}

void MasterSword() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event47:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event47
      case 2:
        goto Event47
      case 3:
        goto Event47
      case 4:
        goto Event47
      case 5:
        goto Event47
      case 6:
        goto Event47
      case 7:
        goto Event47
      case 8:
        goto Event47
      case 9:
        goto Event47
      case 10:
        goto Event47
      case 11:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 12:
        goto Event47
      case 13:
        goto Event47
    }
}

void SuddenDeath() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        Event50:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        goto Event50
      case 2:
        goto Event50
      case 3:
        goto Event50
      case 4:
        goto Event50
      case 5:
        goto Event50
      case 6:
        goto Event50
      case 7:
        goto Event50
      case 8:
        goto Event50
      case 9:
        goto Event50
      case 10:
        goto Event50
      case 11:
        goto Event50
      case 12:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case 13:
        goto Event50
    }
}

void From_GuardianBeam() {
    if !TipsSystemActor.CheckLastDamageAttacker({'Name': 'GuardianBeam'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}
