-------- EventFlow: Npc_LakeSideHatago005 --------

Actor: Npc_LakeSideHatago005
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_LakeSideHatago005.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago005:talk_02'})
    } else
    if Npc_LakeSideHatago005.IsOnInstEventFlag() {
        Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago005:talk_01'})
    } else {
        WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
        Npc_LakeSideHatago005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_LakeSideHatago005:talk_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
