-------- EventFlow: Npc_Goron018 --------

Actor: Npc_Goron018
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem', 'Demo_AppearRupee', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog', 'Demo_FlagOFF']
queries: ['CheckTimeType', 'CheckPlayerState', 'CheckFlag', 'GeneralChoice2', 'RandomChoice4', 'HasPorchItem', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_First'}) {

        call Ramera_Hello()

        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk47'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk48'})
            Event135:
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk46'})
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk51'})
        } else {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk08'})
        }
    } else {

        call Ramera_First()

        if !EventSystemActor.GeneralChoice2() {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk09', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk10', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron018_First', 'IsWaitFinish': True})
                if !EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk63'})
                }
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk31'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk32'})
                } else {
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk33'})
                }
                goto Event135
            } else {
                Event32:
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk08', 'IsOverWriteLabelActorName': False})
            }
        } else {
            goto Event32
        }
    }
}

void Near() {
    Event12:
    switch Npc_Goron018.CheckActorAction13() {
      case [0, 1, 12]:
        Npc_Goron018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:near00', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_Goron018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:near01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Event15:
        Npc_Goron018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void ImportGem_Ready() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_First'}) {

        call Ramera_Hello()

        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk55'})
        Event172:
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk56'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronMini_ImportGem_Activated'})
    } else {

        call Ramera_First()

        if !EventSystemActor.GeneralChoice2() {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk09', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk10', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron018_First', 'IsWaitFinish': True})
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk34'})
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk54'})
                goto Event172
            } else {
                Event164:
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk08', 'IsOverWriteLabelActorName': False})
            }
        } else {
            goto Event164
        }
    }
}

void ImportGem_Finish() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Ramera_Hello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_F', 'Count': 10}) {
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk57'})
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk59'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_F', 'Value': -10})

            fork {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
            } {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk20'})
            }

            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk61', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': 500})
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk62'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronMini_ImportGem_Finish'})
        } else {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk49'})
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk60'})
        }
    } else {
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk55'})
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk56'})
    }
}

void Ramera_First() {
    switch Npc_Goron018.CheckActorAction13() {
      case [0, 1, 10, 12]:

        call WomenClothing()

        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
                Event150:
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk00', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk05', 'IsOverWriteLabelActorName': False})
            }
          case [2, 3, 4]:
            if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
                goto Event150
            } else {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk06', 'IsOverWriteLabelActorName': False})
            }
          case [5, 6, 7]:
            if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
                goto Event150
            } else {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk07', 'IsOverWriteLabelActorName': False})
            }
        }
      case 11:
        Event109:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk35'})
            Event239:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk36'})
            goto Event239
          case 2:
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk37'})
            goto Event239
          case 3:
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk38'})
            goto Event239
        }
    }
}

void Ramera_Hello() {
    switch Npc_Goron018.CheckActorAction13() {
      case [0, 1, 12]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            if Npc_Goron018.IsOnInstEventFlag() {
                Event70:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk26', 'IsOverWriteLabelActorName': False})
                    Event249:

                    call WomenClothing()

                  case 1:
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk27', 'IsOverWriteLabelActorName': False})
                    goto Event249
                  case 2:
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk28', 'IsOverWriteLabelActorName': False})
                    goto Event249
                  case 3:
                    Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk29', 'IsOverWriteLabelActorName': False})
                    goto Event249
                }
            } else {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk16', 'IsOverWriteLabelActorName': False})
                goto Event249
            }
          case [2, 3, 4, 5]:
            if Npc_Goron018.IsOnInstEventFlag() {
                goto Event70
            } else {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk17', 'IsOverWriteLabelActorName': False})
                goto Event249
            }
          case [6, 7]:
            if Npc_Goron018.IsOnInstEventFlag() {
                goto Event70
            } else {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk18', 'IsOverWriteLabelActorName': False})
                goto Event249
            }
        }
      case 10:
        if Npc_Goron018.IsOnInstEventFlag() {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk03', 'IsOverWriteLabelActorName': False})
        } else {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk01', 'IsOverWriteLabelActorName': False})
        }
        goto Event249
      case 11:
        goto Event109
    }
}

void Clear_RemainsFire_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Ramera_Hello()

    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_Diamond'}) {
        Event114:
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron018_Diamond', 'IsWaitFinish': True})

        call RameraSell({'MessageId': 'EventFlowMsg/Npc_Goron018:talk11', 'MessageId_000': 'EventFlowMsg/Npc_Goron018:talk42', 'PorchItemName': 'Item_Ore_A', 'Count': 10, 'Value': -10, 'GetRupee': 5500, 'MessageId_001': 'EventFlowMsg/Npc_Goron018:talk22'})

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_Ruby'}) {
        Event113:
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron018_Ruby', 'IsWaitFinish': True})

        call RameraSell({'Count': 10, 'Value': -10, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk12', 'MessageId_000': 'EventFlowMsg/Npc_Goron018:talk43', 'PorchItemName': 'Item_Ore_B', 'GetRupee': 2300, 'MessageId_001': 'EventFlowMsg/Npc_Goron018:talk23'})

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_Sapphire'}) {
        Event111:
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron018_Sapphire', 'IsWaitFinish': True})

        call RameraSell({'Count': 10, 'Value': -10, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk13', 'MessageId_000': 'EventFlowMsg/Npc_Goron018:talk44', 'PorchItemName': 'Item_Ore_C', 'GetRupee': 2900, 'MessageId_001': 'EventFlowMsg/Npc_Goron018:talk24'})

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_Topaz'}) {
        Event112:
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron018_Topaz', 'IsWaitFinish': True})

        call RameraSell({'Count': 10, 'Value': -10, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk14', 'MessageId_000': 'EventFlowMsg/Npc_Goron018:talk45', 'PorchItemName': 'Item_Ore_D', 'GetRupee': 2000, 'MessageId_001': 'EventFlowMsg/Npc_Goron018:talk25'})

    } else
    switch EventSystemActor.RandomChoice4() {
      case 0:
        goto Event114
      case 1:
        goto Event113
      case 2:
        goto Event111
      case 3:
        goto Event112
    }
}

void RameraSell() {
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    if Npc_Goron018.IsOnInstEventFlag() {
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    } else {
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_000'})
    }
    Event214:
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'PorchItemName', 'Count': 'Count'}) {

            fork {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
            } {
                Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk20'})
            }

            Npc_Goron018.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk39'})
            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'PorchItemName', 'Value': 'Value'})
            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': 'GetRupee'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron018_Sold'})
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_001'})
            goto Event214
        } else {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk21', 'IsOverWriteLabelActorName': False})

            call RameraSoldFlagOff()

        }
    } else {
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk19', 'IsOverWriteLabelActorName': False})

        call RameraSoldFlagOff()

    }
}

void WomenClothing() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
        if Npc_Goron018.IsOnInstEventFlag() {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk04'})
        } else {
            Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk02'})
        }
        Npc_Goron018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:talk30'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void ImportGem_ReadyNear() {
    Event255:
    switch Npc_Goron018.CheckActorAction13() {
      case [0, 1, 12]:
        Npc_Goron018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:near00', 'DispFrame': 300, 'IsChecked': True})
      case 10:
        Npc_Goron018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:near01', 'DispFrame': 300, 'IsChecked': True})
      case 11:
        goto Event15
    }
}

void ImportGem_FinishNear() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_F', 'Count': 10}) {
        goto Event255
    } else
    goto Event12
}

void Clear_RemainsFire_Near() {
    goto Event12
}

void RameraSoldFlagOff() {
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron018_Sold'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron018_Diamond', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron018_Ruby', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron018_Sapphire', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron018_Topaz', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NPC_Goron018_Sold'})
    }
}
