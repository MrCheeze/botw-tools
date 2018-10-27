-------- EventFlow: Npc_FaronWoods003 --------

Actor: Npc_FaronWoods003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods003_IsTalked'}) {
        Event17:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event10:
            Npc_FaronWoods003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods003:talk00'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_FaronWoods003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods003:talk02'})
            } else {
                Npc_FaronWoods003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods003:talk01'})
            }
          case 1:
            goto Event10
          case 2:
            goto Event10
          case 3:
            Npc_FaronWoods003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods003:talk03'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FaronWoods003_IsTalked', 'IsWaitFinish': True})
        goto Event17
    }
}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 1:
        Event16:
        if !Npc_FaronWoods003.IsArriveAnchorForRain() {
            Npc_FaronWoods003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods003:near00'})
        }
      case 2:
        goto Event16
      case 3:
        if !Npc_FaronWoods003.IsArriveAnchorForRain() {
            Npc_FaronWoods003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods003:near01'})
        }
    }
}
