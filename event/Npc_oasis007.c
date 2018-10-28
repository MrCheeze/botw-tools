-------- EventFlow: Npc_oasis007 --------

Actor: Npc_oasis007
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AutoSave', 'Demo_IncreasePorchItem', 'Demo_WaitFrame', 'Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_DeletePorchItemInEquip']
queries: ['HasPorchItem', 'GeneralChoice2', 'GeneralChoice4', 'CheckExistActor', 'CheckFlag', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Electric_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RAIMEI_CK()

    if EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
        && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {

            call BalladOfHeroGerudo.007_afterGetWeapon()

        } else
        if Npc_oasis007.IsOnInstEventFlag() {
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_44'})
        } else {
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_01', 'IsCloseMessageDialog': True})
        }
        if !EventSystemActor.GeneralChoice2() {
            Event8:
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_052'}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_037'}) {
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_15'})
                } else
                if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Shield_037', 'IsCheckLife': False, 'IsCheckEquipStand': True}) {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_45'})
                } else {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_02', 'IsCloseMessageDialog': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Event106:
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_23'})
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_26'})
                    Event16:
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_08', 'IsCloseMessageDialog': True})
                                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Ore_A'})
                                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -5})
                                    EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Shield_026'})
                                    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_10'})

                                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Weapon_Shield_037'})

                                    Event37:
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_43'})
                                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                                } else {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_30'})
                                }
                            } else
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_29'})
                            } else {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_35'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_04'})
                            } else {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_33'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_32'})
                        } else {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_37'})
                        }
                    } else {
                        Event14:
                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_03'})
                    }
                }
            } else
            if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Sword_052', 'IsCheckLife': False, 'IsCheckEquipStand': True}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_037'}) {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_46'})
                } else
                if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Shield_037', 'IsCheckLife': False, 'IsCheckEquipStand': True}) {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_47'})
                } else {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_49', 'IsCloseMessageDialog': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    goto Event106
                }
            } else
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_037'}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_07', 'IsCloseMessageDialog': True})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Event101:
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_23'})
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_22'})
                Event15:
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                                SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_08', 'IsCloseMessageDialog': True})
                                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Ore_A'})
                                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -5})
                                EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Sword_029'})
                                SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_09'})

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Weapon_Sword_052'})

                                goto Event37
                            } else {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_31'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_29'})
                        } else {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_36'})
                        }
                    } else
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_04'})
                        } else {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_34'})
                        }
                    } else
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_32'})
                    } else {
                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_37'})
                    }
                } else {
                    goto Event14
                }
            } else
            if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Shield_037', 'IsCheckLife': False, 'IsCheckEquipStand': True}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_50', 'IsCloseMessageDialog': True})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                goto Event101
            } else {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_05', 'IsCloseMessageDialog': True})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_23'})
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_28'})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_13'})
                    goto Event15
                  case 1:
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_14'})
                    goto Event16
                  case 2:
                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_06'})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 2}) {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 10}) {
                                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
                                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_08', 'IsCloseMessageDialog': True})
                                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_A', 'Value': -2})
                                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -10})
                                        EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Sword_029'})
                                        EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Shield_026'})
                                        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
                                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_11'})

                                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Weapon_Sword_052'})


                                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Weapon_Shield_037'})

                                        goto Event37
                                    } else {
                                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_30'})
                                    }
                                } else
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_31'})
                                } else {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_38'})
                                }
                            } else
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_29'})
                                } else {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_35'})
                                }
                            } else
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_36'})
                            } else {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_42'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 10}) {
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_04'})
                                } else {
                                    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_33'})
                                }
                            } else
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_34'})
                            } else {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_41'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_029'}) {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_32'})
                            } else {
                                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_39'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Shield_026', 'Count': 1}) {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_40'})
                        } else {
                            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_37'})
                        }
                    } else {
                        Event69:
                        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_03'})
                    }
                  case 3:
                    goto Event69
                }
            }
        } else {
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_43'})
        }
    } else {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_12'})
        Event253:
        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
        && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {

            call BalladOfHeroGerudo.007_beforeGetWeapon()

        } else {
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    }
}

void RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'})
    && !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis007_Raimei_CK'}) {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Raimei_CK_001'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis007_Raimei_CK'})
        goto Event253
    }
}

void Reget_Weapons() {
    goto Event8
}
