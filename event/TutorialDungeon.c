-------- EventFlow: TutorialDungeon --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenMessageTips', 'Demo_AdvanceQuest', 'Demo_MiniGameTime', 'Demo_DisableMiniGameTime', 'Demo_LoopEnd']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: []
queries: ['CheckElapsedTimeOfMiniGame']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void SideStep_Npc_TutorialDungeon_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 0, 'CountStartTime': 0, 'MaxTime': -1, 'IsShowTimeUI': False})
    Event2:
    if EventSystemActor.CheckFlag({'FlagName': 'ClearTutorial_SideStep'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'BackStep'})
    } else
    if EventTimerTag.CheckElapsedTimeOfMiniGame({'Threshold': 40}) {
        EventSystemActor.Demo_AdvanceQuest({'StepName': 'SideStepWarning', 'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event2
    }
}

void SideStepWarning_Npc_TutorialDungeon_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 17, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SideStep'})
    EventSystemActor.Demo_AdvanceQuest({'StepName': 'SideStep', 'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False})
}

void BackStep_Npc_TutorialDungeon_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 0, 'CountStartTime': 0, 'MaxTime': -1, 'IsShowTimeUI': False})
    Event17:
    if EventSystemActor.CheckFlag({'FlagName': 'ClearTutorial_BackStep'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'GuardJust'})
    } else
    if EventTimerTag.CheckElapsedTimeOfMiniGame({'Threshold': 40}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'BackStepWarning'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event17
    }
}

void BackStepWarning_Npc_TutorialDungeon_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 16, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_BackStep'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'BackStep'})
}

void GuardJust_Npc_TutorialDungeon_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 0, 'CountStartTime': 0, 'MaxTime': -1, 'IsShowTimeUI': False})
    Event26:
    if EventSystemActor.CheckFlag({'FlagName': 'ClearTutorial_GuardJust'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'SpinAttack'})
    } else
    if EventTimerTag.CheckElapsedTimeOfMiniGame({'Threshold': 40}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'GuardJustWarning'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event26
    }
}

void GuardJustWarning_Npc_TutorialDungeon_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 15, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_GurdJust'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'GuardJust'})
}

void SpinAttack_Npc_TutorialDungeon_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 0, 'CountStartTime': 0, 'MaxTime': -1, 'IsShowTimeUI': False})
    Event35:
    if EventSystemActor.CheckFlag({'FlagName': 'ClearTutorial_SpinAttack'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
    } else
    if EventTimerTag.CheckElapsedTimeOfMiniGame({'Threshold': 40}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'SpinAttackWarning'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event35
    }
}

void SpinAttackWarning_Npc_TutorialDungeon_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 24, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SpinAtack'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'SpinAttack'})
}
