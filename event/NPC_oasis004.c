-------- EventFlow: NPC_oasis004 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'GeneralChoice3', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch NPC_oasis004.CheckActorAction13() {
      case [0, 1]:
        if !NPC_oasis004.IsOnInstEventFlag() {
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_006', 'IsCloseMessageDialog': True, 'ASName': ''})
        }
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_022'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_001'})
            if !EventSystemActor.GeneralChoice2() {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_002'})
            } else {
                Event14:
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_005'})
            }
          case 1:
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_004'})
            if !EventSystemActor.GeneralChoice2() {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_003'})
            } else {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_019'})
            }
          case 2:
            goto Event14
        }
      case [2, 3]:
        if !NPC_oasis004.IsOnInstEventFlag() {
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_018'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_oasis004_MeetingTerry'}) {
            if !EventSystemActor.RandomChoice2() {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_010'})
                if !EventSystemActor.GeneralChoice2() {
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_014'})
                } else {
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_017'})
                }
            } else {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_013'})
                if !EventSystemActor.GeneralChoice2() {
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_015'})
                } else {
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_016'})
                }
            }
        } else {
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_008'})
            if !EventSystemActor.GeneralChoice2() {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_001'})
                if !EventSystemActor.GeneralChoice2() {
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_002'})
                } else {
                    Event24:
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_005'})
                }
            } else {
                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_012'})
                if !EventSystemActor.GeneralChoice2() {
                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_009'})
                } else {
                    goto Event24
                }
            }
        }
      case [4, 5, 10]:
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_020'})
        if !EventSystemActor.GeneralChoice2() {
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_002'})
        } else {
            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_021'})
        }
      case 11:
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_oasis004:Talk_101'})
    }
}
