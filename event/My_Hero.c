-------- EventFlow: My_Hero --------

Actor: Npc_HyruleDepthHatago006
entrypoint: None()
actions: ['Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice3', 'HasPorchItem', 'HasPorchItemByCategory', 'GeneralChoice2', 'CheckWeather', 'CheckFlag', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void FirstTalk() {
    Npc_HyruleDepthHatago006.Demo_BecomeSpeaker({'IsWaitFinish': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_HyruleDepthHatago006")})

    Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:FirstTalk00', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
    Npc_HyruleDepthHatago006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:FirstTalk01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        if !EventSystemActor.HasPorchItemByCategory({'Category': 3, 'Count': 1}) {
            Event7:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterSword00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True})
                Event48:
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_J', 'Count': 1}) {
                    Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk02', 'IsCloseMessageDialog': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_J'})

                    Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk03'})
                    Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk04'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'My_Hero_Activated', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'My_Hero_Finish'})
                } else {
                    Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk02_PorchFull'})
                    Event23:
                    EventSystemActor.Demo_FlagON({'FlagName': 'My_Hero_Activated', 'IsWaitFinish': True})
                }
            } else {
                Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:NomalSword00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True})
                Event20:
                Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:FirstGoodBye01', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
                goto Event23
            }
        } else
        if !EventSystemActor.HasPorchItemByCategory({'Category': 5, 'Count': 1}) {
            goto Event7
        } else {
            Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:NoSword00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True})
            goto Event20
        }
      case 1:
        if !EventSystemActor.HasPorchItemByCategory({'Category': 3, 'Count': 1}) {
            Event13:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                Event17:
                Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterSword01', 'IsBecomingSpeaker': True})
                goto Event48
            } else {
                Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:NomalSword01', 'IsBecomingSpeaker': True})
                goto Event20
            }
        } else
        if !EventSystemActor.HasPorchItemByCategory({'Category': 5, 'Count': 1}) {
            goto Event13
        } else {
            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:NoSword01', 'IsBecomingSpeaker': True})
            goto Event20
        }
      case 2:
        Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:FirstGoodBye00', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
        Npc_HyruleDepthHatago006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
            goto Event17
        } else {
            goto Event20
        }
    }
}

void Talk() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        Event21:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk00'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk01'})
                goto Event48
            } else {
                Event31:
                Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:GoodBye00', 'IsCloseMessageDialog': True})
            }
        } else
        if Npc_HyruleDepthHatago006.IsOnInstEventFlag() {
            Event27:
            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Talk01'})
        } else {
            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Talk00', 'IsCloseMessageDialog': False})
        }
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Talk02'})
            goto Event27
          case 1:
            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Talk03'})
            goto Event27
          case 2:
            goto Event31
        }
      case [1, 2, 3]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HyruleDepthHatago006_InUmayado'}) {
            goto Event21
        } else
        if Npc_HyruleDepthHatago006.IsArriveAnchorForRain() {
            goto Event21
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 2, 'Arg_Greeting': 'NotAndNot'})

            Npc_HyruleDepthHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Run_Rain00', 'IsCloseMessageDialog': True})
        }
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'My_Hero_Activated'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event47:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                Event46:
                Npc_HyruleDepthHatago006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Near00', 'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300})
            } else {
                Npc_HyruleDepthHatago006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            }
          case [1, 2, 3]:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_HyruleDepthHatago006_InUmayado'}) {
                goto Event47
            } else
            if Npc_HyruleDepthHatago006.IsArriveAnchorForRain() {
                goto Event47
            } else {
                Npc_HyruleDepthHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Near01'})
            }
        }
    } else {
        goto Event46
    }
}
