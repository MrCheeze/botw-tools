-------- EventFlow: Npc_Zora001 --------

Actor: Npc_Zora001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenMessageTips', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'HasPorchItem', 'CheckWeather', 'CheckTimeType', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_First'}) {

        call TakkaHello()

        Event36:
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk07', 'IsCloseMessageDialog': False})
        switch EventSystemActor.GeneralChoice4() {
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk10', 'IsCloseMessageDialog': False})
            } else {
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk10', 'IsCloseMessageDialog': False})
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk22'})
            }
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_You'}) {
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk12', 'IsCloseMessageDialog': False})
                Event49:
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk16', 'IsCloseMessageDialog': False})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora001_You'})
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk11', 'IsCloseMessageDialog': False})
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk12', 'IsCloseMessageDialog': False})
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk13', 'IsCloseMessageDialog': False})
                Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk14', 'IsCloseMessageDialog': False})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk15', 'IsCloseMessageDialog': False})
                    goto Event49
                }
            }
          case 3:
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk09', 'IsCloseMessageDialog': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora001_First', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet02'}) {
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk00', 'IsCloseMessageDialog': False})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk01', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk08', 'IsCloseMessageDialog': False})
        }
    }
}

void Water_Relic_RainStop_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call TakkaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_RainFirst'}) {
        goto Event36
    } else {
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk17', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora001_RainFirst'})
          case [1, 2, 3]:
            goto Event36
        }
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_ClearFirst'}) {

        call TakkaHello()

        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk19', 'IsCloseMessageDialog': False})
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk21', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk20', 'IsCloseMessageDialog': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora001_ClearFirst', 'IsWaitFinish': True})
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk18', 'IsCloseMessageDialog': False})
    }
}

void TakkaHello() {
    if Npc_Zora001.IsOnInstEventFlag() {
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk06', 'IsCloseMessageDialog': False})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk03', 'IsCloseMessageDialog': False})
      case [2, 3, 4, 5]:
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk04', 'IsCloseMessageDialog': False})
      case [6, 7]:
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora001:talk05', 'IsCloseMessageDialog': False})
    }
}
