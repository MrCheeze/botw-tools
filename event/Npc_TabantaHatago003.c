-------- EventFlow: Npc_TabantaHatago003 --------

Actor: Npc_TabantaHatago003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag', 'Demo_TalkASync']
queries: ['CheckActorAction', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckWeather', 'GeneralChoice2', 'CheckEquipment', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_TabantaHatago003.CheckActorAction13() {
      case 0:
        Event46:
        Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0100'})
        Npc_TabantaHatago003.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaHatago003_Talk'}) {
                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0054'})
            } else {
                if Npc_TabantaHatago003.IsOnInstEventFlag() {
                    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                        Event6:
                        Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0001'})
                        if !EventSystemActor.GeneralChoice2() {
                            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0050'})
                                Event28:
                                if !EventSystemActor.GeneralChoice2() {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkWeaponShowSword', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                    Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0052'})
                                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TabantaHatago003_Talk', 'IsWaitFinish': True})
                                } else {
                                    Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0053'})
                                }
                            } else {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0002'})
                            }
                        } else {
                            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0051'})
                                goto Event28
                            } else {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0003'})
                            }
                        }
                    } else {
                        Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0004', 'ASName': ''})
                    }
                } else {
                    goto Event6
                }
            }
          case 1:
            Event43:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaHatago003_Talk'}) {
                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0054', 'ASName': 'Act_StandReclineWait'})
            } else {
                if Npc_TabantaHatago003.IsOnInstEventFlag() {
                    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                        Event13:
                        Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0001', 'ASName': 'Act_StandReclineWait'})
                        if !EventSystemActor.GeneralChoice2() {
                            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0050', 'ASName': 'Act_StandReclineWait'})
                                Event39:
                                if !EventSystemActor.GeneralChoice2() {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkWeaponShowSword', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                    Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0052', 'ASName': 'Act_StandReclineWait'})
                                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TabantaHatago003_Talk', 'IsWaitFinish': True})
                                } else {
                                    Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0053', 'ASName': 'Act_StandReclineWait'})
                                }
                            } else {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0002', 'ASName': 'Act_StandReclineWait'})
                            }
                        } else {
                            if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0051', 'ASName': 'Act_StandReclineWait'})
                                goto Event39
                            } else {
                                Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0003', 'ASName': 'Act_StandReclineWait'})
                            }
                        }
                    } else {
                        Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_0004', 'ASName': 'Act_StandReclineWait'})
                    }
                } else {
                    goto Event13
                }
            }
          case 2:
            goto Event43
          case 3:
            goto Event43
        }
      case 10:
        goto Event46
      case 11:
        Npc_TabantaHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:talk_1000'})
        Npc_TabantaHatago003.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    }
}

void Near() {
    if !Npc_TabantaHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event20:
            Npc_TabantaHatago003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago003:near_0001', 'DispFrame': 90, 'IsChecked': False})
          case 2:
            goto Event20
          case 3:
            goto Event20
        }
    }
}
