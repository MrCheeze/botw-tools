-------- EventFlow: Npc_King_Vagrant004 --------

Actor: Npc_King_Vagrant004
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['IsAwakened', 'CheckActorAction13', 'CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_AutoSave']
queries: ['CheckFlag', 'CheckPlayerState', 'RandomChoice2', 'CheckTimeType', 'GeneralChoice2', 'HasPorchItem', 'GeneralChoice4', 'HasCookResultInPorch']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
        Event252:

        call InitTalk.InitTalk({'Arg_Turn': 2, 'Arg_Greeting': 'FollowAISchedule'})

        Event57:
        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
            Event55:
            if !EventSystemActor.RandomChoice2() {
                if Npc_King_Vagrant004.IsOnInstEventFlag() {
                    Event50:
                    if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'})
                    Event126:
                    && Npc_King_Vagrant004.IsAwakened() {
                        if Npc_King_Vagrant004.IsOnInstEventFlag() {
                            Event315:
                            if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                    Event80:
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk'}) {
                                        if Npc_King_Vagrant004.IsOnInstEventFlag() {
                                            if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
                                                Event46:
                                                if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                                                    Event38:
                                                    Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                                } else {
                                                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk09'})
                                                }
                                                Event81:

                                                call TalkHub1()

                                            } else {
                                                Event43:
                                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk00'})
                                                goto Event81
                                            }
                                        } else
                                        if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_1'}) {
                                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk15'})
                                        } else {
                                            Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk14', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                        }
                                        goto Event81
                                    } else
                                    if Npc_King_Vagrant004.IsOnInstEventFlag() {
                                        goto Event43
                                    } else {
                                        Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                    }
                                    goto Event81
                                } else
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Cook'}) {

                                    call TalkCook()

                                } else
                                goto Event80
                            } else
                            goto Event80
                        } else {
                            Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event81
                        }
                    } else
                    goto Event315
                } else
                if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                    goto Event126
                } else
                goto Event315
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk'})
            && Npc_King_Vagrant004.IsOnInstEventFlag() {
                if !EventSystemActor.RandomChoice2() {
                    goto Event50
                } else
                switch Npc_King_Vagrant004.CheckActorAction13() {
                  case 0:
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk03'})
                    goto Event81
                  case 1:
                    goto Event46
                  case 2:
                    if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut'}) {
                        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk05'})
                        goto Event81
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe24'}) {
                            Event326:
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
                                goto Event80
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_AroundHouse'}) {
                                goto Event80
                            } else {
                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk16'})
                                goto Event81
                            }
                        } else {
                            Event134:
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk04'})
                            goto Event81
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe'}) {
                        goto Event326
                    } else {
                        goto Event134
                    }
                  case 3:
                    if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                            goto Event38
                        } else
                        Event140:
                        switch EventSystemActor.CheckTimeType() {
                          case [0, 1, 2, 3, 4, 5]:
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk10'})
                            goto Event81
                          case [6, 7]:
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk11'})
                            goto Event81
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Cook'}) {

                        call TalkCook()

                    } else
                    goto Event140
                  case 10:
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Talk06'})
                    goto Event81
                  case 11:
                    goto Event126
                }
            } else
            goto Event50
        } else
        if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'})
        && Npc_King_Vagrant004.IsAwakened()
        && EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Cook'}) {
            switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'PorchItemName': '', 'CookEffectType': 'AllOK'}) {
              case [2, 1]:
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant004_Have_Dish', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Temp3'}) {
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:TalkBokangi01'})
                    Event357:

                    call TalkCookAwake()

                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Temp3'})
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:TalkBokangi00'})
                    goto Event357
                }
              case 0:
                goto Event55
            }
        } else
        goto Event55
    } else
    if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/移動'}) {
        goto Event252
    } else
    if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action2/移動'}) {
        goto Event252
    } else
    if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
        goto Event252
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
    goto Event57
}

void Near() {
    switch Npc_King_Vagrant004.CheckActorAction13() {
      case [0, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        Event7:
        Npc_King_Vagrant004.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_King_Vagrant004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Near01', 'IsChecked': False, 'DispFrame': 90})
      case 2:
        if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut'}) {
            goto Event7
        } else {
            Event10:
            Npc_King_Vagrant004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Near03', 'IsChecked': False, 'DispFrame': 90})
        }
      case 10:
        goto Event10
      case 11:
        if Npc_King_Vagrant004.IsAwakened() {
            goto Event10
        } else {
            Npc_King_Vagrant004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Near02', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void Tree_Cut_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action2/移動'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_AroundHouse'}) {
            Event110:

            call Talk2()

        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
            goto Event110
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Temp'}) {
            goto Event110
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Temp'})
            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Tree_Cut_Talk00'})
            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Tree_Cut_Talk01', 'IsCloseMessageDialog': True})
        }
    } else {
        goto Event110
    }
}

void Talk2() {
    goto Event57
}

void TalkHub1() {
    if !EventSystemActor.GeneralChoice2() {
        if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/移動'}) {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_King_Vagrant004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Event211:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Talk', 'IsWaitFinish': True})

            call Nanishiteru()

        } else {
            goto Event211
        }
    } else
    Event145:
    if Npc_King_Vagrant004.IsAwakened() {
        if Npc_King_Vagrant004.IsOnInstEventFlag() {
            Event278:
            if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action2/移動'}) {
                Event275:
                if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut'}) {
                    Event248:
                    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_1'}) {
                        Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:GoodBye01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    } else {
                        Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:GoodBye00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Cook'}) {
                    goto Event248
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe24'}) {
                        Event323:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
                            goto Event248
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_AroundHouse'}) {
                            goto Event248
                        } else {
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:GoodBye03'})
                        }
                    } else
                    goto Event248
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe'}) {
                    goto Event323
                } else
                goto Event248
            } else
            if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
                goto Event275
            } else
            goto Event248
        } else {
            Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:GoodBye02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }
    } else
    goto Event278
}

void GoodBye() {
    goto Event145
}

void Nanishiteru() {
    switch Npc_King_Vagrant004.CheckActorAction13() {
      case 0:
        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Idou00', 'IsCloseMessageDialog': True})
      case 1:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Temp2'}) {
                Event150:
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori00'})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_ZRock'}) {
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_032'}) {
                        Event334:
                        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe24'}) {
                                Event257:
                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori04', 'IsCloseMessageDialog': True})
                            } else {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Axe24'})
                                Event214:
                                Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori03', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False})
                                goto Event257
                            }
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe'}) {
                            goto Event257
                        } else {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Axe'})
                            goto Event214
                        }
                    } else {
                        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori02'})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_ZRock'})
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori01', 'IsCloseMessageDialog': False})
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_032'}) {
                        goto Event334
                    } else {
                        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori05'})
                    }
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Talk_Temp2', 'IsWaitFinish': True})
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Hadaka00'})
                goto Event150
            }
        } else {
            goto Event150
        }
      case 2:
        if EventSystemActor.CheckFlag({'FlagName': 'Tree_Cut'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
                Event319:
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Kikori06'})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_AroundHouse'}) {
                goto Event319
            } else {
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Idou02'})
                if EventSystemActor.CheckFlag({'FlagName': 'Talk_Vagrant_Bed'}) {
                    Event269:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                } else {
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Bed03'})
                    Event268:
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Bed05', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Talk_Vagrant_Bed', 'IsWaitFinish': True})
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe24'}) {
                Event321:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
                    goto Event319
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_AroundHouse'}) {
                    goto Event319
                } else {
                    goto Event257
                }
            } else
            Event308:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_AroundHouse'}) {
                goto Event319
            } else {
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Idou01'})
                if EventSystemActor.CheckFlag({'FlagName': 'Talk_Vagrant_Bed'}) {
                    goto Event269
                } else {
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Bed04'})
                    goto Event268
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Axe'}) {
            goto Event321
        } else
        goto Event308
      case 3:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Temp2'}) {
                Event172:
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Takibi00'})
                Event294:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Recipe'}) {
                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Takibi03'})
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Cook'}) {

                    call CheckPorch()

                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Takibi02'})
                    Event284:
                    switch EventSystemActor.GeneralChoice4() {
                      case 1:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'TalkHandOver', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'CookEffectType': 'ResistCold', 'PorchItemName': 'Item_Cook_B_19'}) {
                          case [2, 1]:
                            Event289:
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook00'})
                            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook01'})
                            if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook03'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Recipe'})
                            } else {

                                call Npc_King_Common.BOKANGI_Get({'Self': ActorIdentifier(name="Npc_King_Vagrant004")})

                                if Npc_King_Vagrant004.IsAwakened() {
                                    Event293:
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Recipe'})
                                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                                } else
                                if !Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
                                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Talk_Axe24', 'IsWaitFinish': True})
                                }
                                goto Event293
                            }
                          case 0:
                            switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'CookEffectType': 'ResistCold', 'PorchItemName': 'Item_Cook_B_18'}) {
                              case [2, 1]:
                                goto Event289
                              case 0:
                                switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'CookEffectType': 'ResistCold', 'PorchItemName': 'Item_Cook_B_17'}) {
                                  case [2, 1]:
                                    goto Event289
                                  case 0:
                                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook06'})
                                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_O_01'}) {
                                        Event299:
                                        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook08'})
                                        Event302:
                                        if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                                            Event300:
                                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook09'})
                                        } else
                                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Diary'}) {
                                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook10', 'IsCloseMessageDialog': False})
                                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_01'}) {
                                                Event373:
                                                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Fruit_I'}) {
                                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Fish_A'}) {
                                                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                    } else {
                                                        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook14'})
                                                    }
                                                } else {
                                                    Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook13'})
                                                }
                                            } else
                                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_02'}) {
                                                goto Event373
                                            } else
                                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Meat_11'}) {
                                                goto Event373
                                            } else {
                                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook11'})
                                            }
                                        } else {
                                            goto Event300
                                        }
                                    } else
                                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_O_02'}) {
                                        goto Event299
                                    } else {
                                        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook07'})
                                    }
                                    goto Event302
                                }
                            }
                        }
                      case 2:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Cook_Kotsu'}) {
                            Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            Event379:
                            switch EventSystemActor.GeneralChoice4() {
                              case 0:
                                Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                Event389:
                                EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu01'})
                                goto Event379
                              case 1:
                                Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu03', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                goto Event389
                              case 2:
                                Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04_Kotsu04', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                goto Event389
                              case 3:
                                Event287:
                                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook05_Vagrant004'})
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Cook_Kotsu', 'IsWaitFinish': True})
                            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Cook04'})
                            goto Event287
                        }
                      case 3:
                        if EventSystemActor.CheckFlag({'FlagName': 'Talk_Vagrant_Bed'}) {

                            call GoodBye()

                        } else
                        if Npc_King_Vagrant004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'})
                        && Npc_King_Vagrant004.IsAwakened() {

                            call Bed3()

                        } else {

                            call Bed2()

                        }
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Cook'})

                    call CheckPorch()

                    Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Takibi01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event284
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Talk_Temp2', 'IsWaitFinish': True})
                Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Hadaka00'})
                goto Event172
            }
        } else {
            goto Event172
        }
      case 10:
        Event153:
        Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Sleep00'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Temp3'}) {
            Event270:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Temp3'})
            Event228:
            if EventSystemActor.CheckFlag({'FlagName': 'Talk_Vagrant_Bed'}) {
                Event221:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_InHouse'}) {
                    Event225:
                    Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Sleep02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                } else {
                    goto Event270
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Talk_Vagrant_Bed', 'IsWaitFinish': True})
                Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Sleep01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event221
            }
        }
      case 11:
        if Npc_King_Vagrant004.IsAwakened() {
            Npc_King_Vagrant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Sleep03'})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Talk_Temp3'}) {
                goto Event270
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant004_Talk_Temp3'})
                goto Event225
            }
        } else {
            goto Event153
        }
    }
}

void Bed() {
    if EventSystemActor.CheckFlag({'FlagName': 'Talk_Vagrant_Bed'}) {
        goto Event269
    } else {
        Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Bed00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event268
    }
}

void Bed2() {
    Npc_King_Vagrant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant004:Bed02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    goto Event268
}

void TalkCook() {
    goto Event294
}

void CheckPorch() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo001_0'}) {
        switch EventSystemActor.HasCookResultInPorch({'Count': 1, 'PorchItemName': '', 'CookEffectType': 'AllOK'}) {
          case [2, 1]:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant004_Have_Dish', 'IsWaitFinish': True})
          case 0:
            Event328:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Have_Dish', 'IsWaitFinish': True})
        }
    } else {
        goto Event328
    }
}

void TalkCookAwake() {
    goto Event284
}

void Bed3() {
    goto Event228
}
