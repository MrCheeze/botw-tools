-------- EventFlow: Npc_HatenoGate003 --------

Actor: Npc_HatenoGate003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather', 'CheckFlag', 'GeneralChoice2', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate003_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate003_second'}) {
            switch Npc_HatenoGate003.CheckActorAction13() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
                switch EventSystemActor.CheckWeather() {
                  case [0, 2, 3]:
                    switch EventSystemActor.RandomChoice4() {
                      case 0:
                        Npc_HatenoGate003.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                      case 1:
                        Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk04'})
                      case 2:
                        Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk21'})
                      case 3:
                        Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk22'})
                    }
                  case 1:
                    Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk08'})
                }
              case 11:
                Event11:
                Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk06'})
            }
        } else
        switch Npc_HatenoGate003.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
            Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk18'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk19'})
            } else {
                Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk20'})
            }
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoGate003_second', 'IsWaitFinish': True})
          case 11:
            goto Event11
        }
    } else
    switch Npc_HatenoGate003.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk12', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkYes', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk14'})
            Event34:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoGate003_First', 'IsWaitFinish': True})
        } else {
            Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk15'})
            goto Event34
        }
      case 11:
        Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk13'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk17'})
        } else {
            Npc_HatenoGate003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:Talk16'})
        }
        goto Event34
    }
}

void Near() {
    switch Npc_HatenoGate003.CheckActorAction13() {
      case 1:
        if !EventSystemActor.CheckWeather() {
            Npc_HatenoGate003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:near00', 'DispFrame': 90, 'IsChecked': False})
        }
      case 3:
        if !EventSystemActor.CheckWeather() {
            Npc_HatenoGate003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:near01', 'DispFrame': 90, 'IsChecked': False})
        }
      case 11:
        Npc_HatenoGate003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoGate003:near02', 'DispFrame': 90, 'IsChecked': False})
    }
}
