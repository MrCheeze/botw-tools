-------- EventFlow: Npc_Goron033 --------

Actor: Npc_Goron033
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_AppearRupee']
queries: ['CheckRupee', 'CheckAddPorchItem', 'GeneralChoice2', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron033.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Event21:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron033_First'}) {
            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk10'})
            Event23:
            if !EventSystemActor.GeneralChoice2() {
                if !EventSystemActor.RandomChoice2() {
                    Event45:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk02'})
                    Event13:
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 60}) {
                            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {
                                if !EventSystemActor.RandomChoice2() {
                                    Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk04', 'IsCloseMessageDialog': True})
                                    Event9:
                                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -60})
                                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron033_Buy', 'IsWaitFinish': True})

                                    call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 1})

                                    Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk05', 'IsCloseMessageDialog': True})
                                    goto Event13
                                } else {
                                    Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk14'})
                                    goto Event9
                                }
                            } else {
                                Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk06'})
                                Event37:
                                EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron033_Buy', 'IsWaitFinish': True})
                            }
                        } else {
                            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk03'})
                            goto Event37
                        }
                    } else {
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron033_Buy'}) {
                            if !EventSystemActor.RandomChoice2() {
                                Event38:
                                Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk13'})
                                goto Event37
                            } else {
                                Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk00'})
                                goto Event38
                            }
                        } else {
                            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk09'})
                            goto Event37
                        }
                    }
                } else {
                    Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk01'})
                    goto Event45
                }
            } else
            switch Npc_Goron033.CheckActorAction13() {
              case [10, 12]:
                Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk09'})
              case 11:
                Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk12'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron033_First', 'IsWaitFinish': True})
            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk07'})
            if EventSystemActor.GeneralChoice2() in [0, 1] {
                Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk08'})
                goto Event23
            }
        }
      case 11:
        if Npc_Goron033.IsOnInstEventFlag() {
            goto Event21
        } else {
            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk11'})
            goto Event21
        }
    }
}

void Near() {
    Event7:
    switch Npc_Goron033.CheckActorAction13() {
      case 10:
        Npc_Goron033.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron033:near02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Goron033.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron033:near01', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        Npc_Goron033.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron033:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Clear_RemainsFire_Near() {
    goto Event7
}

void Clear_RemainsFire_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron033.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Event49:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron033_ClearFirst'}) {
            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk10'})
            goto Event23
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron033_ClearFirst'})
            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk15'})
            goto Event23
        }
      case 11:
        if Npc_Goron033.IsOnInstEventFlag() {
            goto Event49
        } else {
            Npc_Goron033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron033:talk11'})
            goto Event49
        }
    }
}
