-------- EventFlow: Carnivorous_Boy --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_IncreaseGameDataInt', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'HasPorchItem', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HyruleDepthHatago003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Carnivorous_Boy_Activated'}) {
        if Npc_HyruleDepthHatago003.IsOnInstEventFlag() {
            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge01'})
            Event16:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Meat_11', 'Count': 1}) {
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge02'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge05'})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'TalkHandOver', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_Meat_11', 'Value': -1, 'IsWaitFinish': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                    EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'Carnivorous_Boy_Stuffed'})
                    Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge07'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Carnivorous_Boy_Finish'})
                } else {
                    Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge06'})
                    Event28:
                    if Npc_HyruleDepthHatago003.IsOnInstEventFlag() {
                        Event30:
                        Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:ChallengeAsk01'})
                        Event31:
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:ChallengeAnswer00', 'IsCloseMessageDialog': True})
                            Event53:
                            EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                            goto Event30
                          case 1:
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:ChallengeAnswer01', 'IsCloseMessageDialog': True})
                            goto Event53
                          case 2:
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:ChallengeAnswer02', 'IsCloseMessageDialog': True})
                            goto Event53
                          case 3:
                            Event11:
                            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:FirstGoodBye00', 'IsCloseMessageDialog': True})
                        }
                    } else {
                        Event29:
                        Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:ChallengeAsk00'})
                        goto Event31
                    }
                }
            } else
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_45'}) {
                Event27:
                Npc_HyruleDepthHatago003.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge03', 'IsWaitFinish': True})
                goto Event28
            } else
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_06'}) {
                goto Event27
            } else {

                call MeatCheck()

            }
        } else {
            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge00'})
            goto Event16
        }
    } else {
        Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:FirstTalk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:FirstTalk01'})
            if !EventSystemActor.GeneralChoice2() {
                Event8:
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:FirstTalk02', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'Carnivorous_Boy_Activated', 'IsWaitFinish': True})
                Npc_HyruleDepthHatago003.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            } else {
                Npc_HyruleDepthHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:FirstTalk03'})
                goto Event8
            }
        } else {

            call GoodBye()

        }
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Carnivorous_Boy_Activated'}) {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Meat_11', 'Count': 1}) {
            Event37:
            Npc_HyruleDepthHatago003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:NearChallenge00', 'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True})
        } else {
            Npc_HyruleDepthHatago003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:NearChallenge00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        }
    } else {
        goto Event37
    }
}

void GoodBye() {
    goto Event11
}

void MeatCheck() {
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_02'}) {
        Event47:
        Npc_HyruleDepthHatago003.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Challenge04', 'IsWaitFinish': True})
        goto Event28
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_40'}) {
        goto Event47
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_05'}) {
        goto Event47
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_01'}) {
        goto Event47
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Roast_01'}) {
        goto Event47
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_04'}) {
        goto Event47
    } else {
        goto Event29
    }
}
