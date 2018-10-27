-------- EventFlow: Npc_Kakariko012 --------

Actor: Npc_Kakariko012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetAttentionForbidSale', 'Demo_SellItem', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_NoDeleteCurrent', 'Demo_FlagOFF']
queries: ['RandomChoice2', 'CheckTimeType', 'CheckFlag', 'CheckPlayerState', 'GeneralChoice3', 'RandomChoice4', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Argument
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_OnMUAssignSaveForUsed']
queries: ['IsWeapon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko012_Sheikah_thanks', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko012_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko012_SoldOut'}) {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk06'})
            Event267:
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko012")})

                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk20', 'IsCloseMessageDialog': True})
                Event297:
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk14'})
                goto Event267
              case 1:
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk07', 'IsCloseMessageDialog': True})
                goto Event297
              case 2:
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk19'})
            }
        } else {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk01'})
            Event248:
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko012")})

                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk20', 'IsCloseMessageDialog': True})
                Event293:
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk14'})
                goto Event248
              case 1:
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk07', 'IsCloseMessageDialog': True})
                goto Event293
              case 2:
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk00'})
            }
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:FirstTalk01', 'IsCloseMessageDialog': False})
            Event348:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko012_Talk', 'IsWaitFinish': True})
            goto Event248
        } else {
            Npc_Kakariko012.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko012:FirstTalk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
            goto Event348
        }
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko012_SoldOut'}) {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event73:
            if !EventSystemActor.RandomChoice2() {
                Npc_Kakariko012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Near00', 'DispFrame': 90, 'IsChecked': False})
            } else {
                Npc_Kakariko012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Near01', 'DispFrame': 90, 'IsChecked': False})
            }
          case 1:
            goto Event73
          case 2:
            goto Event73
          case 3:
            goto Event73
          case 4:
            goto Event73
          case 5:
            goto Event73
          case 6:
            Event69:
            Npc_Kakariko012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Near02', 'DispFrame': 90, 'IsChecked': False})
          case 7:
            goto Event69
        }
    }
}

void Sell() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk17'})
        Event374:
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko012_Sheikah_thanks', 'IsWaitFinish': True})
      case 1:
        Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk08'})
        goto Event374
      case 2:
        Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk26'})
        goto Event374
      case 3:
        Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk27'})
        goto Event374
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko012_Talk', 'IsWaitFinish': True})
    if Argument.IsWeapon() {
        Event366:
        EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
        if !EventSystemActor.RandomChoice2() {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:ClerkAsk00', 'IsOverWriteLabelActorName': False})
            Event359:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko012.Demo_SellItem({'IsWaitFinish': True})
                Npc_Kakariko012.Demo_SetAttentionForbidSale({'IsWaitFinish': True})
                Argument.Demo_OnMUAssignSaveForUsed({'IsWaitFinish': False})
                Argument.Demo_PlayASForDemo({'ASName': 'VisibleOff', 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0})

                call GetDemo.ShowGetDemoDialogByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Arg_CurrentActorName'})

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})

                call Sell()

            } else {
                Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Com_Talk_61', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Com_Talk_60', 'IsOverWriteLabelActorName': False})
            goto Event359
        }
    } else {
        goto Event366
    }
}

void SheikahSuitsDemo() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_Kakariko012")})

    if Npc_Kakariko012.CheckActorAction({'ActionName': 'Root/Terror'}) {
        Npc_Kakariko012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Event353:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko012_Talk'}) {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk24'})
            Event346:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko012_Sheikah_first', 'IsWaitFinish': True})
        } else {
            Npc_Kakariko012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk25'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko012_Talk', 'IsWaitFinish': True})
            goto Event346
        }
    } else {
        goto Event353
    }
}
