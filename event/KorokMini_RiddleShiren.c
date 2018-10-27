-------- EventFlow: KorokMini_RiddleShiren --------

Actor: Npc_kokiri002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_kokiri002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_kokiri002.IsOnInstEventFlag() {
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk010', 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False})
        Event5:
        if !EventSystemActor.GeneralChoice2() {
            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk020'})
            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk500'})
            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk040'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_Activated'})
        } else {
            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk030'})
        }
    } else {
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk000', 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False})
        goto Event5
    }
}

void Ready_Npc_kokiri002_Near() {
    Npc_kokiri002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Near000', 'DispFrame': 300, 'IsChecked': True})
}

void Finish_Npc_kokiri002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_RewardNotYet'}) {
        Event31:
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk030', 'ASName': 'Act_Wait_A'})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_A'})

            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk040'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_Finish'})
        } else {
            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk031'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_RewardNotYet'})
        }
    } else {
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk000'})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S040_Talk500'})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk010'})
    }
}

void EntryPointA() {
    if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_Step010'}) {
        Npc_kokiri002.Demo_BecomeSpeaker({'IsWaitFinish': True})

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_kokiri002")})

        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Dance', 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk050', 'IsCloseMessageDialog': False})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk020', 'IsCloseMessageDialog': True, 'ASName': ''})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk021', 'ASName': 'Wait'})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S010_Talk500'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_Step010'})
    }
}

void Step010_Npc_kokiri002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk000'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_R_Talk500'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk010'})
}

void Step020_Npc_kokiri002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk000'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S010_Talk500'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk010'})
}

void EntryPointB() {
    if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_Step020'}) {
        Npc_kokiri002.Demo_BecomeSpeaker({'IsWaitFinish': True})

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_kokiri002")})

        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Dance', 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk051', 'IsCloseMessageDialog': False})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk020', 'ASName': ''})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk021', 'ASName': 'Wait'})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S020_Talk500', 'ASName': 'Wait'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_Step020'})
    }
}

void EntryPointC() {
    if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_Step030'}) {
        Npc_kokiri002.Demo_BecomeSpeaker({'IsWaitFinish': True})

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_kokiri002")})

        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Dance', 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk052', 'IsCloseMessageDialog': False})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk020', 'IsCloseMessageDialog': True, 'ASName': ''})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk021', 'ASName': 'Wait', 'IsCloseMessageDialog': True})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S030_Talk500'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_Step030'})
    }
}

void Step030_Npc_kokiri002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk000'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S020_Talk500'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk010'})
}

void EntryPointD() {
    if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_Step040'}) {
        Npc_kokiri002.Demo_BecomeSpeaker({'IsWaitFinish': True})

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_kokiri002")})

        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Dance', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk053'})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk020', 'ASName': ''})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk021', 'ASName': 'Wait', 'IsCloseMessageDialog': False})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk022'})
        Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S040_Talk500'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_RiddleShiren_Step040'})
    }
}

void Step040_Npc_kokiri002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk000'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_S030_Talk500'})
    Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk010'})
}

void EntryPointE() {
    if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_Finish'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_RewardNotYet'}) {
            Npc_kokiri002.Demo_BecomeSpeaker({'IsWaitFinish': True})

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_kokiri002")})

            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Dance', 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk054', 'IsCloseMessageDialog': False})
            Npc_kokiri002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KorokMini_RiddleShiren:Npc_kokiri002_F_Talk020', 'ASName': ''})
            goto Event31
        }
    }
}
