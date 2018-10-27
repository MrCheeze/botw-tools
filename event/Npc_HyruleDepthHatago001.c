-------- EventFlow: Npc_HyruleDepthHatago001 --------

Actor: Npc_HyruleDepthHatago001
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['CheckActorAction13', 'IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyruleDepthHatago001.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk03'})
          case [1, 2, 3]:
            Event27:
            Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk05'})
        }
      case 1:
        if Npc_HyruleDepthHatago001.IsArriveAnchorForRain() {
            Event28:
            Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk06'})
        } else {
            Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk04'})
        }
      case 10:
        Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk07'})
      case 11:
        Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk08'})
      case 12:
        if Npc_HyruleDepthHatago001.IsArriveAnchorForRain() {
            goto Event28
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyruleDepthHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk01', 'IsCloseMessageDialog': True})
            } else {
                Npc_HyruleDepthHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Talk02'})
            }
          case [1, 2, 3]:
            goto Event27
        }
    }
}

void Near() {
    switch Npc_HyruleDepthHatago001.CheckActorAction13() {
      case 0:
        Event32:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyruleDepthHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Near00', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Event12:
            Npc_HyruleDepthHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Near_RunRain00', 'IsChecked': False, 'DispFrame': 90})
        }
      case 1:
        if Npc_HyruleDepthHatago001.IsArriveAnchorForRain() {
            goto Event12
        } else {
            Npc_HyruleDepthHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Near01', 'IsChecked': False, 'DispFrame': 90})
        }
      case 10:
        Npc_HyruleDepthHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Near_Sleep01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HyruleDepthHatago001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago001:Near_Sleep00', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        if Npc_HyruleDepthHatago001.IsArriveAnchorForRain() {
            goto Event12
        } else
        goto Event32
    }
}
