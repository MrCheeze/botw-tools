-------- EventFlow: Npc_ZoraGoron_001 --------

Actor: Npc_ZoraGoron_001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice4', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_ZoraGoron001_First'}) {
        if Npc_ZoraGoron_001.IsOnInstEventFlag() {
            Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk00'})
            Event6:
            Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk04'})
            Event7:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk10'})
                Event15:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk11', 'IsCloseMessageDialog': False})
                goto Event7
              case 1:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk09', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_ZoraGoron001_Stone', 'IsWaitFinish': True})
                goto Event15
              case 2:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk06'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_ZoraGoron001_DeathMt', 'IsWaitFinish': True})
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk08', 'IsCloseMessageDialog': True})
                    goto Event15
                  case 1:
                    Event11:
                    Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk07', 'IsCloseMessageDialog': True})
                    goto Event15
                  case 2:
                    goto Event11
                  case 3:
                    goto Event11
                }
              case 3:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk05'})
            }
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk12'})
                goto Event6
              case 1:
                Event21:
                Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk13'})
                goto Event6
              case 2:
                goto Event21
              case 3:
                goto Event21
            }
        }
    } else {
        Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk00'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_ZoraGoron001_First', 'IsWaitFinish': True})
        Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk02'})
        Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk03'})
        Npc_ZoraGoron_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ZoraGoron_001:talk01'})
    }
}
