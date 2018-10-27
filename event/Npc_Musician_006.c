-------- EventFlow: Npc_Musician_006 --------

Actor: Npc_Musician_006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_OpenMessageDialog', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Finish_Npc_HighMountain032]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_LastTalk'}) {
        Event96:
        if Npc_Musician_006.CheckActorAction({'ActionName': 'Root/Timeline/Action4/到着'}) {
            Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk08'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk23', 'IsCloseMessageDialog': True})
                Npc_Musician_006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 1, 'ObjectId': 3, 'TurnDirection': 280.0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True})
                SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

                call LastSong()

                GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'Count': 0.0, 'IsWaitFinish': True})
                Npc_Musician_006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk25'})
            } else {
                Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk24'})
            }
        } else {
            Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk26'})
        }
    } else {
        if Npc_Musician_006.CheckActorAction({'ActionName': 'Root/Timeline/Action4/到着'}) {
            if Npc_Musician_006.IsOnInstEventFlag() {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_006_Talk'}) {
                    Event25:
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk04'})
                    Event16:
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk10', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Musician_006.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2})
                        Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk06'})
                        Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk07', 'ASName': '', 'IsCloseMessageDialog': True})
                        Npc_Musician_006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 1, 'TurnDirection': 280.0, 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0]})
                        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute'})
                        Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk13', 'IsCloseMessageDialog': True})

                        call LastSong()

                        Npc_Musician_006.Demo_PlayASForDemo({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 20.0})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk11', 'IsCloseMessageDialog': True, 'ASName': ''})
                        GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'Count': 0.0, 'IsWaitFinish': True})
                        Npc_Musician_006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True})
                        Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk14', 'ASName': ''})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Musician_LastTalk'})
                    } else {
                        Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk05'})
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Musician_006_Talk', 'IsWaitFinish': True})
                    }
                } else {
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk09'})
                    goto Event16
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_006_FirstTalk'}) {
                    goto Event25
                } else {
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk00', 'IsOverWriteLabelActorName': False})
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk20'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_006_FirstTalk', 'IsWaitFinish': True})
                    goto Event16
                }
            }
        } else {
            Event10:
            if Npc_Musician_006.IsOnInstEventFlag() {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_006_Talk'}) {
                    Event56:
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk03'})
                    Event63:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_006_Talk', 'IsWaitFinish': True})
                } else {
                    Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk21'})
                    goto Event56
                }
            } else {
                Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk00', 'IsOverWriteLabelActorName': False})
                Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk01'})
                Npc_Musician_006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk02'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_006_FirstTalk', 'IsWaitFinish': True})
                goto Event63
            }
        }
    }
}

void Song_Together() {

    fork {
        Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain032[Brosrock_Finish_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Song_Together()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_LastTalk'}) {
        goto Event96
    } else {
        goto Event10
    }
}

void LastSong() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.570557117462158, 'Pattern1PosZ': -6.084716796875, 'Pattern1AtX': -0.08837900310754776, 'Pattern1AtY': 1.3872679471969604, 'Pattern1AtZ': -0.021973000839352608, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_006', 'IsWaitFinish': False, 'Count': 180.0, 'ReviseModeEnd': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Pattern1PosY': 2.338469982147217})
    Npc_Musician_006.Demo_ChangeEmotion({'IsWaitFinish': True, 'IsOnlyFace': True, 'EmotionType': 'Sorrow'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'MusicianThemeBgm'})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Accordion', 'MessageOpenDelayTime': 20, 'IsWaitAS': False, 'IsCloseMessageDialog': False, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk19'})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk12', 'ASName': 'Act_Accordion', 'IsWaitAS': False, 'IsCloseMessageDialog': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -4.956298828125, 'Pattern1PosY': 3.212157964706421, 'Pattern1PosZ': -1.6447750329971313, 'Pattern1AtX': 0.5253909826278687, 'Pattern1AtY': 1.348572015762329, 'Pattern1AtZ': 0.37133800983428955, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_006', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 240.0, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Accordion', 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk15', 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Accordion', 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk16', 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsCloseMessageDialog': False, 'MessageOpenDelayTime': 0})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Accordion', 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk17', 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsCloseMessageDialog': False, 'MessageOpenDelayTime': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.857758045196533, 'Pattern1PosZ': 3.539551019668579, 'Pattern1AtX': 0.20388799905776978, 'Pattern1AtZ': 0.3771969974040985, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_006', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'Count': 0.0, 'Pattern1PosY': 1.3927119970321655, 'Pattern1AtY': 1.2664309740066528, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Accordion', 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk18', 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
    Npc_Musician_006.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Accordion', 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Musician_006:Talk22'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'MusicianThemeBgm', 'FadeSec': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Musician_006.Demo_ChangeEmotion({'IsWaitFinish': True, 'IsOnlyFace': True, 'EmotionType': 'Normal'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff'})
}
