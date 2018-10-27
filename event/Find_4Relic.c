-------- EventFlow: Find_4Relic --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Check_4Relic() {
    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_1stClear'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_2ndClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_3rdClear'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_4Relic_4thClear'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BattleArena_Level4'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BattleArena_Level3'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Find_4Relic_3rdClear', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BattleArena_Level3'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BattleArena_Level2'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Find_4Relic_2ndClear', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BattleArena_Level2'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BattleArena_Level1'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Find_4Relic_1stClear', 'IsWaitFinish': True})
    }
}
