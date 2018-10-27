-------- EventFlow: Kakariko_Ch_004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AppearRupee']
queries: ['CheckFlag', 'HasPorchItem', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_ChangePostureWithAS', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_LookAtObjectSearchAwn', 'Demo_TalkNoCloseDialog']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_BustUpFront', 'Demo_GameCamera', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerHide', 'Demo_PlayerShow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_Insect_E
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko015
entrypoint: None()
actions: ['Demo_VisibleOff', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kakariko016_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko016_Front'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko016_FrontTalk', 'IsWaitFinish': True})
        Event0:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Kakariko016.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

            call Npc_Kakariko016.Talk()

          case 5:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko_016_first'}) {
                Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk13'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_004_Activated'})
            } else {
                Npc_Kakariko016.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_Kakariko016.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'IsConfront': True})
                Npc_Kakariko016.Demo_Talk({'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk01', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk26'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko_016_first'})
            }
        }
    } else {
        goto Event0
    }
}

void Finish_Npc_Kakariko016_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko016_Front'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko016_FrontTalk', 'IsWaitFinish': True})
        Event10:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Kakariko016.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_E', 'Count': 1}) {
                switch Npc_Kakariko016.CheckActorAction13() {
                  case [0, 1]:
                    Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk11', 'ASName': ''})
                    Event69:
                    if !EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_004_First'}) {
                        Event67:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_004_First', 'IsWaitFinish': True})
                    }
                  case 4:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_016in015house'}) {
                        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk24', 'ASName': ''})
                        goto Event69
                    } else {
                        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk23', 'ASName': ''})
                        goto Event69
                    }
                }
            } else {

                call Npc_Kakariko016.Talk()

            }
          case 5:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Hotaru_Short'}) {
                Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk10'})
            } else
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_E', 'Count': 1}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_004_First'}) {
                    Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk21'})
                } else {
                    Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk12'})
                    goto Event67
                }
            } else {
                Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk07'})
            }
        }
    } else {
        goto Event10
    }
}

void HotaruDemo() {
    Npc_Kakariko015.Demo_Join({'IsWaitFinish': False})
    Animal_Insect_E.Demo_Join({'IsWaitFinish': True})

    call Common.AirStartUP_Player()

    Npc_Kakariko016.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
    Npc_Kakariko016.Demo_LookAtObjectSearchAwn({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Animal_Insect_E', 'UniqueName': '', 'IsValid': True, 'IsRetrySearchBaseProc': False})
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
    Npc_Kakariko016.Demo_BecomeSpeaker({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    Npc_Kakariko015.Demo_VisibleOff({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Count': 0.0, 'StartCalcOnly': True, 'TargetActor1': 2, 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'Pattern1AtZ': -0.5, 'Pattern1PosZ': 1.5, 'Pattern1PosY': 1.5, 'Pattern1AtY': 1.600000023841858, 'MotionMode': 0, 'Pattern1AtX': -0.30000001192092896, 'Pattern1PosX': 0.6000000238418579, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko016.Demo_LookAtObjectSearchAwn({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Animal_Insect_E', 'UniqueName': '', 'IsValid': True, 'IsRetrySearchBaseProc': False})
    Npc_Kakariko016.Demo_TalkNoCloseDialog({'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk09', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
    Npc_Kakariko016.Demo_LookAtObjectSearchAwn({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Animal_Insect_E', 'UniqueName': '', 'IsValid': True, 'IsRetrySearchBaseProc': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    Npc_Kakariko016.Demo_LookAtObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 0, 'UniqueName': '', 'ActorName': '', 'IsValid': True})
    Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk20'})
    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_004_Finish'})
    Npc_Kakariko016.Demo_LookAtObjectSearchAwn({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Animal_Insect_E', 'UniqueName': '', 'IsValid': True, 'IsRetrySearchBaseProc': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Kakariko016.Demo_LookAtObjectSearchAwn({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Animal_Insect_E', 'UniqueName': '', 'IsValid': True, 'IsRetrySearchBaseProc': False})
    Npc_Kakariko016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk14'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Kakariko016.Demo_LookAtObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 0, 'UniqueName': '', 'ActorName': '', 'IsValid': True})
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk17', 'ASName': ''})
        Event115:
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } else {
        Npc_Kakariko016.Demo_LookAtObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 0, 'UniqueName': '', 'ActorName': '', 'IsValid': True})
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Talk18', 'ASName': ''})
        goto Event115
    }
}

void Ready_Npc_Kakariko016_Near() {
    if Npc_Kakariko016.CheckActorAction13() == 5 {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko_016_first'}) {
            Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Near00'})
        }
    }
}

void Finish_Npc_Kakariko016_Near() {
    if Npc_Kakariko016.CheckActorAction13() == 5 {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_E', 'Count': 5}) {
            Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_004:Near01'})
        }
    }
}
