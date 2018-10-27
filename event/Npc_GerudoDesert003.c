-------- EventFlow: Npc_GerudoDesert003 --------

Actor: Npc_GerudoDesert003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_BecomeSpeaker', 'Demo_ChangeEquipState']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseGameDataInt', 'Demo_ResetGimmick', 'Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF', 'Demo_WarpPlayer']
queries: ['CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_Talk']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert003.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void anche_fire() {
    switch Npc_GerudoDesert003.CheckActorAction13() {
      case 0:
        Event47:

        fork {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        } {
            Npc_GerudoDesert003.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_GerudoDesert003.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
        }

        GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.007934999652206898, 'Pattern1AtZ': 0.41821300983428955, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': 'Npc_GerudoDesert003', 'Pattern1PosY': 2.5, 'Pattern1PosX': 1.0, 'Pattern1PosZ': 2.0, 'Pattern1AtY': 2.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSurprise', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        } {
            Npc_GerudoDesert003.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Equip'})
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Gerudo_CarryIce_Angry', 'Operator': 'Equal', 'Value': 0}) {
                Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_05', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'Gerudo_CarryIce_Angry', 'Value': 1, 'IsWaitFinish': True})
            } else {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Gerudo_CarryIce_Angry', 'Operator': 'Equal', 'Value': 1}) {
                    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_06', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'Gerudo_CarryIce_Angry', 'Value': 1, 'IsWaitFinish': True})
                } else {
                    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_07', 'IsCloseMessageDialog': True})
                    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_10'})
                }
            }
        }

        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'B-7', 'IsWaitFinish': True, 'WarpDestPosName': 'Anche_Fire_GetOut'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Gerudo_CarryIce_fireworks_ice', 'IsWaitFinish': True})
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
      case 12:
        goto Event47
      case 13:
        goto Event47
    }
}

void anche_fire_out() {
    switch Npc_GerudoDesert003.CheckActorAction13() {
      case 0:
        Event30:
        Npc_GerudoDesert003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_08', 'DispFrame': 90, 'IsChecked': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_CarryIce_fireworks_ice', 'IsWaitFinish': True})
      case 1:
        goto Event30
      case 2:
        goto Event30
      case 3:
        goto Event30
      case 4:
        goto Event30
      case 5:
        goto Event30
      case 6:
        goto Event30
      case 7:
        goto Event30
      case 8:
        goto Event30
      case 9:
        goto Event30
      case 10:
        goto Event30
      case 12:
        goto Event30
      case 13:
        goto Event30
    }
}

void Gerudo_CarryIce_fireworks_ice_Talk() {

    call Sleep_check()

    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert003:Talk_09'})
}

void Sleep_check() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_GerudoDesert003.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_101', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}
