-------- EventFlow: Npc_HyrulePlain006 --------

Actor: Npc_HyrulePlain006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather', 'GeneralChoice3', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HyrulePlain006_First'}) {
        if Npc_HyrulePlain006.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk02', 'IsOverWriteLabelActorName': False})
        }
        Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk04'})
        Event22:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk08'})
            Event26:
            Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk11'})
          case 1:
            Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk10'})
            goto Event26
          case 2:
            Event24:
            Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk09'})
        }
    } else {
        Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HyrulePlain006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:talk01'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HyrulePlain006_First', 'IsWaitFinish': True})
            goto Event22
        } else {
            goto Event24
        }
    }
}

void Near() {
    if Npc_HyrulePlain006.CheckActorAction13() == 11 {
        Npc_HyrulePlain006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain006:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}
