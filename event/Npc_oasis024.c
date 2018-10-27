-------- EventFlow: Npc_oasis024 --------

Actor: Npc_oasis024
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckEquipArmorSeriesType', 'GeneralChoice2', 'CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_oasis024.IsOnInstEventFlag() {
        Event30:

        call SINJYU_CK()

        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            if Npc_oasis024.IsOnInstEventFlag() {
                Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_004', 'IsOverWriteLabelActorName': False})
                Event17:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_008'})
                } else {
                    Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_010'})
                }
            } else {
                Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_003', 'IsOverWriteLabelActorName': False})
                goto Event17
            }
        } else
        if Npc_oasis024.IsOnInstEventFlag() {
            Npc_oasis024.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_002', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event16:
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_009'})
            } else {
                Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_010'})
            }
        } else {
            Npc_oasis024.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event16
        }
    } else {

        call hello()

        goto Event30
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_006'})
      case [2, 3, 4]:
        Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_005'})
      case [5, 6, 7]:
        Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_011'})
    }
}

void SINJYU_CK() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            if !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis024_SinjyuClear_Female'}) {
                Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Sinjyu_Female_001'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis024_SinjyuClear_Female', 'IsWaitFinish': True})
                Event40:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis024_SinjyuClear_Normal'}) {
            Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis024:Sinjyu_Normal_001'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis024_SinjyuClear_Normal', 'IsWaitFinish': True})
            goto Event40
        }
    }
}

void Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckType': 'Thunder', 'CheckHead': True, 'CheckLower': False}) {
        Npc_oasis024.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis024:Near_Raimei_001', 'DispFrame': 90, 'IsChecked': False})
    }
}
