-------- EventFlow: TipsDungeon --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayOK', 'Demo_TipsDisplayNG']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Relic_Challenge_Finished() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo114_0'}) {
        Event1:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo117_0'}) {
            goto Event1
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo120_0'}) {
                goto Event1
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo123_0'}) {
                    goto Event1
                } else {
                    TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
                }
            }
        }
    }
}

void Before_Relic_Challenge_Finished() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo114_0'}) {
        Event9:
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo117_0'}) {
            goto Event9
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo120_0'}) {
                goto Event9
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo123_0'}) {
                    goto Event9
                } else {
                    TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
                }
            }
        }
    }
}
