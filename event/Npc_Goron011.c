-------- EventFlow: Npc_Goron011 --------

Actor: Npc_Goron011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckTimeType', 'GeneralChoice2', 'GeneralChoice4', 'CheckFlag', 'RandomChoice2', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_1Comp'}) {
        switch Npc_Goron011.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
            if Npc_Goron011.IsOnInstEventFlag() {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk11'})
                Event31:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk10', 'IsOverWriteLabelActorName': False})
                Event61:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk20'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                        Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk22', 'IsCloseMessageDialog': True})
                        Event70:
                        Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk25'})
                        goto Event61
                    } else {
                        Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk21', 'IsCloseMessageDialog': True})
                        goto Event70
                    }
                  case 1:
                    Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk19', 'IsCloseMessageDialog': True})
                    goto Event70
                  case 2:
                    Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk01', 'IsOverWriteLabelActorName': False})
                }
            } else
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk07', 'IsOverWriteLabelActorName': False})
                goto Event31
              case [2, 3]:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk08'})
                goto Event31
              case [4, 5, 6, 7]:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk09'})
                goto Event31
            }
          case 10:
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_GoHome'}) {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk24'})
                goto Event31
            } else {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk12', 'IsOverWriteLabelActorName': False})
                goto Event31
            }
          case 11:
            Event60:
            if !EventSystemActor.RandomChoice2() {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk13', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk18'})
            }
        }
    } else
    switch Npc_Goron011.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        Event51:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_First'}) {
            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk17'})
            Event19:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk04', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron011_You', 'IsWaitFinish': True})
                Event68:
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_You'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_Hear'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_Home'}) {
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk16'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron011_1Comp', 'IsWaitFinish': True})
                        } else {
                            Event39:
                            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk15'})
                            goto Event19
                        }
                    } else {
                        goto Event39
                    }
                } else {
                    goto Event39
                }
              case 1:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk05', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron011_Hear', 'IsWaitFinish': True})
                goto Event68
              case 2:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk06', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron011_Home', 'IsWaitFinish': True})
                goto Event68
              case 3:
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk01', 'IsOverWriteLabelActorName': False})
            }
        } else
        if Npc_Goron011.IsOnInstEventFlag() {
            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk14'})
            Event15:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk01', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk02', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron011_First', 'IsWaitFinish': True})
                Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk03', 'IsOverWriteLabelActorName': False})
                goto Event19
            }
        } else {
            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk00', 'IsOverWriteLabelActorName': False})
            goto Event15
        }
      case 10:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron011_GoHome'}) {
            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk24'})
            goto Event51
        } else {
            Npc_Goron011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:talk12', 'IsOverWriteLabelActorName': False})
            goto Event51
        }
      case 11:
        goto Event60
    }
}

void Near() {
    if Npc_Goron011.CheckActorAction13() in [0, 1, 2, 3, 12] {
        Npc_Goron011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron011:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}
