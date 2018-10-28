-------- EventFlow: Obj_DiaryKing_A_01 --------

Actor: Obj_DiaryKing_A_01
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Diary'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_King_ChoiceExclude_Diary'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Recipe'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_King_ChoiceExclude_Recipe'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FindDungeon_Finish'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_King_ChoiceExclude_Finish'})
    }
    EventSystemActor.Demo_WaitFrame({'Frame': 0, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'FindDungeon_Finish'}) {
        Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:DiaryFirst02'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Event16:
            Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary07'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckFlag({'FlagName': 'Get_Vagrant_BOKANGI'}) {
                    Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary08a'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        goto Event16
                      case 1:
                        Event9:
                        Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary04', 'CloseDialogOption': 0})
                        if !EventSystemActor.GeneralChoice2() {
                            Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary05', 'CloseDialogOption': 0})
                            if !EventSystemActor.GeneralChoice2() {
                                Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary06', 'IsCloseMessageDialog': False})
                                switch EventSystemActor.GeneralChoice4() {
                                  case 0:
                                    goto Event9
                                  case 1:
                                    Event1:
                                    Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0})
                                    Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary01'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0})
                                        if !EventSystemActor.GeneralChoice2() {
                                            Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary03', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
                                            switch EventSystemActor.GeneralChoice4() {
                                              case 0:
                                                goto Event1
                                              case 1:
                                                goto Event9
                                              case 2:
                                                goto Event16
                                            }
                                        }
                                    }
                                  case 2:
                                    goto Event16
                                }
                            }
                        }
                      case 2:
                        goto Event1
                    }
                } else {
                    Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary08b'})
                    if !EventSystemActor.GeneralChoice2() {
                        Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:Diary09', 'IsCloseMessageDialog': False})
                        switch EventSystemActor.GeneralChoice4() {
                          case 1:
                            goto Event16
                          case 2:
                            goto Event1
                        }
                    }
                }
            }
          case 1:
            goto Event9
          case 2:
            goto Event1
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Vagrant004_Diary', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant004_Recipe'}) {
            Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:DiaryFirst01'})
            if !EventSystemActor.GeneralChoice3() {
                goto Event9
            } else {
                goto Event1
            }
        } else {
            Obj_DiaryKing_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Obj_DiaryKing_A_01:DiaryFirst00'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event1
            }
        }
    }
}
