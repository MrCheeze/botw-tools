-------- EventFlow: subchallnpc000 --------

Actor: subchallnpc000
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: subchallnpc000_twin
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk09'})
    subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk00'})
}

void NearActorsTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor2': 'subchallnpc000_twin', 'Actor1': 'subchallnpc000'})


    fork {
        subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk09'})
        subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk00', 'IsCloseMessageDialog': True})
    } {
        subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
    } {
        subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk01'})
    }

    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        fork {
            subchallnpc000.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            subchallnpc000_twin.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        }

        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})

        fork {
            subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk03', 'IsCloseMessageDialog': True})
        } {
            subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        }


        fork {
            subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        } {
            subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk02'})
        }


        fork {
            subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        } {
            subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk04', 'IsCloseMessageDialog': True})
            subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk07'})
        }


        fork {
            subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk08'})
        } {
            subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        }

    } else {

        fork {
            subchallnpc000.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        } {
            subchallnpc000_twin.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk05', 'IsCloseMessageDialog': True})
            subchallnpc000_twin.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'subchallnpc000', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk07'})
        }


        fork {
            subchallnpc000.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk06'})
        } {
            subchallnpc000_twin.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
        }

    }
}
