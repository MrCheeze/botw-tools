-------- EventFlow: KorokMini_RodShiren --------

Actor: Npc_kokiri012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckEquipment', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_kokiri012_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri012_Talk'}) {
        if Npc_kokiri012.IsOnInstEventFlag() {
            Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Talk010'})
        } else {
            Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Talk000'})
        }
        Event5:
        if !EventSystemActor.GeneralChoice2() {
            Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Talk020'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RodShiren_Activated'})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_049', 'Count': 1}) {
                Event37:
                Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Talk040', 'IsCloseMessageDialog': True})
                Event17:
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_049', 'Count': 1}) {
                    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_061'}) {
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk061'})
                        Event55:

                        call Common.ShowSword({'PorchItemName_Weapon': 'Weapon_Sword_049'})

                        Npc_kokiri012.Demo_PlayASForDemo({'ASName': 'Surprised', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk040', 'IsCloseMessageDialog': False})
                        Event24:
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk050', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                        Event28:
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk060'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RodShiren_Finish'})
                    } else
                    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_049'}) {
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk041', 'IsCloseMessageDialog': True})
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkWeaponShowSword', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        Npc_kokiri012.Demo_PlayASForDemo({'ASName': 'Surprised', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk040', 'IsCloseMessageDialog': False})
                        goto Event24
                    } else {
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk020', 'IsCloseMessageDialog': True})
                        goto Event55
                    }
                } else
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_061', 'Count': 1}) {
                    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_061'}) {
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk031', 'IsCloseMessageDialog': True})
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkWeaponShowSword', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        Npc_kokiri012.Demo_PlayASForDemo({'ASName': 'Surprised', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk030', 'IsCloseMessageDialog': False})
                        Event22:
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk050', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                        goto Event28
                    } else {
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk020', 'IsCloseMessageDialog': True})

                        call Common.ShowSword({'PorchItemName_Weapon': 'Weapon_Sword_061'})

                        Npc_kokiri012.Demo_PlayASForDemo({'ASName': 'Surprised', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk030', 'IsCloseMessageDialog': False})
                        goto Event22
                    }
                } else
                if Npc_kokiri012.IsOnInstEventFlag() {
                    Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk010'})
                } else {
                    Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_F_Talk000'})
                }
            } else
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_061', 'Count': 1}) {
                goto Event37
            }
        } else {
            Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Talk030'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_kokiri012_Talk', 'IsWaitFinish': True})
        Npc_kokiri012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Talk001'})
        goto Event5
    }
}

void Ready_Npc_kokiri012_Near() {
    Event2:
    Npc_kokiri012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Near000', 'DispFrame': 300, 'IsChecked': True})
}

void Finish_Npc_kokiri012_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event17
}

void Finish_Npc_kokiri012_Near() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_049', 'Count': 1}) {
        goto Event2
    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_061', 'Count': 1}) {
        goto Event2
    } else {
        Npc_kokiri012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_RodShiren:Npc_kokiri012_R_Near000', 'DispFrame': 90, 'IsChecked': False})
    }
}
