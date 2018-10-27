-------- EventFlow: Npc_RiverSideHatago001 --------

Actor: Npc_RiverSideHatago001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_GiveCookResultForNpc', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_FlagON']
queries: ['CheckFlag', 'HasPorchItem', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'RiversideMini_RoyalRecipe_Clear00'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'RiversideMini_RoyalRecipe_Clear01'}) {
            if Npc_RiverSideHatago001.IsOnInstEventFlag() {
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago001:Talk_ChallengeEnd02'})
            } else {
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago001:Talk_ChallengeEnd00'})
            }
        } else {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_L_03'}) {
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago001:Talk_ChallengeEnd03'})
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge04'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge10'})
                    EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'Count': 1, 'CookEffectType': 'AllOK', 'PorchItemName': 'Item_Cook_L_03'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'RiversideMini_RoyalRecipe_Clear01', 'IsWaitFinish': True})
                    Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge07', 'ASName': 'Talk_EatCake'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge11'})
                    Event23:
                    Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge09'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                } else {
                    Event12:
                    Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge05'})
                }
            } else {
                Event36:
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago001:Talk_ChallengeEnd01'})
            }
        }
    } else {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_02'}) {
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago001:Talk_ChallengeEnd03'})
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge06'})
                EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'PorchItemName': 'Item_Cook_N_02', 'Count': 1, 'CookEffectType': 'AllOK'})
                EventSystemActor.Demo_FlagON({'FlagName': 'RiversideMini_RoyalRecipe_Clear00', 'IsWaitFinish': True})
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge07', 'ASName': 'Talk_EatCake'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge08'})
                goto Event23
            } else {
                goto Event12
            }
        } else {
            goto Event36
        }
    }
}
