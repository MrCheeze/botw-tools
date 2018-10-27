-------- EventFlow: MiniGame_GambleTreasureBox --------

Actor: Npc_SouthernVillageGambler
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_AdvanceQuest', 'Demo_SetGameDataInt', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_WarpPlayerToAnchor', 'Demo_AppearRupee']
queries: ['CheckFlag', 'GeneralChoice3', 'GeneralChoice4', 'CheckRupee', 'RandomChoice3', 'CheckGameDataInt', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TBox_Field_Gamble[box1]
entrypoint: None()
actions: ['Demo_SetTreasure', 'Demo_SetTreasureBoxOpenAndClose']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TBox_Field_Gamble[box2]
entrypoint: None()
actions: ['Demo_SetTreasure', 'Demo_SetTreasureBoxOpenAndClose']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TBox_Field_Gamble[box3]
entrypoint: None()
actions: ['Demo_SetTreasure', 'Demo_SetTreasureBoxOpenAndClose']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAhead', 'Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[anather_system]
entrypoint: None()
actions: ['Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SouthernVillageGambler_Talk() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_SouthernVillageGambler")})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_FirstTalkFinish'}) {
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk11', 'IsCloseMessageDialog': False})
        Event15:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk15'})

            call Common.DisableSaveAndWarp()


            call PrepareGamble()

          case 1:
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk12'})
            Event152:

            fork {
                Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk05'})
                Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk06'})
            } {
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 2968.590087890625, 'Pattern1PosY': 120.91999816894531, 'Pattern1PosZ': 3379.7900390625, 'Pattern1AtX': 2971.639892578125, 'Pattern1AtY': 119.80999755859375, 'Pattern1AtZ': 3376.080078125, 'Accept1FrameDelay': False, 'Count': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'Talk'})
            }


            fork {
                Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk07'})
                Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk08'})
            } {
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 45.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
            }

            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk09'})
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk10'})
            goto Event15
          case 2:

            call NoGamble()

        }
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_GambleTreasureBox_FirstTalkFinish', 'IsWaitFinish': True})
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk03', 'IsCloseMessageDialog': False})

        fork {
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk34'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

        fork {
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk04', 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
        }

        goto Event152
    }
}

void TreasureBoxSetUp() {
    switch EventSystemActor.RandomChoice3() {
      case 0:
        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MiniGame_GambleTreasureBox_WinBoxNumber', 'Value': 1, 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_10rupee'}) {
            TBox_Field_Gamble[box1].Demo_SetTreasure({'ActorName': 'PutRupee_Red', 'IsWaitFinish': True})
            Event54:
            TBox_Field_Gamble[box2].Demo_SetTreasure({'ActorName': 'PutRupee', 'IsWaitFinish': True})
            TBox_Field_Gamble[box3].Demo_SetTreasure({'ActorName': 'PutRupee', 'IsWaitFinish': True})
            Event61:

            fork {
                TBox_Field_Gamble[box1].Demo_SetTreasureBoxOpenAndClose({'IsSetOpen': 1, 'IsWaitFinish': True})
            } {
                TBox_Field_Gamble[box2].Demo_SetTreasureBoxOpenAndClose({'IsSetOpen': 1, 'IsWaitFinish': True})
            } {
                TBox_Field_Gamble[box3].Demo_SetTreasureBoxOpenAndClose({'IsSetOpen': 1, 'IsWaitFinish': True})
            }

        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_50rupee'}) {
                TBox_Field_Gamble[box1].Demo_SetTreasure({'ActorName': 'PutRupee_Silver', 'IsWaitFinish': True})
                goto Event54
            } else {
                TBox_Field_Gamble[box1].Demo_SetTreasure({'ActorName': 'PutRupee_Gold', 'IsWaitFinish': True})
                goto Event54
            }
        }
      case 1:
        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MiniGame_GambleTreasureBox_WinBoxNumber', 'Value': 2, 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_10rupee'}) {
            TBox_Field_Gamble[box2].Demo_SetTreasure({'ActorName': 'PutRupee_Red', 'IsWaitFinish': True})
            Event49:
            TBox_Field_Gamble[box1].Demo_SetTreasure({'ActorName': 'PutRupee', 'IsWaitFinish': True})
            TBox_Field_Gamble[box3].Demo_SetTreasure({'ActorName': 'PutRupee', 'IsWaitFinish': True})
            goto Event61
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_50rupee'}) {
                TBox_Field_Gamble[box2].Demo_SetTreasure({'ActorName': 'PutRupee_Silver', 'IsWaitFinish': True})
                goto Event49
            } else {
                TBox_Field_Gamble[box2].Demo_SetTreasure({'ActorName': 'PutRupee_Gold', 'IsWaitFinish': True})
                goto Event49
            }
        }
      case 2:
        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MiniGame_GambleTreasureBox_WinBoxNumber', 'Value': 3, 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_10rupee'}) {
            TBox_Field_Gamble[box3].Demo_SetTreasure({'ActorName': 'PutRupee_Red', 'IsWaitFinish': True})
            Event59:
            TBox_Field_Gamble[box1].Demo_SetTreasure({'ActorName': 'PutRupee', 'IsWaitFinish': True})
            TBox_Field_Gamble[box2].Demo_SetTreasure({'ActorName': 'PutRupee', 'IsWaitFinish': True})
            goto Event61
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_50rupee'}) {
                TBox_Field_Gamble[box3].Demo_SetTreasure({'ActorName': 'PutRupee_Silver', 'IsWaitFinish': True})
                goto Event59
            } else {
                TBox_Field_Gamble[box3].Demo_SetTreasure({'ActorName': 'PutRupee_Gold', 'IsWaitFinish': True})
                goto Event59
            }
        }
    }
}

void FinalizeGamble() {

    fork {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_10rupee'})
    } {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_50rupee'})
    } {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_100rupee'})
    }


    fork {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_Open1'})
    } {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_Open2'})
    } {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_Open3'})
    }

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_GetOut'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_ChoiceBox'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_Activated'})
}

void NoGamble() {

    fork {
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk13', 'IsCloseMessageDialog': False})
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk14', 'IsCloseMessageDialog': True})
    } {

        call Common.EnableSaveAndWarp()


        call FinalizeGamble()

    }

}

void PrepareGamble() {
    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
    Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk16', 'IsCloseMessageDialog': False})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.CheckRupee({'Value': 10}) {
            EventSystemActor.Demo_IncreaseRupee({'Value': -10, 'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_10rupee'})
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk17', 'IsCloseMessageDialog': False})
            Event115:
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk33'})
            Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})

            call TreasureBoxSetUp()

            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosY': 120.13999938964844, 'Pattern1AtY': 119.19999694824219, 'Pattern1PosX': 2967.35009765625, 'Pattern1PosZ': 3376.81005859375, 'Pattern1AtX': 2969.9599609375, 'Pattern1AtZ': 3375.070068359375, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

            fork {
                Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk22'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
            }

            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
        } else {
            Event23:
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk20'})
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk21'})

            call Common.EnableSaveAndWarp()


            call FinalizeGamble()

        }
      case 1:
        if EventSystemActor.CheckRupee({'Value': 50}) {
            EventSystemActor.Demo_IncreaseRupee({'Value': -50, 'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_50rupee'})
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk18', 'IsCloseMessageDialog': False})
            goto Event115
        } else {
            goto Event23
        }
      case 2:
        if EventSystemActor.CheckRupee({'Value': 100}) {
            EventSystemActor.Demo_IncreaseRupee({'Value': -100, 'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_100rupee'})
            Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk19', 'IsCloseMessageDialog': False})
            goto Event115
        } else {
            goto Event23
        }
      case 3:

        call NoGamble()

    }
}

void Finish_Npc_SouthernVillageGambler_StepStart() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_Open1'}) {
        Event144:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Fader.Demo_FadeOut({'Frame': 2, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1})
        EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'Gamble_PlayerTalk', 'AnchorName': ''})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 0, 'ActorName': 'Npc_SouthernVillageGambler', 'IsUseSlowTurn': False, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
        Npc_SouthernVillageGambler.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        GameRomCamera.Demo_MovePosFlow({'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosY': 120.16000366210938, 'Pattern1AtY': 118.80999755859375, 'Pattern1Fovy': 40.0, 'Pattern1PosX': 2971.610107421875, 'Pattern1PosZ': 3378.43994140625, 'Pattern1AtX': 2969.85009765625, 'Pattern1AtZ': 3374.56005859375, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Fader.Demo_FadeIn({'Frame': 2, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_Open1'}) {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_GambleTreasureBox_WinBoxNumber', 'Value': 1, 'Operator': 'Equal'}) {
                Event77:
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_10rupee'}) {
                    Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk24'})
                    Event109:

                    call FinalizeGamble()

                    Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk27'})
                    if !EventSystemActor.GeneralChoice2() {

                        call PrepareGamble()

                    } else {
                        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk28', 'IsCloseMessageDialog': False})
                        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk35'})

                        call Common.EnableSaveAndWarp()

                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_50rupee'}) {
                        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk25'})
                        goto Event109
                    } else {
                        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk26'})
                        goto Event109
                    }
                }
            } else {
                Event68:
                Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk23'})
                goto Event109
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_Open2'}) {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_GambleTreasureBox_WinBoxNumber', 'Operator': 'Equal', 'Value': 2}) {
                    goto Event77
                } else {
                    goto Event68
                }
            } else {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_GambleTreasureBox_WinBoxNumber', 'Operator': 'Equal', 'Value': 3}) {
                    goto Event77
                } else {
                    goto Event68
                }
            }
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_Open2'}) {
            goto Event144
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_GambleTreasureBox_Open3'}) {
                goto Event144
            } else {

                fork {
                    Npc_SouthernVillageGambler.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    GameRomCamera.Demo_MovePosFlow({'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 2969.340087890625, 'Pattern1PosY': 118.91999816894531, 'Pattern1PosZ': 3377.919921875, 'Pattern1AtX': 2970.81005859375, 'Pattern1AtY': 118.80999755859375, 'Pattern1AtZ': 3375.31005859375, 'Pattern1Fovy': 55.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk32'})
                } {
                    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2967.501953125, 'DestinationY': 117.75350189208984, 'DestinationZ': 3381.306884765625, 'DirectionY': 140.0})
                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
                }

                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_GambleTreasureBox_ChoiceBox'})
            }
        }
    }
}

void ChoiceBox_Npc_SouthernVillageGambler_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.RandomChoice3() {
      case 0:
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk29', 'IsCloseMessageDialog': True})
      case 1:
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk30'})
      case 2:
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk31'})
    }
}

void OpenWithoutPermission() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'Pattern1PosX': 2981.570068359375, 'Pattern1PosY': 120.83000183105469, 'Pattern1PosZ': 3374.0, 'Pattern1AtX': 2976.389892578125, 'Pattern1AtY': 118.79000091552734, 'Pattern1AtZ': 3372.530029296875, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_SouthernVillageGambler.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})

    fork {
        Npc_SouthernVillageGambler.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:talk36', 'IsCloseMessageDialog': True})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_SouthernVillageGambler', 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosX': 2972.0400390625, 'Pattern1PosY': 119.63999938964844, 'Pattern1PosZ': 3377.4599609375, 'Pattern1AtX': 2968.8701171875, 'Pattern1AtY': 118.47000122070312, 'Pattern1AtZ': 3374.340087890625, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor[anather_system].Demo_WarpPlayerToDestination({'DirectionY': -36.29899978637695, 'IsWaitFinish': True, 'DestinationX': 2973.0009765625, 'DestinationY': 118.14389038085938, 'DestinationZ': 3373.6884765625})
    GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.6000000238418579, 'IsWaitFinish': True, 'DestPosX': 2970.080078125, 'DestPosY': 117.94000244140625, 'DestPosZ': 3376.75})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 0, 'ActorName': 'Npc_SouthernVillageGambler', 'IsUseSlowTurn': False, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})

    call Ready_Npc_SouthernVillageGambler_Talk()

}

void Ready_Npc_SouthernVillageGambler_Near() {
    Npc_SouthernVillageGambler.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/MiniGame_GambleTreasureBox:Near00'})
}
