-------- EventFlow: RiversideMini_RoyalRecipe --------

Actor: Npc_RiverSideHatago001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_GiveCookResultForNpc']
queries: ['CheckWeather', 'GeneralChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_RiverSideHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_RiverSideHatago001.IsOnInstEventFlag() {
        Event9:
        Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Yes'})
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge00'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RiversideMini_RoyalRecipe_Activated'})
        } else {
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_No'})
        }
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event3:
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk00'})
            Event7:
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk02'})
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk03'})
            goto Event9
          case 1:
            Event6:
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk01'})
            goto Event7
          case 2:
            goto Event3
          case 3:
            goto Event6
        }
    }
}

void Finish_Npc_RiverSideHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_02'}) {
        Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge02'})
        Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge03'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge06'})
            EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'PorchItemName': 'Item_Cook_N_02', 'Count': 1, 'CookEffectType': 'AllOK'})
            EventSystemActor.Demo_FlagON({'FlagName': 'RiversideMini_RoyalRecipe_Clear00', 'IsWaitFinish': True})
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge07', 'ASName': 'Talk_EatCake'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge08'})
            Event47:
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge09'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RiversideMini_RoyalRecipe_Finish'})
        } else {
            Event23:
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge05'})
        }
    } else {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_L_03'}) {
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge02'})
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge04'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge10'})
                EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'Count': 1, 'CookEffectType': 'AllOK', 'PorchItemName': 'Item_Cook_L_03'})
                EventSystemActor.Demo_FlagON({'FlagName': 'RiversideMini_RoyalRecipe_Clear01', 'IsWaitFinish': True})
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge07', 'ASName': 'Talk_EatCake'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge11'})
                goto Event47
            } else {
                goto Event23
            }
        } else {
            Npc_RiverSideHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_Challenge01'})
        }
    }
}

void Ready_Npc_RiverSideHatago001_Near() {
    Npc_RiverSideHatago001.Demo_TalkASync({'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_near00', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
}

void Finish_Npc_RiverSideHatago001_Near() {
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_02'}) {
        Event43:
        Npc_RiverSideHatago001.Demo_TalkASync({'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_near01', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
    } else {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_L_03'}) {
            goto Event43
        } else {
            Npc_RiverSideHatago001.Demo_TalkASync({'MessageId': 'EventFlowMsg/RiversideMini_RoyalRecipe:Talk_near01', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
        }
    }
}
