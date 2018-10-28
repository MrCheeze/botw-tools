-------- EventFlow: Oasis_Drug_Challenge --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_GiveCookResultForNpc', 'Demo_FlagON']
queries: ['HasCookResultInPorch', 'GeneralChoice2', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Finish_Npc_SmallOasis002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis002.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Event27:

        call Npc_SmallOasis002.GinemaHello()

        Event3:
        switch EventSystemActor.HasCookResultInPorch({'CookEffectType': 'ResistHot', 'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {
          case [2, 1]:
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk01', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'CookEffectType': 'ResistHot', 'Count': 1, 'PorchItemName': 'Item_Cook_C_17'})
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Oasis_Drug_Challenge_Finish'})
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk06', 'ASName': ''})
            } else {
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            }
          case 0:
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk00', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk04', 'ASName': ''})
            } else {
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:talk05', 'ASName': ''})
            }
        }
      case 11:
        if Npc_SmallOasis002.IsOnInstEventFlag() {
            goto Event27
        } else {
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk10', 'ASName': ''})
        }
        goto Event3
    }
}

void Ready_Npc_SmallOasis002_Talk() {

    call Npc_SmallOasis002.Talk()

}

void Ready_Npc_SmallOasis002_Near() {
    Event30:
    switch Npc_SmallOasis002.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:near00', 'IsChecked': True, 'DispFrame': 300})
      case 11:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near02'})
          case 1:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near03'})
          case 2:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near04'})
          case 3:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near05'})
        }
    }
}

void Finish_Npc_SmallOasis002_Near() {
    switch EventSystemActor.HasCookResultInPorch({'CookEffectType': 'ResistHot', 'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {
      case [2, 1]:
        goto Event30
      case 0:
        switch Npc_SmallOasis002.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Oasis_Drug_Challenge:near00', 'DispFrame': 90, 'IsChecked': False})
          case 11:
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near02', 'IsChecked': False, 'DispFrame': 90})
              case 1:
                Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near03', 'IsChecked': False, 'DispFrame': 90})
              case 2:
                Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near04', 'IsChecked': False, 'DispFrame': 90})
              case 3:
                Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near05', 'IsChecked': False, 'DispFrame': 90})
            }
        }
    }
}
