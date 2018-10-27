-------- EventFlow: FldObj_GerudoTownBook --------

Actor: FldObj_GerudoTownBook
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisStudent_C
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'GeneralChoice3', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_GerudoTownBook2
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'OasisStudent_C_Book'}) {
        Npc_OasisStudent_C.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_OasisStudent_C.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk01'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk02'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Event21:
                Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk08'})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Event22:
                    Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk09'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        goto Event21
                      case 1:
                        Event23:
                        Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk10'})
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            goto Event21
                          case 1:
                            goto Event22
                          case 2:
                            Event28:
                            if !EventSystemActor.RandomChoice2() {
                                Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk12'})
                            } else {
                                Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk11'})
                            }
                        }
                      case 2:
                        goto Event28
                    }
                  case 1:
                    goto Event23
                  case 2:
                    goto Event28
                }
              case 1:
                goto Event22
              case 2:
                goto Event23
              case 3:
                Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk13'})
            }
        } else {
            Npc_OasisStudent_C.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk03'})
        }
    } else {
        FldObj_GerudoTownBook.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk00', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0})
    }
}

void middle() {
    FldObj_GerudoTownBook2.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk07'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Event14:
        FldObj_GerudoTownBook2.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk04'})
        if !EventSystemActor.GeneralChoice3() {
            Event15:
            FldObj_GerudoTownBook2.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk05'})
            if !EventSystemActor.GeneralChoice3() {
                goto Event14
            } else {
                Event16:
                FldObj_GerudoTownBook2.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/FldObj_GerudoTownBook:talk06'})
                if !EventSystemActor.GeneralChoice3() {
                    goto Event14
                } else {
                    goto Event15
                }
            }
        } else {
            goto Event16
        }
      case 1:
        goto Event15
      case 2:
        goto Event16
    }
}
