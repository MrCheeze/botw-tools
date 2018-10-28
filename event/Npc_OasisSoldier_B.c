-------- EventFlow: Npc_OasisSoldier_B --------

Actor: Npc_OasisSoldier_B
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckEquipArmorSeriesType', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_C
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_A
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisSoldier_B.CheckActorAction13() {
      case 0:
        Event21:
        if Npc_OasisSoldier_B.CheckActorAction({'ActionName': 'Root/Terror'}) {
            Npc_OasisSoldier_B.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }
        Npc_OasisSoldier_B.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
      case 1:
        Npc_OasisSoldier_C.Demo_Join({'IsWaitFinish': True})
        Npc_OasisSoldier_A.Demo_Join({'IsWaitFinish': True})
        goto Event21
      case [2, 3]:
        if !Npc_OasisSoldier_B.IsOnInstEventFlag() {

            call hello()

        }
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasissoldier_B_first'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Helmet_Activated'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_FindingValetta_Finish'}) {
                    if Npc_OasisSoldier_B.IsOnInstEventFlag() {
                        Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk02'})
                    } else {
                        Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk01'})
                    }
                } else {
                    Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk04'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
                Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk06'})
            } else {
                Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk07'})
            }
        } else {
            Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk05'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasissoldier_B_first', 'IsWaitFinish': True})
        }
    }
}

void Electric_Relic_Finished_Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckLower': False, 'CheckHead': True, 'CheckType': 'Thunder'}) {
        Npc_OasisSoldier_B.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:Near_Raimei_001'})
    } else {
        Npc_OasisSoldier_B.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:near00'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk08'})
      case [2, 3, 4]:
        Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk09'})
      case [5, 6, 7]:
        Npc_OasisSoldier_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_B:talk10'})
    }
}
