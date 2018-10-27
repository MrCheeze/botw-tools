-------- EventFlow: Npc_TamourPlainHatago_002 --------

Actor: Npc_TamourPlainHatago_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePostureWithAS']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_FlagON', 'Demo_AppearRupee', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog', 'Demo_IncreasePorchItem']
queries: ['HasPorchItem', 'GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'CheckTimeType', 'CheckWeather', 'CheckTime', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call WakrenHello()

    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC002_NormalFirst'}) {
        Event107:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MinakkareHatago_NPC002_Ichikara', 'IsWaitFinish': True})
            Event104:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk43'})
            Event106:
            switch EventSystemActor.GeneralChoice4() {
              case 0:

                call Wakuren_Enokida()

                Event143:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk46'})
                goto Event106
              case 1:

                call Wakuren_Anataha()

                goto Event143
              case 2:

                call Wakuren_Kokotte()

                goto Event143
              case 3:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk44'})
            }
        } else {
            goto Event104
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC002_NormalFirst', 'IsWaitFinish': True})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk35'})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk37'})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk42'})
        goto Event107
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareMini_Dragonfly_Finish'}) {
        Event6:
        Npc_TamourPlainHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:near00', 'IsChecked': False, 'DispFrame': 90})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'MinakkareMini_Dragonfly_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MinakkareMini_Dragonfly_Give'}) {
                Event124:
                Npc_TamourPlainHatago_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:near00', 'DispFrame': 300, 'IsChecked': True})
            } else {
                goto Event6
            }
        } else {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Plant_H'}) {
                goto Event124
            } else {
                goto Event6
            }
        }
    }
}

void DragonflySisters002_Ready() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC002_Yoroisou'}) {
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk13'})
        Event21:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MinakkareHatago_NPC002_Ichikara', 'IsWaitFinish': True})
            Event23:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk06', 'IsCloseMessageDialog': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call Wakuren_Enokida()

              case 1:
                Event140:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk07'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_Activated'})
              case 2:
                goto Event140
            }
        } else {
            goto Event23
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC002_First'}) {
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk13'})
            Event13:
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Plant_H'}) {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk03', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {

                    fork {
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    } {
                        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk05'})
                    }

                    EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'IsWaitFinish': True, 'PorchItemName': 'Item_PlantGet_H'})
                    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk04'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareHatago_NPC002_Yoroisou'})
                    goto Event21
                } else {
                    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk48'})
                }
            } else {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk49'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC002_First', 'IsWaitFinish': True})
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk00'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk01'})
                goto Event13
            } else {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk02'})
            }
        }
    }
}

void DragonflySisters002_LittleSister() {

    call WakrenHello()

    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk21'})
    Event52:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.CheckTime({'Hour': 8, 'ConditionType': 'ge', 'Minute': 0}) {
            if EventSystemActor.CheckTime({'Hour': 20, 'ConditionType': 'le', 'Minute': 0}) {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk25'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk27'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk28', 'IsCloseMessageDialog': True})
                Event144:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk45'})
                goto Event52
            } else {
                Event62:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk26'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk27'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk29', 'IsCloseMessageDialog': True})
                goto Event144
            }
        } else {
            goto Event62
        }
      case 1:

        call Wakuren_Anataha()

        goto Event144
      case 2:

        call Wakuren_Kokotte()

        goto Event144
      case 3:
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk50'})
    }
}

void DragonflySisters002_Finish() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TamourPlainHatago_002.IsOnInstEventFlag() {
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk18'})
        Event83:
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk35'})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk36', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk37', 'IsCloseMessageDialog': True})
        Npc_TamourPlainHatago_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk41'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_Finish'})
    } else {
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk13'})
        goto Event83
    }
}

void WakrenHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TamourPlainHatago_002.IsOnInstEventFlag() {
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk13'})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk14'})
          case 1:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk15'})
          case 2:
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk16'})
              case 1:
                Event44:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk17'})
              case 2:
                goto Event44
              case 3:
                goto Event44
            }
          case 3:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk18'})
          case 4:
            Event46:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk19'})
          case 5:
            goto Event46
          case 6:
            Event47:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk20'})
          case 7:
            goto Event47
        }
    }
}

void DragonflySisters002_Dragonfly() {

    call WakrenHello()

    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk51', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk52'})
    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk38'})
    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk31'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_Dragonfly'})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_C', 'Count': 1}) {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_T'}) {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_I'}) {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk47'})
                Event128:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk32_2'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk32_3'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk32_4'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_Through'})
            } else {
                Event136:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else {
            goto Event136
        }
    } else {
        goto Event136
    }
}

void DragonflySisters002_Give() {

    call WakrenHello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_C', 'Count': 1}) {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_T'}) {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_I'}) {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk34'})
            } else {
                Event99:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk39'})
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk40'})
            }
        } else {
            goto Event99
        }
    } else {
        goto Event99
    }
}

void DragonflySisters002_Through() {

    call WakrenHello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_C', 'Count': 1}) {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_T'}) {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_I'}) {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk32'})
                goto Event128
            } else {
                Event71:
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk31'})
            }
        } else {
            goto Event71
        }
    } else {
        goto Event71
    }
}

void Wakuren_Enokida() {
    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC002_Enokida'}) {
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk22'})
        Event30:
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk11', 'IsCloseMessageDialog': True})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC002_Enokida', 'IsWaitFinish': True})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk09'})
        goto Event30
    }
}

void Wakuren_Anataha() {
    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk08'})
    if EventSystemActor.CheckTime({'Hour': 8, 'ConditionType': 'ge', 'Minute': 0}) {
        if EventSystemActor.CheckTime({'Hour': 20, 'ConditionType': 'le', 'Minute': 0}) {
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk25'})
            Event142:
            if EventSystemActor.CheckFlag({'FlagName': 'MinakkareMini_Dragonfly_Finish'}) {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk37', 'IsCloseMessageDialog': True})
            } else {
                Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk33', 'IsCloseMessageDialog': True})
            }
        } else {
            Event78:
            Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk26'})
            goto Event142
        }
    } else {
        goto Event78
    }
}

void Wakuren_Kokotte() {
    Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk23'})
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MinakkareHatago_NPC002_Ichikara', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC002_Enokida', 'IsWaitFinish': True})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk24'})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk22'})
        Npc_TamourPlainHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_002:talk11', 'IsCloseMessageDialog': True})
    }
}
