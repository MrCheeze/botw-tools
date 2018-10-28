-------- EventFlow: Npc_HatenoGate001 --------

Actor: Npc_HatenoGate001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather', 'RandomChoice3', 'CheckTime', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'CursedStatue_Finish'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'CursedStatue_Activated'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CursedStatue_Activated'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate001_First'}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                switch Npc_HatenoGate001.CheckActorAction13() {
                  case 0:
                    Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})

                    call night()

                  case 1:
                    Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk31'})
                  case 4:
                    Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk33'})
                  case 5:
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk30'})
                }
              case [1, 2, 3]:
                if Npc_HatenoGate001.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {

                    call rain()

                }
            }
        } else
        switch Npc_HatenoGate001.CheckActorAction13() {
          case [0, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
            Event112:

            call first()

          case [1, 5]:
            Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk32'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                goto Event112
            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'CursedStatue_Activated'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            switch Npc_HatenoGate001.CheckActorAction13() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate001_Home'}) {
                    Event145:
                    if EventSystemActor.CheckTime({'Hour': 5, 'ConditionType': 'ge', 'Minute': 0}) {
                        if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 6}) {
                            Event73:
                            if Npc_HatenoGate001.IsOnInstEventFlag() {
                                Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                                Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk18', 'ASName': ''})
                                Event78:
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk34'})
                                } else {
                                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk15'})
                                }
                            } else {
                                Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk00', 'ASName': 'Wait'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk06'})
                                    goto Event78
                                }
                            }
                        } else {
                            Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk38'})
                        }
                    } else
                    goto Event73
                } else {
                    Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                    Event74:
                    switch EventSystemActor.RandomChoice3() {
                      case 0:
                        Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk22'})
                      case 1:
                        Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk24'})
                      case 2:
                        Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk25'})
                    }
                }
              case 1:
                goto Event145
              case 2:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk16', 'ASName': ''})
                } else {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk03', 'ASName': ''})
                }
              case 3:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:Talk20', 'ASName': ''})
                } else {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:Talk22'})
                }
            }
          case [1, 2, 3]:
            if Npc_HatenoGate001.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {
                Event71:
                if Npc_HatenoGate001.IsArriveAnchorForRain() {
                    Event95:
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk23', 'ASName': ''})
                    Event93:
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk20', 'ASName': ''})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate001_Home'}) {
                    goto Event95
                } else
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk29'})
                } else {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk21', 'ASName': ''})
                }
                goto Event93
            }
        }
    } else
    switch Npc_HatenoGate001.CheckActorAction13() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate001_First'}) {
            Event147:
            Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk13', 'ASName': ''})
            Event32:
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk10'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk35', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk12', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk27'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoGate001_First'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'CursedStatue_Activated', 'IsWaitFinish': True})
                } else {
                    Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk11'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoGate001_First'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoGate001_First'})
            }
        } else {
            Event30:
            Npc_HatenoGate001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            Event31:
            Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk01', 'ASName': ''})
            goto Event32
        }
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoGate001_First'}) {
            goto Event147
        } else {
            Npc_HatenoGate001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:talk00', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                goto Event30
            }
        }
    }
}

void first() {
    goto Event31
}

void rain() {
    goto Event71
}

void night() {
    goto Event74
}

void Near() {
    if Npc_HatenoGate001.CheckActorAction13() in [1, 3, 5] {
        Npc_HatenoGate001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoGate001:near00', 'DispFrame': 90, 'IsChecked': False})
    }
}
