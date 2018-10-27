-------- EventFlow: Npc_Zora025 --------

Actor: Npc_Zora025
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckWeather', 'CheckTimeType', 'GeneralChoice4', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora007
entrypoint: None()
actions: ['Demo_Join', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora028
entrypoint: None()
actions: ['Demo_Join', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event31:

    call ToonHello()

    Event82:
    Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk10', 'IsCloseMessageDialog': False})
    Event83:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk18'})
        Event92:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk11', 'IsCloseMessageDialog': False})
        goto Event83
      case 1:
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora025_Skin', 'IsWaitFinish': True})
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk13'})
        goto Event92
      case 2:
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora025_Mifa', 'IsWaitFinish': True})
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk12'})
        goto Event92
      case 3:

        call ToonBye()

    }
}

void NearActorsNear() {
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        Npc_Zora025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora025:near01'})
    } else {
        Npc_Zora025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora025:near00'})
    }
}

void Water_Relic_Activated_Talk() {
    goto Event0
}

void Water_Relic_RainStop_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event32:

    call ToonHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_FineFirst'}) {
        goto Event82
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora025_FineFirst'})
            Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk19', 'IsCloseMessageDialog': False})
            goto Event82
          case 1:
            goto Event82
          case 2:
            goto Event82
          case 3:
            goto Event82
        }
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event106:

    call ToonHello()

    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora025_First', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_AfterRelicFirst'}) {
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk21', 'IsCloseMessageDialog': False})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora025_AfterRelicFirst'})
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk20', 'IsCloseMessageDialog': False})
    }
}

void ToonHello() {
    switch Npc_Zora025.CheckActorAction13() {
      case 0:
        Event60:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_First'}) {
            switch Npc_Zora025.CheckActorAction13() {
              case 0:
                Event71:
                if Npc_Zora025.IsOnInstEventFlag() {
                    Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk03', 'IsCloseMessageDialog': False})
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event73:
                        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk00', 'IsCloseMessageDialog': False})
                      case 1:
                        goto Event73
                      case 2:
                        Event74:
                        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk01', 'IsCloseMessageDialog': False})
                      case 3:
                        goto Event74
                      case 4:
                        goto Event74
                      case 5:
                        goto Event74
                      case 6:
                        Event75:
                        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk02', 'IsCloseMessageDialog': False})
                      case 7:
                        goto Event75
                    }
                }
              case 1:
                goto Event71
              case 2:
                goto Event71
              case 3:
                Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk08', 'IsCloseMessageDialog': False})
              case 4:
                goto Event71
              case 5:
                goto Event71
              case 6:
                goto Event71
              case 7:
                goto Event71
              case 8:
                goto Event71
              case 9:
                goto Event71
              case 10:
                Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk09', 'IsCloseMessageDialog': False})
              case 12:
                goto Event71
              case 13:
                goto Event71
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora025_First', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet01'}) {
                Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk06', 'IsCloseMessageDialog': False})
                Event69:
                Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk07', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
                    Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk22'})
                    goto Event69
                } else {
                    Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk05', 'IsCloseMessageDialog': False})
                    goto Event69
                }
            }
        }
      case 1:
        goto Event60
      case 2:
        goto Event60
      case 3:
        goto Event60
      case 4:
        goto Event60
      case 5:
        goto Event60
      case 6:
        goto Event60
      case 7:
        goto Event60
      case 8:
        goto Event60
      case 9:
        goto Event60
      case 10:
        goto Event60
      case 11:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk04', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 12:
        goto Event60
      case 13:
        goto Event60
    }
}

void ToonBye() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk14', 'ASName': 'Hello', 'IsCloseMessageDialog': False})
      case 1:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk15', 'ASName': 'Hello', 'IsCloseMessageDialog': False})
      case 2:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk16', 'ASName': 'Hello', 'IsCloseMessageDialog': False})
      case 3:
        Npc_Zora025.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora025:talk17', 'ASName': 'Hello', 'IsCloseMessageDialog': False})
    }
}

void ToonInit() {

    fork {
        Npc_Zora007.Demo_Join({'IsWaitFinish': True})
        Npc_Zora007.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Zora007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
    } {
        Npc_Zora025.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    } {
        Npc_Zora028.Demo_Join({'IsWaitFinish': True})
        Npc_Zora028.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Zora028.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
    }

}

void NearActorsTalk() {
    Event121:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call ToonInit()

    goto Event31
}

void Water_Relic_Activated_NearActorsTalk() {
    goto Event121
}

void Water_Relic_RainStop_NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call ToonInit()

    goto Event32
}

void Water_Relic_Finished_NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call ToonInit()

    goto Event106
}
