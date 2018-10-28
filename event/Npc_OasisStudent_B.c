-------- EventFlow: Npc_OasisStudent_B --------

Actor: Npc_OasisStudent_B
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckTimeType', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisStudent_B.CheckActorAction13() {
      case 0:
        if !Npc_OasisStudent_B.IsOnInstEventFlag() {

            call hello()

        }
        Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk05'})
        } else {
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk03'})
        }
      case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if !Npc_OasisStudent_B.IsOnInstEventFlag() {

            call hello()

        }
        Npc_OasisStudent_B.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_ReadBook'})
      case 2:
        if !Npc_OasisStudent_B.IsOnInstEventFlag() {

            call hello()

        }
        Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk01'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk02'})
        } else {
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk03'})
        }
      case 3:
        if Npc_OasisStudent_B.CheckActorAction({'ActionName': 'Root/Terror'}) {
            Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk20'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_night'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_fisrt'})
            && EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_second'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_third'}) {
                    Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk15'})
                    Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk16'})
                } else {
                    Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk14'})
                }
            } else {
                Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk09'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_fisrt'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_second'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisStudent_B_third'}) {
                    switch EventSystemActor.RandomChoice3() {
                      case 0:

                        call 3rd()

                      case 1:

                        call 2nd()

                      case 2:

                        call 1st()

                    }
                } else {
                    Event58:
                    Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk11', 'IsCloseMessageDialog': True})
                    Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk08', 'IsCloseMessageDialog': True})
                    Npc_OasisStudent_B.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
                    Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk13'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisStudent_B_third', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisStudent_B_night', 'IsWaitFinish': True})
                }
            } else {
                Event52:
                Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk10'})
                Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk08', 'IsCloseMessageDialog': True})
                Npc_OasisStudent_B.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
                Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk12'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisStudent_B_second', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisStudent_B_night', 'IsWaitFinish': True})
            }
        } else {
            Event11:
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk06', 'IsCloseMessageDialog': True})
            Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk08', 'IsCloseMessageDialog': True})
            Npc_OasisStudent_B.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk07'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisStudent_B_fisrt', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisStudent_B_night', 'IsWaitFinish': True})
        }
    }
}

void NearActorsTalk() {
    goto Event0
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk17'})
      case [2, 3, 4]:
        Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk18'})
      case [5, 6, 7]:
        Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:talk19'})
    }
}

void Near() {
    if Npc_OasisStudent_B.CheckActorAction13() == 3 {
        Npc_OasisStudent_B.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_B:near00'})
    }
}

void SwitchOFF() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_OasisStudent_B_night', 'IsWaitFinish': True})
}

void 1st() {
    goto Event11
}

void 2nd() {
    goto Event52
}

void 3rd() {
    goto Event58
}
