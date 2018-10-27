-------- EventFlow: KorokMini_UMAShiren --------

Actor: Npc_Kokiri007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_FlagON']
queries: ['GeneralChoice2', 'CheckSelectPicture', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kokiri007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri007_Talk'}) {
        if Npc_Kokiri007.IsOnInstEventFlag() {
            Npc_Kokiri007.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Talk010'})
            Event4:
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'Animal_RupeeRabbit_A'}) {
                    Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Talk040', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_UMAShiren_Activated'})
                    Event32:

                    call Common.LookPicture({'Self': ActorIdentifier(name="Npc_Kokiri007"), 'ActorName': 'Animal_RupeeRabbit_A'})

                    Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_F_Talk030', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_F_Talk040'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_UMAShiren_Finish'})
                } else {
                    Npc_Kokiri007.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Talk020'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_UMAShiren_Activated'})
                }
            } else {
                Npc_Kokiri007.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Talk030'})
            }
        } else {
            Event1:
            Npc_Kokiri007.Demo_Talk({'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Talk000', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            goto Event4
        }
    } else {
        Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri007:Npc_Kokiri007_FirstTalk000'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kokiri007_Talk', 'IsWaitFinish': True})
        goto Event1
    }
}

void Ready_Npc_Kokiri007_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo104_0'}) {
        Event7:
        Npc_Kokiri007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Near000', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Finish_Npc_Kokiri007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckSelectPicture({'ActorName': 'Animal_RupeeRabbit_A'}) {
        Npc_Kokiri007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_F_Talk010', 'IsCloseMessageDialog': True})
        goto Event32
    } else {
        Npc_Kokiri007.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_F_Talk000'})
    }
}

void Finish_Npc_Kokiri007_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo104_0'}) {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'Animal_RupeeRabbit_A'}) {
            goto Event7
        } else {
            Npc_Kokiri007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_UMAShiren:Npc_Kokiri007_R_Near000', 'DispFrame': 90, 'IsChecked': False})
        }
    }
}
