-------- EventFlow: Npc_Zora009 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_StartTurnToPlayer']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call MarutoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora009_First'}) {
        Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk06'})
        Event168:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora009_Song'}) {
                Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk14'})
                Event171:
                Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk09'})
                Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk10'})
                Event175:
                Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Hello', 'MessageId': 'EventFlowMsg/Npc_Zora009:talk13'})
                goto Event168
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora009_Song', 'IsWaitFinish': True})
                Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk08'})
                goto Event171
            }
          case 1:
            Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Hello', 'MessageId': 'EventFlowMsg/Npc_Zora009:talk12'})
            goto Event175
          case 2:
            Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Hello', 'MessageId': 'EventFlowMsg/Npc_Zora009:talk11'})
            goto Event175
          case 3:
            Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk07', 'ASName': 'Act_Call_Hello'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora009_First', 'IsWaitFinish': True})
        Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk04'})
        Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk15'})
        goto Event168
    }
}

void MarutoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora009.IsOnInstEventFlag() {
        Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk05'})
        Event165:
        Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk03'})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event155:
            Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk00'})
            goto Event165
          case 1:
            goto Event155
          case 2:
            Event158:
            Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk01'})
            goto Event165
          case 3:
            goto Event158
          case 4:
            goto Event158
          case 5:
            goto Event158
          case 6:
            Event159:
            Npc_Zora009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora009:talk02'})
            goto Event165
          case 7:
            goto Event159
        }
    }
}

void Near() {
    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
    Npc_Zora009.Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 240.0})
    Npc_Zora009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora009:near00', 'DispFrame': 90, 'IsChecked': False})
}
