-------- EventFlow: Npc_DeathEastHatago_003 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_AppearRupee']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckRupee', 'CheckAddPorchItem', 'CheckTimeType', 'GeneralChoice4', 'HasCookResultInPorch']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: []
queries: ['ComparePlayerFireResistantLevel']
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_DeathEastHatago_003
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_DeathEastHatago_003.IsOnInstEventFlag() {
        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk07'})
        Event135:
        switch EventSystemActor.HasCookResultInPorch({'Count': 3, 'PorchItemName': 'Item_Cook_C_17', 'CookEffectType': 'Fireproof'}) {
          case [2, 1]:
            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk23'})
            Event141:
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk24'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckRupee({'Value': 60}) {
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -60})
                        if EventSystemActor.CheckFlag({'FlagName': 'Johnny_UnburnedMedicineExplain'}) {
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk17'})

                            call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 1})

                            Event142:
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                            switch GameROMPlayer.ComparePlayerFireResistantLevel() {
                              case 0:
                                switch EventSystemActor.HasCookResultInPorch({'Count': 3, 'CookEffectType': 'Fireproof', 'PorchItemName': 'Item_Cook_C_17'}) {
                                  case [2, 1]:
                                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk25'})
                                  case 0:
                                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk26'})
                                }
                              case [1, 2, 3, 4]:
                                Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk28'})
                            }
                        } else {
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk14'})

                            call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 1})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Johnny_UnburnedMedicineExplain'})
                            goto Event142
                        }
                    } else {
                        Event19:
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk16'})
                    }
                } else {
                    Event18:
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk13'})
                }
              case 1:
                if EventSystemActor.CheckRupee({'Value': 110}) {
                    if EventSystemActor.CheckAddPorchItem({'Count': 2, 'PorchItemName': 'Item_Cook_C_17'}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -110})
                        if EventSystemActor.CheckFlag({'FlagName': 'Johnny_UnburnedMedicineExplain'}) {
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk17'})

                            call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 2})

                            goto Event142
                        } else {
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk14'})

                            call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 2})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Johnny_UnburnedMedicineExplain'})
                            goto Event142
                        }
                    } else {
                        goto Event19
                    }
                } else {
                    goto Event18
                }
              case 2:
                if EventSystemActor.CheckRupee({'Value': 150}) {
                    if EventSystemActor.CheckAddPorchItem({'Count': 3, 'PorchItemName': 'Item_Cook_C_17'}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -150})
                        if EventSystemActor.CheckFlag({'FlagName': 'Johnny_UnburnedMedicineExplain'}) {
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk17'})

                            call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 3})

                            goto Event142
                        } else {
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk14'})

                            call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 3})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Johnny_UnburnedMedicineExplain'})
                            goto Event142
                        }
                    } else {
                        goto Event19
                    }
                } else {
                    goto Event18
                }
              case 3:
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                switch GameROMPlayer.ComparePlayerFireResistantLevel() {
                  case 0:
                    switch EventSystemActor.HasCookResultInPorch({'Count': 3, 'PorchItemName': 'Item_Cook_C_17', 'CookEffectType': 'Fireproof'}) {
                      case [2, 1]:
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk19'})
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk20'})
                      case 0:
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk12'})
                    }
                  case [1, 2, 3, 4]:
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk19'})
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk27'})
                }
            }
          case 0:
            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk18', 'IsCloseMessageDialog': False})
            Event124:
            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk21', 'IsCloseMessageDialog': False})
            goto Event141
        }
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk00'})
        Event92:
        if EventSystemActor.CheckFlag({'FlagName': 'Johnny_UnburnedMedicineBuy'}) {
            goto Event135
        } else {
            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk04'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk05'})
                switch GameROMPlayer.ComparePlayerFireResistantLevel() {
                  case 0:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Johnny_UnburnedMedicineBuy', 'IsWaitFinish': True})
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk08'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk09', 'IsCloseMessageDialog': False})
                        switch EventSystemActor.HasCookResultInPorch({'Count': 3, 'CookEffectType': 'Fireproof', 'PorchItemName': 'Item_Cook_C_17'}) {
                          case [2, 1]:
                            Event172:
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk19'})
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk20'})
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk31'})
                          case 0:
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk30'})
                            goto Event124
                        }
                    } else {
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk11', 'IsCloseMessageDialog': False})
                        switch EventSystemActor.HasCookResultInPorch({'Count': 3, 'CookEffectType': 'Fireproof', 'PorchItemName': 'Item_Cook_C_17'}) {
                          case [2, 1]:
                            goto Event172
                          case 0:
                            Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk32'})
                            goto Event124
                        }
                    }
                  case [1, 2, 3, 4]:
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk10'})
                }
            } else {
                Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk06'})
                switch GameROMPlayer.ComparePlayerFireResistantLevel() {
                  case 0:
                    switch EventSystemActor.HasCookResultInPorch({'Count': 3, 'CookEffectType': 'Fireproof', 'PorchItemName': 'Item_Cook_C_17'}) {
                      case [2, 1]:
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk19'})
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk20'})
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk31'})
                      case 0:
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk29'})
                        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk33'})
                    }
                  case [1, 2, 3, 4]:
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk19'})
                    Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk27'})
                }
            }
        }
      case [2, 3]:
        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk01'})
        goto Event92
      case [4, 5, 6, 7]:
        Npc_DeathEastHatago_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_003:talk02'})
        goto Event92
    }
}
