-------- EventFlow: Npc_TabantaBridgeHatago003 --------

Actor: Npc_TabantaBridgeHatago003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TabantaBridgeHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Event6:
        Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk200'})
    } else
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch Npc_TabantaBridgeHatago003.CheckActorAction13() {
          case [0, 1]:
            Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk001'})
          case [2, 3]:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaBridgeHatago003_korogu'}) {
                Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk013'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TabantaBridgeHatago003_korogu', 'IsWaitFinish': True})
                Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk010'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk011'})
                } else {
                    Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk012'})
                }
            }
          case [4, 5]:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaBridgeHatago003_castle'}) {
                Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk022'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TabantaBridgeHatago003_castle', 'IsWaitFinish': True})
                Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk020'})
                Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk021'})
            }
          case 10:
            Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk201'})
          case 11:
            goto Event6
        }
      case [1, 2, 3]:
        Npc_TabantaBridgeHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:talk100'})
    }
}

void Near() {
    if !EventSystemActor.CheckWeather()
    && Npc_TabantaBridgeHatago003.CheckActorAction13() == 5 {
        Npc_TabantaBridgeHatago003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago003:near001', 'DispFrame': 90, 'IsChecked': False})
    }
}
