-------- EventFlow: Npc_oasis042 --------

Actor: Npc_oasis042
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckEquipArmorSeriesType', 'CheckTimeType', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RAIMEI_CK()

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_FindingValetta_Finish'}) {
        if Npc_oasis042.IsOnInstEventFlag() {
            Event28:
            if !EventSystemActor.RandomChoice2() {
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:talk02'})
            } else {
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:talk03'})
            }
        } else {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event25:
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:Npc_oasis042_003'})
                goto Event28
              case 1:
                goto Event25
              case 2:
                Event26:
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:Npc_oasis042_004'})
                goto Event28
              case 3:
                goto Event26
              case 4:
                goto Event26
              case 5:
                Event27:
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:Npc_oasis042_005'})
                goto Event28
              case 6:
                goto Event27
              case 7:
                goto Event27
            }
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
            Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:talk04'})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_GetBack'}) {

                call Electric_Relic.GetBack_Npc_oasis042_Drag_Hero_FirstTime_Talk()

            } else {
                Npc_oasis042.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis042:Npc_oasis042_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:talk00'})
                } else {
                    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:talk05'})
                }
            }
        }
    }
}

void RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_Raimei_CK'}) {
            Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis042:Raimei_CK_001'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis025_Raimei_CK'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    }
}
