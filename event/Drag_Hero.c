-------- EventFlow: Drag_Hero --------

Actor: Npc_SmallOasis006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_IncreaseRupee', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_AppearRupee']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'CheckRupee', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis003
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SmallOasis006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_101', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_104'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_105'})
            Event227:
            if !EventSystemActor.GeneralChoice2() {
                Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_107'})
                Event173:
                Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_106'})
                Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_102', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Drag_Hero', 'ForceRunTelop': True, 'StepName': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': False})
            } else {
                Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_103', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event173
            }
        } else {
            Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_108'})
            goto Event227
        }
    } else {
        Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_R_109'})
    }
}

void Ready_Npc_SmallOasis005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis005.CheckActorAction13() {
      case 2:
        Event199:
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_rob_first'}) {
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_012', 'IsCloseMessageDialog': True})

            call PointCamera()

            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_013', 'IsCloseMessageDialog': True})

            call ReturnCamera()

            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_014'})
        } else {
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_005'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_006', 'IsCloseMessageDialog': True})

                call PointCamera()

                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_010', 'IsCloseMessageDialog': True})
                Event274:

                call ReturnCamera()

                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_007'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Drag_Hero_rob_first', 'IsWaitFinish': True})
            } else {
                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_009', 'IsCloseMessageDialog': True})

                call PointCamera()

                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_011', 'IsCloseMessageDialog': True})
                goto Event274
            }
        }
      case 3:
        goto Event199
      case 10:
        goto Event199
      case 11:
        Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_R_015'})
    }
}

void Step1_Npc_SmallOasis005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Rob'}) {
        switch Npc_SmallOasis005.CheckActorAction13() {
          case 0:
            Event281:
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_004'})
          case 1:
            goto Event281
          case 2:
            goto Event281
          case 3:
            goto Event281
          case 4:
            goto Event281
          case 5:
            goto Event281
          case 6:
            goto Event281
          case 7:
            goto Event281
          case 8:
            goto Event281
          case 9:
            goto Event281
          case 10:
            goto Event281
          case 11:
            Event282:
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_005'})
          case 12:
            goto Event281
          case 13:
            goto Event281
        }
    } else {
        switch Npc_SmallOasis005.CheckActorAction13() {
          case 0:
            Event47:
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_SmallOasis005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_002'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Drag_Hero_Rob', 'IsWaitFinish': True})
            } else {
                Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_003'})
            }
          case 1:
            goto Event47
          case 2:
            goto Event47
          case 3:
            goto Event47
          case 4:
            goto Event47
          case 5:
            goto Event47
          case 6:
            goto Event47
          case 7:
            goto Event47
          case 8:
            goto Event47
          case 9:
            goto Event47
          case 10:
            goto Event47
          case 11:
            goto Event282
          case 12:
            goto Event47
          case 13:
            goto Event47
        }
    }
}

void Step1_Npc_SmallOasis008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis008.CheckActorAction13() {
      case 0:
        Event289:
        if Npc_SmallOasis008.IsOnInstEventFlag() {
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_003'})
            Event51:
            if !EventSystemActor.GeneralChoice2() {
                Event124:
                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_007'})
                if !EventSystemActor.GeneralChoice2() {

                    fork {
                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_002', 'IsOverWriteLabelActorName': False})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    }

                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 600}) {
                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_015'})
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -600})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_016'})
                            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                            EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Armor_053_Head', 'Value': 1, 'IsWaitFinish': True})
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'PorchItemName': 'Armor_053_Upper', 'IsWaitFinish': True})
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'PorchItemName': 'Armor_053_Lower', 'IsWaitFinish': True})
                            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo378_1', 'EntryPointName': 'Demo', 'IsWaitFinish': True, 'EndFade': 0})
                        } else {
                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_017', 'IsCloseMessageDialog': False})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                        }
                    } else {
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_018'})
                    }
                } else {
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_008'})
                }
            } else {
                goto Event124
            }
        } else {
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingS', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_004'})
            goto Event51
        }
      case 1:
        goto Event289
      case 10:
        goto Event289
      case 11:
        goto Event289
      case 13:
        goto Event289
    }
}

void Step1_Npc_SmallOasis006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_S1_001', 'IsOverWriteLabelActorName': False})
}

void Finish_Npc_SmallOasis008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Finish_first'}) {
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_009'})
            Event112:
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_010'})
        } else {
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_008'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Drag_Hero_Finish_first', 'IsWaitFinish': True})
            goto Event112
        }
    } else {
        if Npc_SmallOasis008.IsOnInstEventFlag() {
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_009', 'IsCloseMessageDialog': True})
            Event237:
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_011'})
            if !EventSystemActor.GeneralChoice2() {

                call Npc_SmallOasis008.buy()

            } else {
                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_012'})
            }
        } else {
            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_F_008', 'IsCloseMessageDialog': True})
            goto Event237
        }
    }
}

void Step1_Npc_SmallOasis003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis003_S1_001', 'IsOverWriteLabelActorName': False})
    Event81:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis003_S1_004', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Event285:
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
        Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis003_S1_006'})
        goto Event81
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SmallOasis003")})

        goto Event285
      case 2:
        if EventSystemActor.CheckFlag({'FlagName': 'Oasis_Arrow_SoldOut'}) {
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_19'})
            Event293:
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                goto Event285
            } else {
                Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_20'})
                goto Event285
            }
        } else {
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_06', 'IsCloseMessageDialog': True})
            goto Event293
        }
      case 3:
        Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_ReadBook'})
    }
}

void Ready_Npc_SmallOasis006_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_FirstTime'}) {
        Event180:
        Npc_SmallOasis006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_Near_001', 'IsChecked': False, 'DispFrame': 90})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
            goto Event180
        } else {
            Npc_SmallOasis006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_Near_001', 'IsChecked': True, 'DispFrame': 300})
        }
    }
}

void Step1_Npc_SmallOasis008_Near() {
    Npc_SmallOasis008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis008_S1_Near_001', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_Npc_SmallOasis006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_F_002'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_F_003'})
        } else {
            Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_F_004'})
        }
    } else {
        Npc_SmallOasis006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis006_F_001'})
    }
}

void Finish_Npc_SmallOasis005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis005.CheckActorAction13() {
      case 2:
        Event177:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_F_003', 'IsCloseMessageDialog': False})
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_F_004'})
        } else {
            Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_006'})
        }
      case 3:
        goto Event177
      case 10:
        goto Event177
      case 11:
        Npc_SmallOasis005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Drag_Hero:Npc_SmallOasis005_S1_005'})
    }
}

void PointCamera() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_SmallOasis005.Demo_TurnAndLookToObject({'ObjectId': 2, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [-3781.219970703125, 189.0, 2861.590087890625], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'FaceId': 2, 'TurnPosition': [-3781.219970703125, 189.0, 2861.590087890625], 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Accept1FrameDelay': True, 'ActorIgnoringCollision': -1, 'TargetActor1': 3, 'ActorName1': 'Npc_SmallOasis005', 'Pattern1AtX': -3781.219970703125, 'Pattern1AtZ': 2861.590087890625, 'AtAppendMode': 1, 'PosAppendMode': 2, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'StartCalcOnly': False, 'Pattern1Fovy': 35.0, 'Pattern1PosY': 20.0, 'Pattern1AtY': 189.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1, 'MotionMode': 1, 'Count': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void ReturnCamera() {
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 0, 'Count': 0.0})
    Npc_SmallOasis005.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_SmallOasis005', 'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
}

void Drag_Hero_Finish() {
    if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Finish'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Drag_Hero_Finish', 'IsWaitFinish': True})
        }
    }
}
