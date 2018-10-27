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
      case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case [8, 13]:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Fall_Before_Parasail() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12]:
        Event3:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case [8, 13]:
        if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
            goto Event3
        } else {
            TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
        }
    }
}

void Fall_After_Paraseil() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12]:
        Event8:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case [8, 13]:
        if TipsSystemActor.CheckFlag({'FlagName': 'IsGet_PlayerStole2'}) {
            TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
        } else {
            goto Event8
        }
    }
}

void Hot() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case 0:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void Cold() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 1:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Fire() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 4:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Ice() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 2:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Shock() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 5:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Lightning() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 6:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Poison() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 3:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Bomb() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 9:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Drown() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 7:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Press() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 10:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void MasterSword() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 11:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void SuddenDeath() {
    switch TipsSystemActor.CheckPlayerDeadCause() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13]:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
      case 12:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void From_GuardianBeam() {
    if !TipsSystemActor.CheckLastDamageAttacker({'Name': 'GuardianBeam'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}
