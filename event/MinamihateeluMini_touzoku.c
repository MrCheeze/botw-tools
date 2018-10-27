-------- EventFlow: MinamihateeluMini_touzoku --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_AppearRupee', 'Demo_AdvanceQuest']
queries: ['CheckRupee', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: subchallnpc000
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ForbidSettingInstEventFlag', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_TalkASync', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: subchallnpc000_twin
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Talk', 'Demo_ForbidSettingInstEventFlag', 'Demo_TurnAndLookToObject', 'Demo_TalkASync', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[B]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[a]
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Finish_subchallnpc000_Talk() {
    Event46:

    call Ready_subchallnpc000_Talk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void Ready_subchallnpc000_twin_Talk() {
    goto Event46
}

void Ready_subchallnpc000_NearActorsTalk() {
    goto Event46
}

void Ready_subchallnpc000_twin_NearActorsTalk() {
    goto Event46
}

void Finish_subchallnpc000_NearActorsTalk() {

    call subchallnpc000.NearActorsTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void Finish_subchallnpc000_NearActorsNear() {
    Event214:
    subchallnpc000.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_subchallnpc000_twin_Talk() {

    call subchallnpc000.Talk()

}

void Finish_subchallnpc000_twin_NearActorsTalk() {

    call subchallnpc000_twin.NearActorsTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void Ready_subchallnpc000_NearActorsNear() {
    Event185:
    subchallnpc000.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:near00', 'DispFrame': 300})
}

void Ready_subchallnpc000_twin_NearActorsNear() {
    Event186:
    subchallnpc000_twin.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:near01', 'DispFrame': 300, 'IsChecked': True})
}

void Finish_subchallnpc000_twin_NearActorsNear() {
    Event215:
    subchallnpc000_twin.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:near01', 'DispFrame': 90, 'IsChecked': False})
}

void Ready_subchallnpc000_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor2': 'subchallnpc000_twin', 'Actor1': 'subchallnpc000'})


    fork {
        subchallnpc000.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    } {
        subchallnpc000_twin.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': False})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'MinamihateeluMini_touzoku_Activated'}) {

        fork {
            subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk16'})
        } {
            subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        } {
            subchallnpc000_twin.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk15'})
        }

    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'MinamihateeluMini_first'}) {

            fork {
                subchallnpc000.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk05'})
                if !EventSystemActor.GeneralChoice2() {
                    subchallnpc000.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk06', 'ASName': 'Talk', 'IsCloseMessageDialog': True})
                } else {
                    subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk07'})
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                }
            } {
                subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
                subchallnpc000_twin.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'ActorName': ''})
            }

            subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            EventSystemActor[B].Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            subchallnpc000_twin.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk08', 'ASName': ''})

            fork {
                subchallnpc000.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk09', 'ASName': 'Talk_Wait', 'IsCloseMessageDialog': True})
                subchallnpc000.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 0, 'ActorName': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk22', 'IsCloseMessageDialog': True})
            } {
                subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Wait'})
            }


            fork {
                subchallnpc000.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000_twin', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
            } {
                subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                EventSystemActor[B].Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000_twin.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk20', 'ASName': '', 'IsCloseMessageDialog': True})
            }

            subchallnpc000.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 0, 'ActorName': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            fork {
                subchallnpc000.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            } {
                subchallnpc000_twin.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Wait'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsConfront': True, 'ActorName': ''})
            }

            subchallnpc000.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk17', 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckRupee({'Value': 100}) {
                    EventSystemActor[a].Demo_CloseMessageDialog({'IsWaitFinish': False})
                    EventSystemActor.Demo_IncreaseRupee({'Value': -100, 'IsWaitFinish': False})
                    subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk10'})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})

                    fork {
                        subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
                    } {
                        subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                        subchallnpc000_twin.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk12'})
                    }


                    fork {
                        subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk16'})
                        subchallnpc000.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk13', 'IsCloseMessageDialog': True})
                    } {
                        subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
                    }


                    fork {
                        subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
                    } {
                        subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                        subchallnpc000_twin.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk14'})
                    }

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinamihateeluMini_touzoku_Activated'})
                    subchallnpc000_twin.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                } else {
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk11'})
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                }
            } else {
                subchallnpc000.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk07'})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else {

            fork {
                subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Wait'})
            } {
                subchallnpc000_twin.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk01', 'IsCloseMessageDialog': False})
            }


            fork {
                subchallnpc000.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                subchallnpc000.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True})
            } {
                subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
            }

            subchallnpc000.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            subchallnpc000.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            subchallnpc000.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk18', 'IsCloseMessageDialog': False})
            subchallnpc000.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': True})
            subchallnpc000_twin.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk19', 'IsCloseMessageDialog': True})

            fork {
                subchallnpc000.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000_twin', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk02', 'IsCloseMessageDialog': True})
            } {
                subchallnpc000_twin.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1})
                EventSystemActor[B].Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000_twin.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            }


            fork {
                subchallnpc000.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': True})
                subchallnpc000.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000_twin', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            } {
                subchallnpc000_twin.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1})
                EventSystemActor[B].Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000_twin.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk03', 'IsCloseMessageDialog': True})
            }


            fork {
                subchallnpc000.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                subchallnpc000.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MinamihateeluMini_touzoku:Talk04', 'ASName': ''})
            } {
                subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
            }

            subchallnpc000_twin.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'MinamihateeluMini_first', 'IsWaitFinish': True})
        }
    }
}

void Ready_subchallnpc000_Near() {
    goto Event185
}

void Ready_subchallnpc000_twin_Near() {
    goto Event186
}

void Finish_subchallnpc000_Near() {
    goto Event214
}

void Finish_subchallnpc000_twin_Near() {
    goto Event215
}
