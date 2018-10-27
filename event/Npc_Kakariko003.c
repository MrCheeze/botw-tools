-------- EventFlow: Npc_Kakariko003 --------

Actor: Npc_Kakariko003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion', 'Demo_ChangePosture', 'Demo_MoveToAnchor']
queries: ['CheckActorAction13', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_IncreasePorchItem']
queries: ['GeneralChoice2', 'CheckFlag', 'HasPorchItem', 'HasPorchItemByCategory', 'CheckAddPorchItem', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

void Talk() {
    switch Npc_Kakariko003.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Kakariko003.CheckActorAction13() {
          case 0:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 1:
            if Npc_Kakariko003.IsArriveAnchorForRain() {
                Npc_Kakariko003.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            } else
            if Npc_Kakariko003.IsOnInstEventFlag() {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk46'})
                Event282:
                Npc_Kakariko003.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                Npc_Kakariko003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk38'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk04'})
                } else {
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk05'})
                }
            } else {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk01', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True})
                goto Event282
            }
          case 2:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk08'})
          case 3:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk09'})
          case 4:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk12'})
          case [5, 8, 9, 12, 13]:
            switch EventSystemActor.CheckWeather() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking2_Finish'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking3_Finish'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking4_Finish'}) {
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk35', 'ASName': ''})
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking4_Activated'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking4_Reward'}) {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_08'}) {
                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk40', 'ASName': ''})

                                    call Demo001_0.SetCookResult2({'CookMaterial_01': 'BeeHome', 'CookMaterial_02': 'Item_Fruit_A'})

                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking4_Finish'})
                                } else {
                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                                }
                            } else {
                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk34', 'ASName': ''})
                                Event97:
                                if !EventSystemActor.GeneralChoice2() {
                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'BeeHome'}) {
                                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'BeeHome'})
                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk29', 'IsCloseMessageDialog': True})

                                        call Kakariko_Cha_001.CookingBGM()

                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk30'})
                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Cry', 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk26'})
                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk31', 'ASName': '', 'IsCloseMessageDialog': True})
                                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_08'}) {

                                            call Demo001_0.SetCookResult2({'CookMaterial_01': 'BeeHome', 'CookMaterial_02': 'Item_Fruit_A'})

                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking4_Finish'})
                                        } else {
                                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking4_Reward'})
                                        }
                                    } else {
                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk21', 'ASName': ''})
                                    }
                                } else {
                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk36', 'ASName': ''})
                                }
                            }
                        } else {
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk27'})
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk14', 'ASName': 'Talk_Surprised'})
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk45', 'ASName': ''})
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk28', 'ASName': ''})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking4_Activated'})
                            goto Event97
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking3_Activated'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking3_Reward'}) {
                            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_20'}) {
                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk40', 'ASName': ''})

                                call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Meat_01', 'CookMaterial_02': 'Item_Fruit_J'})

                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk20'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking3_Finish'})
                            } else {
                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                            }
                        } else {
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk33', 'ASName': ''})
                            Event80:
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_01'}) {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Meat_01'})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk24', 'IsCloseMessageDialog': True})

                                    call Kakariko_Cha_001.CookingBGM()

                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk25'})
                                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_20'}) {

                                        call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Meat_01', 'CookMaterial_02': 'Item_Fruit_J'})

                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk20'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking3_Finish'})
                                    } else {
                                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking3_Reward'})
                                    }
                                } else {
                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk21', 'ASName': ''})
                                }
                            } else {
                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk37', 'ASName': ''})
                            }
                        }
                    } else {
                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk22'})
                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk14', 'ASName': 'Talk_Surprised'})
                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk44', 'ASName': ''})
                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk23', 'ASName': ''})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking3_Activated'})
                        goto Event80
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking2_Activated'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking2_Reward'}) {
                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_07'}) {
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk40', 'ASName': ''})

                            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Material_06', 'CookMaterial_02': 'Item_Fruit_A'})

                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk13', 'IsCloseMessageDialog': False})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking2_Finish'})
                        } else {
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                        }
                    } else {
                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk32', 'ASName': ''})
                        Event53:
                        if !EventSystemActor.GeneralChoice2() {
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_06'}) {
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Material_06'})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk16', 'IsCloseMessageDialog': True})

                                call Kakariko_Cha_001.CookingBGM()

                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk19'})
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_07'}) {

                                    call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Material_06', 'CookMaterial_02': 'Item_Fruit_A'})

                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk20'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking2_Finish'})
                                } else {
                                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking2_Reward'})
                                }
                            } else {
                                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk21', 'ASName': ''})
                            }
                        } else {
                            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk17', 'ASName': ''})
                        }
                    }
                } else {
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk13'})
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk14', 'ASName': 'Talk_Surprised'})
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk43', 'ASName': ''})
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk15', 'ASName': ''})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_Cooking2_Activated'})
                    goto Event53
                }
              case [1, 2, 3]:
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk41'})
            }
          case 6:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk06'})
          case [7, 11]:
            Event283:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_007in007house'}) {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk47'})
            } else {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk07', 'IsCloseMessageDialog': True})
            }
        }
      case 10:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko003_NearSleepAnchor'}) {
            Event285:
            Npc_Kakariko003.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Sit'})
            Event287:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            goto Event283
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_003in007house'}) {
            Npc_Kakariko003.Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'IsAlignmentAnchor': True})
            goto Event285
        } else {
            goto Event287
        }
    }
}

void Near() {
    switch Npc_Kakariko003.CheckActorAction13() {
      case [0, 2]:
        Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_00', 'IsChecked': False, 'DispFrame': 90})
      case 4:
        if !EventSystemActor.CheckWeather() {
            Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_02', 'IsChecked': False, 'DispFrame': 90})
        }
      case 5:

        call Near_Challenge()

      case 11:
        Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_04', 'IsChecked': False, 'DispFrame': 90})
    }
}

void NearActorsTalk() {

    call Npc_Kakariko007.NearActorsTalk()

}

void NearActorsNear() {
    Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_01', 'IsChecked': False, 'DispFrame': 90})
}

void Near_Challenge() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_001_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking2_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking3_Finish'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking4_Finish'}) {
                        Event203:
                        Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_03', 'IsChecked': False, 'DispFrame': 90})
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking4_Activated'}) {
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'BeeHome'}) {
                            Event204:
                            Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_03', 'DispFrame': 300, 'IsChecked': True})
                        } else {
                            goto Event203
                        }
                    } else {
                        goto Event204
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking3_Activated'}) {
                    if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 12}) {
                        goto Event204
                    } else {
                        goto Event203
                    }
                } else {
                    goto Event204
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_Cooking2_Activated'}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_06'}) {
                    goto Event204
                } else {
                    goto Event203
                }
            } else {
                goto Event204
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_001_Activated'}) {
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Plant_M', 'Count': 1}) {
                goto Event204
            } else {
                goto Event203
            }
        } else {
            goto Event204
        }
      case [1, 2, 3]:
        Npc_Kakariko003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:near_05'})
    }
}

void NABE_CK() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Kakariko003")})

    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk42'})
}
