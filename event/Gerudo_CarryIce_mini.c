-------- EventFlow: Gerudo_CarryIce_mini --------

Actor: Npc_GerudoDesert003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkNoMessageStepper', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_ForbidSettingInstEventFlag', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_DisableMiniGameTime', 'Demo_RollbackQuest', 'Demo_IncreaseRupee', 'Demo_MiniGameStart', 'Demo_WaitFrame', 'Demo_MiniGameTime', 'Demo_CloseMessageDialog', 'Demo_AppearRupee', 'Demo_WarpPLAndResetGimmick']
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice3', 'CheckRupee', 'CheckElapsedTimeOfMiniGame', 'CheckExistActor', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReserveConnectTime', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_MiniGameTimerWrite']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisMilk_E[Town_out1]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerIceBlockRemove', 'Demo_PlayASAdapt', 'Demo_PlayerIceGrabReady']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: IceBlock
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_GerudoDesert003_Talk() {
    Event301:

    call Npc_GerudoDesert003.Sleep_check()

    switch Npc_GerudoDesert003.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        if Npc_GerudoDesert003.IsOnInstEventFlag() {
            Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_10'})
            Event87:
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckRupee({'Value': 50}) {
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -50})
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_44', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
                    Event233:

                    call Common.DisableSaveAndWarp()

                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Step1'})
                    Npc_GerudoDesert003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})

                    call Gerudo_CarryIce.Preparation()

                    Event367:
                    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})

                    fork {
                        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
                    } {
                        EventSystemActor.Demo_MiniGameTime({'CountMode': 0, 'CountStartTime': 0, 'IsShowTimeUI': True, 'IsWaitFinish': True, 'MaxTime': -1})
                    }

                } else {
                    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_46'})
                    Event303:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                }
            } else {
                Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_45'})
                goto Event303
            }
        } else {
            Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_09'})
            goto Event87
        }
      case 10:
        Npc_GerudoDesert003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert003_S01_104'})
        Npc_GerudoDesert003.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    }
}

void Step1_Npc_GerudoDesert003_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'CountMode': 0, 'CountStartTime': 0, 'IsShowTimeUI': True, 'IsWaitFinish': True, 'MaxTime': -1})
    Event242:
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_mini_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_areaout'}) {
            if !EventSystemActor.CheckExistActor({'ActorName': 'IceBlock', 'IsCheckEquipStand': False, 'IsCheckLife': False}) {
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event242
            } else {
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Step2'})
            }
        } else {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Step2'})
        }
    } else {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Ready'})
    }
}

void Step1_Npc_GerudoDesert003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_41'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        Event310:
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert002_S02_001'})
      case 1:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_02', 'IsCloseMessageDialog': False})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.CheckRupee({'Value': 50}) {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -50})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})

                call retry_ice_carry()

            } else {
                Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_47'})
                if !EventSystemActor.GeneralChoice2() {
                    Event124:
                    Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_48', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm', 'FadeSec': 3.0})
                    Fader.Demo_FadeOut({'DispMode': 'Logo', 'Color': 1, 'Frame': 0, 'IsWaitFinish': True})
                    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                    call Common.EnableSaveAndWarp()

                    EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Ready'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                } else {
                    Event311:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    goto Event310
                }
            }
          case 1:
            goto Event124
          case 2:
            goto Event311
        }
      case 2:
        goto Event124
    }
}

void retry_ice_carry() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Ready'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
    goto Event233
}

void Step1_Npc_OasisMilk_E_Talk() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Finish', 'ForceRunTelop': False})
}

void Step1_flos_Talk1() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

    if !EventSystemActor.CheckExistActor({'ActorName': 'IceBlock', 'IsCheckEquipStand': False, 'IsCheckLife': False}) {
        Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_01'})
    } else {
        Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_00'})
    }
}

void Ready_Npc_OasisMilk_E_Talk() {

    call Npc_OasisMilk_E.Talk()

}

void Step2_Npc_GerudoDesert003_StepStart() {

    call Common.AirStartUP_Player()

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_areaout'}) {
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm', 'FadeSec': 5.0})
        NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_43', 'IsWaitAS': True, 'CloseDialogOption': 0, 'IsCloseMessageDialog': True})

        call Common.EnableSaveAndWarp()

        Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Ready'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'Frame': 0, 'IsWaitFinish': True})
    } else {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.4000000059604645, 'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Npc_GerudoDesert003.Demo_TalkNoMessageStepper({'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_49', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
        EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'CarryIce_mini_Failed', 'SystemResetOption': 0, 'AdditionalResetActor': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3749.89990234375, 'Pattern1PosY': 140.89019775390625, 'Pattern1PosZ': 2272.56103515625, 'Pattern1AtX': -3749.840087890625, 'Pattern1AtY': 140.8433837890625, 'Pattern1AtZ': 2275.56005859375, 'Pattern1Fovy': 54.999996185302734, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

        call Common.EnableSaveAndWarp()

        Npc_GerudoDesert003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        Npc_GerudoDesert003.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_50', 'IsWaitFinish': True})
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Ready'})
    }
}

void Finish_Npc_OasisMilk_E_StepStart() {
    IceBlock.Demo_Join({'IsWaitFinish': True})
    GameDataCalcMachine.Demo_MiniGameTimerWrite({'IsWaitFinish': True, 'GameDataIntNameMintues': 'Gerudo_CarryIce_minute', 'GameDataIntNameSeconds': 'Gerudo_CarryIce_s', 'GameDataIntNameMiliseconds': 'Gerudo_CarryIce_m'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.4000000059604645, 'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

    call InitTalk.InitTalkEquipOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_OasisMilk_E", sub_name="Town_out1")})

    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 120}) {
        Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_26', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        Event381:
        switch EventSystemActor.CheckTimeType() {
          case [0, 5, 6, 7]:
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:Talk_003', 'IsCloseMessageDialog': True})
            Event152:
            Fader.Demo_FadeOut({'DispMode': 'Logo', 'Color': 1, 'Frame': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

            call Common.EnableSaveAndWarp()

            GameRomCamera.Demo_ReserveConnectTime({'IsWaitFinish': True, 'InterpolateTime': 0.0})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Ready'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Fader.Demo_FadeIn({'DispMode': 'Logo', 'Color': 1, 'Frame': 0, 'IsWaitFinish': True})
          case [1, 2, 3, 4]:
            Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:Talk_000'})
            if !EventSystemActor.GeneralChoice2() {
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:Talk_001'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameROMPlayer.Demo_PlayerIceBlockRemove({'IsWaitFinish': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gerudo_CarryIce_mini', 'StepName': 'Step1'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                EventSystemActor.Demo_WarpPLAndResetGimmick({'StartPosName': 'Gerudo_CarryIce_Start', 'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': ''})
                GameROMPlayer.Demo_PlayerIceGrabReady({'IsWaitFinish': True})

                call Gerudo_CarryIce.PopFlag_OFF()

                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3755.75244140625, 'Pattern1PosY': 141.18031311035156, 'Pattern1PosZ': 2272.166015625, 'Pattern1AtX': -3754.364990234375, 'Pattern1AtY': 141.18031311035156, 'Pattern1AtZ': 2277.277099609375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'StartCalcOnly': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_GerudoDesert003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_GerudoDesert003.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -50})
                Npc_GerudoDesert003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:Npc_GerudoDesert002_S02_001', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})
                goto Event367
            } else {
                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:Talk_002', 'IsCloseMessageDialog': True})
                goto Event152
            }
        }
    } else {
        Npc_OasisMilk_E[Town_out1].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce_mini:NewText_40', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

        goto Event381
    }
}

void Ready_Npc_GerudoDesert003_Gerudo_CarryIce_fireworks_ice_Talk() {
    goto Event301
}

void Step1_Npc_OasisMilk_E_Near() {
    Npc_OasisMilk_E[Town_out1].Demo_TalkASync({'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_CarryIce:near01', 'IsWaitFinish': True})
}
