-------- EventFlow: Npc_HighMountain008 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType', 'HasPorchItem', 'GeneralChoice2', 'CheckFlag', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Upper'}) {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Lower'}) {
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Armor_009_Head', 'Count': 1}) {
                Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk05', 'ASName': 'Talk_Surprise_Small'})
                Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk13', 'ASName': ''})
                Event40:
                Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk12'})
                if !EventSystemActor.GeneralChoice2() {

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HighMountain008")})

                    Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk03'})
                } else {
                    Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk02'})
                }
            } else {
                Event19:
                Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk06'})
                goto Event40
            }
        } else {
            goto Event19
        }
    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Armor_009_Head', 'Count': 1}) {
        goto Event19
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Lower'}) {
        goto Event19
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1, 2, 3, 4, 5]:
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk00'})
        goto Event40
      case [6, 7]:
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk01'})
        goto Event40
    }
}

void Near() {
    Npc_HighMountain008.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': 'Act_ShopStaff_Hello', 'MessageId': 'EventFlowMsg/Npc_HighMountain008:near00'})
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Armor({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName', 'Self': ActorIdentifier(name="Npc_HighMountain008")})


    call Sell()

}

void Sell() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HighMountain008_SoldOut'}) {
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:talk11'})
    } else
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:Com_Talk_11'})
      case 1:
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:Com_Talk_11b'})
      case 2:
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:Com_Talk_11c'})
      case 3:
        Npc_HighMountain008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain008:Com_Talk_11d'})
    }
}
