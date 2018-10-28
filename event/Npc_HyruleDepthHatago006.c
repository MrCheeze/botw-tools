-------- EventFlow: Npc_HyruleDepthHatago006 --------

Actor: Npc_HyruleDepthHatago006
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        Event0:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event23:
        Npc_HyruleDepthHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:MasterTalk05', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True})
      case [1, 2, 3]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HyruleDepthHatago006_InUmayado'}) {
            goto Event0
        } else
        if Npc_HyruleDepthHatago006.IsArriveAnchorForRain() {
            goto Event0
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 2, 'Arg_Greeting': 'NotAndNot'})

        }
        goto Event23
    }
}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        Event22:
        Npc_HyruleDepthHatago006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
      case [1, 2, 3]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HyruleDepthHatago006_InUmayado'}) {
            goto Event22
        } else
        if Npc_HyruleDepthHatago006.IsArriveAnchorForRain() {
            goto Event22
        } else {
            Npc_HyruleDepthHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago006:Near01'})
        }
    }
}
