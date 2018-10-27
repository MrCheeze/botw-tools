-------- EventFlow: Npc_SouthHateru005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_OpenMessageTips']
queries: ['CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthHateru005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HutagoHatago_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthHateru005.CheckActorAction13() {
      case 0:
        Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk33'})
      case 1:
        Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk35'})
      case 10:
        Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk30'})
      case 11:
        Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk31', 'ASName': ''})
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_SouthHateru005', 'Actor2': 'Npc_HutagoHatago_002'})

    Event4:
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthHateru005_talk'}) {

        fork {
            Npc_HutagoHatago_002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk27', 'IsCloseMessageDialog': False})
        } {
            Npc_SouthHateru005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsConfront': True, 'ActorName': ''})
        }


        fork {
            Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk28'})
        }


        fork {
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk29'})
        }

        Event84:
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            fork {
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk06'})
            }


            fork {
                Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk20', 'IsCloseMessageDialog': True})
            }

            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 0, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Squat'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GuideSPlus_Squat'})
            Event137:

            fork {
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk10'})
            }

            goto Event84
          case 1:

            fork {
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk07', 'IsCloseMessageDialog': True})
            }


            fork {
                Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk21', 'IsCloseMessageDialog': False})
            } {
                Npc_SouthHateru005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ActorName': 'Npc_HutagoHatago_002', 'ObjectId': 1})
            }


            fork {
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk22', 'IsCloseMessageDialog': True})
            }


            fork {
                Npc_SouthHateru005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsConfront': True, 'ActorName': ''})
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk23', 'IsCloseMessageDialog': True})
            }

            Event131:

            fork {
                Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk09', 'IsCloseMessageDialog': False})
            }

            goto Event137
          case 2:

            fork {
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk08', 'IsCloseMessageDialog': False})
            }


            fork {
                Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk24', 'IsCloseMessageDialog': False})
            }


            fork {
                Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk25', 'IsCloseMessageDialog': False})
            }

            goto Event131
          case 3:
            if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_Activated'}) {

                fork {
                    Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk34'})
                }


                fork {
                    Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk36'})
                }

                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SouthHateru005_talk', 'IsWaitFinish': True})
            } else {

                fork {
                    Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk26'})
                }


                fork {
                    Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk26'})
                }

                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SouthHateru005_talk', 'IsWaitFinish': True})
            }
        }
    } else {

        fork {
            Npc_HutagoHatago_002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Npc_HutagoHatago_002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } {
            Npc_SouthHateru005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 0, 'ActorName': ''})
        }


        fork {
            Npc_HutagoHatago_002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 1, 'ActorName': 'Npc_SouthHateru005'})
        } {
            Npc_SouthHateru005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ActorName': 'Npc_HutagoHatago_002', 'ObjectId': 1})
            Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk05', 'IsCloseMessageDialog': False})
        }


        fork {
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk11', 'IsCloseMessageDialog': True})
        }


        fork {
            Npc_SouthHateru005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 0, 'ActorName': ''})
            Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk13', 'IsCloseMessageDialog': True})
        }


        fork {
            Npc_HutagoHatago_002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 0, 'ActorName': ''})
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk14', 'IsCloseMessageDialog': True})
        }

        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

        fork {
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk15', 'IsCloseMessageDialog': False})
        }


        fork {
            Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk16'})
        }


        fork {
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk17'})
        }


        fork {
            Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk18'})
        }


        fork {
            Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk19'})
        }


        fork {
            Npc_SouthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:talk12'})
        }

        goto Event84
    }
}

void Near() {
    switch Npc_SouthHateru005.CheckActorAction13() {
      case 1:
        Event182:
        Npc_SouthHateru005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:Near_02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_SouthHateru005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru005:Near_01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void meet() {
    goto Event4
}

void NearActorsNear() {
    goto Event182
}

void HutagoHatago_Twin_Meet_Talk() {
    switch Npc_SouthHateru005.CheckActorAction13() {
      case [0, 1]:

        call NearActorsTalk()

      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]:
        Npc_HutagoHatago_002.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'SeqBank': 0, 'TargetIndex': -1})
        goto Event0
    }
}
