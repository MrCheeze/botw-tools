-------- EventFlow: Npc_oasis032 --------

Actor: Npc_oasis032
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis032.CheckActorAction13() {
      case 0:
        if Npc_oasis032.IsOnInstEventFlag() {
            Event6:
            Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_03'})
        } else {

            call hello()

            goto Event6
        }
      case 1:
        if Npc_oasis032.IsOnInstEventFlag() {
            Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event31:
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_06'})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_zarashi'}) {
                    Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_07'})
                } else {
                    Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_12'})
                }
            }
        } else {

            call hello()

            Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_04'})
            goto Event31
        }
      case 10:
        if Npc_oasis032.IsOnInstEventFlag() {
            Event5:
            Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_02'})
        } else {

            call hello()

            goto Event5
        }
      case 11:
        Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_05'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event20:
        Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_09'})
      case 1:
        goto Event20
      case 2:
        Event21:
        Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_10'})
      case 3:
        goto Event21
      case 4:
        goto Event21
      case 5:
        Event22:
        Npc_oasis032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_11'})
      case 6:
        goto Event22
      case 7:
        goto Event22
    }
}
