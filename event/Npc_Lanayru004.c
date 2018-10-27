-------- EventFlow: Npc_Lanayru004 --------

Actor: Npc_Lanayru004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru004_RiverFirst'}) {
        Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk01'})
        Event8:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk03'})
            Event13:
            Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk06'})
            goto Event8
          case 1:
            Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk04'})
            goto Event13
          case 2:
            Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk05'})
            goto Event13
          case 3:
            Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk02'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Lanayru004_RiverFirst'})
        Npc_Lanayru004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Lanayru004:talk00'})
        goto Event8
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru004_RiverFirst'}) {
        Npc_Lanayru004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Lanayru004:near00'})
    }
}
