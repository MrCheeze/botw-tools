-------- EventFlow: Npc_HatenoVillage007 --------

Actor: Npc_HatenoVillage007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckPlayerWeaponFired', 'RandomChoice2', 'CheckWeather', 'HasPorchItem', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage007.CheckActorAction13() {
      case [0, 1, 12]:

        call NararaBlueFire()

        switch EventSystemActor.CheckWeather() {
          case 0:
            if Npc_HatenoVillage007.IsOnInstEventFlag() {
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk01'})
                Event71:
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk26'})
                Event64:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk23', 'IsCloseMessageDialog': True})
                    goto Event71
                  case 1:
                    Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk27'})
                    goto Event71
                  case 2:
                    Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk24'})
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_A'}) {
                        Event49:
                        Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk10'})
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_A'}) {
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk11'})
                            Event57:
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk18', 'IsCloseMessageDialog': True})
                            goto Event71
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk12'})
                            goto Event57
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk13'})
                            goto Event57
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk14'})
                            goto Event57
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_E'}) {
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk15'})
                            goto Event57
                        } else
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_F', 'Count': 1}) {
                            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk16'})
                            goto Event57
                        }
                    } else
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {
                        goto Event49
                    } else
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {
                        goto Event49
                    } else
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {
                        goto Event49
                    } else
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_E'}) {
                        goto Event49
                    } else
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_F', 'Count': 1}) {
                        goto Event49
                    } else {
                        Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk25'})
                        goto Event71
                    }
                  case 3:
                    Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk22', 'ASName': 'Hello'})
                }
            } else {
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk08'})
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk19'})
                Event66:
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk21'})
                goto Event64
            }
          case [1, 2, 3]:
            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk07'})
            goto Event66
        }
      case 10:

        call NararaBlueFire()

        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk04'})
        } else {
            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk05', 'ASName': 'Hello'})
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event39:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk06'})
            } else {
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk09'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event39
        }
    }
}

void Near() {
    switch Npc_HatenoVillage007.CheckActorAction13() {
      case [0, 1, 12]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Npc_HatenoVillage007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:near00', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_HatenoVillage007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:near02', 'IsChecked': False, 'DispFrame': 90})
        }
      case 10:
        Npc_HatenoVillage007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:near01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HatenoVillage007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:near03', 'IsChecked': False, 'DispFrame': 90})
    }
}

void NararaBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if Npc_HatenoVillage007.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk03'})
                Event74:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk02'})
                goto Event74
            }
        } else {
            Npc_HatenoVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage007:talk00'})
            goto Event74
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}
