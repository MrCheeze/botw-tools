-------- EventFlow: Npc_GerudoDesert004 --------

Actor: Npc_GerudoDesert004[town01]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert004[town02]
entrypoint: None()
actions: ['Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first_lady'}) {
            Event1:
            Npc_GerudoDesert004[town01].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_GerudoDesert004:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            Npc_GerudoDesert004[town01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert004:Talk02'})
        }
    } else {
        goto Event1
    }
}

void Gerudo_Ch_FindingValetta_Find_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Gerudo_Ch_FindingValetta.Finish_Npc_GerudoDesert004_Talk()

}

void Gerudo_Ch_FindingValetta_Step2_Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckLower': False, 'CheckHead': True, 'CheckType': 'Thunder'}) {
        Npc_GerudoDesert004[town02].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert004:Near_Raimei_001', 'DispFrame': 90, 'IsChecked': False})
    }
}
