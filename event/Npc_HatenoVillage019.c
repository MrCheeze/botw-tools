-------- EventFlow: Npc_HatenoVillage019 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckTimeType', 'RandomChoice2', 'CheckPlayerWeaponFired', 'GeneralChoice4', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage019
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage019_First', 'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call Sofora_BuleFire()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk16'})
            Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk20'})
            Event120:
            Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk15'})
            Event82:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk06'})
                    Event88:
                    Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk07'})

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HatenoVillage019")})

                    Event84:
                    Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk03'})
                    goto Event82
                } else {
                    goto Event88
                }
              case 1:
                Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk17'})
                goto Event84
              case 2:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk06'})
                    Event91:
                    Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk05'})
                    goto Event84
                } else {
                    goto Event91
                }
              case 3:
                Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk02'})
            }
        } else {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event121:
                Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk16'})
                Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk00'})
                goto Event120
              case 1:
                goto Event121
              case 2:
                goto Event121
              case 3:
                goto Event121
              case 4:
                goto Event121
              case 5:
                goto Event121
              case 6:
                Event85:
                Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk01'})
                goto Event120
              case 7:
                goto Event85
            }
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    if !EventSystemActor.RandomChoice2() {
        Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk06'})
        Event140:

        call DisplayShop.Armor({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName', 'Self': ActorIdentifier(name="Npc_HatenoVillage019")})


        call Sell()

    } else {
        goto Event140
    }
}

void Sell() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC019_Npc_SoldOut'}) {
        Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk10'})
    } else {
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk11'})
        } else {
            Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk12'})
        }
    }
}

void Sofora_BuleFire() {

    call InitTalk.InitTalkEquip({'Arg_Turn': 0})

    if Npc_HatenoVillage019.IsOnInstEventFlag() {
        Event114:
        Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk14'})
    } else {
        Npc_HatenoVillage019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:talk13'})
        goto Event114
    }
}

void Near() {
    if Npc_HatenoVillage019.CheckActorAction13() {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage019_First'}) {
            Npc_HatenoVillage019.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:near00', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}
