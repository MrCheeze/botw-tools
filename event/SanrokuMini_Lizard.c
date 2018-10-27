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
      case 2:
        Event63:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            goto Event64
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:NewText_04'})
            goto Event8
        }
      case 3:
        goto Event63
      case 4:
        goto Event63
      case 5:
        goto Event63
      case 6:
        goto Event63
      case 7:
        goto Event63
      case 8:
        goto Event63
      case 9:
        goto Event63
      case 10:
        goto Event63
      case 11:
        goto Event63
      case 12:
        goto Event63
      case 13:
        goto Event63
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
      case 2:
        goto Event26
      case 3:
        goto Event26
      case 4:
        goto Event26
      case 5:
        goto Event26
      case 6:
        goto Event26
      case 7:
        goto Event26
      case 8:
        goto Event26
      case 9:
        goto Event26
      case 10:
        goto Event26
      case 11:
        goto Event26
      case 12:
        goto Event26
      case 13:
        goto Event26
    }
}

void Ready_Npc_DeathEastHatago_002_Near() {
    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case 0:
        Event69:
        Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_03'})
      case 1:
        goto Event69
      case 2:
        Event67:
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
          case 1:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
          case 2:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_02'})
        }
      case 3:
        goto Event67
      case 4:
        goto Event67
      case 5:
        goto Event67
      case 6:
        goto Event67
      case 7:
        goto Event67
      case 8:
        goto Event67
      case 9:
        goto Event67
      case 10:
        goto Event67
      case 11:
        goto Event67
      case 12:
        goto Event67
      case 13:
        goto Event67
    }
}

void Finish_Npc_DeathEastHatago_002_Near() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_X', 'Count': 10}) {
        switch Npc_DeathEastHatago_002.CheckActorAction13() {
          case 0:
            Event74:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_03', 'IsChecked': True})
          case 1:
            goto Event74
          case 2:
            Event72:
            switch EventSystemActor.RandomChoice3() {
              case 0:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
              case 1:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': True})
              case 2:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_02', 'IsChecked': True})
            }
          case 3:
            goto Event72
          case 4:
            goto Event72
          case 5:
            goto Event72
          case 6:
            goto Event72
          case 7:
            goto Event72
          case 8:
            goto Event72
          case 9:
            goto Event72
          case 10:
            goto Event72
          case 11:
            goto Event72
          case 12:
            goto Event72
          case 13:
            goto Event72
        }
    } else {
        switch Npc_DeathEastHatago_002.CheckActorAction13() {
          case 0:
            Event88:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_03', 'IsChecked': False})
          case 1:
            goto Event88
          case 2:
            Event86:
            switch EventSystemActor.RandomChoice3() {
              case 0:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': False})
              case 1:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_00', 'DispFrame': 300, 'IsChecked': False})
              case 2:
                Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/SanrokuMini_Lizard:Near_02', 'IsChecked': False})
            }
          case 3:
            goto Event86
          case 4:
            goto Event86
          case 5:
            goto Event86
          case 6:
            goto Event86
          case 7:
            goto Event86
          case 8:
            goto Event86
          case 9:
            goto Event86
          case 10:
            goto Event86
          case 11:
            goto Event86
          case 12:
            goto Event86
          case 13:
            goto Event86
        }
    }
}
