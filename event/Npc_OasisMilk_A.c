-------- EventFlow: Npc_OasisMilk_A --------

Actor: Npc_OasisMilk_A
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisMilk_B
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: Npc_OasisMilk_C
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

void Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_OasisMilk_A', 'Actor2': 'Npc_OasisMilk_B', 'Actor3': 'Npc_OasisMilk_C'})

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Bar_SofaEdge'}) {

            call table()

        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Finish'}) {

            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk13'})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            }


            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_B', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': 'Act_SitSofa_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk14'})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            }


            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk15'})
            }


            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk16'})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            }


            call camera()

        } else {

            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk06', 'ASName': 'Act_SitSofa_Drink_Talk'})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            }


            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_B', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk07', 'IsCloseMessageDialog': False, 'ASName': 'Act_SitSofa_Talk'})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            }


            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk08', 'ASName': 'Act_SitSofa_Drink_Talk'})
            }


            fork {
                Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk09', 'ASName': 'Act_SitSofa_Drink_Talk'})
            } {
                Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
            } {
                Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
            }


            call camera()

        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Bar_SofaEdge'}) {

        call table()

    } else {

        fork {
            Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            Npc_OasisMilk_A.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitSofa_Drink_Talk'})
        } {
            Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
        } {
            Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
        }


        fork {
            Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_B', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
        } {
            Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk01', 'ASName': 'Act_SitSofa_Talk'})
        } {
            Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
        }


        fork {
            Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
        } {
            Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
        } {
            Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk02', 'ASName': 'Act_SitSofa_Drink_Talk'})
        }


        fork {
            Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk03', 'ASName': 'Act_SitSofa_Drink_Talk'})
        } {
            Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_B.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Wait', 'MorphingFrame': -1.0})
        } {
            Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_A', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
        }


        call camera()

        EventSystemActor.Demo_FlagON({'FlagName': 'SecretClub_rumor', 'IsWaitFinish': True})
    }
}

void SecretTalk() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3866.678955078125, 'Pattern1PosY': 155.6972198486328, 'Pattern1PosZ': 2870.177490234375, 'Pattern1AtX': -3866.670166015625, 'Pattern1AtY': 155.69378662109375, 'Pattern1AtZ': 2870.17431640625, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': True, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Finish'}) {
            Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_14'})
            Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_15'})
            Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_16'})
            Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_17'})
            Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_18'})
            Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_19'})
            Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Drink_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_20'})
        } else {
            Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_09', 'ASName': 'Act_SitSofa_Drink_Talk'})
            Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_10', 'ASName': 'Act_SitSofa_Talk'})
            Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_11', 'ASName': 'Act_SitSofa_Drink_Talk'})
            Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_12', 'ASName': 'Act_SitSofa_Drink_Talk'})
            Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_13', 'ASName': 'Act_SitSofa_Talk'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'SecretClub_rumor'}) {
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_00', 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk'})
        Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_01', 'ASName': 'Act_SitSofa_Drink_Talk'})
        Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_02', 'ASName': 'Act_SitSofa_Drink_Talk'})
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_03', 'ASName': 'Act_SitSofa_Talk'})
        Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_04', 'ASName': 'Act_SitSofa_Drink_Talk'})
    } else {
        Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_05', 'ASName': 'Act_SitSofa_Drink_Talk'})
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_06', 'ASName': 'Act_SitSofa_Talk'})
        Npc_OasisMilk_A.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_07', 'ASName': 'Act_SitSofa_Drink_Talk'})
        Npc_OasisMilk_C.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:Talk_08', 'ASName': 'Act_SitSofa_Drink_Talk'})
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_Finish'}) {
        Npc_OasisMilk_A.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:near01'})
    } else {
        Npc_OasisMilk_A.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:near00'})
    }
}

void camera() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        Npc_OasisMilk_A.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
    } {
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk04', 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk'})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'ActorName1': 'Npc_OasisMilk_B', 'TargetActor2': 1, 'PosAppendMode': 3, 'Pattern1AtX': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1AtZ': -0.5, 'Pattern1Fovy': 45.0, 'Pattern1AtY': 1.2999999523162842, 'Pattern1PosY': 1.5, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True})
    } {
        Npc_OasisMilk_C.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitSofa_Drink_Wait', 'MorphingFrame': -1.0})
    }


    fork {
        Npc_OasisMilk_C.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk05', 'ASName': 'Act_SitSofa_Talk'})
    } {
        Npc_OasisMilk_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}

void table() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'ActorName1': 'Npc_OasisMilk_B', 'TargetActor2': 1, 'PosAppendMode': 3, 'Pattern1AtX': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1AtZ': -0.5, 'Pattern1Fovy': 45.0, 'Pattern1AtY': 1.2999999523162842, 'Pattern1PosY': 1.5, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    Npc_OasisMilk_B.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True})
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk18'})
        Event209:
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
      case 1:
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk19'})
        goto Event209
      case [2, 3]:
        Npc_OasisMilk_B.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_SitSofa_Talk', 'MessageId': 'EventFlowMsg/Npc_OasisMilk_A:talk17'})
        goto Event209
    }
}
