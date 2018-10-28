-------- EventFlow: Npc_Lanayru003 --------

Actor: Npc_Lanayru003
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'CheckTimeType', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Lanayru003.CheckActorAction13() {
      case 0:

        call SatoFutabaHello()

        if !EventSystemActor.RandomChoice2() {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk17'})
        } else {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk16'})
        }
      case 1:

        call SatoFutabaHello()

        Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk12'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_Mifa'}) {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk14'})
            Event34:
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk15'})
        } else {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk13'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Lanayru003_Mifa'})
            goto Event34
        }
      case 2:

        call SatoFutabaHello()

        if !EventSystemActor.RandomChoice2() {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk18'})
        } else {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk19'})
        }
      case 3:

        call SatoFutabaHello()

        if EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Finish'}) {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk21'})
        }
        if !EventSystemActor.RandomChoice2() {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk22'})
        } else {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk23'})
        }
      case 10:

        call SatoFutabaHello()

        if !EventSystemActor.RandomChoice2() {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk06'})
        } else {
            Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk05'})
        }
      case 11:
        Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk04'})
    }
}

void SatoFutabaHello() {
    if Npc_Lanayru003.IsOnInstEventFlag() {
        Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk03', 'IsCloseMessageDialog': False})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk00', 'IsCloseMessageDialog': False})
        Event17:
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_NormalFirst'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Lanayru003_NormalFirst', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_RiverFirst'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_LieFirst'}) {
                    Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk07', 'IsCloseMessageDialog': False})
                } else {
                    Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk10', 'IsCloseMessageDialog': False})
                }
                Event30:
                Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk09', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk08', 'IsCloseMessageDialog': False})
                Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk11', 'IsCloseMessageDialog': False})
                goto Event30
            }
        }
      case [2, 3, 4, 5]:
        Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk01', 'IsCloseMessageDialog': False})
        goto Event17
      case [6, 7]:
        Npc_Lanayru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Lanayru003:talk02', 'IsCloseMessageDialog': False})
        goto Event17
    }
}
