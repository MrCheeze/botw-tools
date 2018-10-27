-------- EventFlow: SanrokuMini_Lizard --------

Actor: Npc_DeathEastHatago_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckAddPorchItem', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_DeathEastHatago_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case 0:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            Event64:
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_06'})
            Event9:
            if !EventSystemActor.GeneralChoice2() {
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_07'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SanrokuMini_Lizard_Activated'})
            } else {
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_08'})
            }
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_01'})
            Event8:
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_05'})
            goto Event9
        }
      case 1:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            goto Event64
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_02'})
            goto Event8
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            goto Event64
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_04'})
            goto Event8
        }
    }
}

void Finish_Npc_DeathEastHatago_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case 0:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            Event26:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_X', 'Count': 10}) {
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_09'})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_011_Upper'}) {
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_13', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_X', 'IsWaitFinish': True, 'Value': -10})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_011_Upper'})

                        Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_15'})
                        Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_16'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SanrokuMini_Lizard_Finish'})
                    } else {
                        Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_14'})
                    }
                } else {
                    Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_12'})
                }
            } else {
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_11'})
            }
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_01'})
            goto Event26
        }
      case 1:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            goto Event26
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_02'})
            goto Event26
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        goto Event26
    }
}

void Ready_Npc_DeathEastHatago_002_Near() {
    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case [0, 1]:
        Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_03'})
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
          case 1:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
          case 2:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_02'})
        }
    }
}

void Finish_Npc_DeathEastHatago_002_Near() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_X', 'Count': 10}) {
        switch Npc_DeathEastHatago_002.CheckActorAction13() {
          case [0, 1]:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_03', 'IsChecked': True})
          case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            switch EventSystemActor.RandomChoice3() {
              case 0:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
              case 1:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
              case 2:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_02', 'IsChecked': True})
            }
        }
    } else
    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case [0, 1]:
        Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_03', 'IsChecked': False})
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': False})
          case 1:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': False})
          case 2:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_02', 'IsChecked': False})
        }
    }
}
