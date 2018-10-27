-------- EventFlow: Npc_Goron021 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron021
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Activated'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron21_Yunbo', 'IsWaitFinish': True})
        Event8:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron021_First'}) {
            if Npc_Goron021.IsOnInstEventFlag() {
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk11'})
                Event29:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Goron021_Intro'}) {
                        Event84:
                        if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Storage'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_GoGoronCity'}) {
                                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk23'})
                                Event51:
                                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk14'})
                                goto Event29
                            } else {
                                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk21', 'IsCloseMessageDialog': False})
                                Event98:
                                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk22'})
                                goto Event51
                            }
                        } else {
                            Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk20', 'IsCloseMessageDialog': False})
                            goto Event98
                        }
                    } else {
                        Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk13', 'IsCloseMessageDialog': False})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Goron021_Intro', 'IsWaitFinish': True})
                        goto Event84
                    }
                  case 1:
                    Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    goto Event51
                  case 2:
                    Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                    Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk05'})
                    goto Event51
                  case 3:
                    Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk03', 'IsOverWriteLabelActorName': False})
                }
            } else {

                call BerugoHello()

                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk12', 'IsBecomingSpeaker': False})
                goto Event29
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron021_First', 'IsWaitFinish': True})
            Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk19'})
        }
    } else {
        goto Event8
    }
}

void BerugoHello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event18:
        Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk06', 'IsOverWriteLabelActorName': False})
      case 1:
        goto Event18
      case 2:
        Event19:
        Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk07', 'IsOverWriteLabelActorName': False})
      case 3:
        goto Event19
      case 4:
        goto Event19
      case 5:
        goto Event19
      case 6:
        Event20:
        Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk08', 'IsOverWriteLabelActorName': False})
      case 7:
        goto Event20
    }
}

void Clear_RemainsFire_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron021_ClearFirst'}) {
        if Npc_Goron021.IsOnInstEventFlag() {
            Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk11'})
            Event109:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Goron021_Intro', 'IsWaitFinish': True})
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk15'})
                Event111:
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk14'})
                goto Event109
              case 1:
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event111
              case 2:
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk05'})
                goto Event111
              case 3:
                Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk03', 'IsOverWriteLabelActorName': False})
            }
        } else {

            call BerugoHello()

            Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk12'})
            goto Event109
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron021_First', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron021_ClearFirst'})
        Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk00', 'IsOverWriteLabelActorName': False})
        Npc_Goron021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron021:talk04'})
    }
}
