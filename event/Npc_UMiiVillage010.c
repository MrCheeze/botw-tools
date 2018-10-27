-------- EventFlow: Npc_UMiiVillage010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_AdvanceTime', 'Demo_WaitFrame', 'Demo_AppearRupee', 'Demo_GiveCookResultForNpc', 'Demo_WarpPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckTimeType', 'CheckFlag', 'HasPorchItem', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_ReturnAnchor', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_ReturnAnchor', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage003
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_MoveToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call HaruriHello()

    switch Npc_UMiiVillage010.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 10]:
        Event73:
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk25', 'IsCloseMessageDialog': False})
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk20'})
      case 11:
        if Npc_UMiiVillage010.IsOnInstEventFlag() {
            goto Event73
        } else {
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk21'})
            goto Event73
        }
    }
}

void Near() {
    switch Npc_UMiiVillage010.CheckActorAction13() {
      case [4, 5]:
        Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near02', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near03'})
      case 11:
        Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void HaruriHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage010.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5]:
        if !Npc_UMiiVillage010.IsOnInstEventFlag() {
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case [2, 3, 4, 5]:
                Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk03'})
              case [6, 7]:
                Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk04'})
            }
        }
      case 10:
        if !Npc_UMiiVillage010.IsOnInstEventFlag() {
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk10'})
        }
      case 11:
        if !Npc_UMiiVillage010.IsOnInstEventFlag() {
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk05'})
        }
    }
}

void NearActorsTalk() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC010_Meeting'}) {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

        fork {
            Npc_UMiiVillage009.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_UMiiVillage009.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_UMiiVillage010', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
            Npc_UMiiVillage009.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0})
        } {
            Npc_UMiiVillage010.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_UMiiVillage010.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_UMiiVillage009', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False, 'IsValid': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3972.825927734375, 'Pattern1PosY': 237.4664306640625, 'Pattern1PosZ': -1565.4512939453125, 'Pattern1AtX': 3972.2890625, 'Pattern1AtY': 236.40020751953125, 'Pattern1AtZ': -1567.7117919921875, 'Pattern1Fovy': 50.00001907348633, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'StartCalcOnly': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk14'})
        Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk15'})
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk16'})
        Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk17', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_GiveCake_Activated'})
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


        fork {
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk13'})
        } {
            Npc_UMiiVillage009.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_UMiiVillage009.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_UMiiVillage010', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
            Npc_UMiiVillage009.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0})
        }

    }
}

void NearActorsNear() {
    Event146:
    if !EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC010_Meeting'}) {
        if Npc_UMiiVillage010.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {
            Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near01', 'DispFrame': 90, 'IsChecked': False})
        }
    }
}

void GiveCake_Haruri_Ready() {

    call HaruriHello()

    Event19:
    Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk08', 'IsCloseMessageDialog': False})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'PorchItemName': 'Item_Cook_L_03', 'CookEffectType': 'AllOK', 'Count': 1})
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk18', 'IsCloseMessageDialog': False})
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk22', 'IsCloseMessageDialog': False})
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk23'})
            Event147:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_GiveCake_Give'})
          case [6, 7]:
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk24'})
            goto Event147
        }
      case 1:
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk11'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC010_First'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC010_OK'})
        Event112:
        switch Npc_UMiiVillage010.CheckActorAction13() {
          case [0, 1]:
            Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk07'})
            Event49:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC010_Here'})
          case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            goto Event49
        }
      case 2:
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk12'})
        goto Event112
      case 3:
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk09'})
    }
}

void GiveCake_Haruri_ReadyNear() {
    goto Event146
}

void GiveCake_Haruri_FinishNear() {
    switch Npc_UMiiVillage010.CheckActorAction13() {
      case [4, 5]:
        Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near02'})
      case 10:
        Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near03', 'IsChecked': True, 'DispFrame': 300})
      case 11:
        Npc_UMiiVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:near00', 'IsChecked': True, 'DispFrame': 300})
    }
}

void GiveCake_Haruri_Finish() {

    call HaruriHello()

    if Npc_UMiiVillage010.IsOnInstEventFlag() {
        Event57:
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk19', 'IsCloseMessageDialog': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk20'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_GiveCake_Finish'})
    } else {
        Npc_UMiiVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage010:talk21'})
        goto Event57
    }
}

void GiveCake_Haruri_GiveNear() {
    goto Event146
}

void GiveCake_Haruri_Give() {

    call HaruriHello()

    Event42:
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Cook_L_03', 'Count': 1}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC010_Here'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        goto Event19
    } else {
        goto Event19
    }
}

void GiveCake_Haruri_Give_Near_Hagi() {

    fork {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        goto Event42
    } {
        Npc_UMiiVillage009.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_UMiiVillage009.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_UMiiVillage010', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
        Npc_UMiiVillage009.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    }

}

void FinishStart() {

    fork {
        Npc_UMiiVillage010.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0})
    } {
        Npc_UMiiVillage009.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 9, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
    Npc_UMiiVillage003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction5'})
    Npc_UMiiVillage010.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'HaruriDemoFinish', 'WarpDestMapName': 'I-3'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1AtZ': -1591.5096435546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Pattern1PosX': 3968.4619140625, 'Pattern1PosY': 234.99429321289062, 'Pattern1PosZ': -1596.5989990234375, 'Pattern1AtX': 3969.156005859375, 'Pattern1AtY': 235.27499389648438})
    Npc_UMiiVillage009.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    Npc_UMiiVillage003.Demo_MoveToAnchor({'AnchorName': 'AnchorAction2', 'ASKeyName': 'Run', 'AnchorUniqueName': '', 'IsTurnToAnchorDir': False, 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
    goto Event49
}
