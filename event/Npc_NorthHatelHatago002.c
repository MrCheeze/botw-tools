-------- EventFlow: Npc_NorthHatelHatago002 --------

Actor: Npc_NorthHatelHatago002
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather', 'GeneralChoice3', 'CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_NorthHatelHatago002.CheckActorAction13() {
      case 0:
        Event13:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_NorthHateru002_First'}) {
            Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk13'})
            Event17:
            Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk09'})
            Event18:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk14'})
                Event23:
                Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk10', 'IsCloseMessageDialog': False})
                goto Event18
              case 1:
                Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk15'})
                goto Event23
              case 2:
                Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk16', 'IsCloseMessageDialog': True})
                goto Event23
              case 3:
                Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk11', 'IsCloseMessageDialog': False})
                switch EventSystemActor.GeneralChoice4() {
                  case 2:
                    Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk12', 'IsCloseMessageDialog': False})
                  case 3:
                    Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk17'})
                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_NorthHateru002_First', 'IsWaitFinish': True})
            Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk07'})
            Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk06'})
            Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk08'})
            goto Event17
        }
      case 1:
        goto Event13
      case 10:
        goto Event13
      case 11:
        Npc_NorthHatelHatago002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago002:talk02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
