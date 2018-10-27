-------- EventFlow: Bottle_Mes --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_AdvanceQuest', 'Demo_WarpPlayerToAnchor', 'Demo_WarpPlayer', 'Demo_RollbackQuest', 'Demo_ResetGimmick', 'Demo_CallDemo']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'CheckTimeType', 'CheckExistActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayerTurnAndLookToObject', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_Bottle_Mes001[Bottle_Man]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_ChangePosture']
queries: ['IsOnInstEventFlag']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: Npc_Zora026[Npc_fine]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_MoveToAnchor', 'Demo_WarpToScheduleAnchor', 'Demo_TalkASync', 'Demo_BecomeSpeaker']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Bottle_Letter[Bottle_first]
entrypoint: None()
actions: ['Demo_Idling', 'Demo_EventDisableContactIdle']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: Npc_Bottle_Mes001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora126
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora026_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Go'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 1})

        if Npc_Zora026[Npc_fine].IsOnInstEventFlag() {
            Event174:
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk04', 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk06', 'IsCloseMessageDialog': True})

                fork {
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2757.4921875, 'Pattern1PosY': 192.2383270263672, 'Pattern1PosZ': -71.02193450927734, 'Pattern1AtX': 2759.210693359375, 'Pattern1AtY': 188.557861328125, 'Pattern1AtZ': -85.43225860595703, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                } {
                    EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'H-4', 'WarpDestPosName': 'Bottle_Start', 'IsWaitFinish': True})
                }

                Npc_Zora026[Npc_fine].Demo_TurnAndLookToObject({'ObjectId': 1, 'IsValid': False, 'FaceId': 2, 'ActorName': 'FldObj_Bottle_Letter', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Bottle_Ready', 'IsConfront': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Bottle_Mes_river'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_Start', 'IsWaitFinish': True})

                fork {
                    Npc_Zora026[Npc_fine].Demo_PlayASForDemo({'ASName': 'Act_Push', 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                } {
                    FldObj_Bottle_Letter[Bottle_first].Demo_EventDisableContactIdle({'IsWaitFinish': True, 'ContactType': 0})
                }

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
                Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
                Npc_Zora026[Npc_fine].Demo_MoveToAnchor({'IsTurnToAnchorDir': True, 'IsWaitFinish': False, 'ASKeyName': 'Run', 'AnchorName': 'AnchorAction2', 'AnchorUniqueName': 'Event_Point', 'IsAlignmentAnchor': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_Activated', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Bottle_Mes_Start', 'IsWaitFinish': True})
                Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': False})
            } else {
                Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk05'})
            }
        } else {
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk07'})
            goto Event174
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk00', 'IsCloseMessageDialog': True})
        Npc_Zora026[Npc_fine].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 2, 'IsValid': True})
        Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk01', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk08'})
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk09'})
            Event173:
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk02', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk03', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_Go', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            goto Event174
        } else {
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk22'})
            goto Event173
        }
    }
}

void Ready_Npc_Zora026_Near() {
    Event183:
    if !EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Activated'}) {
            Npc_Zora026[Npc_fine].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Bottle_Mes:near03'})
        } else {
            Npc_Zora026[Npc_fine].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Bottle_Mes:near01', 'DispFrame': 300})
        }
    }
}

void Ready_Npc_Bottle_Mes001_Talk() {

    call RiverSasanoHello()

    Event234:
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Bottle_Mes001_ReadyFirst'}) {
        Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk107'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk108'})
        } else {
            Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk109'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Bottle_Mes001_ReadyFirst', 'IsWaitFinish': True})
        Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk104'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk105'})
            if EventSystemActor.GeneralChoice2() in [0, 1] {
                Event238:
                Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk106'})
                Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk111'})
            }
        } else {
            goto Event238
        }
    }
}

void Step10_Npc_Zora026_Talk() {
    Event23:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Step10'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora026_BottleLost', 'IsWaitFinish': True})
        Event198:
        Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk10'})
        Event199:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk14'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk17'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Npc_Zora026_Talk_Retry', 'DemoName': 'Bottle_Mes', 'EndFade': 1})
            } else {
                Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk15', 'IsCloseMessageDialog': True})
                Event206:
                Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk16'})
                goto Event199
            }
          case 1:
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk12', 'IsCloseMessageDialog': True})
            goto Event206
          case 2:
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk13', 'IsCloseMessageDialog': True})
            goto Event206
          case 3:
            Npc_Zora026[Npc_fine].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk11'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_river'}) {
        goto Event198
    } else {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora026_BottleLost', 'IsWaitFinish': True})
        goto Event198
    }
}

void Step10_Npc_Bottle_Mes001_Talk() {

    call RiverSasanoHello()

    goto Event234
}

void Finish_Npc_Bottle_Mes001_Talk() {
    Event60:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Zora126', 'Actor2': 'Npc_Bottle_Mes001'})


    fork {
        Npc_Zora126.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_Bottle_Mes001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk123'})
    Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk124'})
    Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk125', 'IsCloseMessageDialog': True})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Bottle_Mes_Item'})
    Npc_Zora126.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'ActorName': 'Npc_Bottle_Mes001'})

    fork {
        Npc_Bottle_Mes001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'ActorName': 'Npc_Zora126'})
    } {
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk126'})
    }

    Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk127'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Bottle_Mes_Finish'})
}

void Bottle_Check() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Bottle_Mes', 'StepName': 'Step20'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora026_BottleLost', 'IsWaitFinish': True})
}

void Bottle_Get_Demo() {
    Event425:
    if !EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Step30'}) {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'NoLogo'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_Demo30', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1771.6640625, 'Pattern1PosY': 117.71788024902344, 'Pattern1PosZ': -57.01003646850586, 'Pattern1AtX': 1766.464599609375, 'Pattern1AtY': 115.96377563476562, 'Pattern1AtZ': -55.56169891357422, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'Bottle_Man_Event_pl', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
        Npc_Bottle_Mes001[Bottle_Man].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'UniqueName': 'Bottle_Man_Event'})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        Npc_Bottle_Mes001[Bottle_Man].Demo_TurnAndLookToObject({'ObjectId': 1, 'FaceId': 0, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'IsValid': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_Bottle_Mes001', 'UniqueName': 'Bottle_Man', 'IsWaitFinish': True, 'IsValid': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        Npc_Bottle_Mes001[Bottle_Man].Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'NoLogo'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Bottle_Mes001_ReadyFirst'}) {
            Event249:
            Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk113'})
            Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk114'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk115'})
                Event410:
                Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk122', 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Bottle_Mes_Step30'})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': False, 'QuestName': 'Bottle_Mes', 'StepName': 'Finish', 'IsWaitFinish': True})
            } else {
                Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk116'})
                goto Event410
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Bottle_Mes001_ReadyFirst', 'IsWaitFinish': True})
            Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk104'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk105'})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    Event254:
                    Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk106'})
                    goto Event249
                }
            } else {
                goto Event254
            }
        }
    }
}

void RiverSasanoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Bottle_Mes001[Bottle_Man].IsOnInstEventFlag() {
        Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk103', 'IsCloseMessageDialog': False})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk100', 'IsCloseMessageDialog': False})
      case [2, 3, 4, 5]:
        Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk101', 'IsCloseMessageDialog': False})
      case [6, 7]:
        Npc_Bottle_Mes001[Bottle_Man].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk102', 'IsCloseMessageDialog': False})
    }
}

void Bottle_Break() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': False})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    } {
        Npc_Zora026[Npc_fine].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Zora026[Npc_fine].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora026', 'UniqueName1': 'Npc_fine', 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': False, 'Pattern1PosX': -3.700000047683716, 'Pattern1PosY': 3.299999952316284, 'Pattern1PosZ': 4.199999809265137, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.5, 'Pattern1AtZ': 0.0})
    Npc_Zora026[Npc_fine].Demo_Talk({'MessageId': 'EventFlowMsg/Bottle_Mes:talk119', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_river', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Bottle_Mes_river', 'IsWaitFinish': True})
    EventSystemActor.Demo_ResetGimmick({'SystemResetOption': 1, 'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': False})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
}

void Step10_Npc_Zora026_Near() {
    goto Event183
}

void Step20_Npc_Zora026_Talk() {
    goto Event23
}

void Step20_Npc_Bottle_Mes001_Talk() {

    call RiverSasanoHello()

    goto Event234
}

void Step30_Npc_Bottle_Mes001_Talk() {
    goto Event425
}

void Step20_Npc_Zora026_Near() {
    goto Event183
}

void Step30_Npc_Zora026_Talk() {
    goto Event23
}

void Step30_Npc_Zora026_Near() {
    goto Event183
}

void Bottle_Break_town() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Zora126")})

    Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Bottle_Mes:talk121', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_river', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Bottle_Mes_river', 'IsWaitFinish': True})
    EventSystemActor.Demo_ResetGimmick({'SystemResetOption': 1, 'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
}

void Finish_Npc_Zora126_Talk() {
    goto Event60
}

void Finish_Npc_Bottle_Mes001_NearActorsTalk() {
    goto Event60
}

void Finish_Npc_Zora126_NearActorsTalk() {
    goto Event60
}

void Finish_Npc_Zora126_NearActorsNear() {
    Event420:
    Npc_Zora126.Demo_TalkASync({'MessageId': 'EventFlowMsg/Bottle_Mes:near03', 'DispFrame': 300, 'IsChecked': True, 'IsWaitFinish': True})
}

void Finish_Npc_Zora126_Near() {
    goto Event420
}

void Step20_Npc_Bottle_Mes001_Bottle_Mes_Get_Talk() {

    call RiverSasanoHello()

    goto Event234
}

void Npc_Zora026_Talk_Retry() {
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_RollbackQuest({'QuestName': 'Bottle_Mes', 'StepName': 'Step10', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora026_BottleLost', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Bottle_Mesriver_on'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Bottle_Mes_river', 'IsWaitFinish': True})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Bottle_Mes_river'})
    FldObj_Bottle_Letter[Bottle_first].Demo_EventDisableContactIdle({'IsWaitFinish': True, 'ContactType': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagON({'FlagName': 'Bottle_Mes_Start', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2757.4921875, 'Pattern1PosY': 192.2383270263672, 'Pattern1PosZ': -71.02193450927734, 'Pattern1AtX': 2759.210693359375, 'Pattern1AtY': 188.557861328125, 'Pattern1AtZ': -85.43225860595703, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'H-4', 'WarpDestPosName': 'Bottle_Start', 'IsWaitFinish': True})
    } {
        Npc_Zora026[Npc_fine].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'zora_pt01', 'IsWaitFinish': True})
    }

    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_Zora026[Npc_fine].Demo_TurnAndLookToObject({'ObjectId': 1, 'FaceId': 2, 'ActorName': 'FldObj_Bottle_Letter', 'UniqueName': 'Bottle_Go', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Zora026[Npc_fine].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_Push', 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
    Npc_Zora026[Npc_fine].Demo_MoveToAnchor({'IsTurnToAnchorDir': True, 'IsWaitFinish': False, 'ASKeyName': 'Run', 'AnchorName': 'AnchorAction2', 'AnchorUniqueName': 'Event_Point', 'IsAlignmentAnchor': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Bottle_Mes_Start', 'IsWaitFinish': True})
    Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': False})
}
