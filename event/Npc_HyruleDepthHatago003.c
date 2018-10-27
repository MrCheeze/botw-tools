-------- EventFlow: Npc_HyruleDepthHatago003 --------

Actor: Npc_HyruleDepthHatago003
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['CheckActorAction', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreasePorchItem', 'Demo_IncreaseGameDataInt', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckWeather', 'CheckGameDataInt', 'GeneralChoice4', 'HasPorchItem', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HyruleDepthHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        if Npc_HyruleDepthHatago003.IsOnInstEventFlag() {
            Event14:
            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Ask00'})
            Event17:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Carnivorous_Boy_Stuffed', 'Value': 2, 'Operator': 'GreaterThan'}) {
                    Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer04', 'IsCloseMessageDialog': True})
                    Event43:
                    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                    Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Ask01'})
                    goto Event17
                } else {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Meat_11', 'Count': 1}) {
                        Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer02', 'IsCloseMessageDialog': False})
                        if !EventSystemActor.GeneralChoice2() {
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'TalkHandOver', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                            EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                            EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_Meat_11', 'Value': -1, 'IsWaitFinish': True})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'Carnivorous_Boy_Stuffed'})
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer03', 'IsCloseMessageDialog': True})
                        } else {
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer05', 'IsCloseMessageDialog': True})
                            goto Event43
                        }
                    } else {
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_45'}) {
                            Event22:
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer01', 'IsCloseMessageDialog': True})
                            goto Event43
                        } else {
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_06'}) {
                                goto Event22
                            } else {
                                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer00', 'IsCloseMessageDialog': True})
                                goto Event43
                            }
                        }
                    }
                }
              case 1:
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer06', 'IsCloseMessageDialog': True})
                goto Event43
              case 2:
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Answer07', 'IsCloseMessageDialog': True})
                goto Event43
              case 3:
                if Npc_HyruleDepthHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
                    if Npc_HyruleDepthHatago003.IsArriveAnchorForRain() {
                        Event35:
                        Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:GoodBye00', 'IsCloseMessageDialog': True})
                    } else {
                        Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:GoodBye01'})
                    }
                } else {
                    goto Event35
                }
            }
        } else {
            if Npc_HyruleDepthHatago003.IsArriveAnchorForRain() {
                goto Event14
            } else {
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk01'})
                goto Event14
            }
        }
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event10:
            if Npc_HyruleDepthHatago003.IsOnInstEventFlag() {
                goto Event14
            } else {
                Npc_HyruleDepthHatago003.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event14
            }
          case 1:
            Event8:
            if Npc_HyruleDepthHatago003.IsArriveAnchorForRain() {
                goto Event10
            } else {
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk02', 'IsCloseMessageDialog': True})
            }
          case 2:
            goto Event8
          case 3:
            goto Event8
        }
    }
}

void Near() {
    if Npc_HyruleDepthHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_HyruleDepthHatago003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event1:
            Npc_HyruleDepthHatago003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Event2:
            if Npc_HyruleDepthHatago003.IsArriveAnchorForRain() {
                goto Event1
            } else {
                Npc_HyruleDepthHatago003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:RunRain00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            }
          case 2:
            goto Event2
          case 3:
            goto Event2
        }
    }
}
