-------- EventFlow: Npc_Kokiri007 --------

Actor: Npc_Kokiri007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri007_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo104_0'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Activated'}) {
                if Npc_Kokiri007.IsOnInstEventFlag() {
                    Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Before_Talk100'})
                } else {
                    Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Before_Talk000'})
                }
            } else
            if Npc_Kokiri007.IsOnInstEventFlag() {
                Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Before_Talk003'})
            } else {
                Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Before_Talk001'})
            }
        } else {
            Event19:
            Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_FirstTalk001'})
            Npc_Kokiri007.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
        }
    } else {
        Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_FirstTalk000'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kokiri007_Talk', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo104_0'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Activated'}) {
                Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Before_Talk002'})
            } else {
                Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Before_Talk004'})
            }
        } else {
            goto Event19
        }
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_UMAShiren_Activated'}) {
        Event8:
        Npc_Kokiri007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Near000', 'DispFrame': 300, 'IsChecked': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo104_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Activated'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_UMAShiren_Ready'})
                goto Event8
            }
        }
    }
}

void KorokMini_UMAShiren_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_Talk000'})
}
