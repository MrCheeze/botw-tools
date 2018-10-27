-------- EventFlow: Npc_OasisMilk_E --------

Actor: Npc_OasisMilk_E
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'GeneralChoice3', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_OasisMilk_E.IsOnInstEventFlag() {
        Event8:
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Finished'}) {
                Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk05'})
            } else {
                Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk04'})
                Event10:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk01', 'IsCloseMessageDialog': True})
                    Event16:
                    Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk08'})
                    goto Event10
                  case 1:
                    Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk02', 'IsCloseMessageDialog': True})
                    goto Event16
                  case 2:
                    Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk06', 'IsCloseMessageDialog': True})
                    goto Event16
                  case 3:
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Finished'}) {
                        Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk03'})
                    } else {
                        Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk09'})
                    }
                }
            }
        } else {
            Npc_OasisMilk_E.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event3:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk01', 'IsCloseMessageDialog': True})
                Event15:
                Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk07'})
                goto Event3
              case 1:
                Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk02', 'IsCloseMessageDialog': True})
                goto Event15
              case 2:
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Finished'}) {
                    Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk03', 'IsCloseMessageDialog': True})
                } else {
                    Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk09'})
                }
            }
        }
    } else {
        Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_E:talk10'})
        goto Event8
    }
}
