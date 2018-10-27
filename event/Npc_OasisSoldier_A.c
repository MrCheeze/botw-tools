-------- EventFlow: Npc_OasisSoldier_A --------

Actor: Npc_OasisSoldier_A
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
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

Actor: Npc_OasisSoldier_B
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisSoldier_A.CheckActorAction13() {
      case 0:
        Event19:
        if Npc_OasisSoldier_A.CheckActorAction({'ActionName': 'Root/Terror'}) {
            Npc_OasisSoldier_A.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Event1:
            Npc_OasisSoldier_A.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        } else {
            goto Event1
        }
      case 1:
        Npc_OasisSoldier_C.Demo_Join({'IsWaitFinish': True})
        Npc_OasisSoldier_B.Demo_Join({'IsWaitFinish': True})
        goto Event19
      case [2, 3]:
        if Npc_OasisSoldier_A.IsOnInstEventFlag() {
            Event17:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasissoldier_A_first'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Helmet_Activated'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_FindingValetta_Finish'}) {
                        Event4:
                        if Npc_OasisSoldier_A.IsOnInstEventFlag() {
                            Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk02', 'ASName': ''})
                        } else {
                            Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk01', 'ASName': ''})
                        }
                    } else
                    if Npc_OasisSoldier_A.IsOnInstEventFlag() {
                        Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk04', 'ASName': ''})
                    } else {
                        Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk03', 'ASName': ''})
                    }
                } else
                goto Event4
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
                Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk06'})
                Event18:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasissoldier_A_first', 'IsWaitFinish': True})
            } else {
                Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk05'})
                goto Event18
            }
        } else {

            call hello()

            goto Event17
        }
    }
}

void Electric_Relic_Finished_Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckLower': False, 'CheckHead': True, 'CheckType': 'Thunder'}) {
        Npc_OasisSoldier_A.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:Near_Raimei_001'})
    } else {
        Npc_OasisSoldier_A.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:near00'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk07'})
      case [2, 3, 4]:
        Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk08'})
      case [5, 6, 7]:
        Npc_OasisSoldier_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_A:talk09'})
    }
}
