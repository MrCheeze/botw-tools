-------- EventFlow: Obj_DiaryTamul_A_04 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_DiaryTamul_A_04
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk00'})
    switch EventSystemActor.GeneralChoice4() {
      case 1:
        Event4:
        Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk01'})
        if EventSystemActor.GeneralChoice4() == 2 {
            Event5:
            Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk02'})
            switch EventSystemActor.GeneralChoice4() {
              case 1:
                Event6:
                Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk03'})
                switch EventSystemActor.GeneralChoice4() {
                  case 1:
                    Event7:
                    Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk04'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 1:
                        Event8:
                        Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk05'})
                        switch EventSystemActor.GeneralChoice4() {
                          case 1:
                            Event9:
                            Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk06'})
                            switch EventSystemActor.GeneralChoice4() {
                              case 1:
                                Event10:
                                Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk07'})
                                switch EventSystemActor.GeneralChoice4() {
                                  case 1:
                                    Event11:
                                    Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk08'})
                                    switch EventSystemActor.GeneralChoice4() {
                                      case 1:
                                        Event12:
                                        Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk09'})
                                        switch EventSystemActor.GeneralChoice4() {
                                          case 1:
                                            Event13:
                                            Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk10'})
                                            switch EventSystemActor.GeneralChoice4() {
                                              case 1:
                                                Event14:
                                                Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk11'})
                                                switch EventSystemActor.GeneralChoice4() {
                                                  case 1:
                                                    Event15:
                                                    Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk12'})
                                                    switch EventSystemActor.GeneralChoice4() {
                                                      case 1:
                                                        Event16:
                                                        Obj_DiaryTamul_A_04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_04:talk13'})
                                                        if EventSystemActor.GeneralChoice4() == 2 {
                                                            goto Event15
                                                        }
                                                      case 2:
                                                        goto Event14
                                                    }
                                                  case 2:
                                                    goto Event13
                                                }
                                              case 2:
                                                goto Event12
                                            }
                                          case 2:
                                            goto Event11
                                        }
                                      case 2:
                                        goto Event10
                                    }
                                  case 2:
                                    goto Event9
                                }
                              case 2:
                                goto Event8
                            }
                          case 2:
                            goto Event7
                        }
                      case 2:
                        goto Event6
                    }
                  case 2:
                    goto Event5
                }
              case 2:
                goto Event4
            }
        }
      case 2:
        goto Event16
    }
}
