-------- EventFlow: Npc_King_Vagrant005 --------

Actor: Npc_King_Vagrant005
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['CheckActorAction13', 'IsAwakened', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_AutoSave']
queries: ['CheckFlag', 'CheckPlayerState', 'RandomChoice2', 'CheckTimeType', 'GeneralChoice2', 'HasPorchItemByCategory', 'HasPorchItem', 'GeneralChoice4', 'HasCookResultInPorch']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
        Event30:
        if !EventSystemActor.RandomChoice2() {
            if Npc_King_Vagrant005.IsOnInstEventFlag() {
                Event25:
                if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                    Event77:
                    if Npc_King_Vagrant005.IsAwakened() {
                        if Npc_King_Vagrant005.IsOnInstEventFlag() {
                            Event201:
                            if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                    Event50:
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk'}) {
                                        if Npc_King_Vagrant005.IsOnInstEventFlag() {
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk00'})
                                            Event51:

                                            call TalkHub1()

                                        } else
                                        if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_1'}) {
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk15'})
                                            goto Event51
                                        } else {
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk14'})
                                            goto Event51
                                        }
                                    } else {
                                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk01'})
                                        goto Event51
                                    }
                                } else
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Cook'}) {

                                    call TalkCook()

                                } else
                                goto Event50
                            } else
                            goto Event50
                        } else {
                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk07'})
                            goto Event51
                        }
                    } else
                    goto Event201
                } else
                goto Event201
            } else
            if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                goto Event77
            } else
            goto Event201
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk'}) {
            if Npc_King_Vagrant005.IsOnInstEventFlag() {
                if !EventSystemActor.RandomChoice2() {
                    goto Event25
                } else
                switch Npc_King_Vagrant005.CheckActorAction13() {
                  case [0, 2, 4, 6]:
                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk03'})
                    goto Event51
                  case [1, 3, 5, 7]:
                    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                        if !EventSystemActor.RandomChoice2() {
                            Event16:
                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk02'})
                            goto Event51
                        } else
                        Event113:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Temp'}) {
                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk10'})
                            goto Event51
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant005_Talk_Temp', 'IsWaitFinish': True})
                            if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut_Kariudo'}) {
                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk09'})
                                goto Event51
                            } else {
                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk08'})
                                goto Event51
                            }
                        }
                    } else
                    goto Event113
                  case [8, 9]:
                    if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                            Event23:
                            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                                if !EventSystemActor.RandomChoice2() {
                                    Event89:
                                    switch EventSystemActor.CheckTimeType() {
                                      case [0, 1, 2, 3, 4]:
                                        if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut_Kariudo'}) {
                                            Event87:
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk05'})
                                            goto Event51
                                        } else
                                        goto Event50
                                      case 5:
                                        if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut_Kariudo'}) {
                                            goto Event87
                                        } else {
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk04'})
                                            goto Event51
                                        }
                                      case [6, 7]:
                                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk11'})
                                        goto Event51
                                    }
                                } else {
                                    goto Event16
                                }
                            } else
                            goto Event89
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Cook'}) {

                            call TalkCook()

                        } else
                        goto Event23
                    } else
                    goto Event23
                  case 10:
                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Talk06'})
                    goto Event51
                  case 11:
                    goto Event77
                }
            } else
            goto Event25
        } else
        goto Event25
    } else
    if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        if Npc_King_Vagrant005.IsAwakened() {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Cook'}) {
                switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'PorchItemName': '', 'CookEffectType': 'AllOK'}) {
                  case [2, 1]:
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant004_Have_Dish', 'IsWaitFinish': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Temp3'}) {
                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:TalkBokangi01'})
                        Event256:

                        call TalkCookAwake()

                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant005_Talk_Temp3'})
                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:TalkBokangi00'})
                        goto Event256
                    }
                  case 0:
                    goto Event30
                }
            } else
            goto Event30
        } else
        goto Event30
    } else
    goto Event30
}

void Near() {
    switch Npc_King_Vagrant005.CheckActorAction13() {
      case [0, 2, 4, 6]:
        Npc_King_Vagrant005.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Near02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
      case [1, 3, 5, 7]:
        if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut_Kariudo'}) {
            Event6:
            Npc_King_Vagrant005.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Near04', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_King_Vagrant005.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        }
      case 8:
        if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut_Kariudo'}) {
            goto Event6
        } else {
            Event2:
            Npc_King_Vagrant005.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        }
      case [9, 13]:
        goto Event2
      case 10:
        goto Event6
      case 11:
        if Npc_King_Vagrant005.IsAwakened() {
            goto Event6
        } else {
            Npc_King_Vagrant005.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Near03', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void TalkHub1() {
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant005_Talk'})

        call Nanishiteru()

    } else
    Event94:
    if Npc_King_Vagrant005.IsAwakened() {
        if Npc_King_Vagrant005.IsOnInstEventFlag() {
            Event28:
            if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_1'}) {
                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:GoodBye01'})
            } else {
                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:GoodBye00'})
            }
        } else {
            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:GoodBye02'})
        }
    } else
    goto Event28
}

void GoodBye() {
    goto Event94
}

void Nanishiteru() {
    switch Npc_King_Vagrant005.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7]:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Temp2'}) {
                Event155:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Temp4'}) {
                    if !EventSystemActor.RandomChoice2() {
                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Kari04'})
                        Event186:
                        if !EventSystemActor.GeneralChoice2() {
                            if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:KariKotsu01', 'IsCloseMessageDialog': False})
                                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                } else
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Bow'}) {
                                    Event188:
                                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:KariKotsu03', 'IsCloseMessageDialog': True})
                                } else {
                                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant005_Talk_Bow', 'IsWaitFinish': True})
                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_001'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_Bow'}) {
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:KariKotsu02'})
                                            goto Event188
                                        } else {
                                            goto Event188
                                        }
                                    } else {
                                        goto Event188
                                    }
                                }
                            } else {
                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:KariKotsu00'})
                            }
                        } else {
                            Event185:
                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Kari02', 'IsCloseMessageDialog': True})
                        }
                    } else {
                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Kari03'})
                        goto Event186
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant005_Talk_Temp4', 'IsWaitFinish': True})
                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Kari00'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Scout'}) {
                        goto Event185
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant005_Scout', 'IsWaitFinish': True})

                        call OperationGuide.Guide_Squat()

                    }
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant005_Talk_Temp2'})
                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Hadaka00'})
                goto Event155
            }
        } else
        goto Event155
      case [8, 9]:
        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
            Event121:
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Temp2'}) {
                    Event172:
                    if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                        Event193:
                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Takibi00'})
                        Event242:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Recipe'}) {
                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Takibi03'})
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Cook'}) {

                            call CheckPorch()

                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Takibi02'})
                            Event212:
                            switch EventSystemActor.GeneralChoice4() {
                              case 1:
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'TalkHandOver', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'CookEffectType': 'ResistCold', 'PorchItemName': 'Item_Cook_B_19'}) {
                                  case [2, 1]:
                                    Event216:
                                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook00'})
                                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook01'})
                                    if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook03'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Recipe'})
                                    } else {

                                        call Npc_King_Common.BOKANGI_Get({'Self': ActorIdentifier(name="Npc_King_Vagrant005")})

                                        if Npc_King_Vagrant005.IsAwakened() {
                                            Event220:
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Recipe'})
                                            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                                        } else
                                        if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
                                            goto Event220
                                        } else {
                                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant005_Talk_Bow24', 'IsWaitFinish': True})
                                            goto Event220
                                        }
                                    }
                                  case 0:
                                    switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'CookEffectType': 'ResistCold', 'PorchItemName': 'Item_Cook_B_18'}) {
                                      case [2, 1]:
                                        goto Event216
                                      case 0:
                                        switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'CookEffectType': 'ResistCold', 'PorchItemName': 'Item_Cook_B_17'}) {
                                          case [2, 1]:
                                            goto Event216
                                          case 0:
                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook06'})
                                            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_O_01'}) {
                                                Event226:
                                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook08'})
                                                Event229:
                                                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                                    Event227:
                                                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook09'})
                                                } else
                                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Diary'}) {
                                                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook10', 'IsCloseMessageDialog': False})
                                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_01'}) {
                                                        Event265:
                                                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Fruit_I'}) {
                                                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Fish_A'}) {
                                                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                            } else {
                                                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook14'})
                                                            }
                                                        } else {
                                                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook13'})
                                                        }
                                                    } else
                                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_02'}) {
                                                        goto Event265
                                                    } else
                                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_11'}) {
                                                        goto Event265
                                                    } else {
                                                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook12'})
                                                    }
                                                } else {
                                                    goto Event227
                                                }
                                            } else
                                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_O_02'}) {
                                                goto Event226
                                            } else {
                                                Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook07'})
                                                goto Event229
                                            }
                                        }
                                    }
                                }
                              case 2:
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Cook_Kotsu'}) {
                                    Npc_King_Vagrant005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                    Event270:
                                    switch EventSystemActor.GeneralChoice4() {
                                      case 0:
                                        Npc_King_Vagrant005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                        Event280:
                                        EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu01'})
                                        goto Event270
                                      case 1:
                                        Npc_King_Vagrant005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu03', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                        goto Event280
                                      case 2:
                                        Npc_King_Vagrant005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu04', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                        goto Event280
                                      case 3:
                                        Event215:
                                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook05_Vagrant005'})
                                    }
                                } else {
                                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Cook_Kotsu', 'IsWaitFinish': True})
                                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04'})
                                    goto Event215
                                }
                              case 3:

                                call GoodBye()

                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant005_Talk_Cook'})
                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Takibi01'})

                            call CheckPorch()

                            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Takibi05', 'IsCloseMessageDialog': False})
                            goto Event212
                        }
                    } else {
                        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:KariKotsu04', 'IsCloseMessageDialog': True})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant005_Talk_Temp2'})
                    Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Hadaka00'})
                    goto Event172
                }
            } else
            goto Event172
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Bow'}) {
            if Npc_King_Vagrant005.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                goto Event193
            } else {
                goto Event188
            }
        } else
        goto Event121
      case 10:
        Event139:
        Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Sleep00'})
        Event143:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant005_Talk_Temp3'}) {
            Event282:

            call TalkCook()

        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant005_Talk_Temp3', 'IsWaitFinish': True})
            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Sleep01'})
            goto Event282
        }
      case 11:
        if Npc_King_Vagrant005.IsAwakened() {
            Npc_King_Vagrant005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant005:Sleep03'})
            goto Event143
        } else {
            goto Event139
        }
    }
}

void TalkCook() {
    goto Event242
}

void CheckPorch() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo001_0'}) {
        switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'PorchItemName': '', 'CookEffectType': 'AllOK'}) {
          case [2, 1]:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant004_Have_Dish', 'IsWaitFinish': True})
          case 0:
            Event234:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Have_Dish', 'IsWaitFinish': True})
        }
    } else {
        goto Event234
    }
}

void TalkCookAwake() {
    goto Event212
}
