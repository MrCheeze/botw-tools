-------- EventFlow: RitoUmayadoMini_HotRecipe --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem']
queries: ['GeneralChoice2', 'CheckWeather', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_RitoHatago001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_RitoHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_RitoHatago001.CheckActorAction13() {
      case [0, 2]:
        Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk06'})
      case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event44:
            if Npc_RitoHatago001.IsOnInstEventFlag() {
                Event59:
                Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk08'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoUmayadoMini_HotRecipe_Activated'})
                } else {
                    Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk07'})
                }
            } else {
                Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event59
            }
          case [1, 3]:
            Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event44
          case 2:
            Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event44
        }
      case 3:
        Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk10'})
        goto Event44
    }
}

void Finish_Npc_RitoHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_RitoHatago001.CheckActorAction13() {
      case [0, 2]:
        Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk06'})
      case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event79:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Material_02', 'Count': 1}) {
                if Npc_RitoHatago001.IsOnInstEventFlag() {
                    Event80:
                    Npc_RitoHatago001.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk14'})
                    if !EventSystemActor.GeneralChoice2() {
                        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_Material_02', 'Value': -1, 'IsWaitFinish': True})
                        Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk15', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk16', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Purple'})

                        Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk19'})
                        Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk20'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'RitoUmayadoMini_HotRecipe_Finish', 'IsWaitFinish': True})
                    } else {
                        Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk17', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk12', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event80
                }
            } else {
                Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk18', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
          case [1, 2, 3]:
            Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk13', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event79
        }
      case 3:
        if Npc_RitoHatago001.IsOnInstEventFlag() {
            goto Event79
        } else {
            Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:talk11', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event79
        }
    }
}

void Ready_Npc_RitoHatago001_Near() {
    Event99:
    Npc_RitoHatago001.Demo_TalkASync({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:Near00', 'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300})
}

void Finish_Npc_RitoHatago001_Near() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Material_02', 'Count': 1}) {
        goto Event99
    } else {
        Npc_RitoHatago001.Demo_TalkASync({'MessageId': 'EventFlowMsg/RitoUmayadoMini_HotRecipe:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}
