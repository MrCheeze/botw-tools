-------- EventFlow: Npc_Kakariko015 --------

Actor: Npc_Kakariko015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePosture', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_FrontTalk'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Repaired'}) {
        switch Npc_Kakariko015.CheckActorAction13() {
          case [2, 3]:
            Event108:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_first'}) {
                Event114:
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk23'})
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Hero', 'CheckUpper': True})
                && !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_eiketu_first'}) {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk14'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_eiketu_first'})
                }
            } else {
                Event110:
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk22'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk07'})
                } else {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk27'})
                }
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_first'})
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Hero', 'CheckUpper': True})
                && !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_eiketu_first'}) {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk14'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_eiketu_first'})
                }
            }
          case 10:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_015in015house'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_first'}) {
                    goto Event114
                } else {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk10'})
                    goto Event110
                }
            } else
            goto Event108
          case 11:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_first'}) {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk21'})
            } else {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk28'})
                goto Event110
            }
        }
    } else
    switch Npc_Kakariko015.CheckActorAction13() {
      case [0, 1]:
        Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk01', 'ASName': 'Rest'})

        fork {
            Npc_Kakariko015.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk18', 'ASName': 'Wait', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        }

        Npc_Kakariko015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk19_1', 'IsCloseMessageDialog': False})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk19_2'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk19_3'})
        } {

            call Common.ZoomUpSheikPad({'ZoomTimer': 80.0})

        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 140})
        Npc_Kakariko015.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_first'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 1, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnDirection': -90.0})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1916.5635986328125, 'Pattern1PosY': 241.78817749023438, 'Pattern1PosZ': 1008.6543579101562, 'Pattern1AtX': 1916.0753173828125, 'Pattern1AtY': 241.7352752685547, 'Pattern1AtZ': 1008.5618896484375, 'Pattern1Fovy': 41.6314582824707, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'CollisionInterpolateSkip': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_Kakariko015.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 90.0, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True, 'IsWaitFinish': True})
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk03', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'ReviseMode': 1, 'Count': 15.0})
            Event141:
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk04'})
        } else {
            goto Event141
        }
      case [2, 3]:
        Event68:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_first'}) {
            Event74:
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk09'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk26'})
            }
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Hero', 'CheckUpper': True}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_eiketu_first'}) {
                    Event150:
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk08'})
                } else {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk14'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_eiketu_first'})
                }
            } else {
                goto Event150
            }
        } else {
            Event70:
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk25'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk24'})
            }
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk06'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_first'})
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Hero', 'CheckUpper': True})
            && !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_eiketu_first'}) {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk14'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_eiketu_first'})
            }
        }
      case 10:
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_015in015house'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_first'}) {
                goto Event74
            } else {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk10'})
                goto Event70
            }
        } else
        goto Event68
      case 11:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_first'}) {
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk11'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk26'})
            } else
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Hero', 'CheckUpper': True}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko015_eiketu_first'}) {
                    Event94:
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk20'})
                } else {
                    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk14'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_eiketu_first'})
                }
            } else {
                goto Event94
            }
        } else {
            Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk28'})
            goto Event70
        }
    }
}

void Near() {
    if Npc_Kakariko015.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_Kakariko015.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Kakariko015:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}

void Npc_Kakariko015_first_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk05', 'IsCloseMessageDialog': True})
    Npc_Kakariko015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 1, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnDirection': -90.0})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1916.5635986328125, 'Pattern1PosY': 241.78817749023438, 'Pattern1PosZ': 1008.6543579101562, 'Pattern1AtX': 1916.0753173828125, 'Pattern1AtY': 241.7352752685547, 'Pattern1AtZ': 1008.5618896484375, 'Pattern1Fovy': 41.6314582824707, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'CollisionInterpolateSkip': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko015.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 90.0, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True, 'IsWaitFinish': True})
    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk29', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'ReviseMode': 1, 'Count': 15.0})
    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Talk04'})
}

void Npc_Kakariko015_first_Near() {
    if Npc_Kakariko015.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_Kakariko015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko015:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Kakariko015_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko015")})

    Npc_Kakariko015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Kakariko015:SupriseHouse'})
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko015_FrontTalk'})
}
