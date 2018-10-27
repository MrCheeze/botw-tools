-------- EventFlow: Npc_HyruleWestHatago003 --------

Actor: Npc_HyruleWestHatago003
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
    Event8:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MarittaMini_BigWhales_Finish'}) {
        if Npc_HyruleWestHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui02'})
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui01'})
          case [1, 2, 3]:
            if Npc_HyruleWestHatago003.IsOnInstEventFlag() {
                Event12:
                Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui03'})
            } else {
                Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui04'})
                goto Event12
            }
        }
    } else
    if Npc_HyruleWestHatago003.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui07'})
    } else
    if Npc_HyruleWestHatago003.IsOnInstEventFlag() {
        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui08'})
    } else {
        Npc_HyruleWestHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago003:talk-Negyui06'})
    }
}

void NearActorsTalk() {
    goto Event8
}
