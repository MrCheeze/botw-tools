-------- EventFlow: SunazarashiRace_mini --------

Actor: Npc_oasis039
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_LoopEnd', 'Demo_AdvanceQuest', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_DisableMiniGameTime', 'Demo_WarpPlayer', 'Demo_CallDemo', 'Demo_ChangeScene', 'Demo_AppearCheckPointNum', 'Demo_DisappearCheckPointNum', 'Demo_AppearRaceResult', 'Demo_DisappearRaceResult']
queries: ['CheckRupee', 'HasPorchItemByCategory', 'GeneralChoice3', 'CheckPlayerState', 'CheckFlag', 'CheckDistanceForWarp', 'CheckPlayerEquip', 'CheckPlayerRideSunazarashi']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis038
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayerWakeBoardEnd']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[race]
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['Demo_MiniGameTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis038_Talk() {
    Event282:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038'})


    fork {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_mini_first'}) {
        Npc_oasis038.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_oasis038.Demo_Talk({'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Champion_Wait'})
        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Almost', 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_002', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Champion_Wait', 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_003'})
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_004', 'ASName': ''})

        fork {
            Npc_oasis038.Demo_Talk({'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Champion_Wait'})
        } {
            Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

    } else {
        Event331:

        fork {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_005', 'ASName': ''})
        } {
            Npc_oasis038.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True})
            Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
        }

        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Champion_Wait', 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_006'})

        fork {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_007'})
        } {
            Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_008', 'ASName': 'Talk_Sigh'})
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis038_R_009', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

        fork {
            Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        }

        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_008', 'IsCloseMessageDialog': True})
        Npc_oasis038.Demo_PlayASForDemo({'ASName': 'Talk_Sigh', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_015', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_mini_first', 'IsWaitFinish': True})
        Event8:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1})
            && EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 1}) {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_002', 'IsCloseMessageDialog': False})
                if EventSystemActor.CheckRupee({'Value': 100}) {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -100})
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_006'})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})

                    call MiniRaceStart()

                } else {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_007'})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                }
            } else {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_003', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
            }
          case 1:
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_004'})
            goto Event8
          case 2:
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_005'})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
        }
    }
}

void Ready_Npc_oasis039_Talk() {
    Event283:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038'})


    fork {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_mini_first'}) {
        if Npc_oasis039.IsOnInstEventFlag() {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_013'})

            fork {
                Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_014'})
            } {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_012', 'IsCloseMessageDialog': True})

            fork {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            }

            goto Event8
        } else {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_009'})

            fork {
                Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_010', 'IsCloseMessageDialog': False})
            } {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }


            fork {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_001', 'IsCloseMessageDialog': True})
            } {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            fork {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            }

            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_R_011'})
            goto Event8
        }
    } else {

        call first()

    }
}

void Step1_Npc_oasis039_EachFrame() {
    EventSystemActor[0].Demo_MiniGameTime({'CountMode': 2, 'CountStartTime': -1, 'IsShowTimeUI': True, 'IsWaitFinish': True, 'MaxTime': -1})
    Event32:
    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_mini_Activated'}) {
        if EventSystemActor.CheckPlayerRideSunazarashi({'SunazarashiType': 2, 'SunazarashiName': 'race'})
        && EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Field2'}) {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event32
        } else {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': False, 'StepName': 'IfGetOff', 'ForceRunTelop': False, 'QuestName': 'SunazarashiRace_mini'})
        }
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event32
    }
}

void IfGetOff_Npc_oasis039_StepStart() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 1}) {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        Animal_SunazarashiSP_A[race].Demo_Idling({'IsWaitFinish': False})
        Event264:

        fork {
            EventSystemActor.Demo_AppearRaceResult({'IsWaitFinish': True, 'ResultType': 1})
        } {
            SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
            EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm', 'FadeSec': 0.30000001192092896})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Field2'}) {
            Npc_oasis039.Demo_Talk({'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_S1_001', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } else {
            Npc_oasis039.Demo_Talk({'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_S1_003', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventSystemActor.Demo_DisappearRaceResult({'IsWaitFinish': True})
        EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        if EventSystemActor.CheckPlayerState({'PlayerState': 1}) {
            GameROMPlayer.Demo_PlayerWakeBoardEnd({'IsWaitFinish': True})
        }
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'SunazarashiRace_mini', 'StepName': 'Finish'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Field1'})
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        if !EventSystemActor.CheckDistanceForWarp({'WarpDestMapName': 'B-8', 'WarpDestPosName': 'Demo330_1_b2_010'}) {
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'Demo330_1_b2_010', 'WarpDestMapName': 'B-8'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Event324:

            call SunazarashiRace.Miss()


            call MiniRaceStart()

        } else {
            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'WarpDestPosName': 'Demo330_1_b2_010', 'StartType': -1, 'WarpDestMapName': 'MainField/B-8', 'EntryPointName': 'IfGetOff_AfterSceneChange', 'EvflName': 'SunazarashiRace_mini', 'FadeType': 2})
        }
    } else {
        goto Event264
    }
}

void MiniRaceStart() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

    call Common.DisableSaveAndWarp()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo330_0', 'EntryPointName': 'Demo330_0_1', 'EndFade': 0})
    EventSystemActor.Demo_AppearCheckPointNum({'IconType': 1, 'GameDataIntTargetCounter': 'SunazarashiRace_GateCnt', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_mini_Activated'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void GetRupee() {
    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
}

void IfGetOff_AfterSceneChange() {
    goto Event324
}

void first() {
    goto Event331
}

void Ready_Npc_oasis038_NearActorsTalk() {
    goto Event282
}

void Ready_Npc_oasis039_NearActorsTalk() {
    goto Event283
}

void GetRupee_Quite() {
    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
}
