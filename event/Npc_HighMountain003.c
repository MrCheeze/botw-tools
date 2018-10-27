-------- EventFlow: Npc_HighMountain003 --------

Actor: Npc_HighMountain003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangePosture', 'Demo_ChangeEmotion']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_AdvanceQuest']
queries: ['RandomChoice2', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[fog]
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event21:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain003.CheckActorAction13() {
      case 0:
        Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk02', 'ASName': 'Talk'})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'RitoRabitMountain_Talk'}) {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk70'})
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk58'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_HighMountain003.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
                Npc_HighMountain003.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsConfront': True, 'FaceId': 2, 'IsValid': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk53', 'IsCloseMessageDialog': True})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk71'})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk72'})
            } else {
                Event59:
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk51'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'RitoRabitMountain_Finish'}) {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk60', 'ASName': '', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingS', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_HighMountain003.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
            Npc_HighMountain003.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsConfront': True, 'FaceId': 2, 'IsValid': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Event85:
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk61', 'ASName': '', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk62'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoRabitMountain_Talk'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'RitoRabitMountain_Activated'}) {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk58'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_HighMountain003.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
                Npc_HighMountain003.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk53', 'IsCloseMessageDialog': True})

                call Look()

                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk59', 'IsCloseMessageDialog': True, 'ASName': ''})
            } else {
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk59', 'ASName': ''})
            }
        } else {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk50'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk52', 'IsCloseMessageDialog': True})
                Npc_HighMountain003.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
                Npc_HighMountain003.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk53', 'IsCloseMessageDialog': False})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk54', 'IsCloseMessageDialog': False})
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk55'})
                Npc_HighMountain003.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})

                call Look()

                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk57', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'RitoRabitMountain_FlyTraining'})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': 'RitoRabitMountain'})
                if EventSystemActor.CheckFlag({'FlagName': 'Open_Dungeon087'}) {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingS', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    goto Event85
                }
            } else {
                goto Event59
            }
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk05', 'ASName': 'Talk'})
        } else {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk04', 'ASName': 'Talk'})
        }
      case 11:
        if Npc_HighMountain003.IsOnInstEventFlag() {
            Event36:
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk09', 'ASName': 'Talk'})
        } else {
            Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk06', 'ASName': 'Talk'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event36
            } else {
                Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk10', 'ASName': 'Talk'})
            }
        }
    }
}

void NPC003_MtUsagi_Ready() {
    goto Event21
}

void NPC003_MtUsagi_Finish() {
    goto Event21
}

void Near() {
    switch Npc_HighMountain003.CheckActorAction13() {
      case 0:
        Npc_HighMountain003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:near00', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'RitoRabitMountain_Activated'}) {
            Npc_HighMountain003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:near02', 'DispFrame': 90, 'IsChecked': False})
        } else {
            Npc_HighMountain003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:near02', 'DispFrame': 300, 'IsChecked': True})
        }
      case 10:
        Npc_HighMountain003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Look() {
    WorldManagerControl[fog].Demo_EventSetAddFogOff({'IsWaitFinish': True})

    fork {
        Npc_HighMountain003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'TurnDirection': 158.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_LookAtObject({'TurnDirection': 158.0, 'ObjectId': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsValid': True})
    }

    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3636.38232421875, 'Pattern1PosY': 311.650146484375, 'Pattern1PosZ': -1826.3353271484375, 'Pattern1AtX': -3633.99560546875, 'Pattern1AtY': 311.96771240234375, 'Pattern1AtZ': -1830.984619140625, 'Pattern1Fovy': 50.00001907348633, 'Count': 30.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3581.301025390625, 'Pattern1PosY': 377.18402099609375, 'Pattern1PosZ': -1954.251708984375, 'Pattern1AtX': -3565.337646484375, 'Pattern1AtY': 387.27398681640625, 'Pattern1AtZ': -1982.146484375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'Count': 60.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_HighMountain003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain003:talk56', 'ASName': ''})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 0, 'Count': 30.0, 'CollisionInterpolateSkip': True})
    Npc_HighMountain003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'Npc_HighMountain003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
}
