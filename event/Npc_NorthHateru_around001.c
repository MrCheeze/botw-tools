-------- EventFlow: Npc_NorthHateru_around001 --------

Actor: Npc_NorthHateru_around001
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_NorthHateru_around001.IsOnInstEventFlag() {
        Npc_NorthHateru_around001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:NHateru_around_Talk007', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_NorthHateru_around001_Food'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_NorthHateru_around001_Food', 'IsWaitFinish': True})
            Npc_NorthHateru_around001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:NHateru_around_Talk006', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_NorthHateru_around001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:NHateru_around_Talk001', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_NorthHateru_around001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:NHateru_around_Talk003', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    }
}

void Near() {
    Npc_NorthHateru_around001.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:NHateru_around_Near', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}
