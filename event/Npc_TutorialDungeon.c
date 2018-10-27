-------- EventFlow: Npc_TutorialDungeon --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_MiniGameTime', 'Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: []
queries: ['CheckMiniGameTimeOver']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void EachFrame() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo719_0'}) {
        Event2:
        if EventSystemActor.CheckFlag({'FlagName': 'ClearTutorial_SideStep'}) {
            Event3:
            if EventTimerTag.CheckMiniGameTimeOver() {
                EventSystemActor.Demo_FlagON({'FlagName': 'ClearTutorial_SpinAttack', 'IsWaitFinish': True})
            } else
            goto Event2
        } else {
            EventSystemActor.Demo_MiniGameTime({'CountMode': 1, 'IsWaitFinish': True, 'IsShowTimeUI': True, 'MaxTime': -1, 'CountStartTime': 300})
            goto Event3
        }
    } else
    goto Event3
}
