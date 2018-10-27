-------- EventFlow: MarittaMini_BigWhales --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckSelectPicture']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HyruleWestHatago004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_SetInstEventFlag', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HyruleWestHatago003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_SetInstEventFlag', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HyruleWestHatago002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_SetInstEventFlag', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HyruleWestHatago004_Talk() {
    Event263:

    call InitTalk.InitTalk_Trio({'Arg_Turn': 5, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_HyruleWestHatago004', 'Actor2': 'Npc_HyruleWestHatago003', 'Actor3': 'Npc_HyruleWestHatago002'})


    fork {
        Npc_HyruleWestHatago003.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HyruleWestHatago002.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    if Npc_HyruleWestHatago004.IsOnInstEventFlag() {

        fork {
            Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak02', 'IsCloseMessageDialog': True})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        Event247:

        call LookPlayer()

        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak04'})
        Event40:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MarittaMini_BigWhales_Activated'})
        } else {
            Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak07'})
        }
    } else {

        fork {
            Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            Npc_HyruleWestHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            Npc_HyruleWestHatago003.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        Event248:

        call LookPlayer()

        Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event40
    }
}

void Ready_Npc_HyruleWestHatago003_Talk() {
    Event264:

    call InitTalk.InitTalk_Trio({'Arg_Turn': 5, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_HyruleWestHatago004', 'Actor2': 'Npc_HyruleWestHatago003', 'Actor3': 'Npc_HyruleWestHatago002'})


    fork {
        Npc_HyruleWestHatago004.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HyruleWestHatago002.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    if Npc_HyruleWestHatago003.IsOnInstEventFlag() {

        fork {
            Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui04', 'IsCloseMessageDialog': True})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        goto Event247
    } else {

        fork {
            Npc_HyruleWestHatago003.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            Npc_HyruleWestHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        goto Event248
    }
}

void Ready_Npc_HyruleWestHatago002_Talk() {
    Event265:

    call InitTalk.InitTalk_Trio({'Arg_Turn': 5, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_HyruleWestHatago004', 'Actor2': 'Npc_HyruleWestHatago003', 'Actor3': 'Npc_HyruleWestHatago002'})


    fork {
        Npc_HyruleWestHatago004.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HyruleWestHatago003.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    if Npc_HyruleWestHatago002.IsOnInstEventFlag() {

        fork {
            Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo04', 'IsCloseMessageDialog': True})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        goto Event247
    } else {

        fork {
            Npc_HyruleWestHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago002', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } {
            Npc_HyruleWestHatago003.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }


        fork {
            Npc_HyruleWestHatago003.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } {
            Npc_HyruleWestHatago004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_HyruleWestHatago002.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HyruleWestHatago003', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        goto Event248
    }
}

void Finish_Npc_HyruleWestHatago004_Talk() {
    Event22:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Whales_Orak'}) {
        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak14'})
    } else {
        Npc_HyruleWestHatago004.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak09', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_03'}) {

                call Common.LookPicture({'Self': ActorIdentifier(name="Npc_HyruleWestHatago004"), 'ActorName': 'FldObj_BoneWhale_A_03'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Whales_Orak', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Whales_Negyui'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Whales_Gamyo'}) {
                        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak10'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak15'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MarittaMini_BigWhales_Finish'})
                    } else {
                        Event183:
                        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak11'})
                    }
                } else {
                    goto Event183
                }
            } else {
                Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak12'})
            }
        } else {
            Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Orak13'})
        }
    }
}

void Finish_Npc_HyruleWestHatago003_Talk() {
    Event57:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Whales_Negyui'}) {
        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui12'})
    } else {
        Npc_HyruleWestHatago003.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui05', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_02'}) {

                call Common.LookPicture({'Self': ActorIdentifier(name="Npc_HyruleWestHatago003"), 'ActorName': 'FldObj_BoneWhale_A_02'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Whales_Negyui', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Whales_Orak'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Whales_Gamyo'}) {
                        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui08'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui11'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MarittaMini_BigWhales_Finish'})
                    } else {
                        Event195:
                        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui09', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    goto Event195
                }
            } else {
                Npc_HyruleWestHatago003.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else {
            Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Negyui10'})
        }
    }
}

void Finish_Npc_HyruleWestHatago002_Talk() {
    Event61:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Whales_Gamyo'}) {
        Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo11'})
    } else {
        Npc_HyruleWestHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo05', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_01'}) {

                call Common.LookPicture({'Self': ActorIdentifier(name="Npc_HyruleWestHatago002"), 'ActorName': 'FldObj_BoneWhale_A_01'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Whales_Gamyo', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Whales_Orak'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Whales_Negyui'}) {
                        Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo08'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                        Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo12'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MarittaMini_BigWhales_Finish'})
                    } else {
                        Event197:
                        Npc_HyruleWestHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    goto Event197
                }
            } else {
                Npc_HyruleWestHatago002.Demo_Talk({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else {
            Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:talk-Gamyo10'})
        }
    }
}

void Ready_Npc_HyruleWestHatago004_Near() {
    Npc_HyruleWestHatago004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_01', 'IsChecked': True, 'DispFrame': 300})
}

void Finish_Npc_HyruleWestHatago004_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_03'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Whales_Orak'}) {
            Npc_HyruleWestHatago004.Demo_TalkASync({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_02', 'DispFrame': 300, 'IsChecked': True, 'IsWaitFinish': True})
        }
    } else {
        if !EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_02'}) {
            if !EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_01'}) {
                Npc_HyruleWestHatago004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_00', 'DispFrame': 90})
            }
        }
    }
}

void Finish_Npc_HyruleWestHatago004_NearActorsTalk() {
    goto Event22
}

void Finish_Npc_HyruleWestHatago003_NearActorsTalk() {
    goto Event57
}

void Finish_Npc_HyruleWestHatago002_NearActorsTalk() {
    goto Event61
}

void Ready_Npc_HyruleWestHatago004_NearActorsTalk() {
    goto Event263
}

void Ready_Npc_HyruleWestHatago003_NearActorsTalk() {
    goto Event264
}

void Ready_Npc_HyruleWestHatago002_NearActorsTalk() {
    goto Event265
}

void Finish_Npc_HyruleWestHatago003_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_02'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Whales_Negyui'}) {
            Npc_HyruleWestHatago003.Demo_TalkASync({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_02', 'DispFrame': 300, 'IsChecked': True, 'IsWaitFinish': True})
        }
    }
}

void Finish_Npc_HyruleWestHatago002_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_BoneWhale_A_01'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Whales_Gamyo'}) {
            Npc_HyruleWestHatago002.Demo_TalkASync({'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_02', 'DispFrame': 300, 'IsChecked': True, 'IsWaitFinish': True})
        }
    }
}

void LookPlayer() {

    fork {
        Npc_HyruleWestHatago004.Demo_SetInstEventFlag({'IsWaitFinish': True})
        Npc_HyruleWestHatago004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_HyruleWestHatago002.Demo_SetInstEventFlag({'IsWaitFinish': True})
        Npc_HyruleWestHatago002.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_HyruleWestHatago003.Demo_SetInstEventFlag({'IsWaitFinish': True})
        Npc_HyruleWestHatago003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

}

void Ready_Npc_HyruleWestHatago003_Near() {
    Npc_HyruleWestHatago003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_03', 'DispFrame': 300})
}

void Ready_Npc_HyruleWestHatago002_Near() {
    Npc_HyruleWestHatago002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/MarittaMini_BigWhales:Near_04', 'DispFrame': 300})
}
