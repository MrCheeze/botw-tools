-------- EventFlow: Npc_ZoraB001 --------

Actor: Npc_ZoraB001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Normal_PrinceTalk01'}) {
            switch Npc_ZoraB001.CheckActorAction13() {
              case [0, 1, 8]:
                Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraB001:talk02'})
                if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
                && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Activated'}) {
                    Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_103'})
                    Event21:
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_013'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroZora_aboutTrial', 'IsWaitFinish': True})
                    } else {
                        Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_020', 'IsCloseMessageDialog': False})
                    }
                }
              case 9:
                if EventSystemActor.CheckFlag({'FlagName': 'Normal_PrinceTalk02'}) {
                    Npc_ZoraB001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraB001:talk06', 'IsCloseMessageDialog': False})
                    Event45:
                    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
                    && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Activated'}) {
                        Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_102'})
                        goto Event21
                    }
                } else {
                    Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraB001:talk03', 'IsCloseMessageDialog': True})
                    Npc_ZoraB001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraB001:talk05'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Normal_PrinceTalk02', 'IsWaitFinish': True})
                    goto Event45
                }
            }
        } else {
            Npc_ZoraB001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
            && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Activated'}) {
                Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_001'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_013'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroZora_aboutTrial', 'IsWaitFinish': True})
                    Event18:
                    if Npc_ZoraB001.CheckActorAction13() == 9 {
                        Npc_ZoraB001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnPosition': [3305.300048828125, 244.89999389648438, -478.20001220703125], 'IsValid': True, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 2})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Normal_PrinceTalk01', 'IsWaitFinish': True})
                    }
                } else {
                    Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_020', 'IsCloseMessageDialog': True})
                    goto Event18
                }
            } else {
                Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_ZoraB001:talk01', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event18
            }
        }
    } else {
        Npc_ZoraB001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_ZoraB001:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
