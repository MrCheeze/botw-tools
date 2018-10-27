-------- EventFlow: Npc_HighMountain005 --------

Actor: Npc_HighMountain005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'CheckTimeType', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_Talk', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_LookAtObject', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerDestinationMove']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event59:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain005.CheckActorAction13() {
      case 0:
        Event16:
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk06'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC005_First_Clear'})
      case 1:
        goto Event16
      case 2:
        goto Event16
      case 3:
        goto Event16
      case 10:
        goto Event16
      case 11:
        Event150:
        if !EventSystemActor.RandomChoice2() {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk31'})
        } else {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk30'})
        }
    }
}

void Saki_WindRelic_Ready() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC005_First'}) {
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk29'})
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk05'})
    } else {
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk01'})
            Event13:
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC005_First', 'IsWaitFinish': True})
        } else {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk02'})
            goto Event13
        }
    }
}

void Saki_WindRelic_Saki() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk03'})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk26'})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk23'})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk40'})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk41'})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk42', 'IsCloseMessageDialog': True})
    Npc_HighMountain005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 1, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 30.0, 'ActorName': ''})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsUseSlowTurn': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 1, 'TurnPosition': [-3590.300048828125, 318.0, -1802.4000244140625], 'IsWaitFinish': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3610.113037109375, 'Pattern1PosY': 326.5992431640625, 'Pattern1PosZ': -1824.547607421875, 'Pattern1AtX': -3607.804931640625, 'Pattern1AtY': 325.6347961425781, 'Pattern1AtZ': -1822.4326171875, 'Pattern1Fovy': 54.999996185302734, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk25', 'IsCloseMessageDialog': False})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})
    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk36'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'Volume': 0.0, 'ExceptGroups': '', 'FadeInSec': 5.0, 'StartDelaySec': 0.0, 'FadeOutSec': 0.800000011920929})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo309_2', 'EntryPointName': 'HerosMemoryStart_Rito'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_HighMountain005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 1, 'IsConfront': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})

    fork {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_HighMountain005'})
    } {
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk35'})
    }

}

void Saki_WindRelic_Step1() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event81:

    call Saki_Hello()

    Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk08'})
    Event34:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk40'})
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk42'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3609.184814453125, 'Pattern1PosY': 326.6397705078125, 'Pattern1PosZ': -1823.747802734375, 'Pattern1AtX': -3605.32763671875, 'Pattern1AtY': 324.3181457519531, 'Pattern1AtZ': -1819.00927734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk25', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'NoConnect': False, 'CameraReset': False})
        Event39:
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk04'})
        goto Event34
      case 1:
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk10', 'IsCloseMessageDialog': True})
        goto Event39
      case 2:
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk11', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC005_NPC001', 'IsWaitFinish': True})
        goto Event39
      case 3:
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk19'})
    }
}

void Saki_WindRelic_Finish() {
    goto Event59
}

void Saki_WindRelic_Parashawl() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC005_BombArrow'}) {
        goto Event81
    } else {
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk20'})
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk21', 'IsCloseMessageDialog': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_BombArrow_A_03'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC005_BombArrow'})
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk22'})
    }
}

void Rito_NPC010_GoTraining_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain005.CheckActorAction13() {
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk37'})
        } else {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk15'})
        }
      case 11:
        goto Event150
      case 12:

        call Saki_Hello()

        if Npc_HighMountain005.IsOnInstEventFlag() {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk39'})
            if !EventSystemActor.RandomChoice2() {
                Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk43'})
            } else {
                Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk44'})
            }
        } else {
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk38'})
        }
    }
}

void Saki_Hello() {
    if Npc_HighMountain005.IsOnInstEventFlag() {
        Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk29'})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event61:
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk16'})
          case 1:
            goto Event61
          case 2:
            goto Event61
          case 3:
            goto Event61
          case 4:
            goto Event61
          case 5:
            goto Event61
          case 6:
            Event62:
            Npc_HighMountain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:talk17'})
          case 7:
            goto Event62
        }
    }
}

void WindRelic_Saki_Ready_near() {
    Npc_HighMountain005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:near00', 'IsChecked': False, 'DispFrame': 90})
}

void WindRelic_Saki_Saki_near() {
    Npc_HighMountain005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain005:near01', 'IsChecked': False, 'DispFrame': 90})
}
