-------- EventFlow: Obj_DiaryGerudo_A_01 --------

Actor: Obj_DiaryGerudo_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Obj_DiaryGerudo_A_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryGerudo_A_01:DiaryFirst', 'IsBecomingSpeaker': True})
    if !EventSystemActor.GeneralChoice3() {
        Event1:
        Obj_DiaryGerudo_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryGerudo_A_01:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        if !EventSystemActor.GeneralChoice2() {
            Event3:
            Obj_DiaryGerudo_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryGerudo_A_01:talk01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event5:
                Obj_DiaryGerudo_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryGerudo_A_01:talk02', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    if !EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Activated'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'SecretofObject_Activated', 'IsWaitFinish': True})
                    }
                    Event7:
                    Obj_DiaryGerudo_A_01.Demo_Talk({'MessageId': 'EventFlowMsg/Obj_DiaryGerudo_A_01:talk03', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event5
                    } else
                    Event18:
                    if EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Activated'})
                    && EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Step1'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'SecretofObject_Finish', 'IsWaitFinish': True})
                    }
                  case 1:
                    if !EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Activated'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'SecretofObject_Activated', 'IsWaitFinish': True})
                    }
                    goto Event3
                  case 2:
                    if !EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Activated'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'SecretofObject_Activated', 'IsWaitFinish': True})
                    }
                    if EventSystemActor.CheckFlag({'FlagName': 'SecretofObject_Step1'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'SecretofObject_Finish', 'IsWaitFinish': True})
                    }
                }
              case 1:
                goto Event1
              case 2:
                goto Event18
            }
        } else
        goto Event18
    } else {
        goto Event7
    }
}
