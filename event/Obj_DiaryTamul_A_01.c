-------- EventFlow: Obj_DiaryTamul_A_01 --------

Actor: Obj_DiaryTamul_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk00', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    switch EventSystemActor.GeneralChoice4() {
      case 1:
        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_Diary_Read', 'IsWaitFinish': True})
        Event4:
        Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk01', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        if EventSystemActor.GeneralChoice4() == 2 {
            Event6:
            Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk02', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            switch EventSystemActor.GeneralChoice4() {
              case 1:
                Event10:
                Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk03', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                switch EventSystemActor.GeneralChoice4() {
                  case 1:
                    Event12:
                    Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk04', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    switch EventSystemActor.GeneralChoice4() {
                      case 1:
                        Event14:
                        Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk05', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        switch EventSystemActor.GeneralChoice4() {
                          case 1:
                            Event16:
                            Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk06', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                            switch EventSystemActor.GeneralChoice4() {
                              case 1:
                                Event18:
                                Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk07', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                switch EventSystemActor.GeneralChoice4() {
                                  case 1:
                                    Event20:
                                    Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk08', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                    if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Finish'}) {
                                        Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk11'})
                                        switch EventSystemActor.GeneralChoice4() {
                                          case 1:
                                            Event24:
                                            Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk10', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                            if EventSystemActor.GeneralChoice4() == 2 {
                                                goto Event20
                                            }
                                          case 2:
                                            goto Event18
                                        }
                                    } else {
                                        Obj_DiaryTamul_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Obj_DiaryTamul_A_01:talk09', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        if EventSystemActor.GeneralChoice4() == 2 {
                                            goto Event18
                                        }
                                    }
                                  case 2:
                                    goto Event16
                                }
                              case 2:
                                goto Event14
                            }
                          case 2:
                            goto Event12
                        }
                      case 2:
                        goto Event10
                    }
                  case 2:
                    goto Event6
                }
              case 2:
                goto Event4
            }
        }
      case 2:
        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_Diary_Read', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Finish'}) {
            goto Event24
        } else {
            goto Event20
        }
    }
}
