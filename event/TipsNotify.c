-------- EventFlow: TipsNotify --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayOK', 'Demo_TipsDisplayNG', 'Demo_FlagOn']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void FirstTips() {
    if TipsSystemActor.CheckFlag({'FlagName': 'FirstTips'}) {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_FlagOn({'FlagName': 'FirstTips', 'IsWaitFinish': True})
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    }
}

void Notify_Gyro() {
    if TipsSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo103_0'}) {
        if TipsSystemActor.CheckFlag({'FlagName': 'FirstTouchdown'}) {
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Event5:
                TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
              case [1, 2, 3]:
                Event6:
                TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
            }
        } else {
            goto Event5
        }
    } else {
        goto Event6
    }
}
