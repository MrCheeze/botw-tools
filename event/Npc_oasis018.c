-------- EventFlow: Npc_oasis018 --------

Actor: Npc_oasis018
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'GeneralChoice2', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis018.CheckActorAction13() {
      case [0, 2]:
        if !Npc_oasis018.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_05'})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Fruits_SoldOut'}) {
            if !Npc_oasis018.IsOnInstEventFlag() {

                call hello()

            }
            Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_12'})
        } else
        if !Npc_oasis018.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_04'})
      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Mush_SoldOut'}) {
            if !Npc_oasis018.IsOnInstEventFlag() {

                call hello()

            }
            Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_09'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_10'})
            } else {
                Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_11'})
            }
        } else
        if !Npc_oasis018.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_06'})
      case 4:
        if !Npc_oasis018.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis018.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 5:
        if !Npc_oasis018.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_02'})
      case 10:
        if !Npc_oasis018.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_07'})
      case 11:
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_08'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_13'})
      case [2, 3, 4]:
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_14'})
      case [5, 6, 7]:
        Npc_oasis018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis018:Talk_15'})
    }
}
