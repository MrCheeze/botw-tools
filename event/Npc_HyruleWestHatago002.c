-------- EventFlow: Npc_HyruleWestHatago002 --------

Actor: Npc_HyruleWestHatago002
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event12:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MarittaMini_BigWhales_Finish'}) {
        if Npc_HyruleWestHatago002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo02'})
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo01'})
          case [1, 2, 3]:
            if !Npc_HyruleWestHatago002.IsOnInstEventFlag() {
                Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo04'})
            }
            Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo03'})
        }
    } else
    if Npc_HyruleWestHatago002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo07'})
    } else
    if Npc_HyruleWestHatago002.IsOnInstEventFlag() {
        Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo08'})
    } else {
        Npc_HyruleWestHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago002:talk-Gamyo06'})
    }
}

void NearActorsTalk() {
    goto Event12
}
