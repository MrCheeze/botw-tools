-------- EventFlow: Npc_LakeSideHatago006 --------

Actor: Npc_LakeSideHatago006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case 0:
        Event8:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago006:talk03'})
          case 1:
            Event10:
            Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago006:talk02'})
          case 2:
            goto Event10
          case 3:
            goto Event10
        }
      case 1:
        goto Event8
      case 2:
        goto Event8
      case 3:
        goto Event8
      case 4:
        goto Event8
      case 5:
        goto Event8
      case 6:
        goto Event8
      case 7:
        goto Event8
      case 8:
        goto Event8
      case 9:
        goto Event8
      case 10:
        Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_LakeSideHatago006:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago006:talk01'})
      case 12:
        goto Event8
      case 13:
        goto Event8
    }
}

void Near() {
    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case 0:
        Event4:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event5:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near05'})
          case 2:
            goto Event5
          case 3:
            goto Event5
        }
      case 1:
        goto Event4
      case 2:
        goto Event4
      case 3:
        goto Event4
      case 4:
        goto Event4
      case 5:
        goto Event4
      case 6:
        goto Event4
      case 7:
        goto Event4
      case 8:
        goto Event4
      case 9:
        goto Event4
      case 10:
        Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near06'})
      case 11:
        Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near03'})
      case 12:
        goto Event4
      case 13:
        goto Event4
    }
}
