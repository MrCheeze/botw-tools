-------- EventFlow: Npc_Goron015 --------

Actor: Npc_Goron015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['CheckTimeType', 'CheckPlayerState', 'GeneralChoice3', 'RandomChoice2', 'CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call PikkeHello()

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron015_First'}) {
        Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk08', 'IsOverWriteLabelActorName': False})
        Event2:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk09', 'IsOverWriteLabelActorName': False})
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk13', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk10', 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk06', 'IsOverWriteLabelActorName': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron015_First', 'IsWaitFinish': True})
        Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk04'})
        Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk12'})
        goto Event2
    }
}

void Near() {
    Event29:
    switch Npc_Goron015.CheckActorAction13() {
      case 0:
        Event28:
        Npc_Goron015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:near00', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        goto Event28
      case 2:
        goto Event28
      case 3:
        goto Event28
      case 4:
        goto Event28
      case 5:
        goto Event28
      case 6:
        goto Event28
      case 7:
        goto Event28
      case 8:
        goto Event28
      case 9:
        goto Event28
      case 10:
        Npc_Goron015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:near01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Goron015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:near02', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        goto Event28
      case 13:
        goto Event28
    }
}

void PikkeHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron015.CheckActorAction13() {
      case 0:
        Event6:
        if Npc_Goron015.IsOnInstEventFlag() {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk11'})
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk03', 'IsOverWriteLabelActorName': False})
            } else {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event8:
                    Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk00', 'IsOverWriteLabelActorName': False})
                  case 1:
                    goto Event8
                  case 2:
                    Event9:
                    Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk01', 'IsOverWriteLabelActorName': False})
                  case 3:
                    goto Event9
                  case 4:
                    goto Event9
                  case 5:
                    goto Event9
                  case 6:
                    Event10:
                    Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk02', 'IsOverWriteLabelActorName': False})
                  case 7:
                    goto Event10
                }
            }
        }
      case 1:
        goto Event6
      case 2:
        goto Event6
      case 3:
        goto Event6
      case 4:
        goto Event6
      case 5:
        goto Event6
      case 6:
        goto Event6
      case 7:
        goto Event6
      case 8:
        goto Event6
      case 9:
        goto Event6
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk16', 'IsOverWriteLabelActorName': False, 'ASName': ''})
            Event35:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk06', 'IsOverWriteLabelActorName': False})
            goto Event35
        }
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk15', 'IsOverWriteLabelActorName': False})
            goto Event35
        } else {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk14'})
            goto Event35
        }
      case 12:
        goto Event6
      case 13:
        goto Event6
    }
}

void Clear_RemainsFire_Talk() {

    call PikkeHello()

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron015_ClearFirst'}) {
        Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk21'})
        Event44:
        switch EventSystemActor.GeneralChoice4() {
          case 2:
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk18'})
          case 3:
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk19'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron015_ClearFirst', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron015_First'}) {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk20'})
            Event45:
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk17'})
            goto Event44
        } else {
            Npc_Goron015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron015:talk07'})
            goto Event45
        }
    }
}

void Clear_RemainsFire_Near() {
    goto Event29
}
