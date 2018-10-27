-------- EventFlow: Npc_RitoHatago003 --------

Actor: Npc_RitoHatago003
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice4', 'CheckFlag', 'GeneralChoice3', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_RitoHatago003.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event23:
            Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_10', 'IsOverWriteLabelActorName': False})
          case 1:
            goto Event23
          case 2:
            Event25:
            Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_12'})
          case 3:
            goto Event25
          case 4:
            goto Event25
          case 5:
            goto Event25
          case 6:
            goto Event25
          case 7:
            goto Event25
        }
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Activated'}) {
            Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_06', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_07', 'IsOverWriteLabelActorName': False})
              case 1:
                Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_08', 'IsOverWriteLabelActorName': False})
              case 2:
                Event8:
                Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_04', 'IsOverWriteLabelActorName': False})
            }
        } else {
            if Npc_RitoHatago003.IsOnInstEventFlag() {
                Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_09', 'IsOverWriteLabelActorName': False})
                Event5:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                  case 1:
                    Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_02', 'IsOverWriteLabelActorName': False})
                  case 2:
                    Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_03', 'IsOverWriteLabelActorName': False})
                  case 3:
                    goto Event8
                }
            } else {
                Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event5
            }
        }
      case 10:
        Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_05', 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_RitoHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago003:talk_11'})
    }
}
