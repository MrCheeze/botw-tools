-------- EventFlow: Npc_AncientAssistant003 --------

Actor: Npc_AncientAssistant003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13', 'IsSoldOut']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice3', 'RandomChoice4', 'RandomChoice2', 'HasSpecificArmorSeries', 'CheckExistActor', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call GuranettoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_AncientAssistant003_First'}) {
        Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk04'})
        Event27:
        switch EventSystemActor.GeneralChoice3() {
          case 0:

            call GuranettoFlagSell()

            Event84:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_AncientAssistant003_Sorekara', 'IsWaitFinish': True})
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk11'})
            goto Event27
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_AncientAssistant003")})

            goto Event84
          case 2:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk14'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_AncientAssistant003_First', 'IsWaitFinish': True})
        Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk07'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk08'})
            Event16:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk10'})
            goto Event27
        } else {
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk09'})
            goto Event16
        }
    }
}

void Near() {
    Npc_AncientAssistant003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:near00', 'DispFrame': 90, 'IsChecked': False})
}

void GuranettoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_AncientAssistant003.CheckActorAction13() {
      case [0, 1]:
        if Npc_AncientAssistant003.IsOnInstEventFlag() {
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk03'})
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk00', 'IsOverWriteLabelActorName': False})
          case [2, 3, 4, 5]:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk01'})
          case [6, 7]:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk02'})
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk19'})
            Event39:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk20'})
            goto Event39
        }
      case 11:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk15'})
            goto Event39
          case 1:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk16'})
            goto Event39
          case 2:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk17'})
            goto Event39
          case 3:
            Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk18'})
            goto Event39
        }
    }
}

void GuranettoFlagSell() {
    if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 0}) {
        if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 1}) {
            if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 2}) {
                if Npc_AncientAssistant003.IsSoldOut({'TableName': 'Normal'}) {
                    if Npc_AncientAssistant003.IsSoldOut({'TableName': 'Normal_S'}) {
                        Event105:
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                            Event88:

                            call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Normal_S'})

                        } else
                        if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                            goto Event88
                        } else {

                            call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'TableName': 'Normal', 'Self2': ActorIdentifier(name="Npc_AncientAssistant003")})

                        }
                    } else {
                        Event23:
                        Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk13'})
                        goto Event105
                    }
                } else {
                    goto Event23
                }
            } else {

                call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstRubber', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk24'})

                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event90:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_01_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event90
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_01'})

                }
            }
        } else {

            call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstPower', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk23'})

            if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 2}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event92:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_C_01_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event92
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_C_01'})

                }
            } else {

                call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstRubber', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk24'})

                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event94:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_03_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event94
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_03'})

                }
            }
        }
    } else {

        call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstClimb', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk22'})

        if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 1}) {
            if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 2}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event48:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_B_01_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event48
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_B_01'})

                }
            } else {

                call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstRubber', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk24'})

                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event98:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_02_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event98
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_02'})

                }
            }
        } else {

            call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstPower', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk23'})

            if !EventSystemActor.HasSpecificArmorSeries({'SeriesType': 2}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event100:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_B_02_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event100
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_B_02'})

                }
            } else {

                call GuranettoExplain({'FlagName': 'Npc_AncientAssistant003_FirstRubber', 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk24'})

                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_030'}) {
                    Event102:

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_04_S'})

                } else
                if !EventSystemActor.CheckExistActor({'IsCheckLife': False, 'IsCheckEquipStand': True, 'ActorName': 'Weapon_Shield_030'}) {
                    goto Event102
                } else {

                    call Yorozuya_Kaiwa.Yorozuya_KounyuSetTbl({'Self2': ActorIdentifier(name="Npc_AncientAssistant003"), 'TableName': 'Shop_A_04'})

                }
            }
        }
    }
}

void GuranettoExplain() {
    if EventSystemActor.CheckFlag({'FlagName': 'FlagName'}) {
        Event85:
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'FlagName', 'IsWaitFinish': True})
        Npc_AncientAssistant003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_AncientAssistant003_Sorekara', 'IsWaitFinish': True})
        goto Event85
    }
}
