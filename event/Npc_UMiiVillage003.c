-------- EventFlow: Npc_UMiiVillage003 --------

Actor: Npc_UMiiVillage003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice2', 'RandomChoice2', 'CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage003.CheckActorAction13() {
      case [0, 1, 2, 3]:

        call HoneyHello()

        if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC003_NormalFirst'}) {
            Event37:
            Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk16', 'IsCloseMessageDialog': False})
            Event40:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC003_Fine'}) {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk21', 'IsCloseMessageDialog': True})
                    Event53:
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk20'})
                    goto Event40
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC003_Fine', 'IsWaitFinish': True})
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk17', 'IsCloseMessageDialog': True})
                    goto Event53
                }
              case 1:
                if !EventSystemActor.RandomChoice2() {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk18', 'IsCloseMessageDialog': False})
                } else {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk22', 'IsCloseMessageDialog': False})
                }
                Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk23'})
                goto Event53
              case 2:

                fork {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk19', 'IsCloseMessageDialog': True})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                }

                if !EventSystemActor.RandomChoice2() {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk27'})
                } else {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk24', 'IsCloseMessageDialog': True})
                }
                goto Event53
              case 3:
                Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk25'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC003_NormalFirst'})
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC003_First'}) {
                Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk26'})
                Event28:
                Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk11'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk13'})
                } else {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk12'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC003_First', 'IsWaitFinish': True})
                Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk05'})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    goto Event28
                }
            }
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk28'})
        } else {
            Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk29'})
        }
      case 11:
        Event26:
        Npc_UMiiVillage003.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk00', 'IsWaitFinish': True})
    }
}

void Near() {
    switch Npc_UMiiVillage003.CheckActorAction13() {
      case 3:
        Npc_UMiiVillage003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:near01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_UMiiVillage003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void GiveCake_Honey_Ready() {
    Event62:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage003.CheckActorAction13() {
      case [0, 1]:

        call HoneyHello()

        if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC003_First'}) {
            goto Event37
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC003_First', 'IsWaitFinish': True})
            Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk05'})
            if EventSystemActor.GeneralChoice2() in [0, 1] {
                Npc_UMiiVillage003.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk06', 'IsWaitFinish': True})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk10'})
                    Npc_UMiiVillage003.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk09', 'IsWaitFinish': True})
                }
            }
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk15'})
        } else {
            Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk14'})
        }
      case 11:
        goto Event26
    }
}

void GiveCake_Honey_Finish() {
    goto Event0
}

void HoneyHello() {
    if Npc_UMiiVillage003.IsOnInstEventFlag() {
        Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk08'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk01'})
      case [2, 3, 4, 5]:
        Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk02'})
      case [6, 7]:
        Npc_UMiiVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage003:talk03'})
    }
}

void GiveCake_Honey_Give() {
    goto Event62
}
