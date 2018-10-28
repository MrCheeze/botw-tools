-------- EventFlow: RiversideMini_CastleWeapon --------

Actor: Npc_RiverSideHatago002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_SwitchPlayerEquipment', 'Demo_CloseMessageDialog']
queries: ['CheckPlayerState', 'HasPorchItem', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'GeneralChoice3', 'CheckEquipment']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_RiverSideHatago002_Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_RiverSideHatago002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if Npc_RiverSideHatago002.IsOnInstEventFlag() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep03'})
            } else {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep02'})
            }
        } else
        if Npc_RiverSideHatago002.IsOnInstEventFlag() {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep01'})
        } else {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep00'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'RiversideMini_CastleWeapon_Activated'}) {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_047', 'Count': 1}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeaponSword', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_047'}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowSword', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            } else {

                call Common.ShowSword({'PorchItemName_Weapon': 'Weapon_Sword_047'})

            }
            Event34:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeapon00'})
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeapon01'})
            if EventSystemActor.CheckFlag({'FlagName': 'RiversideMini_CastleWeapon_ShowedShield'}) {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'Npc_RiverSideHatago002', 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
                Event149:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeapon02'})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RiversideMini_CastleWeapon_Finish'})
            } else {
                goto Event149
            }
        } else
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_047'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeaponLSword', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Lsword_047'}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowLsword', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            } else {

                call Common.ShowLargeSword({'PorchItemName_Weapon': 'Weapon_Lsword_047'})

            }
            goto Event34
        } else
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_047'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeaponSpear', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_047'}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowSpear', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            } else {

                call Common.ShowSpear({'PorchItemName_Weapon': 'Weapon_Spear_047'})

            }
            goto Event34
        } else
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_033'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeaponBow', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Bow_033'}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowBow', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            } else {

                call Common.ShowBow({'PorchItemName_Weapon': 'Weapon_Bow_033'})

            }
            goto Event34
        } else
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_033'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_showWeaponShield', 'IsCloseMessageDialog': True})

            call ShowShield({'PorchItemName_Shield': 'Weapon_Shield_033'})

            EventSystemActor.Demo_FlagON({'FlagName': 'RiversideMini_CastleWeapon_ShowedShield', 'IsWaitFinish': True})
            goto Event34
        } else
        if Npc_RiverSideHatago002.IsOnInstEventFlag() {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hint01'})
        } else {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hint00'})
        }
        if !EventSystemActor.GeneralChoice2() {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelect00'})
            Event175:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelect03'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintGoron'})
                Event171:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelect02'})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event175
                } else {
                    Event160:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hint02'})
                }
              case 1:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintRito'})
                goto Event171
              case 2:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintZora'})
                goto Event171
              case 3:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelect01'})
                Event176:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelect04'})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintGerudo'})
                    Event173:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelect02'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event176
                    } else {
                        goto Event160
                    }
                  case 1:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintShiekah'})
                    goto Event173
                  case 2:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_hintSelf'})
                }
            }
        } else {
            goto Event160
        }
    } else {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_00'})
        EventSystemActor.Demo_FlagON({'FlagName': 'RiversideMini_CastleWeapon_Activated', 'IsWaitFinish': True})
    }
}

void Finish_Npc_RiverSideHatago002_Talk() {
    goto Event1
}

void Ready_Npc_RiverSideHatago002_Near() {
    if Npc_RiverSideHatago002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_RiverSideHatago002.Demo_TalkASync({'DispFrame': 300, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/RiversideMini_CastleWeapon:talk_near00', 'IsChecked': False})
    } else {
        Npc_RiverSideHatago002.Demo_TalkASync({'IsChecked': True, 'DispFrame': 300, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/RiversideMini_CastleWeapon:talk_near00'})
    }
}

void Finish_Npc_RiverSideHatago002_Near() {
    if Npc_RiverSideHatago002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Event214:
        Npc_RiverSideHatago002.Demo_TalkASync({'DispFrame': 300, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/RiversideMini_CastleWeapon:talk_near01', 'IsChecked': False})
    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_047', 'Count': 1}) {
        Event154:
        Npc_RiverSideHatago002.Demo_TalkASync({'IsChecked': True, 'DispFrame': 300, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/RiversideMini_CastleWeapon:talk_near01'})
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_047'}) {
        goto Event154
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_047'}) {
        goto Event154
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_033'}) {
        goto Event154
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_033'}) {
        goto Event154
    } else {
        goto Event214
    }
}

void ShowShield() {
    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_033'}) {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'PosOffset': [0.0, 0.0, -10.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    } else {
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipShield': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Weapon': '', 'PorchItemName_Shield': 'PorchItemName_Shield', 'PorchItemName_Bow': '', 'UnequipBow': False, 'UnequipWeapon': False})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'PosOffset': [0.0, 0.0, -10.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    }
}
