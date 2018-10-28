-------- EventFlow: Npc_Kakariko008 --------

Actor: Npc_Kakariko008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_WarpToScheduleAnchor', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayer', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_FlagOFF']
queries: ['CheckWeather', 'CheckFlag', 'ComparePlayerHeart', 'RandomChoice2', 'CheckGameDataInt', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko008_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko008_FrontTalk'})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Kakariko008.CheckActorAction13() {
      case [0, 6]:
        if Npc_Kakariko008.IsOnInstEventFlag() {
            Event29:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_008in006house'}) {
                Event2:
                Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk20'})
            } else
            switch EventSystemActor.CheckWeather() {
              case 0:
                goto Event2
              case [1, 2, 3]:
                Npc_Kakariko008.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01'})
            goto Event29
          case [2, 3, 4, 5, 6, 7]:
            goto Event29
        }
      case [1, 7]:
        if Npc_Kakariko008.IsOnInstEventFlag() {
            Event41:
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 9}) {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk15'})
                  case [1, 2, 3]:
                    Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk15_rain'})
                }
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 5}) {
                Event155:
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk14'})
                  case [1, 2, 3]:
                    Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk14_rain'})
                }
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 1}) {
                goto Event155
            } else
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk13'})
              case [1, 2, 3]:
                Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk13_rain'})
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01'})
            goto Event41
          case [2, 3, 4, 5, 6, 7]:
            goto Event41
        }
      case 2:
        Npc_Kakariko008.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 3:
        Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk05'})
      case 10:
        if !EventSystemActor.ComparePlayerHeart({'Threshold': 8}) {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk06'})
        } else {
            Npc_Kakariko008.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 11:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko008_Talk'}) {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk10'})
        } else {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk04'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko008_Talk', 'IsWaitFinish': True})
        }
    }
}

void PlumDemo() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Npc_Kakariko008.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Kakariko008.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0079350471496582, 'Pattern1PosY': 1.2803339958190918, 'Pattern1PosZ': 2.150269031524658, 'Pattern1AtX': 0.007934999652206898, 'Pattern1AtY': 1.2803339958190918, 'Pattern1AtZ': 0.41821300983428955, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko008', 'IsWaitFinish': True, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko008.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk07', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})

    fork {
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'WarpDestPosName': 'DemoPlum', 'IsWaitFinish': True})
    } {
        Npc_Kakariko008.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Kakariko008.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_Kakariko008.Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction1', 'IsWaitFinish': True, 'UniqueName': ''})
    }

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_Kakariko008', 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.102783203125, 'Pattern1PosY': 1.972519040107727, 'Pattern1PosZ': -0.2929689884185791, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.0, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'StartCalcOnly': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': True, 'NoConnect': True})
    Npc_Kakariko008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 9}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko008_angry13'}) {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk19'})
        } else {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk16', 'IsCloseMessageDialog': True})
            Npc_Kakariko008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnPosition': [1870.0, 223.0, 1005.0], 'IsConfront': False})
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk17', 'ASName': 'Talk_Surprised'})
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk18'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko008_angry13'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko008_angry'}) {
        Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk09'})
        if !EventSystemActor.RandomChoice2() {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk11'})
        } else {
            Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk12'})
        }
    } else {
        Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk08'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko008_angry', 'IsWaitFinish': True})
    }
}

void Near() {
    switch Npc_Kakariko008.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near04', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near04_rain'})
        }
      case 1:
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 9}) {
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near01', 'DispFrame': 90, 'IsChecked': False})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 5}) {
            Event146:
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near02'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 1}) {
            goto Event146
        } else {
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near03', 'IsChecked': False, 'DispFrame': 90})
        }
      case 2:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near05', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near05_rain'})
        }
      case 10:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near08_rain'})
        }
      case 11:
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Near07', 'IsChecked': False, 'DispFrame': 90})
    }
}

void PlumBomb() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Npc_Kakariko008.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Kakariko008.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
    }

    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0079350471496582, 'Pattern1PosY': 1.2803339958190918, 'Pattern1PosZ': 2.150269031524658, 'Pattern1AtX': 0.007934999652206898, 'Pattern1AtY': 1.2803339958190918, 'Pattern1AtZ': 0.41821300983428955, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko008', 'IsWaitFinish': True, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko008.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk07', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 1})
}

void Kakariko008_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko008")})

    Npc_Kakariko008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:SupriseHouse', 'ASName': ''})
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko008_FrontTalk'})
}
