-------- EventFlow: Npc_Zora006 --------

Actor: Npc_Zora006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'RandomChoice2', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora006.CheckActorAction13() {
      case 0:
        Event32:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk06', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk05', 'IsCloseMessageDialog': False})
        }
      case 1:
        goto Event32
      case 2:
        if Npc_Zora006.IsOnInstEventFlag() {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk02', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk01', 'IsCloseMessageDialog': False})
        }
      case 3:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk04', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk03', 'IsCloseMessageDialog': False})
        }
    }
}

void Ready_FukyuFlowedWife() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora006_First'}) {
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk11', 'IsCloseMessageDialog': False})
        Event44:
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk13', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'ZoraMini_FlowedWife_Activated', 'IsWaitFinish': True})
        } else {
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk12', 'IsCloseMessageDialog': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora006_First', 'IsWaitFinish': True})
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk08', 'IsCloseMessageDialog': True})
        Npc_Zora006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 1, 'IsConfront': True})
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk09', 'IsCloseMessageDialog': False})
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk10', 'IsCloseMessageDialog': False})
        goto Event44
    }
}

void Finish_FukyuFlowedWife() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora006.IsOnInstEventFlag() {
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk12', 'IsCloseMessageDialog': False})
        Event52:
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk14', 'IsCloseMessageDialog': False})
        Event53:
        switch EventSystemActor.GeneralChoice4() {
          case 1:
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk16', 'IsCloseMessageDialog': False})
            Event57:
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk18', 'IsCloseMessageDialog': False})
            goto Event53
          case 2:
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk17', 'IsCloseMessageDialog': False})
            goto Event57
          case 3:
            Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk12', 'IsCloseMessageDialog': False})
        }
    } else {
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk15', 'IsCloseMessageDialog': False})
        goto Event52
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_FlowedWife_Activated'}) {
            Event20:
            Npc_Zora006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora006:near00', 'DispFrame': 90, 'IsChecked': False})
        } else {
            Npc_Zora006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora006:near00', 'DispFrame': 300, 'IsChecked': True})
        }
    } else {
        goto Event20
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Zora006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora006_NormalFirst'}) {
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk20'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora006_NormalFirst', 'IsWaitFinish': True})
        Npc_Zora006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora006:talk19'})
    }
}
