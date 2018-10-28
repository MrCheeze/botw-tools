-------- EventFlow: Npc_oasis013 --------

Actor: Npc_oasis013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['RandomChoice4', 'CheckFlag', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis017
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis016
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Talk', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis013.CheckActorAction13() {
      case 0:

        call hello()

        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Talk_05'})
      case 1:
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_013'})
      case 2:
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Talk_01'})
      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Arrow_SoldOut'}) {
            Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_022'})
        } else {
            Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Talk_04'})
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_008'})
              case 1:
                Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_009'})
              case 2:
                Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_010'})
              case 3:
                Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_002'})
            }
        }
      case 4:

        call hello()

        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Talk_06'})
      case 5:
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_OasisHighMountain_001', 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_021', 'ASName': 'Act_LookUp', 'IsWaitFinish': True})
      case 10:
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_004'})
      case 11:
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_001', 'IsOverWriteLabelActorName': False})
    }
}

void WithTicle() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis013', 'Actor2': 'Npc_oasis011', 'Actor3': 'Npc_oasis017'})


    fork {
        Npc_oasis013.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_017'})
    } {
        Npc_oasis011.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis016.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis016.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis016.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_018'})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis016.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis016.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_019'})
    } {
        Npc_oasis016.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis016.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_oasis016'})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_oasis016'})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_oasis016'})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis016.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_020'})
    }

}

void WithoutTicle_Ch_Off() {
    Event158:

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis013', 'Actor2': 'Npc_oasis011', 'Actor3': 'Npc_oasis017'})


    fork {
        Npc_oasis013.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_006'})
    } {
        Npc_oasis011.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_014'})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_015'})
    }

}

void WithoutTicle_Ch_On() {
    Event159:

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis013', 'Actor2': 'Npc_oasis011', 'Actor3': 'Npc_oasis017'})


    fork {
        Npc_oasis013.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_011'})
    } {
        Npc_oasis011.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis013', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_012'})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        Npc_oasis013.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis011.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis017', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    } {
        Npc_oasis017.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Npc_oasis013_016'})
    }

}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1, 2, 3, 4]:
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Talk_02'})
      case [5, 6, 7]:
        Npc_oasis013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis013:Talk_03'})
    }
}

void MeetingTalk() {
    if Npc_oasis013.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'})
    && EventSystemActor.CheckFlag({'FlagName': 'Gerudo_KidsMT_Full'}) {

        call WithTicle()

    } else {
        Npc_oasis016.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
        Event164:
        Npc_oasis017.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'ClothWarpMode': -2})
        Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
        goto Event1
    }
}

void WithoutTicle() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Activated'}) {
        goto Event159
    } else {
        goto Event158
    }
}

void NoTicle() {
    if Npc_oasis013.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'})
    && EventSystemActor.CheckFlag({'FlagName': 'Gerudo_KidsMT_NoTickle'}) {

        call WithoutTicle()

    } else {
        goto Event164
    }
}
