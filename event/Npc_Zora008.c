-------- EventFlow: Npc_Zora008 --------

Actor: Npc_Zora008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather', 'CheckTimeType', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_First'}) {
        Event71:

        call KodahHello()

        Event51:
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk07', 'IsCloseMessageDialog': False})
        Event52:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_Mifa'}) {
                Event53:
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk08', 'IsCloseMessageDialog': True})
                Event60:
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk12', 'IsCloseMessageDialog': False})
                goto Event52
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora008_Mifa'})
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk04', 'IsCloseMessageDialog': False})
                goto Event53
            }
          case 1:
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk10'})
            goto Event60
          case 2:
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk11'})
            goto Event60
          case 3:
            Event57:
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk09', 'IsCloseMessageDialog': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora008_First', 'IsWaitFinish': True})
        Event42:
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk00', 'IsCloseMessageDialog': False})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk03', 'IsCloseMessageDialog': False})
        }
    }
}

void Water_Relic_RainStop_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_RainFirst'}) {
            goto Event71
        } else {
            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora008_RainFirst'})
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk13', 'IsCloseMessageDialog': False})
                goto Event51
              case [1, 2, 3]:
                goto Event71
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora008_First', 'IsWaitFinish': True})
        goto Event42
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_NormalFirst'}) {
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk15', 'IsCloseMessageDialog': False})
            switch EventSystemActor.GeneralChoice4() {
              case 0:

                call Kodah2taku()

              case 1:
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk10', 'IsCloseMessageDialog': False})
              case 2:
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk11', 'IsCloseMessageDialog': False})
              case 3:
                goto Event57
            }
        } else {
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk14', 'IsCloseMessageDialog': False})
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk22'})
            Event99:
            Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk24'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora008_NormalFirst'})

            call Kodah2taku()

        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora008_First', 'IsWaitFinish': True})
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk14', 'IsCloseMessageDialog': False})
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk23'})
        goto Event99
    }
}

void KodahHello() {
    if Npc_Zora008.IsOnInstEventFlag() {
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk05', 'IsCloseMessageDialog': False})
        Event92:
        switch Npc_Zora008.CheckActorAction13() {
          case [0, 1, 2]:
            Event81:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora020_HappyBed'})
            && !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_Talk3'}) {
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk18', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk19', 'IsCloseMessageDialog': False})
                } else {
                    Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk20', 'IsCloseMessageDialog': False})
                }
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora008_Talk3'})
                Event91:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
          case 3:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_A2First'}) {
                goto Event81
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora008_A2First', 'IsWaitFinish': True})
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk21', 'IsCloseMessageDialog': False})
                goto Event91
            }
          case [4, 5]:
            if !EventSystemActor.RandomChoice2() {
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk26'})
            } else {
                Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk25'})
            }
        }
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk06', 'IsCloseMessageDialog': False})
        goto Event92
      case [2, 3, 4, 5]:
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk01', 'IsCloseMessageDialog': False})
        goto Event92
      case [6, 7]:
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk02', 'IsCloseMessageDialog': False})
        goto Event92
    }
}

void Kodah2taku() {
    if EventSystemActor.CheckFlag({'FlagName': 'Bottle_Mes_Finish'}) {
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk17', 'IsCloseMessageDialog': True})
    } else {
        Npc_Zora008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora008:talk16', 'IsCloseMessageDialog': True})
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora008_First'}) {
        Npc_Zora008.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora008:near01', 'ASKeyName': 'Act_Call_Hello'})
    } else {
        Npc_Zora008.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora008:near00', 'ASKeyName': 'Act_Touting'})
    }
}
