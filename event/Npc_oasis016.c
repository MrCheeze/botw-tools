-------- EventFlow: Npc_oasis016 --------

Actor: Npc_oasis016
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AppearRupee', 'Demo_IncreaseRupee']
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice2', 'CheckRupee']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis017
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis013
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis011
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Finish'}) {
        switch Npc_oasis016.CheckActorAction13() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Ichigo'}) {
                if Npc_oasis016.IsOnInstEventFlag() {
                    Event42:
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_10'})
                } else {

                    call hello()

                    goto Event42
                }
            } else {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_23'})
            }
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Ichigo'}) {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_08'})
            } else {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_23'})
            }
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Ichigo'}) {
                if Npc_oasis016.IsOnInstEventFlag() {
                    Event41:
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_02'})
                } else {

                    call hello()

                    goto Event41
                }
            } else {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_23'})
            }
          case 3:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Ichigo'}) {
                if Npc_oasis016.IsOnInstEventFlag() {
                    Event43:
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_01'})
                } else {

                    call hello()

                    goto Event43
                }
            } else {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_23'})
            }
          case 10:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Ichigo'}) {
                if Npc_oasis016.IsOnInstEventFlag() {
                    Event31:
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_09'})
                } else {

                    call hello()

                    goto Event31
                }
            } else {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_23'})
            }
          case 11:
            Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_07'})
        }
    } else
    switch Npc_oasis016.CheckActorAction13() {
      case 0:
        Event61:
        if Npc_oasis016.IsOnInstEventFlag() {
            Event11:
            Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_04'})
        } else {

            call hello()

            goto Event11
        }
      case 1:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_08'})
      case [2, 3, 12]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis016_Hatake'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis016_First'}) {
                if Npc_oasis016.IsOnInstEventFlag() {
                    Event57:
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_16'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_17'})
                    } else {
                        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_18'})
                    }
                } else {

                    call hello()

                    goto Event57
                }
            } else {

                call hello()

                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_14'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_03'})
                    Event54:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis016_First', 'IsWaitFinish': True})
                } else {
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_15'})
                    goto Event54
                }
            }
        } else
        goto Event61
      case 10:
        if Npc_oasis016.IsOnInstEventFlag() {
            Event12:
            Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_05'})
        } else {

            call hello()

            goto Event12
        }
      case 11:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_06'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_11'})
      case [2, 3, 4]:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_12'})
      case [5, 6, 7]:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_13'})
    }
}

void ICHIGO_CUT() {
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis016")})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisHylia_016_angry'}) {
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_20', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        if EventSystemActor.CheckRupee({'Value': 125}) {
            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -125})
            Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_21'})
        } else {
            Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_22'})
        }
    } else {
        Npc_oasis016.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis016:Talk_19', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_016_angry'})
    }
}

void MeetingTalk() {
    if Npc_oasis016.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_KidsMT_Full'}) {
                Event112:

                call Npc_oasis013.WithTicle()

            } else {
                Event115:
                Npc_oasis013.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'ClothWarpMode': -2})
                Npc_oasis017.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
                Npc_oasis011.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
                goto Event1
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_KidsMT_Full'}) {
            goto Event112
        } else {
            goto Event115
        }
    } else {
        goto Event115
    }
}
