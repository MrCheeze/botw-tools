-------- EventFlow: Npc_HatenoVillage022 --------

Actor: Npc_HatenoVillage022
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_IncreasePorchItem', 'Demo_AppearRupee', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckWeather', 'CheckPlayerWeaponFired', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'GeneralChoice8', 'HasPorchItem', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Mansaku_Hello()

    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk17'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk22'})
      case 1:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk21'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoNPC022_Ganon'})
      case 2:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk20'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoNPC022_Zelda'})
      case 3:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk19'})
    }
}

void Near() {
    Event17:
    switch Npc_HatenoVillage022.CheckActorAction13() {
      case 0:
        Event110:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_LoveInsects_Finish'}) {
            Event35:
            Npc_HatenoVillage022.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:near01', 'IsChecked': False, 'DispFrame': 90})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_LoveInsects_Report'}) {
                Event111:
                Npc_HatenoVillage022.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:near01', 'DispFrame': 300, 'IsChecked': True})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_LoveInsects_Activated'}) {
                    goto Event35
                } else {
                    goto Event111
                }
            }
        }
      case 1:
        goto Event110
      case 2:
        goto Event110
      case 3:
        goto Event110
    }
}

void Ready_Insects_Mansaku() {

    call Mansaku_Hello()

    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk01'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk02'})
        Event27:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk05'})
            Event29:
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk06'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk08'})
                Event37:
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk25'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk28'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk29'})
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_LoveInsects_Activated', 'IsWaitFinish': True})
            } else {
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk09'})
                goto Event37
            }
        } else {
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk07'})
            goto Event29
        }
    } else {
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk03'})
        goto Event27
    }
}

void ReadyNear_Insects_Mansaku() {
    goto Event17
}

void Finish_Insects_Mansaku() {

    call Mansaku_Hello()

    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC022_Heard', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoNPC022_Here'})
    Event78:
    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk23'})
    Event67:
    switch EventSystemActor.GeneralChoice8() {
      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC022_Maji'}) {
            Event117:
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk41'})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_H', 'Count': 10}) {
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk32'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk34'})
                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Animal_Insect_H', 'Value': -10})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk35', 'IsCloseMessageDialog': True})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk37'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_LoveInsects_Finish'})
            } else {
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk45'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk33'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC022_Maji', 'IsWaitFinish': True})
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk31'})
            goto Event117
        }
      case 4:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk30', 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk36'})
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_LoveInsects_Report', 'IsWaitFinish': True})
      case 5:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC022_San'}) {
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk42'})
            Event123:
            switch Npc_HatenoVillage022.CheckActorAction13() {
              case 0:
                Event130:
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk43'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk28'})
                Event121:
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk24'})
                goto Event67
              case 1:
                goto Event130
              case 2:
                goto Event130
              case 3:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3442.7900390625, 'Pattern1PosY': 228.11004638671875, 'Pattern1PosZ': 2128.21142578125, 'Pattern1AtX': 3445.986328125, 'Pattern1AtY': 229.0420379638672, 'Pattern1AtZ': 2125.311767578125, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'Count': 15.0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk44'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk28', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_ReturnSavePoint_1({'Count': 15.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                goto Event121
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC022_San', 'IsWaitFinish': True})
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk26'})
            goto Event123
        }
      case 6:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk38'})
        goto Event121
      case 7:
        Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk19'})
    }
}

void FinishNear_Insects_Mansaku() {
    goto Event17
}

void Mansaku_Hello() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if Npc_HatenoVillage022.IsOnInstEventFlag() {
            Event104:
            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk39'})
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk13'})
                Event103:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk40'})
                goto Event103
            }
        } else {
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk00'})
            goto Event104
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_HatenoVillage022.IsOnInstEventFlag() {
            Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk18'})
        } else {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event9:
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk14'})
                  case 1:
                    Event41:
                    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk16'})
                  case 2:
                    goto Event41
                  case 3:
                    goto Event41
                }
              case 1:
                goto Event9
              case 2:
                goto Event9
              case 3:
                goto Event9
              case 4:
                goto Event9
              case 5:
                goto Event9
              case 6:
                Event51:
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk15'})
                  case 1:
                    Event52:
                    Npc_HatenoVillage022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage022:talk11'})
                  case 2:
                    goto Event52
                  case 3:
                    goto Event52
                }
              case 7:
                goto Event51
            }
        }
    }
}

void Answer_Insects_Mansaku() {

    call Mansaku_Hello()

    goto Event78
}

void Report_Insects_Mansaku() {

    call Mansaku_Hello()

    EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC022_Heard', 'IsWaitFinish': True})
    goto Event78
}

void AnswerNear_Insects_Mansaku() {
    goto Event17
}

void ReportNear_Insects_Mansaku() {
    goto Event17
}
