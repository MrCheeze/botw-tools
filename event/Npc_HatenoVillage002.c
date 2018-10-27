-------- EventFlow: Npc_HatenoVillage002 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckTimeType', 'RandomChoice4', 'GeneralChoice4', 'RandomChoice2', 'CheckFlag', 'CheckPlayerWeaponFired']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call AkaezoBlueFire()

    Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk15'})
    Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk14'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage002_First', 'IsWaitFinish': True})
}

void Sell() {
    switch Npc_HatenoVillage002.CheckPlacedItemSaled() {
      case [0, 2]:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:Com_Talk_11', 'ASName': ''})
          case 1:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:Com_Talk_11b', 'ASName': ''})
          case 2:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:Com_Talk_11d', 'ASName': ''})
          case 3:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:Com_Talk_11c', 'ASName': ''})
        }
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk09', 'ASName': ''})
          case 1:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk10', 'ASName': ''})
          case 2:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk08', 'ASName': ''})
          case 3:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk11', 'ASName': ''})
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage002_First'}) {
        Event65:

        call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_HatenoVillage002")})


        call Sell()

    } else {
        Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk15'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage002_First', 'IsWaitFinish': True})
        goto Event65
    }
}

void Near() {
    Event53:
    switch Npc_HatenoVillage002.CheckActorAction13() {
      case [0, 1]:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoVillage002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:near01', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_HatenoVillage002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:near02', 'IsChecked': False, 'DispFrame': 90})
        }
      case 2:
        Npc_HatenoVillage002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:near03', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        Npc_HatenoVillage002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Npc_HatenoVillage002_First_Talk() {

    call AkaezoBlueFire()

    if Npc_HatenoVillage002.IsOnInstEventFlag() {
        Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk16', 'ASName': ''})
        Event38:
        Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk17', 'ASName': ''})
        Event16:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk23'})
            Event19:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk13', 'ASName': ''})
            goto Event16
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HatenoVillage002")})

            goto Event19
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage002_You'}) {
                Event49:
                Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk19', 'ASName': ''})
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk20', 'ASName': '', 'IsCloseMessageDialog': True})
                    goto Event19
                } else {
                    Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk21', 'ASName': '', 'IsCloseMessageDialog': True})
                    goto Event19
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoVillage002_You'})
                Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk18', 'ASName': ''})
                goto Event49
            }
          case 3:
            Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk07', 'ASName': ''})
        }
    } else
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk00', 'IsCloseMessageDialog': False, 'ASName': ''})
        goto Event38
      case [1, 2, 3, 4, 5]:
        Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk01', 'IsCloseMessageDialog': False, 'ASName': ''})
        goto Event38
      case [6, 7]:
        Npc_HatenoVillage002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage002:talk02', 'ASName': ''})
        goto Event38
    }
}

void Npc_HatenoVillage002_First_Near() {
    goto Event53
}

void AkaezoBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}
