-------- EventFlow: Npc_King_Vagrant001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckPlayerState', 'CheckTimeType', 'GeneralChoice3', 'RandomChoice2', 'GeneralChoice4', 'GeneralChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Vagrant001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_SetInstEventFlag']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction', 'IsAwakened']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Talk', 'Demo_Unequip', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Common_Kokoha'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant001_ChoiceExclude', 'IsWaitFinish': True})
        Event52:
        if EventSystemActor.CheckFlag({'FlagName': 'FindDungeon_Activated'}) {
            if !EventSystemActor.RandomChoice2() {
                if Npc_King_Vagrant001.IsOnInstEventFlag() {
                    Event39:
                    if Npc_King_Vagrant001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                        Event335:
                        if Npc_King_Vagrant001.IsAwakened() {
                            if Npc_King_Vagrant001.IsOnInstEventFlag() {
                                Event18:
                                if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                                    Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                    Event210:

                                    call TalkHub1()

                                } else {
                                    switch EventSystemActor.CheckTimeType() {
                                      case 0:
                                        Event5:
                                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk00'})
                                        goto Event210
                                      case 1:
                                        goto Event5
                                      case 2:
                                        goto Event5
                                      case 3:
                                        goto Event5
                                      case 4:
                                        goto Event5
                                      case 5:
                                        goto Event5
                                      case 6:
                                        Event8:
                                        Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                        goto Event210
                                      case 7:
                                        goto Event8
                                    }
                                }
                            } else {
                                Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                goto Event210
                            }
                        } else {
                            Event12:
                            Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk09'})
                            goto Event210
                        }
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant001_Talk'}) {
                            goto Event12
                        } else {
                            Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event210
                        }
                    }
                } else {
                    if Npc_King_Vagrant001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                        goto Event335
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_1'}) {
                            Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk08'})
                            goto Event210
                        } else {
                            Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event210
                        }
                    }
                }
            } else {
                if Npc_King_Vagrant001.IsOnInstEventFlag() {
                    switch Npc_King_Vagrant001.CheckActorAction13() {
                      case 0:
                        Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        goto Event210
                      case 1:
                        goto Event18
                      case 10:
                        goto Event18
                      case 11:
                        goto Event335
                    }
                } else {
                    goto Event39
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'King_Vagrant_FirstTalk'}) {
                if Npc_King_Vagrant001.IsOnInstEventFlag() {
                    Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk11'})
                    Event303:
                    switch EventSystemActor.GeneralChoice4() {
                      case 1:

                        call Npc_King_Common.Kokoha({'Self': ActorIdentifier(name="Npc_King_Vagrant001")})

                        Event304:
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant001_ChoiceExclude', 'IsWaitFinish': True})
                        if Npc_King_Vagrant001.IsOnInstEventFlag() {
                            Event307:
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        } else {
                            Event290:
                            Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:GoodBye04'})
                        }
                      case 2:
                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Takibi03', 'IsCloseMessageDialog': False})
                        if Npc_King_Vagrant001.IsOnInstEventFlag() {
                            goto Event307
                        } else {
                            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo318_0'}) {
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                Event296:
                                Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:GoodBye05'})
                            } else {
                                goto Event290
                            }
                        }
                      case 3:
                        if Npc_King_Vagrant001.IsOnInstEventFlag() {
                            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo318_0'}) {
                                goto Event296
                            } else {
                                goto Event290
                            }
                        } else {
                            goto Event290
                        }
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Common_Kokoha'}) {
                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:TalkHub1_01'})
                        goto Event303
                    } else {
                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Talk10'})
                        goto Event303
                    }
                }
            } else {

                call Npc_King_Common.FirstTalk({'Self': ActorIdentifier(name="Npc_King_Vagrant001")})

                goto Event304
            }
        }
    } else {
        goto Event52
    }
}

void Near() {
    if Npc_King_Vagrant001.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'King_Vagrant_FirstTalk'}) {
            Event35:
            Npc_King_Vagrant001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Near00', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_King_Vagrant001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Near00_First', 'DispFrame': 90})
        }
    } else {
        if Npc_King_Vagrant001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            if Npc_King_Vagrant001.IsAwakened() {
                Npc_King_Vagrant001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Near03', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_King_Vagrant001.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Near02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            }
        } else {
            goto Event35
        }
    }
}

void Apple() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant001_Apple', 'IsWaitFinish': True})
    if Npc_King_Vagrant001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        if Npc_King_Vagrant001.IsAwakened() {
            Event315:

            call InitTalk.InitTalkEquipOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_King_Vagrant001")})

            GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_King_Vagrant001', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Apple00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if Npc_King_Vagrant001.IsOnInstEventFlag() {
                Event50:
                Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Apple01'})
                if EventSystemActor.CheckFlag({'FlagName': 'King_Vagrant_FirstTalk'}) {
                    Event224:
                    if !Npc_King_Vagrant001.IsOnInstEventFlag() {
                        Event226:
                        Npc_King_Vagrant001.Demo_SetInstEventFlag({'IsWaitFinish': True})
                    }
                } else {
                    Event229:

                    call Npc_King_Common.FirstTalk_Parasail({'Self': ActorIdentifier(name="Npc_King_Vagrant001")})

                }
            } else {

                call UnequipTalk()

                goto Event50
            }
        }
    } else {
        goto Event315
    }
}

void Torch() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant001_Torch'})
    if Npc_King_Vagrant001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        if Npc_King_Vagrant001.IsAwakened() {
            Event318:

            call InitTalk.InitTalkEquipOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_King_Vagrant001")})

            GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_King_Vagrant001', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch00', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call UnequipTalk()

                Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_Axe'}) {
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_032'}) {
                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch02_2'})
                        Event327:
                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch05', 'IsCloseMessageDialog': True})

                        call OperationGuide.Guide_Attention()

                        if EventSystemActor.CheckFlag({'FlagName': 'King_Vagrant_FirstTalk'}) {
                            goto Event224
                        } else {
                            goto Event229
                        }
                    } else {
                        Event277:
                        Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch02'})
                        goto Event327
                    }
                } else {
                    goto Event277
                }
              case 1:

                call UnequipTalk()

                Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch03'})
                goto Event327
              case 2:
                Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch04'})
                Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Torch05', 'IsCloseMessageDialog': True})

                call OperationGuide.Guide_Attention()

                if EventSystemActor.CheckFlag({'FlagName': 'King_Vagrant_FirstTalk'}) {
                    if !Npc_King_Vagrant001.IsOnInstEventFlag() {

                        call UnequipTalk()

                        goto Event226
                    }
                } else {

                    call UnequipTalk()

                    goto Event229
                }
            }
        }
    } else {
        goto Event318
    }
}

void GoodBye() {
    Event272:
    if Npc_King_Vagrant001.IsAwakened() {
        if Npc_King_Vagrant001.IsOnInstEventFlag() {
            Event54:
            if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_1'}) {
                Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:GoodBye01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            } else {
                Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:GoodBye00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            }
        } else {
            Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:GoodBye02'})
        }
    } else {
        goto Event54
    }
}

void TalkHub1() {
    if !EventSystemActor.GeneralChoice2() {
        Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Takibi00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant001_Talk'}) {
            if Npc_King_Vagrant001.IsOnInstEventFlag() {
                Npc_King_Vagrant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:GoodBye03'})
            } else {
                Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Takibi02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Vagrant001_Talk'})
            Npc_King_Vagrant001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Vagrant001:Takibi01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }
    } else {
        goto Event272
    }
}

void UnequipTalk() {

    fork {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': False})
    }

}
