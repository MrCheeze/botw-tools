-------- EventFlow: Npc_HatenoVillage008 --------

Actor: Npc_HatenoVillage008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckPlayerWeaponFired', 'RandomChoice2', 'CheckWeather', 'GeneralChoice2', 'HasPorchItem', 'CheckFlag', 'CheckPlayerState', 'RandomChoice4', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call NabuHello()

    if EventSystemActor.CheckWeather() in [0, 1, 2, 3] {
        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk00'})
        if !EventSystemActor.GeneralChoice2() {
            if Npc_HatenoVillage008.IsOnInstEventFlag() {
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk07'})
            } else {
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk03'})
            }
        } else {
            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk04'})
        }
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_WeaponMania_Finish'}) {
        Event120:
        switch Npc_HatenoVillage008.CheckActorAction13() {
          case [0, 1, 12]:
            if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
                Event23:
                Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near03', 'IsChecked': False, 'DispFrame': 90})
            } else
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near01', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near00', 'IsChecked': False, 'DispFrame': 90})
            }
          case 10:
            Event121:
            Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near04', 'IsChecked': False, 'DispFrame': 90})
          case 11:
            Event122:
            Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near02', 'IsChecked': False, 'DispFrame': 90})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_WeaponMania_Activated'}) {
        goto Event120
    } else
    Event24:
    switch Npc_HatenoVillage008.CheckActorAction13() {
      case [0, 1, 12]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event23
        } else
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near01', 'DispFrame': 300, 'IsChecked': True})
        } else {
            Npc_HatenoVillage008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:near00', 'DispFrame': 300, 'IsChecked': True})
        }
      case 10:
        goto Event121
      case 11:
        goto Event122
    }
}

void NabuHello() {
    switch Npc_HatenoVillage008.CheckActorAction13() {
      case [0, 1, 12]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event17:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk09'})
            } else {
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk01'})
            }
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk18'})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 13]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event17
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk08'})
            } else {
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk02'})
            }
            Event48:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        }
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk06'})
        } else {
            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk05'})
        }
        goto Event48
    }
}

void Ready_WaponMania() {

    call NabuHello()

    Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk10'})
    if EventSystemActor.GeneralChoice2() in [0, 1] {
        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk19'})
        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk100'})
        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk17'})
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_WeaponMania_Activated', 'IsWaitFinish': True})
    }
}

void Weapon01_WaponMania() {

    call Main({'PorchItemName': 'Weapon_Sword_001', 'Reward': 'PutRupee_Red', 'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk300', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk200', 'WeaponType': 'Npc_HatenoVillage008_Sword', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk103'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon01'})
}

void Weapon02_WaponMania() {

    call Main({'Reward': 'PutRupee_Red', 'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk303', 'PorchItemName': 'Weapon_Sword_060', 'WeaponType': 'Npc_HatenoVillage008_Sword', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk203', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk106'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon02'})
}

void Weapon03_WaponMania() {

    call Main({'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk306', 'PorchItemName': 'Weapon_Lsword_010', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk206', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk107', 'WeaponType': 'Npc_HatenoVillage008_LSword', 'Reward': 'PutRupee_Purple'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon03'})
}

void Weapon04_WaponMania() {

    call Main({'Reward': 'PutRupee_Purple', 'PorchItemName': 'Weapon_Bow_040', 'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk307', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk207', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk113', 'WeaponType': 'Npc_HatenoVillage008_Bow'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon04'})
}

void Weapon05_WaponMania() {

    call Main({'PorchItemName': 'Weapon_Lsword_074', 'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk313', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk213', 'WeaponType': 'Npc_HatenoVillage008_LSword', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk116', 'Reward': 'PutRupee_Silver'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon05'})
}

void Weapon06_WaponMania() {

    call Main({'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk316', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk216', 'Reward': 'PutRupee_Silver', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk117', 'PorchItemName': 'Weapon_Lsword_014', 'WeaponType': 'Npc_HatenoVillage008_LSword'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon06'})
}

void Weapon07_WaponMania() {

    call Main({'PorchItemName': 'Weapon_Spear_034', 'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk317', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk217', 'Reward': 'PutRupee_Gold', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk119', 'WeaponType': 'Npc_HatenoVillage008_Spear'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Weapon07'})
}

void Finish_WaponMania() {

    call Main({'Reward': 'Item_Ore_A', 'MessageId_LookFor': 'EventFlowMsg/Npc_HatenoVillage008:talk319', 'MessageId_Surprise': 'EventFlowMsg/Npc_HatenoVillage008:talk219', 'PorchItemName': 'Weapon_Sword_023', 'WeaponType': 'Npc_HatenoVillage008_Sword', 'MessageId_Next': 'EventFlowMsg/Npc_HatenoVillage008:talk30'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_WeaponMania_Finish'})
}

void Main() {

    call NabuHello()

    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'PorchItemName'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'WeaponType'})
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk20'})
            Event71:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {
            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk12'})
            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_Surprise'})
            switch EventSystemActor.RandomChoice3() {
              case 0:
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk13', 'IsCloseMessageDialog': True})
                Event136:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage008_Sword'}) {

                    call Common.ShowSword({'PorchItemName_Weapon': 'PorchItemName'})

                    Event160:
                    switch EventSystemActor.RandomChoice4() {
                      case 0:
                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk21'})
                        Event62:
                        switch EventSystemActor.RandomChoice3() {
                          case 0:
                            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk14'})
                            Event123:

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Reward'})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoVillage008_First'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'WeaponType'})
                            if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_WeaponMania_Weapon07'}) {
                                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'MessageId_Next', 'IsOverWriteLabelActorName': False})
                                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk121'})
                            } else
                            switch EventSystemActor.RandomChoice3() {
                              case 0:
                                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk15'})
                                Event180:
                                switch EventSystemActor.RandomChoice3() {
                                  case 0:
                                    Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk16'})
                                    Event68:
                                    Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_Next'})
                                    switch EventSystemActor.RandomChoice3() {
                                      case 0:
                                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk17'})
                                        Event168:
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'WeaponType'})
                                      case 1:
                                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk33'})
                                        goto Event168
                                      case 2:
                                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk34'})
                                        goto Event168
                                    }
                                  case 1:
                                    Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk31'})
                                    goto Event68
                                  case 2:
                                    Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk32'})
                                    goto Event68
                                }
                              case 1:
                                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk29'})
                                goto Event180
                              case 2:
                                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk30'})
                                goto Event180
                            }
                          case 1:
                            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk27'})
                            goto Event123
                          case 2:
                            Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk28'})
                            goto Event123
                        }
                      case 1:
                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk22'})
                        goto Event62
                      case 2:
                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk23'})
                        goto Event62
                      case 3:
                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk24'})
                        goto Event62
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage008_Spear'}) {

                    call Common.ShowSpear({'PorchItemName_Weapon': 'PorchItemName'})

                    goto Event160
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage008_Bow'}) {

                    call Common.ShowBow({'PorchItemName_Weapon': 'PorchItemName'})

                    goto Event160
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage008_LSword'}) {

                    call Common.ShowLargeSword({'PorchItemName_Weapon': 'PorchItemName'})

                    if !EventSystemActor.RandomChoice2() {
                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk25'})
                    } else {
                        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk26'})
                    }
                    goto Event62
                }
              case 1:
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk35'})
                goto Event136
              case 2:
                Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage008:talk36'})
                goto Event136
            }
        }
    } else {
        Npc_HatenoVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_LookFor'})
        goto Event71
    }
}

void Finish_HatenoMini_WeaponMania_Near() {
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_023'}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            goto Event120
        } else
        goto Event24
    } else
    goto Event120
}
