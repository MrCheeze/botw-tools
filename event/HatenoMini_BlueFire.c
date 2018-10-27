-------- EventFlow: HatenoMini_BlueFire --------

Actor: Npc_AncientDoctor_Hateno
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_CallDemo', 'Demo_CloseMessageDialog']
queries: ['RandomChoice4', 'CheckPlayerState', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_AncientOven_A_01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_LookAtObject', 'Demo_PlayerTurnAndLookToObject', 'Demo_StopInAir', 'Demo_PlayerTurnInner', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_AncientAssistant004
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Carry_Npc_AncientDoctor_Hateno_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk15', 'IsOverWriteLabelActorName': False})
    Event58:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk16', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Event139:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk36', 'ASName': ''})
        goto Event58
      case 1:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk17', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        goto Event139
      case 2:

        call Explain_CherryChan()

        goto Event139
      case 3:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk14', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Goodbye'})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk38', 'ASName': ''})
    }
}

void Finish_Npc_AncientDoctor_Hateno_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_First'}) {
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk20', 'IsOverWriteLabelActorName': False})
        Event175:

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_AncientArrow_C_01'})

        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk43'})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SelfIntro', 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk44', 'IsCloseMessageDialog': False})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk21', 'IsOverWriteLabelActorName': False})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk39'})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk23', 'IsOverWriteLabelActorName': False})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk31', 'ASName': 'Talk_SelfIntro'})
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_BlueFire_Finish', 'IsWaitFinish': True})
    } else {
        switch Npc_AncientDoctor_Hateno.CheckActorAction13() {
          case 0:
            Event206:
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            Npc_AncientDoctor_Hateno.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
            Npc_AncientAssistant004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'J-1', 'WarpDestPosName': 'AncientOvenFirst', 'IsWaitFinish': True})
            GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': False, 'NoConnect': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 1, 'ActorName': 'Npc_AncientDoctor_Hateno', 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ObjectId': 0, 'IsValid': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            Event37:
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_Naked_First'}) {
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk00'})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_WatchLink'})
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk24'})
                        Event180:

                        call Explain_Roberry()


                        call RoberryIntro()

                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk42'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor002_First', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_AncientDoctor002_Naked_First'})
                        goto Event175
                    } else {
                        Event222:
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk01', 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    goto Event222
                }
            } else {
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk22'})
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk13'})
                goto Event180
            }
          case 1:
            goto Event37
          case 2:
            goto Event206
          case 3:
            goto Event206
        }
    }
}

void Ready_TwnObj_AncientOven_A_01_Talk() {
    Event172:

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'J-1', 'WarpDestPosName': 'AncientOvenFirst', 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4511.994140625, 'Pattern1PosY': 354.77532958984375, 'Pattern1PosZ': -3160.33984375, 'Pattern1AtX': 4514.59765625, 'Pattern1AtY': 354.4998474121094, 'Pattern1AtZ': -3161.804931640625, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    }

    switch EventSystemActor.RandomChoice4() {
      case 0:
        TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk90', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
      case 1:
        TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk91', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
      case 2:
        TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk92', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
      case 3:
        TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk93', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    }
}

void Finish_TwnObj_AncientOven_A_01_Talk() {

    call TwnObj_AncientOven_A_01.Talk()

}

void Carry_TwnObj_AncientOven_A_01_Talk() {
    Event174:
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor_MoveA1'}) {
        goto Event172
    } else {

        fork {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'J-1', 'WarpDestPosName': 'AncientOvenFirst', 'IsWaitFinish': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4514.00927734375, 'Pattern1PosY': 354.79217529296875, 'Pattern1PosZ': -3160.65185546875, 'Pattern1AtX': 4515.29345703125, 'Pattern1AtY': 354.53173828125, 'Pattern1AtZ': -3163.3505859375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
        }

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4511.994140625, 'Pattern1PosY': 354.77532958984375, 'Pattern1PosZ': -3160.33984375, 'Pattern1AtX': 4514.59765625, 'Pattern1AtY': 354.4998474121094, 'Pattern1AtZ': -3161.804931640625, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk93', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        TwnObj_AncientOven_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk92', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientOven_First', 'IsWaitFinish': True})
        Npc_AncientDoctor_Hateno.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4512.072265625, 'Pattern1PosY': 354.37457275390625, 'Pattern1PosZ': -3162.68994140625, 'Pattern1AtX': 4514.177734375, 'Pattern1AtY': 354.1996765136719, 'Pattern1AtZ': -3160.56298828125, 'Pattern1Fovy': 54.999996185302734, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            Npc_AncientDoctor_Hateno.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_AncientDoctor_Hateno.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False, 'FaceId': 1, 'IsConfront': True})
        }

        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_AncientDoctor_Hateno', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk32', 'ASName': '', 'IsCloseMessageDialog': False})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk33', 'IsCloseMessageDialog': False, 'ASName': ''})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_WatchLink', 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk34'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})

        fork {
            Npc_AncientDoctor_Hateno.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4512.751953125, 'Pattern1PosY': 355.12835693359375, 'Pattern1PosZ': -3158.23486328125, 'Pattern1AtX': 4514.0087890625, 'Pattern1AtY': 354.51922607421875, 'Pattern1AtZ': -3160.889892578125, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            Npc_AncientAssistant004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
        }

        Npc_AncientAssistant004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'ObjectId': 2, 'FaceId': 1, 'TurnPosition': [4510.0, 353.0, -3168.0], 'IsValid': False, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_AncientDoctor_MoveA1'})
        GameROMPlayer.Demo_PlayerTurnInner({'IsWaitFinish': True})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    }
}

void Finish_TwnObj_AncientOven_A_01_Near() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near00', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near03', 'IsChecked': False, 'DispFrame': 90})
      case 2:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near01', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Carry_TwnObj_AncientOven_A_01_Near() {
    Event24:
    TwnObj_AncientOven_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near04', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_TwnObj_AncientOven_A_01_Near() {
    goto Event24
}

void Explain_CherryChan() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4514.55859375, 'Pattern1PosY': 356.0968017578125, 'Pattern1PosZ': -3158.1767578125, 'Pattern1AtX': 4514.96337890625, 'Pattern1AtY': 355.01910400390625, 'Pattern1AtZ': -3160.947021484375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk27'})
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk28', 'ASName': 'Talk_Fascinatedly'})
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk29', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}

void Explain_Roberry() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk25', 'ASName': '', 'IsCloseMessageDialog': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4514.361328125, 'Pattern1PosY': 354.13360595703125, 'Pattern1PosZ': -3160.464599609375, 'Pattern1AtX': 4519.107421875, 'Pattern1AtY': 353.431884765625, 'Pattern1AtZ': -3163.190673828125, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'Count': 20.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_AncientDoctor_Hateno.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'IsConfront': True, 'TurnPosition': [4511.0, 353.0, -3158.0], 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk37', 'ASName': 'Talk_SelfIntroPre'})
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SelfIntro', 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk18', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 20.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    } {
        Npc_AncientDoctor_Hateno.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'TurnPosition': [4511.0, 353.0, -3158.0], 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
    }

}

void Meet_TwnObj_AncientOven_A_01_Talk() {
    goto Event174
}

void Meet_TwnObj_AncientOven_A_01_Near() {
    goto Event24
}

void Meet_Npc_AncientDoctor_Hateno_AncientLabo_AncientDoctor_MoveA1_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_First'}) {
        Event34:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_WatchLink'})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk24'})

        call Explain_Roberry()


        call RoberryIntro()

        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk12', 'IsOverWriteLabelActorName': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4514.55859375, 'Pattern1PosY': 356.0968017578125, 'Pattern1PosZ': -3158.1767578125, 'Pattern1AtX': 4514.96337890625, 'Pattern1AtY': 355.01910400390625, 'Pattern1AtZ': -3160.947021484375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk35'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_BlueFire_Meet'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_Naked_First'}) {
            Event31:
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor002_First', 'IsWaitFinish': True})
                goto Event34
            } else {
                Event32:
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk01', 'IsOverWriteLabelActorName': False})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_AncientDoctor002_Naked_First'})
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk00'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event31
            } else {
                goto Event32
            }
        }
    }
}

void Meet_Npc_AncientDoctor_Hateno_AncientLabo_AncientDoctor_MoveA1_Near() {
    Npc_AncientDoctor_Hateno.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near06', 'DispFrame': 300, 'IsChecked': True})
}

void Carry_Npc_AncientDoctor_Hateno_Near() {
    Npc_AncientDoctor_Hateno.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near06', 'DispFrame': 90, 'IsChecked': False})
}

void Finish_Npc_AncientDoctor_Hateno_Near() {
    Npc_AncientDoctor_Hateno.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:near05'})
}

void Demo_AkkareWarp() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo363_0', 'EntryPointName': 'Demo363_0_Akkare', 'IsWaitFinish': True, 'EndFade': 0})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event166:
        NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk100'})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        goto Event166
    }
}

void RoberryIntro() {
    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk26'})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk04', 'IsOverWriteLabelActorName': False})
        }

        Event45:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk06', 'IsOverWriteLabelActorName': False})
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk07', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk08', 'IsOverWriteLabelActorName': False})
            Event63:
            if !EventSystemActor.GeneralChoice2() {
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk19', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Understand'})
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk10', 'IsOverWriteLabelActorName': False})
                Event77:
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk30'})
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk11', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SelfIntro'})
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk41'})
            } else {
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk19', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Understand'})
                goto Event77
            }
        } else {
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk09', 'IsOverWriteLabelActorName': False})
            goto Event63
        }
    } else {
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HatenoMini_BlueFire:talk05', 'IsOverWriteLabelActorName': False})
        goto Event45
    }
}

void Meet_Npc_AncientAssistant004_AncientLabo_AncientDoctor_MoveA1_Talk() {

    call Npc_AncientAssistant004.Ready_DokuroEye_Jerin()

}

void Meet_Npc_AncientAssistant004_AncientLabo_AncientDoctor_MoveA1_Near() {

    call Npc_AncientAssistant004.Near()

}
