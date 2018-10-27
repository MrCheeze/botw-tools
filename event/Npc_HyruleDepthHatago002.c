-------- EventFlow: Npc_HyruleDepthHatago002 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'GeneralChoice2', 'CheckTime', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HyruleDepthHatago002
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TalkToPlayer']
queries: ['CheckActorAction13', 'IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyruleDepthHatago002.CheckActorAction13() {
      case [0, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event8:
            Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk00'})
            if !EventSystemActor.GeneralChoice2() {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk01'})
                  case [1, 2, 3]:
                    Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk04'})
                }
            } else {
                Event11:
                Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk02'})
            }
          case [1, 2, 3]:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_HyruleDepthHatago002_InUmayado'}) {
                goto Event8
            } else {
                Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk03'})
            }
        }
      case 1:
        goto Event8
      case 2:
        goto Event11
      case [3, 10]:
        Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk05'})
        goto Event11
      case 11:
        Npc_HyruleDepthHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Talk06'})
    }
}

void Near() {
    switch Npc_HyruleDepthHatago002.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event4:
            Npc_HyruleDepthHatago002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near00', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Event22:
            if Npc_HyruleDepthHatago002.IsArriveAnchorForRain() {
                Npc_HyruleDepthHatago002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near_RunRain00', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_HyruleDepthHatago002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near_RunRain01', 'IsChecked': False, 'DispFrame': 90})
            }
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckTime({'Hour': 17, 'ConditionType': 'ge', 'Minute': 0}) {
                if EventSystemActor.CheckTime({'Hour': 18, 'ConditionType': 'le', 'Minute': 0}) {
                    Npc_HyruleDepthHatago002.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near01', 'ASKeyName': 'Act_Touting_Speechballon'})
                } else {
                    Npc_HyruleDepthHatago002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near02', 'IsChecked': False, 'DispFrame': 90})
                }
            } else {
                goto Event4
            }
          case [1, 2, 3]:
            goto Event22
        }
      case [2, 10]:
        Npc_HyruleDepthHatago002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near_Sleep01', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        goto Event4
      case 11:
        Npc_HyruleDepthHatago002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago002:Near_Sleep00', 'IsChecked': False, 'DispFrame': 90})
    }
}
