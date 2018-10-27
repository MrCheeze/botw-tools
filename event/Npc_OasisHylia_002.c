-------- EventFlow: Npc_OasisHylia_002 --------

Actor: Npc_OasisHylia_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Snow'}) {
            Event4:
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_002:Talk_09'})
        } else {
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Desert'}) {
                goto Event4
            } else {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_002:Talk_10'})
            }
        }
    } else {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Snow'}) {
            Event11:
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_002:Talk_08'})
        } else {
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Desert'}) {
                goto Event11
            } else {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_002:Talk_11'})
            }
        }
    }
}

void Near() {
    Npc_OasisHylia_002.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_OasisHylia_002:Npc_oasis015_Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}
