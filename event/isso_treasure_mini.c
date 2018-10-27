-------- EventFlow: isso_treasure_mini --------

Actor: Npc_NorthHatelHatago001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AdvanceQuest']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_NorthHatelHatago001_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_boxout'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_29'})
        if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_open'}) {
            EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'ForceRunTelop': True, 'StepName': 'Finish', 'IsWaitFinish': True})

            call Finish_Talk()

        } else {
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_11', 'ASName': 'Wait'})
            EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'IsWaitFinish': True, 'StepName': 'Step2', 'ForceRunTelop': False})
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_FirstTalk'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_28', 'ASName': ''})
            Event14:
            Npc_NorthHatelHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Npc_NorthHatelHatago001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'TBox_Field_Iron', 'UniqueName': 'isso_treasure', 'FaceId': 2, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True})
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_11', 'ASName': 'Wait'})
            EventSystemActor.Demo_FlagON({'FlagName': 'isso_treasure_mini_Activated', 'IsWaitFinish': True})
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_10', 'IsCloseMessageDialog': True, 'ASName': 'Act_TreasureHunter'})
            Npc_NorthHatelHatago001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_20', 'ASName': 'Wait'})
            Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_00'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event14
            } else {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_27'})
                EventSystemActor.Demo_FlagON({'FlagName': 'isso_treasure_mini_FirstTalk', 'IsWaitFinish': True})
            }
        }
    }
}

void Ready_Npc_NorthHatelHatago001_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_boxout'}) {
        Event273:
        Npc_NorthHatelHatago001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_18'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_open'}) {
            goto Event273
        } else {
            Npc_NorthHatelHatago001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_26', 'DispFrame': 300})
        }
    }
}

void isso_boxout() {
    if !EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_boxout'}) {
        Npc_NorthHatelHatago001.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_19'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'isso_treasure_mini_boxout'})
    }
}

void isso_treasure() {
    if !EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_salvage'}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 5, 'Self': ActorIdentifier(name="Npc_NorthHatelHatago001")})

        Npc_NorthHatelHatago001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'TBox_Field_Iron', 'UniqueName': 'isso_treasure', 'FaceId': 2, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
        Npc_NorthHatelHatago001.Demo_PlayASForDemo({'ASName': 'Surprised', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_16', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'isso_treasure_mini_salvage'})
        Npc_NorthHatelHatago001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
        if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_open'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_Activated'}) {
                EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'StepName': 'Finish', 'ForceRunTelop': False, 'IsWaitFinish': True})
                Event252:

                call Finish_Talk()

            } else {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_31'})
                EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'ForceRunTelop': True, 'StepName': 'Finish', 'IsWaitFinish': True})
                goto Event252
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_Activated'}) {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_23'})
                if !EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_Step1'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'isso_treasure_mini_Step1'})
                }
            } else {
                Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_30'})
                EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'ForceRunTelop': False, 'IsWaitFinish': True, 'StepName': 'Step2'})
            }
        }
    }
}

void Step1_Npc_NorthHatelHatago001_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_boxout'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_30'})
        if EventSystemActor.CheckFlag({'FlagName': 'isso_treasure_mini_open'}) {
            EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'StepName': 'Finish', 'IsWaitFinish': True, 'ForceRunTelop': False})

            call Finish_Talk()

        } else {
            EventSystemActor.Demo_AdvanceQuest({'QuestName': 'isso_treasure_mini', 'IsWaitFinish': True, 'StepName': 'Step2', 'ForceRunTelop': False})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_03', 'IsCloseMessageDialog': True})
        Npc_NorthHatelHatago001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'TBox_Field_Iron', 'UniqueName': 'isso_treasure', 'FaceId': 2, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True})
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_11', 'ASName': 'Wait'})
    }
}

void Finish_Npc_NorthHatelHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event217:
    Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_09'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_07'})
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_12'})
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_13'})
        Event225:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'isso_treasure_mini_Finish'})
    } else {
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_08'})
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_14'})
        Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_15'})
        goto Event225
    }
}

void Finish_Talk() {
    goto Event217
}

void Finish_Npc_NorthHatelHatago001_Near() {
    Npc_NorthHatelHatago001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_17'})
}

void Step2_Npc_NorthHatelHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_NorthHatelHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/isso_treasure_mini:NewText_30'})
}
