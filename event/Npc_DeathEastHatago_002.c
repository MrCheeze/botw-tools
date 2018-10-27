-------- EventFlow: Npc_DeathEastHatago_002 --------

Actor: Npc_DeathEastHatago_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreasePorchItem']
queries: ['GeneralChoice2', 'HasPorchItem', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case 0:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            Event75:
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_05'})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_X', 'Count': 3}) {
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_06', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_08', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_X', 'IsWaitFinish': True, 'Value': -3})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                    Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_10'})
                } else {
                    Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_09'})
                }
            } else {
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_11'})
                Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_07'})
            }
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_01'})
            goto Event75
        }
      case 1:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            goto Event75
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_02'})
            goto Event75
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_DeathEastHatago_002.IsOnInstEventFlag() {
            goto Event75
        } else {
            Npc_DeathEastHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:NewText_04'})
            goto Event75
        }
    }
}

void Near() {
    switch Npc_DeathEastHatago_002.CheckActorAction13() {
      case [0, 1]:
        Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:Near_03', 'IsChecked': False})
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:Near_00'})
          case 1:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:Near_00'})
          case 2:
            Npc_DeathEastHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_DeathEastHatago_002:Near_02'})
        }
    }
}
