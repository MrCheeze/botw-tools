-------- EventFlow: FironeMini_GiantHorse --------

Actor: Npc_FaronWoods008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangePosture']
queries: ['IsOwnedHorseAssociated', 'CheckTypeOfWildHorseAssociated', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_AdvanceQuest', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_FaronWoods008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_FaronWoods008.IsOwnedHorseAssociated({'IsRidden': False}) {
      case [0, 1, 3, 4]:
        switch Npc_FaronWoods008.CheckTypeOfWildHorseAssociated() {
          case [0, 1, 2, 4, 5, 6, 7]:
            switch Npc_FaronWoods008.CheckActorAction13() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
                if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_GiantHorse_IsTalked'}) {
                    Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk02'})
                    Event67:
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk06'})
                        WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                        Npc_FaronWoods008.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                        Npc_FaronWoods008.Demo_TurnAndLookToObject({'ObjectId': 2, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False, 'TurnPosition': [-307.0, 150.0, 3553.0]})
                        GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-307.0, 150.0, 3553.0]})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                        fork {
                            Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk09', 'IsCloseMessageDialog': True})
                        } {
                            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1AtY': 131.0, 'Pattern1PosY': 131.0, 'Pattern1AtX': -213.0, 'Pattern1PosX': -209.0, 'Pattern1AtZ': 3487.0, 'Pattern1PosZ': 3484.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        }

                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        Npc_FaronWoods008.Demo_TurnAndLookToObject({'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False})
                        GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_FaronWoods008'})
                        GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
                        Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk10'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_GiantHorse_Activated', 'IsWaitFinish': True})
                    } else {
                        Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk07'})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_GiantHorse_IsTalked', 'IsWaitFinish': True})
                    Npc_FaronWoods008.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk04'})
                    Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk13'})
                    goto Event67
                }
              case 11:
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk11'})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk12'})
            }
          case 3:
            Event75:
            switch Npc_FaronWoods008.CheckActorAction13() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
                Event77:
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk01'})
                if !EventSystemActor.CheckFlag({'FlagName': 'FironeMini_GiantHorse_IsTalked'}) {
                    Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk14'})
                }
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': True, 'StepName': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                Event96:
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk15'})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk16'})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk17'})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk19'})
                Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk18'})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk03'})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_GiantHorse_Present'})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk05'})
                EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_GiantHorse_Finish', 'IsWaitFinish': True})
              case 11:
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk11'})
                goto Event77
            }
        }
      case 2:
        goto Event75
    }
}

void Finish_Npc_FaronWoods008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_FaronWoods008.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Event31:
        switch Npc_FaronWoods008.IsOwnedHorseAssociated({'IsRidden': False}) {
          case [0, 1, 3, 4]:
            switch Npc_FaronWoods008.CheckTypeOfWildHorseAssociated() {
              case [0, 1, 2, 4, 5, 6, 7]:
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk08'})
              case 3:
                Event7:
                Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk01'})
                goto Event96
            }
          case 2:
            goto Event7
        }
      case 11:
        Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk11'})
        goto Event31
    }
}

void Ready_Npc_FaronWoods008_Near() {
    switch Npc_FaronWoods008.CheckActorAction13() {
      case 1:
        Npc_FaronWoods008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:Near00', 'DispFrame': 300, 'IsChecked': True})
      case 11:
        Npc_FaronWoods008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:Near01', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Finish_Npc_FaronWoods008_Near() {
    switch Npc_FaronWoods008.CheckActorAction13() {
      case 1:
        switch Npc_FaronWoods008.IsOwnedHorseAssociated({'IsRidden': False}) {
          case [0, 1, 3, 4]:
            switch Npc_FaronWoods008.CheckTypeOfWildHorseAssociated() {
              case [0, 1, 2, 4, 5, 6, 7]:
                Npc_FaronWoods008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:Near03'})
              case 3:
                Event52:
                Npc_FaronWoods008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:Near02', 'DispFrame': 300, 'IsChecked': True})
            }
          case 2:
            goto Event52
        }
      case 11:
        Npc_FaronWoods008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:Near01', 'DispFrame': 300, 'IsChecked': True})
    }
}
