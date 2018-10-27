-------- EventFlow: Npc_SmallOasis009 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckEquipArmorSeriesType', 'RandomChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Step1'}) {
            Event56:
            if EventSystemActor.CheckFlag({'FlagName': 'Oasis_Meat_SoldOut'}) {
                Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_22'})
                Event2:
                if !EventSystemActor.GeneralChoice2() {
                    Event8:
                    Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_05'})

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SmallOasis009")})

                    Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_02'})
                } else {
                    Event35:
                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                        Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_09'})
                    } else {
                        Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_03'})
                    }
                }
            } else {
                if Npc_SmallOasis009.IsOnInstEventFlag() {
                    Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_17'})
                    goto Event2
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event44:
                        Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_15'})
                        goto Event2
                      case 1:
                        goto Event44
                      case 2:
                        Event7:
                        Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_01'})
                        goto Event2
                      case 3:
                        goto Event7
                      case 4:
                        goto Event7
                      case 5:
                        Event1:
                        Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_10'})
                        goto Event2
                      case 6:
                        goto Event1
                      case 7:
                        goto Event1
                    }
                }
            }
        } else {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_08'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event8
            } else {
                goto Event35
            }
        }
    } else {
        goto Event56
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Oasis_Meat_SoldOut'}) {
        Npc_SmallOasis009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_21'})
    } else {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            Npc_SmallOasis009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Near002'})
        } else {
            Npc_SmallOasis009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Near001', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void Sell() {
    switch Npc_SmallOasis009.CheckPlacedItemSaled() {
      case 0:
        Event48:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_07'})
          case 1:
            Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_06'})
          case 2:
            Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_18'})
          case 3:
            Npc_SmallOasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_19'})
        }
      case 1:
        goto Event48
      case 2:
        goto Event48
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_SmallOasis009")})


    call Sell()

}

void AttentionDemo() {
    Npc_SmallOasis009.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if !EventSystemActor.CheckFlag({'FlagName': 'Oasis_Meat_SoldOut'}) {
        Npc_SmallOasis009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis009:Talk_12', 'DispFrame': 90, 'IsChecked': False})
    }
}
