-------- EventFlow: Npc_Hunters_Lost --------

Actor: Npc_Hunters_Lost
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangeEquipState', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void SetugenUmayadoMini_Umahonephoto_Finish_Talk() {
    switch Npc_Hunters_Lost.CheckActorAction13() {
      case [0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event0:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Hunters_Lost.CheckActorAction13() {
          case [0, 1]:
            Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_001'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_002'})
                Event5:
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_300'})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_301'})
                  case 1:
                    Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_310'})
                  case 2:
                    Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_320'})
                }
              case 1:
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_003'})
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_004'})
                goto Event5
              case 2:
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_005'})
            }
          case [2, 3]:
            Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_100'})
            goto Event5
          case [4, 5, 6, 7, 8, 9, 10, 12, 13]:
            Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_200'})
            goto Event5
          case 11:
            Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_201'})
            goto Event5
        }
      case [1, 3]:

        call AS_Memo_Ed()

        goto Event0
    }
}

void AS_Memo_Ed() {
    Npc_Hunters_Lost.Demo_PlayASForDemo({'ASName': 'Act_Memo_Ed', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Hunters_Lost.Demo_ChangeEquipState({'EquipState': 'Invisible', 'IsWaitFinish': True})
}

void Talk() {
    switch Npc_Hunters_Lost.CheckActorAction13() {
      case [0, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Event48:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_000'})
      case [1, 3]:

        call AS_Memo_Ed()

        goto Event48
      case 11:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Hunters_Lost:Talk_000_slp'})
    }
}
