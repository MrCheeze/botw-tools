-------- EventFlow: Npc_HighMountain036 --------

Actor: Npc_HighMountain036
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog', 'Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather', 'CheckTime']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Reric_Finish_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_TurnAndLookToObject']
queries: ['CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain036.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 6, 7, 8, 10, 11, 12, 13]:
        Event63:
        Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'UniqueName': '', 'IsConfront': False, 'ActorName': ''})
        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_011'})
      case 5:
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC036_CookForTalk'}) {
            Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_022'})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC036_CookForTalk'})
            Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_021'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_023'})
            } else {
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_024'})
            }
        }
      case 9:
        if Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC036_DifficultDaughtersTalk'}) {
                Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HighMountain035', 'UniqueName': 'Reric_Finish_Npc_HighMountain035', 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

                fork {
                    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_002', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                } {
                    Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_TurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_HighMountain036', 'IsConfront': False, 'IsWaitFinish': True, 'UniqueName': ''})
                }

                Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'UniqueName': '', 'IsConfront': False, 'ActorName': ''})
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_002_2'})
            } else {
                Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HighMountain035', 'UniqueName': 'Reric_Finish_Npc_HighMountain035', 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'UniqueName': '', 'IsConfront': False, 'ActorName': ''})
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_003'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC036_DifficultDaughtersTalk'})
            }
        } else {
            goto Event63
        }
    }
}

void Clear_Rito_BrosRock_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain036.CheckActorAction13() {
      case [0, 1, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_212'})
      case 3:
        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_101', 'IsOverWriteLabelActorName': False})
      case 5:
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC036_CookSetTalk'}) {
            Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_224'})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC036_CookSetTalk'})
            Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_223'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_225'})
            } else {
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_226'})
            }
        }
    }
}

void Rito_KeelSearch_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HighMountain036.IsOnInstEventFlag() {
        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_103', 'IsOverWriteLabelActorName': False})
    } else {
        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_102', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    }
}

void Npc_Musician_Come_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_300'})
    if EventSystemActor.CheckTime({'Hour': 8, 'Minute': 0, 'ConditionType': 'ge'}) {
        if EventSystemActor.CheckTime({'Minute': 0, 'Hour': 21, 'ConditionType': 'le'}) {
            Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_301'})
        } else {
            Event33:
            Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_302'})
        }
    } else {
        goto Event33
    }
}

void Near() {
    Event45:
    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        Npc_HighMountain036.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HighMountain036:Npc_HighMountain036_Near_Rain'})
    }
}

void Rito_KeelSearch_Finish_Near() {
    goto Event45
}
