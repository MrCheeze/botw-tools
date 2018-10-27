-------- EventFlow: Npc_UMiiVillage030 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'GeneralChoice2', 'RandomChoice2', 'CheckTimeType', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage030
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Ichikara_KatsuradaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_IchikaraFirst'}) {
                if !EventSystemActor.RandomChoice2() {
                    Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk27'})
                    if !EventSystemActor.RandomChoice2() {
                        Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk29'})
                    } else {
                        Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk28'})
                    }
                } else {
                    Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk23'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC030_IchikaraFirst', 'IsWaitFinish': True})
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk23'})
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_FinishFirst'}) {
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk21'})
                Event16:
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk22'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC030_FinishFirst'})
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk20'})
                goto Event16
            }
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_MarryFirst'}) {
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk17'})
            if !EventSystemActor.RandomChoice2() {
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk19'})
            } else {
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk26'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC030_MarryFirst'})
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk13'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk14'})
                Event9:
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk16'})
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk25'})
            } else {
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk15'})
                goto Event9
            }
        }
    }
}

void Ichikara_KatsuradaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage030.CheckActorAction13() {
      case 8:
        Event37:
        if Npc_UMiiVillage030.IsOnInstEventFlag() {
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk05'})
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk08'})
            } else {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event63:
                    Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk00'})
                  case 1:
                    goto Event63
                  case 2:
                    Event34:
                    Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk01'})
                  case 3:
                    goto Event34
                  case 4:
                    goto Event34
                  case 5:
                    goto Event34
                  case 6:
                    Event35:
                    Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk02'})
                  case 7:
                    goto Event35
                }
            }
        }
      case 9:
        goto Event37
      case 10:
        Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk06', 'ASName': 'Talk_Yawn'})
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk11'})
            Event42:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk12'})
            goto Event42
        }
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk09'})
            goto Event42
        } else {
            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage030:talk10'})
            goto Event42
        }
      case 12:
        goto Event37
    }
}
