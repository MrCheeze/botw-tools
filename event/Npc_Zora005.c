-------- EventFlow: Npc_Zora005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge', 'Demo_WarpPlayer', 'Demo_IncreaseGameDataInt']
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora005[Kuroida_Ichikara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora005[Kuroida_Zora]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_MoveToAnchor']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_StartAndKeep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Near() {
    switch Npc_Zora005[Kuroida_Zora].CheckActorAction13() {
      case [0, 1, 12]:
        Npc_Zora005[Kuroida_Zora].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora005:near00', 'IsChecked': False, 'DispFrame': 90})
      case [8, 9]:
        Npc_Zora005[Kuroida_Zora].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora005:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_First'}) {
        Event42:
        Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk18'})
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor04'}) {
            Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk07'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk02', 'IsCloseMessageDialog': True})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk01'})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                }

                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk03'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk04'})
                } else {
                    Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk16'})
                }
                Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk05', 'IsCloseMessageDialog': True})

                fork {
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3323.23291015625, 'Pattern1PosY': 258.7693786621094, 'Pattern1PosZ': -523.3462524414062, 'Pattern1AtX': 3326.17138671875, 'Pattern1AtY': 258.1684875488281, 'Pattern1AtZ': -523.281005859375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                } {
                    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-4', 'WarpDestPosName': 'KapodaMove'})
                }

                Npc_Zora005[Kuroida_Zora].Demo_MoveToAnchor({'AnchorName': 'AnchorAction4', 'AnchorUniqueName': 'Go_Ichikara', 'ASKeyName': 'Walk', 'IsWaitFinish': False, 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                } {
                    EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
                }

                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3321.37841796875, 'Pattern1PosY': 258.4703369140625, 'Pattern1PosZ': -524.3675537109375, 'Pattern1AtX': 3326.67822265625, 'Pattern1AtY': 258.4689025878906, 'Pattern1AtZ': -524.2498779296875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_BellNormalAppear'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Invite04'})
                EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'Location_UMiiVillageShopYadoya'})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            } else {
                Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk17'})
            }
        } else {
            Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk06'})
        }
    } else {
        Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk00'})
        Npc_Zora005[Kuroida_Zora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk15'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora005_First', 'IsWaitFinish': True})
        goto Event42
    }
}

void Npc_Zora005_Go_Near() {
    switch Npc_Zora005[Kuroida_Ichikara].CheckActorAction13() {
      case [0, 1, 12]:
        Npc_Zora005[Kuroida_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora005:near00', 'IsChecked': False, 'DispFrame': 90})
      case [8, 9]:
        Npc_Zora005[Kuroida_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora005:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Npc_Zora005_Go_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_UpArea'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk24'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_BackArea'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite05'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Finish'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_IchikaraFirst'}) {
                        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk35'})
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora005_IchikaraFirst', 'IsWaitFinish': True})
                        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk34'})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_FinishFirst'}) {
                    Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk29'})
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora005_FinishFirst', 'IsWaitFinish': True})
                    Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk28'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_MarryFirst'}) {
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk33'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora005_MarryFirst', 'IsWaitFinish': True})
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk30'})
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk31'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora005_Invite05First'}) {
            Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk26'})
            Event105:
            Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk27'})
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora005_Invite05First', 'IsWaitFinish': True})
            Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk30'})
            Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk25'})
            goto Event105
        }
    } else {
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
        EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplayEx': True, 'IsDisplay': False})

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
        Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk20'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk21'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk22', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                Event81:
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk23'})
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk17'})
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
              case 1:
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk22', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                goto Event81
              case 2:
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk22', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                goto Event81
              case 3:
                Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk17', 'IsCloseMessageDialog': True})
                Event150:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
            }
        } else {
            Npc_Zora005[Kuroida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora005:talk17'})
            goto Event150
        }
    }
}
