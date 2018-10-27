-------- EventFlow: Npc_HyruleWestHatago004 --------

Actor: Npc_HyruleWestHatago004
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
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MarittaMini_BigWhales_Finish'}) {
        if Npc_HyruleWestHatago004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak01'})
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak00'})
          case [1, 2, 3]:
            if Npc_HyruleWestHatago004.IsOnInstEventFlag() {
                Event6:
                Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak02'})
            } else {
                Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak03'})
                goto Event6
            }
        }
    } else
    if Npc_HyruleWestHatago004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak06'})
    } else
    if Npc_HyruleWestHatago004.IsOnInstEventFlag() {
        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak07'})
    } else {
        Npc_HyruleWestHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago004:talk-Orak05'})
    }
}

void NearActorsTalk() {
    goto Event0
}
