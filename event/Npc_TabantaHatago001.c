-------- EventFlow: Npc_TabantaHatago001 --------

Actor: Npc_TabantaHatago001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TabantaHatago001.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_Sleep'})
    } else {
        Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_06'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_03'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TabantaHatago001_Hairo', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaHatago001_Marry'}) {
                    Event12:
                    Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_09'})
                }
              case 1:
                Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_07'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TabantaHatago001_Marry', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaHatago001_Hairo'}) {
                    goto Event12
                }
              case 2:
                Event10:
                Npc_TabantaHatago001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago001:talk_08'})
            }
        } else {
            goto Event10
        }
    }
}
