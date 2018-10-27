-------- EventFlow: FironeMini_HeartPond --------

Actor: Npc_SouthernVillage016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthernVillage015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_Join', 'Demo_ChangeEquipState', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AdvanceQuest', 'Demo_WarpPlayerToDestination', 'Demo_IncreasePorchItem', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'HasPorchItem', 'CheckWeather', 'CheckTimeType', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SouthernVillage016_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthernVillage015.Demo_Join({'IsWaitFinish': True})
    Npc_SouthernVillage016.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy13', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy23', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy34', 'IsCloseMessageDialog': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 2587.0, 'Pattern1PosY': 291.0, 'Pattern1PosZ': 3535.0, 'Pattern1AtY': 291.0, 'Pattern1AtX': 2588.0, 'Pattern1AtZ': 3530.0, 'Pattern1Fovy': 50.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': 'Npc_SouthernVillage015', 'TargetActor1': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 20.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy18'})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'FironeMini_HeartPond', 'StepName': '', 'ForceRunTelop': False})
    } else {
        Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy24'})
    }
}

void Ready_Npc_SouthernVillage015_Talk() {
    Event2:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_SouthernVillage015.IsOnInstEventFlag() {
        Event8:
        if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HeartPond_WomanIsTalked'}) {
            Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady03'})
        } else
        switch EventSystemActor.CheckWeather() {
          case [0, 2]:
            Npc_SouthernVillage015.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event163:
            EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_HeartPond_WomanIsTalked', 'IsWaitFinish': True})
          case 1:
            Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady18'})
            goto Event163
          case 3:
            Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady19'})
            goto Event163
        }
    } else {

        call hello()

        goto Event8
    }
}

void GetFlower_Npc_SouthernVillage015_Talk() {
    goto Event2
}

void GetFlower_Npc_SouthernVillage016_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthernVillage015.Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HeartPond_ManIsTalked'}) {
        switch EventSystemActor.CheckWeather() {
          case [0, 2]:
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy02', 'IsCloseMessageDialog': True})
            Event143:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy33', 'IsCloseMessageDialog': True})
            } {
                GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 2587.0, 'Pattern1PosY': 291.0, 'Pattern1PosZ': 3535.0, 'Pattern1AtY': 291.0, 'Pattern1AtX': 2588.0, 'Pattern1AtZ': 3530.0, 'Pattern1Fovy': 50.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': 'Npc_SouthernVillage015', 'TargetActor1': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            }

            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy15'})
            Event22:
            if !EventSystemActor.GeneralChoice2() {
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy04'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_I'}) {
                    Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy06', 'IsCloseMessageDialog': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_PlantGet_I'})

                    Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy07'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Event155:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_HeartPond_GetFlower'})
                } else {
                    Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy07'})
                    goto Event155
                }
            } else {
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy05'})
                EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_HeartPond_ManIsTalked', 'IsWaitFinish': True})
            }
          case 1:
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy00', 'IsCloseMessageDialog': True})
            goto Event143
          case 3:
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy01', 'IsCloseMessageDialog': True})
            goto Event143
        }
    } else
    switch EventSystemActor.CheckWeather() {
      case [0, 2]:
        Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy28'})
        Event24:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_I'}) {
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy30', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                Event135:
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_PlantGet_I'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy32', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy33', 'IsCloseMessageDialog': True})
                } {
                    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 2587.0, 'Pattern1PosY': 291.0, 'Pattern1PosZ': 3535.0, 'Pattern1AtY': 291.0, 'Pattern1AtX': 2588.0, 'Pattern1AtZ': 3530.0, 'Pattern1Fovy': 50.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': 'Npc_SouthernVillage015', 'TargetActor1': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                }

                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy25'})
                goto Event22
            } else {
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy14', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event135
                } else {
                    Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy31'})
                }
            }
        } else {
            Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy29'})
        }
      case 1:
        Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy27'})
        goto Event24
      case 3:
        Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy26'})
        goto Event24
    }
}

void PresentFlower_Npc_SouthernVillage016_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy08'})
}

void PresentFlower_Npc_SouthernVillage015_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HeartPond_WomanIsTalked'}) {
        Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady02', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_I'}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady08', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                fork {
                    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
                    Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady11', 'IsCloseMessageDialog': True})
                } {
                    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosY': 291.0, 'Pattern1AtY': 291.0, 'Pattern1Fovy': 50.0, 'Count': 30.0, 'Pattern1PosX': 2588.0, 'Pattern1AtX': 2587.0, 'Pattern1AtZ': 3535.0, 'Pattern1PosZ': 3530.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                }

                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_PlantGet_I', 'Value': -1, 'IsWaitFinish': True})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady20', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Event72:
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})

                fork {
                    Npc_SouthernVillage015.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                } {
                    Npc_SouthernVillage016.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                } {
                    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2589.0, 'DestinationY': 290.0, 'DestinationZ': 3548.0, 'DirectionY': 180.0})
                }


                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_SouthernVillage015.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                Npc_SouthernVillage015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_SouthernVillage016', 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': ''})
                Npc_SouthernVillage016.Demo_TurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_SouthernVillage015', 'IsConfront': True, 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': ''})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady05'})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy10'})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady06'})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy11'})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady07'})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy12'})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady21'})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy12'})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady22'})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy35'})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady23', 'IsCloseMessageDialog': True})
                Npc_SouthernVillage016.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy36', 'IsCloseMessageDialog': True})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                Npc_SouthernVillage015.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady24', 'IsWaitFinish': True})
                Npc_SouthernVillage016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Boy37', 'IsCloseMessageDialog': True})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_HeartPond_Finish'})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady25', 'IsCloseMessageDialog': True})
                Npc_SouthernVillage015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady26'})
            } else {
                Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady09'})
            }
        } else {
            Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady10'})
        }
    } else {

        call Ready_Npc_SouthernVillage015_Talk()

    }
}

void Finish_Npc_SouthernVillage015_StepStart() {
    goto Event72
}

void Ready_Npc_SouthernVillage016_Near() {
    Event111:
    if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HeartPond_Finish'}) {
        Event116:
        Npc_SouthernVillage016.Demo_TalkASync({'DispFrame': 300, 'IsChecked': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Near_01'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HeartPond_Activated'}) {
        goto Event116
    } else {
        Npc_SouthernVillage016.Demo_TalkASync({'DispFrame': 300, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Near_01', 'IsChecked': True})
    }
}

void Finish_Npc_SouthernVillage016_Near() {
    goto Event111
}

void Finish_Npc_SouthernVillage016_NearActorsTalk() {
    goto Event72
}

void Finish_Npc_SouthernVillage015_NearActorsTalk() {
    goto Event72
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady16'})
      case [2, 3, 4]:
        Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady17'})
      case [5, 6, 7]:
        Npc_SouthernVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Lady27'})
    }
}

void PresentFlower_Npc_SouthernVillage015_Near() {
    Npc_SouthernVillage015.Demo_TalkASync({'DispFrame': 300, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_HeartPond:Near_04', 'IsChecked': True})
}
