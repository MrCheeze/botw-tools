-------- EventFlow: Npc_HutagoHatago_002 --------

Actor: Npc_HutagoHatago_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthHateru005
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HutagoHatago_002.CheckActorAction13() {
      case 0:
        Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_002:Talk_01', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 1:
        Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_002:Talk_04'})
      case 10:
        Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_002:Talk_02'})
      case 11:
        Npc_HutagoHatago_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_002:Talk_03', 'ASName': ''})
    }
}

void NearActorsTalk() {
    Event17:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor2': 'Npc_HutagoHatago_002', 'Actor1': 'Npc_SouthHateru005'})


    call Npc_SouthHateru005.meet()

}

void Near() {
    switch Npc_HutagoHatago_002.CheckActorAction13() {
      case 1:
        Event13:
        Npc_HutagoHatago_002.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HutagoHatago_002:Near_02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HutagoHatago_002.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HutagoHatago_002:Near_01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}

void NearActorsNear() {
    goto Event13
}

void HutagoHatago_Twin_Meet_Talk() {
    switch Npc_HutagoHatago_002.CheckActorAction13() {
      case 0:
        goto Event17
      case 1:
        goto Event17
      case 2:
        Event23:
        Npc_SouthHateru005.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'SeqBank': 0, 'TargetIndex': -1})
        goto Event0
      case 3:
        goto Event23
      case 4:
        goto Event23
      case 5:
        goto Event23
      case 6:
        goto Event23
      case 7:
        goto Event23
      case 8:
        goto Event23
      case 9:
        goto Event23
      case 10:
        goto Event23
      case 11:
        goto Event23
      case 12:
        goto Event23
    }
}
