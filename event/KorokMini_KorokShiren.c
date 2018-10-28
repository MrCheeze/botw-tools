-------- EventFlow: KorokMini_KorokShiren --------

Actor: Npc_Kokiri008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice3', 'CheckAddPorchItem', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kokiri008_Near() {
    Npc_Kokiri008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Near000', 'DispFrame': 300, 'IsChecked': True})
}

void Ready_Npc_Kokiri008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri008_Talk'}) {

        call Npc_Kokiri008.First_Talk()

    }
    if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk000'})
    } else {
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk010'})
    }
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        if !EventSystemActor.CheckFlag({'FlagName': 'KorokMini_KorokShiren_Nanjamo'}) {
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk020'})
        }

        call Full_Setsumei()

        Event21:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_KorokShiren_Activated'})
        if EventSystemActor.CheckFlag({'FlagName': 'GodTree_Finish'})
        && EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'})
        && EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk570'})
            Event19:
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Talk020'})
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Talk030'})
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Mushroom_N', 'Count': 3}) {

                call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Mushroom_N', 'IncreaseTargetActorName': 'Item_Mushroom_N', 'GetNumber': 3, 'ShowDialogTargetActorName': 'Item_Mushroom_N_00'})

                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Talk060'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_KorokShiren_Finish'})
            } else {
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Talk040'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_KorokShiren_RewardNotYet'})
            }
        } else {
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk590'})
        }
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_KorokShiren_Nanjamo'}) {
            Event78:

            call Full_Setsumei()

            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk580'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event21
            } else {
                Event9:
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk040'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_KorokShiren_Nanjamo'})
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk030'})
            goto Event78
        }
      case 2:
        goto Event9
    }
}

void Finish_Npc_Kokiri008_Near() {
    Npc_Kokiri008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Near000', 'IsChecked': True, 'DispFrame': 300})
}

void Finish_Npc_Kokiri008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_KorokShiren_RewardNotYet'}) {
        goto Event19
    } else {
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Talk000'})
        if !EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_F_Talk010'})
        }
        goto Event19
    }
}

void Step010_Npc_Kokiri008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'GodTree_Finish'})
    && EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'})
    && EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KorokMini_KorokShiren_Step010'})
        Event48:
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk560'})
    } else {
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk500'})
        if EventSystemActor.CheckFlag({'FlagName': 'GodTree_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'}) {
                if !EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk550'})
                }
                goto Event48
            } else {
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk530'})
                Event40:
                if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
                    goto Event48
                } else {
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk520'})
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk550'})
                    goto Event48
                }
            }
        } else {
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk510'})
            if EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'}) {
                goto Event40
            } else {
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk520'})
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk530'})
                if EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'}) {
                    goto Event48
                } else {
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk540'})
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk550'})
                    goto Event48
                }
            }
        }
    }
}

void Step010_Npc_Kokiri008_Near() {
    Npc_Kokiri008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Near000', 'IsChecked': False, 'DispFrame': 90})
}

void Full_Setsumei() {
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk500'})
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk510'})
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk520'})
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk530'})
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk540'})
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk550'})
    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KorokMini_KorokShiren:Npc_Kokiri008_R_Talk560'})
}
