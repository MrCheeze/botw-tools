-------- EventFlow: Gerudo_CarryIce --------

Actor: Npc_GerudoDesert002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert003
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_ResetGimmick', 'Demo_WarpPLAndResetGimmick', 'Demo_WarpPlayerToAnchor', 'Demo_FlagOFF']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckExistActor', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisMilk_E
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_MiddleFront', 'Demo_ReserveConnectTime', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert002[Town_Out]
entrypoint: None()
actions: ['Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_ChangePostureWithAS']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisMilk_E[Town_out]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerIceGrabReady', 'Demo_PlayerIceBlockRemove', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisMilk_E[Town]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: IceBlock
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Gerudo_CarryIce_Get_Npc_GerudoDesert003_Talk() {
    Event259:

    call Npc_GerudoDesert003.Sleep_check()

    switch Npc_GerudoDesert003.CheckActorAction13() {
      case 0:
        Event212:
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_002', 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_001', 'IsCloseMessageDialog': True})
        Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_Get'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})

        call Preparation()

      case 1:
        goto Event212
      case 2:
        goto Event212
      case 3:
        goto Event212
      case 4:
        goto Event212
      case 5:
        goto Event212
      case 6:
        goto Event212
      case 7:
        goto Event212
      case 8:
        goto Event212
      case 9:
        goto Event212
      case 10:
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_102', 'IsOverWriteLabelActorName': False})
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_104'})
      case 11:
        goto Event212
      case 12:
        goto Event212
      case 13:
        goto Event212
    }
}

void Gerudo_CarryIce_Finished_Npc_GerudoDesert003_Talk() {

    call Npc_GerudoDesert003.Sleep_check()

    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_F_001', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Gerudo_CarryIce_Finished_Npc_GerudoDesert002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert002[Town_Out].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert002_F_001', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_HeatTired_To_DungeonObj'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    Npc_GerudoDesert002[Town_Out].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert002_F_002', 'ASName': 'Act_HeatTired_To_DungeonObj'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Color': 1, 'Frame': 0})
    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gerudo_CarryIce_FinishEvent_Pl'})
    Npc_GerudoDesert002[Town_Out].Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_GerudoDesert002', 'UniqueName': 'Town_Out', 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    Npc_GerudoDesert002[Town_Out].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'ActorName': '', 'IsConfront': True})
    GameRomCamera.Demo_MiddleFront({'IsWaitFinish': True, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'StartCalcOnly': True, 'Lat': 15.0, 'Offset': [0.0, -0.25, 0.0], 'Lng': 30.0, 'Count': 0.0, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Color': 1, 'Frame': 0})
    Npc_GerudoDesert002[Town_Out].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert002_F_003'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2962.9462890625, 'Pattern1PosY': 140.67445373535156, 'Pattern1PosZ': 3779.595703125, 'Pattern1AtX': -2965.702392578125, 'Pattern1AtY': 139.49261474609375, 'Pattern1AtZ': 3773.53662109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'StartCalcOnly': True, 'MotionMode': 0, 'Count': 0.0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_GerudoDesert002', 'UniqueName': 'Town_Out', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_GerudoDesert002[Town_Out].Demo_MoveToAnchor({'AnchorUniqueName': 'pakuto_run', 'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsUseSlowTurn': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'UniqueName': '', 'TurnPosition': [-2998.56201171875, 141.7436065673828, 3702.944091796875], 'ActorName': '', 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Color': 1, 'Frame': 0})
    GameRomCamera.Demo_ReserveConnectTime({'IsWaitFinish': True, 'InterpolateTime': 0.0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_Finished'})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Color': 1, 'Frame': 0})
}

void Gerudo_CarryIce_Get_Npc_GerudoDesert002_Talk() {
    Event144:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_008', 'ASName': 'Act_HeatTired_To_DungeonObj'})
}

void Gerudo_CarryIce_Delivered_Npc_GerudoDesert003_Talk() {
    Event272:

    call Npc_GerudoDesert003.Sleep_check()

    switch Npc_GerudoDesert003.CheckActorAction13() {
      case 0:
        Event232:
        if !EventSystemActor.CheckExistActor({'ActorName': 'IceBlock', 'IsCheckEquipStand': False, 'IsCheckLife': False}) {
            Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S02_101', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert002_S02_001'})
            } else {
                Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S02_102', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
                Event271:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})

                call Preparation()

            }
        } else {
            Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S02_001', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S02_002', 'IsCloseMessageDialog': True})
            Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'Frame': 0, 'IsWaitFinish': True})
            goto Event271
        }
      case 1:
        goto Event232
      case 2:
        goto Event232
      case 3:
        goto Event232
      case 4:
        goto Event232
      case 5:
        goto Event232
      case 6:
        goto Event232
      case 7:
        goto Event232
      case 8:
        goto Event232
      case 9:
        goto Event232
      case 10:
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_103'})
      case 11:
        goto Event232
      case 12:
        goto Event232
      case 13:
        goto Event232
    }
}

void Gerudo_CarryIce_Delivered_Npc_GerudoDesert002_Talk() {
    goto Event144
}

void Ready_Npc_GerudoDesert003_Talk() {
    Event258:

    call Npc_GerudoDesert003.Sleep_check()

    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_R_001', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Ready_Npc_GerudoDesert002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_008', 'ASName': 'Act_HeatTired_To_DungeonObj'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_Activated'})
}

void Ready_Npc_OasisMilk_E_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_OasisMilk_E.Talk()

}

void Gerudo_CarryIce_bar_Npc_OasisMilk_E_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Gerudo_CarryIce_bar'}) {
        Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_018'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_007'})
        } else {
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_006'})
        }
    } else {
        Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_002'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_004', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_017', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_019', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_020'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_CarryIce_Gerudo_CarryIce_bar', 'IsWaitFinish': True})
        } else {
            Npc_OasisMilk_E.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_005'})
        }
    }
}

void Gerudo_CarryIce_bar_Npc_GerudoDesert002_Talk() {
    goto Event144
}

void Gerudo_CarryIce_Get_Npc_OasisMilk_E_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Gerudo_CarryIce_bar_Npc_OasisMilk_E_Talk()

}

void Gerudo_CarryIce_Delivered_Npc_OasisMilk_E_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckExistActor({'ActorName': 'IceBlock', 'IsCheckEquipStand': False, 'IsCheckLife': False}) {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            Event221:
            Npc_OasisMilk_E[Town_out].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_001'})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_FirstVoy'}) {
                goto Event221
            } else {
                Npc_OasisMilk_E[Town_out].Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_105', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_CarryIce_FirstVoy', 'IsWaitFinish': True})
                goto Event221
            }
        }
    } else {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            Event46:
            Npc_OasisMilk_E[Town_out].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_201', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_FirstVoy'}) {
                goto Event46
            } else {
                Npc_OasisMilk_E[Town_out].Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_105', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_CarryIce_FirstVoy', 'IsWaitFinish': True})
                goto Event46
            }
        }
    }
}

void Gerudo_CarryIce_Finished_Npc_OasisMilk_E_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 'DoAndDo'})

    Npc_OasisMilk_E[Town].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoMilkflost_016', 'IsWaitFinish': True})
}

void Event_carry_ice_flos() {
    IceBlock.Demo_Join({'IsWaitFinish': True})

    call InitTalk.InitTalkEquipOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_OasisMilk_E", sub_name="Town_out")})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Event16:
        Npc_OasisMilk_E[Town_out].Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_101', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
        Event167:
        Fader.Demo_FadeOut({'DispMode': 'Logo', 'Color': 1, 'Frame': 0, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_Delivered'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_FirstVoy'}) {
            goto Event16
        } else {
            Npc_OasisMilk_E[Town_out].Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_105', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_CarryIce_FirstVoy', 'IsWaitFinish': True})
            Npc_OasisMilk_E[Town_out].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_104'})
            goto Event167
        }
    }
}

void Ready_Npc_GerudoDesert002_Near() {
    Event240:
    Npc_GerudoDesert002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:near00', 'IsChecked': True, 'DispFrame': 300})
}

void Gerudo_CarryIce_bar_Npc_GerudoDesert002_Near() {
    Event227:
    Npc_GerudoDesert002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Gerudo_CarryIce_Get_Npc_GerudoDesert002_Near() {
    goto Event227
}

void Gerudo_CarryIce_Delivered_Npc_GerudoDesert002_Near() {
    goto Event227
}

void Gerudo_CarryIce_Finished_Npc_GerudoDesert002_Near() {
    goto Event240
}

void Ready_Npc_GerudoDesert003_Gerudo_CarryIce_fireworks_ice_Talk() {
    Event274:

    call Npc_GerudoDesert003.Gerudo_CarryIce_fireworks_ice_Talk()

}

void Gerudo_CarryIce_Delivered_Npc_GerudoDesert003_Gerudo_CarryIce_fireworks_ice_Talk() {
    goto Event272
}

void Gerudo_CarryIce_Finished_Npc_GerudoDesert003_Gerudo_CarryIce_fireworks_ice_Talk() {
    goto Event274
}

void Gerudo_CarryIce_bar_Npc_GerudoDesert003_Talk() {
    goto Event258
}

void Gerudo_CarryIce_bar_Npc_GerudoDesert003_Gerudo_CarryIce_fireworks_ice_Talk() {
    goto Event274
}

void Preparation() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    EventSystemActor.Demo_WarpPLAndResetGimmick({'StartPosName': 'Gerudo_CarryIce_Start', 'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_PlayerIceGrabReady({'IsWaitFinish': True})

    call PopFlag_OFF()

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3755.75244140625, 'Pattern1PosY': 141.18031311035156, 'Pattern1PosZ': 2272.166015625, 'Pattern1AtX': -3754.364990234375, 'Pattern1AtY': 141.18031311035156, 'Pattern1AtZ': 2277.277099609375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'StartCalcOnly': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
}

void Gerudo_CarryIce_Get_Npc_GerudoDesert003_Gerudo_CarryIce_fireworks_ice_Talk() {
    goto Event259
}

void Gerudo_CarryIce_Delivered_Npc_OasisMilk_E_Near() {
    Npc_OasisMilk_E[Town_out].Demo_TalkASync({'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:near01', 'IsWaitFinish': True})
}

void Gerudo_CarryIce_NpcCall() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Call'}) {
        IceBlock.Demo_Join({'IsWaitFinish': True})

        call InitTalk.InitTalkEquipOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_OasisMilk_E", sub_name="Town_out")})

        Npc_OasisMilk_E[Town_out].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_oasis025_S02_002'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_Call'})
    }
}

void PopFlag_OFF() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_EnemyPop_01'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Gerudo_CarryIce_EnemyPop_02'})
}
