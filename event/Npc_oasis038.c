-------- EventFlow: Npc_oasis038 --------

Actor: Npc_oasis038
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis039
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['RandomChoice2', 'CheckTimeType', 'GeneralChoice8', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_oasis038.CheckActorAction13() {
      case 0:
        Event298:

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis038")})

        Npc_oasis038.Demo_PlayASForDemo({'ASName': 'Act_Champion_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_oasis038.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': 'Act_Champion_Wait'})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_oasis038.CheckActorAction({'ActionName': 'Root/Terror'}) {
            goto Event298
        } else {
            Event187:

            call InitTalk.InitTalk_Pair({'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038', 'Arg_Turn': 2})

            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_ChoiceA_Off', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_oasis038_ChoiceB_Off', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_oasis038_ChoiceC_Off', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_oasis038_ChoiceD_Off', 'IsWaitFinish': True})

            fork {
                Npc_oasis038.Demo_PlayASForDemo({'ASName': 'Act_Champion_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                Npc_oasis038.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': ''})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_oasis039.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait'})
            }

            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_First', 'IsWaitFinish': True})
            if Npc_oasis039.IsOnInstEventFlag() {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_18'})
            } else {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_03'})
            }
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_oasis038_ChoiceA_Off', 'IsWaitFinish': True})
            Event6:
            switch EventSystemActor.GeneralChoice8() {
              case 0:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_ChoiceA_Off', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceB_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceC_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceD_Off'}) {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_23'})
                } else {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_02'})
                    goto Event6
                }
              case 1:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_ChoiceB_Off', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceA_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceC_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceD_Off'}) {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_05'})
                } else {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_12'})
                    goto Event6
                }
              case 2:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_ChoiceC_Off', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceA_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceB_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceD_Off'}) {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_04'})
                } else {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_09'})
                    goto Event6
                }
              case 3:
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_06'})

                fork {
                    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_01', 'IsCloseMessageDialog': False, 'ASName': 'Act_Champion_Wait'})
                } {
                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                }

                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_46'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_ChoiceD_Off', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceA_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceB_Off'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_ChoiceC_Off'}) {

                    fork {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_39'})
                    } {
                        Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': ''})
                    }

                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                } else {

                    fork {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_45'})
                    } {
                        Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': ''})
                    }

                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    goto Event6
                }
              case [4, 5, 6, 7]:

                call sayonara()

            }
        }
    }
}

void sayonara() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1, 4, 5]:
        if !EventSystemActor.RandomChoice2() {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_08'})
        } else {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_07'})
        }
      case [2, 3]:
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_37'})
      case [6, 7]:
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis038:Talk_36'})
    }
}

void NearActorsTalk() {
    goto Event187
}
