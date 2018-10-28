-------- EventFlow: Npc_Zora004 --------

Actor: Npc_Zora004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
        && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora004_Talk2'}) {
                Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_350'})
            } else {
                Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_300'})
            }
            Event9:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora004_Talk2'})
        } else
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora004_Talk2'}) {
            Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora004:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora004:talk02'})
        goto Event9
    } else {
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora004:talk01'})
    }
}

void Near() {
    Npc_Zora004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora004:near00', 'IsChecked': False, 'DispFrame': 90})
}
