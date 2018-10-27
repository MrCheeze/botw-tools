-------- EventFlow: Npc_HyrulePlain005 --------

Actor: Npc_HyrulePlain005
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'CheckTimeType', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyrulePlain005.CheckActorAction13() {
      case 0:
        Event22:
        if Npc_HyrulePlain005.IsOnInstEventFlag() {
            Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk11'})
            Event25:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk06'})
              case 1:
                Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk07'})
              case 2:
                Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk12'})
              case 3:
                Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk05'})
            }
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event19:
                    Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk08'})
                    Event6:
                    Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk01'})
                    Event13:
                    Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk03'})
                    Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk04'})
                    goto Event25
                  case 1:
                    goto Event19
                  case 2:
                    Event20:
                    Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk09'})
                    goto Event6
                  case 3:
                    goto Event20
                  case 4:
                    Event21:
                    Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk10'})
                    goto Event6
                  case 5:
                    goto Event21
                  case 6:
                    goto Event21
                  case 7:
                    goto Event21
                }
              case 1:
                Event9:
                Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk00'})
                goto Event6
              case 2:
                goto Event9
              case 3:
                goto Event9
            }
        }
      case 1:
        goto Event22
      case 2:
        goto Event22
      case 3:
        Npc_HyrulePlain005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain005:talk02'})
        goto Event13
      case 4:
        goto Event22
      case 5:
        goto Event22
      case 6:
        goto Event22
      case 7:
        goto Event22
      case 8:
        goto Event22
      case 9:
        goto Event22
      case 10:
        goto Event22
      case 11:
        goto Event22
      case 12:
        goto Event22
      case 13:
        goto Event22
    }
}
