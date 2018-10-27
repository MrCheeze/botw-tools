-------- EventFlow: Npc_Zora027 --------

Actor: Npc_Zora027
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckWeather', 'RandomChoice2', 'GeneralChoice4', 'HasPorchItem', 'GeneralChoice2', 'CheckEquipment']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call MorudenHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora027_First'}) {

        call Moruden2Taku()

    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora027_First', 'IsWaitFinish': True})
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_049'}) {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk00', 'IsCloseMessageDialog': True})
            Event68:

            call MorudenFirst()

            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk04'})
            switch EventSystemActor.GeneralChoice4() {
              case 2:
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk29'})
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk30'})
              case 3:
                Event102:
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk09'})
            }
        } else {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk36'})
            goto Event68
        }
    }
}

void Near() {
    Event32:
    Npc_Zora027.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora027:near00', 'DispFrame': 90, 'IsChecked': False})
}

void ReadyNear_MorudenStatue() {
    goto Event32
}

void Step1Near_MorudenStatue() {
    goto Event32
}

void FinishNear_MorudenStatue() {
    goto Event32
}

void Water_Relic_Finished_Talk() {

    call MorudenHello()

    Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk18'})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora027_NormalFirst'}) {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk27'})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora027_NormalFirst'})
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk25'})
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk26'})
    }
}

void Water_Relic_RainStop_Talk() {

    call MorudenHello()

    switch EventSystemActor.CheckWeather() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora027_RainFirst'}) {
            Event67:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora027_First'}) {
                Event117:
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk33'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk12'})
                } else {
                    goto Event102
                }
            } else {
                Event59:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora027_First', 'IsWaitFinish': True})
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk14'})

                call MorudenFirst()

                Event112:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora027_Spear'}) {
                    Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk11'})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora027_Spear', 'IsWaitFinish': True})
                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora027_RainFirst', 'IsWaitFinish': True})
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk13'})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora027_First'}) {
                goto Event117
            } else {
                goto Event59
            }
        }
      case 1:
        goto Event67
      case 2:
        goto Event67
      case 3:
        goto Event67
    }
}

void Water_Relic_RainStop_Near() {
    goto Event32
}

void Ready_MorudenStatue() {
    Event78:

    call MorudenHello()

    Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk37'})
    if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Activated'}) {
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_049'}) {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk38'})
            Event82:
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk17'})
            if !EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Step1'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StatueofZora_Step1'})
            }
        } else {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk16'})
            goto Event82
        }
    } else {
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_049'}) {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk39'})
        } else {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk40'})
        }
    }
}

void Step1_MorudenStatue() {
    goto Event78
}

void Finish_MorudenStatue() {

    call MorudenHello()

    Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk18'})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Spear_049', 'Count': 1}) {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk20'})
        Event89:
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk21'})
        switch EventSystemActor.GeneralChoice4() {
          case 2:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Spear_049', 'Count': 1}) {
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk24'})
            } else {
                Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk22'})
            }
          case 3:
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk23'})
        }
    } else {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk19'})
        goto Event89
    }
}

void Water_Relic_Finished_Near() {
    Npc_Zora027.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:near01'})
}

void MorudenHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora027.CheckActorAction13() {
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk03'})
            Event48:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk06'})
            goto Event48
        }
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk07'})
            goto Event48
        } else {
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk08'})
            goto Event48
        }
    }
}

void MorudenFirst() {
    Npc_Zora027.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
    Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk01'})
    if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk28'})
    } else {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk02'})
    }
}

void Moruden2Taku() {
    if !EventSystemActor.RandomChoice2() {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk32'})
        Event105:
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk31'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk12'})
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk34'})
          case 1:
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk05'})
            goto Event112
          case 2:
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk29'})
            Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk30'})
            goto Event112
          case 3:
            goto Event102
        }
    } else {
        Npc_Zora027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora027:talk10'})
        goto Event105
    }
}
