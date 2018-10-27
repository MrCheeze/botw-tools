-------- EventFlow: Npc_TabantaBridgeHatago001 --------

Actor: Npc_TabantaBridgeHatago001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: ['CheckWeather', 'GeneralChoice4', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_TabantaBridgeHatago001.CheckActorAction13() {
      case [0, 2, 4, 6, 8, 9, 10, 11, 12, 13]:
        Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk005'})
        Event8:
        Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk100'})
        Event7:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon021'}) {
                Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk102'})
                Event21:
                Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk141'})
                goto Event7
            } else {
                Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk101', 'IsCloseMessageDialog': True})
                goto Event21
            }
          case 1:
            Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk111', 'IsCloseMessageDialog': True})
            goto Event21
          case 2:
            Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk121'})
            if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Activated'}) {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                goto Event21
            } else {
                Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk122'})
                goto Event21
            }
          case 3:
            Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk131'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk132'})
            }
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk000'})
            goto Event8
          case [1, 2, 3]:
            Event17:
            Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk004'})
            goto Event8
        }
      case 3:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk001'})
            goto Event8
          case [1, 2, 3]:
            goto Event17
        }
      case 5:
        Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk002'})
        goto Event8
      case 7:
        Npc_TabantaBridgeHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:talk003'})
        goto Event8
    }
}
