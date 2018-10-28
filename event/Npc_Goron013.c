-------- EventFlow: Npc_Goron013 --------

Actor: Npc_Goron013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: ['GeneralChoice3', 'CheckFlag', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron013.CheckActorAction13() {
      case 0:
        if Npc_Goron013.IsOnInstEventFlag() {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk12'})
        } else {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk11'})
        }
      case [1, 4, 5]:
        if Npc_Goron013.IsOnInstEventFlag() {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk05'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk06'})
                Event36:
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk00'})
              case 1:
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk16'})
                goto Event36
              case 2:
                Event38:
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk20'})
            }
        } else {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk01'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk02'})
                goto Event36
              case 1:
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk16'})
                goto Event36
              case 2:
                goto Event38
            }
        }
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk14'})
        } else {
            Npc_Goron013.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk13', 'IsCloseMessageDialog': False, 'IsWaitFinish': True})
        }
      case 3:
        if Npc_Goron013.IsOnInstEventFlag() {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk22'})
        } else {
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk19'})
        }
        Event41:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk02'})
            Npc_Goron013.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk21', 'IsWaitFinish': True})
            Event54:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk26'})
            goto Event41
          case 1:
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk16'})
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk25'})
                goto Event54
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Activated'}) {
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk27'})
                goto Event54
            } else {
                Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk23'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk24'})
                }
                goto Event54
            }
          case 2:
            Npc_Goron013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron013:talk20'})
        }
    }
}

void Near() {
    if Npc_Goron013.CheckActorAction13() == 2 {
        Npc_Goron013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron013:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
