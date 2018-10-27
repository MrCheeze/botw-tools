-------- EventFlow: UotoriMini_RecipeSea --------

Actor: Npc_SouthernVillage007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_AppearRupee', 'Demo_WaitFrame']
queries: ['HasPorchItem', 'GeneralChoice2', 'CheckFlag', 'CheckAddPorchItem', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthernVillage008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Finish_Npc_SouthernVillage007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage007.CheckActorAction13() {
      case 0:
        Event113:
        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecipieSea_PorchFull'}) {
            Event115:
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_01'}) {
                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk28'})

                call CookingBGM()


                call Demo001_0.SetCookResult5({'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Material_06', 'CookMaterial_05': 'Item_Ore_H', 'CookMaterial_04': 'Item_FishGet_F', 'CookMaterial_01': 'Item_FishGet_K'})

                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk19'})
                EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecipieSea_FinishDay', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecipeSea_Finish'})
            } else {
                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk17'})
            }
        } else {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Fish_K'}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_06'}) {
                    Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk11'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_SouthernVillage007.Demo_Talk({'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Material_06', 'Value': -1})
                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_FishGet_K'})
                        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk04'})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecipieSea_GetReward'})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk02', 'IsCloseMessageDialog': True})

                        call CookingBGM()

                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_01'}) {

                            call Demo001_0.SetCookResult5({'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Material_06', 'CookMaterial_05': 'Item_Ore_H', 'CookMaterial_04': 'Item_FishGet_F', 'CookMaterial_01': 'Item_FishGet_K'})

                            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk19'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecipieSea_FinishDay', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecipeSea_Finish'})
                        } else {
                            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk17'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecipieSea_PorchFull'})
                        }
                    } else {
                        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk12'})
                    }
                } else {
                    Event31:
                    Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk13'})
                }
            } else {
                goto Event31
            }
        }
      case 1:
        goto Event113
      case 2:
        goto Event113
      case 3:
        goto Event113
      case 4:
        goto Event113
      case 5:
        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecipieSea_PorchFull'}) {
            goto Event115
        } else {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Fish_K'}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_06'}) {
                    Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk15'})
                } else {
                    Event38:
                    Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk16'})
                }
            } else {
                goto Event38
            }
        }
      case 6:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk26'})
      case 7:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk27'})
      case 10:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk06'})
      case 11:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk05'})
    }
}

void Ready_Npc_SouthernVillage007_Talk() {
    switch Npc_SouthernVillage007.CheckActorAction13() {
      case 0:
        Event1:

        call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_SouthernVillage007', 'Actor2': 'Npc_SouthernVillage008'})

        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecipieSea_IsTalked'}) {
            Event105:
            switch Npc_SouthernVillage007.CheckActorAction13() {
              case 0:
                Event86:
                Npc_SouthernVillage007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_SouthernVillage008', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Event112:
                switch Npc_SouthernVillage008.CheckActorAction13() {
                  case 0:
                    Event87:
                    Npc_SouthernVillage008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_SouthernVillage007', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'IsConfront': False})
                    Event3:
                    Npc_SouthernVillage007.Demo_Talk({'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    Npc_SouthernVillage008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk20'})
                    Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk21'})
                    Npc_SouthernVillage008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk22'})
                    switch Npc_SouthernVillage007.CheckActorAction13() {
                      case 0:
                        Event89:
                        Npc_SouthernVillage007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Event24:
                        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk08'})
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk23'})
                            Event93:
                            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk25'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk09'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecipeSea_Activated'})
                            } else {
                                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk10'})
                            }
                          case 1:
                            Event95:
                            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk24'})
                            goto Event93
                          case 2:
                            goto Event95
                          case 3:
                            goto Event95
                        }
                      case 1:
                        Event111:
                        Npc_SouthernVillage007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
                        goto Event24
                      case 2:
                        goto Event89
                      case 3:
                        goto Event89
                      case 4:
                        goto Event89
                      case 5:
                        goto Event111
                      case 6:
                        goto Event111
                      case 7:
                        goto Event111
                      case 8:
                        goto Event111
                      case 9:
                        goto Event111
                      case 10:
                        goto Event111
                      case 11:
                        goto Event111
                      case 12:
                        goto Event111
                      case 13:
                        goto Event111
                    }
                  case 1:
                    goto Event87
                  case 2:
                    goto Event87
                  case 3:
                    Event109:
                    Npc_SouthernVillage008.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_SouthernVillage007', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                    goto Event3
                  case 4:
                    goto Event87
                  case 5:
                    goto Event109
                  case 6:
                    goto Event87
                  case 7:
                    goto Event87
                  case 8:
                    goto Event87
                  case 9:
                    goto Event87
                  case 10:
                    goto Event87
                  case 11:
                    goto Event87
                  case 12:
                    goto Event87
                  case 13:
                    goto Event87
                }
              case 1:
                Event108:
                Npc_SouthernVillage007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_SouthernVillage008', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                goto Event112
              case 2:
                goto Event86
              case 3:
                goto Event86
              case 4:
                goto Event86
              case 5:
                goto Event108
              case 6:
                goto Event108
              case 7:
                goto Event108
              case 8:
                goto Event108
              case 9:
                goto Event108
              case 10:
                goto Event108
              case 11:
                goto Event108
              case 12:
                goto Event108
              case 13:
                goto Event108
            }
        } else {
            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk03'})
            EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecipieSea_IsTalked', 'IsWaitFinish': True})
            goto Event105
        }
      case 1:
        goto Event1
      case 2:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecipieSea_IsTalked'}) {
            Event134:
            Npc_SouthernVillage007.Demo_Talk({'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk03'})
            EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecipieSea_IsTalked', 'IsWaitFinish': True})
            goto Event134
        }
      case 3:
        goto Event1
      case 4:
        goto Event1
      case 5:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecipieSea_IsTalked'}) {
            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk07'})
        } else {
            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk18'})
            EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecipieSea_IsTalked', 'IsWaitFinish': True})
        }
      case 6:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk26'})
      case 7:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk27'})
      case 10:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk06'})
      case 11:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk05'})
    }
}

void Ready_Npc_SouthernVillage007_Near() {
    switch Npc_SouthernVillage007.CheckActorAction13() {
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event14:
            Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near00'})
          case 1:
            Event90:
            Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near04'})
          case 2:
            goto Event90
          case 3:
            goto Event90
        }
      case 3:
        goto Event14
      case 5:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near00', 'DispFrame': 90, 'IsChecked': False})
      case 6:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near03'})
      case 10:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near03'})
      case 11:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near01'})
    }
}

void Finish_Npc_SouthernVillage007_Near() {
    switch Npc_SouthernVillage007.CheckActorAction13() {
      case 1:
        Event61:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Fish_K'}) {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_06'}) {
                Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near00'})
            } else {
                Event66:
                Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near00'})
            }
        } else {
            goto Event66
        }
      case 3:
        goto Event61
      case 5:
        goto Event61
      case 6:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near03'})
      case 10:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near03'})
      case 11:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near01'})
    }
}

void CookingBGM() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Bgm_CookingSuccess', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'SuccessSE'})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
}
