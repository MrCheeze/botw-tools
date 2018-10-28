-------- EventFlow: Npc_Zora126 --------

Actor: Npc_Zora126
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_TalkToPlayer']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckWeather', 'RandomChoice2', 'RandomChoice4', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Bottle_Mes001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ReturnAnchor', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk_Before_Water_Relic_Finish() {

    call FineHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora126_RainFirst'}) {
                Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk12'})
                Event87:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    switch Npc_Zora126.CheckActorAction13() {
                      case [0, 10]:
                        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk35'})
                        Event96:
                        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk33'})
                        goto Event87
                      case 1:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        Npc_Zora126.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnPosition': [3294.10009765625, 246.60000610351562, -503.6000061035156], 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3297.2626953125, 'Pattern1PosY': 246.97586059570312, 'Pattern1PosZ': -503.7101745605469, 'Pattern1AtX': 3292.248046875, 'Pattern1AtY': 246.6682586669922, 'Pattern1AtZ': -502.26934814453125, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk30', 'IsCloseMessageDialog': True})
                        Npc_Zora126.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
                        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 15.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                        goto Event96
                    }
                  case 1:
                    Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk31', 'IsCloseMessageDialog': True})
                    goto Event96
                  case 2:
                    Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk32', 'IsCloseMessageDialog': True})
                    goto Event96
                  case 3:
                    Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk34'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora126_RainFirst', 'IsWaitFinish': True})
                Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk13'})
                goto Event87
            }
          case [1, 2, 3]:
            Event4:
            if !Npc_Zora126.IsOnInstEventFlag() {
                Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk00', 'IsCloseMessageDialog': False})
            }
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk01'})
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk02'})
            goto Event87
        }
    } else
    goto Event4
}

void Talk_After_Bottle_Mes() {

    call FineHello()

    switch Npc_Zora126.CheckActorAction13() {
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk15', 'ASName': 'Act_Giggle'})
        } else {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk16', 'ASName': 'Act_Giggle'})
        }
      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora126_Talk'}) {

            call FineLoL()

            if !EventSystemActor.RandomChoice2() {
                Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk24'})
            } else {
                Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk25'})
            }
        } else {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk14', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora126_Talk'})
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk23'})
        }
    }
}

void Talk_After_Bottle_Mes_NearActorsTalk() {

    fork {
        Npc_Bottle_Mes001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
    } {

        call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Zora126', 'Actor2': 'Npc_Bottle_Mes001'})

    }

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora126_Talk'}) {

        call FineLoL()

        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk17'})
        switch EventSystemActor.RandomChoice4() {
          case 0:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Zora126.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_Bottle_Mes001', 'ObjectId': 1, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
            Npc_Bottle_Mes001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Zora126', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk20', 'IsCloseMessageDialog': True})
            Npc_Bottle_Mes001.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk21'})
          case 1:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Zora126.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_Bottle_Mes001', 'ObjectId': 1, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
            Npc_Bottle_Mes001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Zora126', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk28', 'IsCloseMessageDialog': True})
            Npc_Bottle_Mes001.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk29'})
          case 2:
            Event52:
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk19'})
          case 3:
            Event54:
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk18'})
        }
    } else {
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk14', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora126_Talk'})
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk17'})
        if !EventSystemActor.RandomChoice2() {
            goto Event52
        } else {
            goto Event54
        }
    }
}

void Talk_After_Bottle_Mes_NearActorsNear() {
    Npc_Zora126.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora126:near03'})
}

void Near() {
    switch Npc_Zora126.CheckActorAction13() {
      case [0, 1]:
        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
            Npc_Zora126.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora126:near02', 'ASKeyName': 'Act_Giggle'})
        } else {
            Npc_Zora126.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora126:near00', 'IsChecked': False, 'DispFrame': 90})
        }
      case 11:
        Npc_Zora126.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora126:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void FineHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora126.CheckActorAction13() {
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk04'})
        } else {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk07'})
        }
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk05'})
        } else {
            Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk06'})
        }
        Event85:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 11:
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk08', 'IsCloseMessageDialog': False})
        goto Event85
    }
}

void FineLoL() {
    if !EventSystemActor.RandomChoice2() {
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk26', 'ASName': 'Act_Giggle'})
    } else {
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora126:talk27', 'ASName': 'Act_Giggle'})
    }
}
