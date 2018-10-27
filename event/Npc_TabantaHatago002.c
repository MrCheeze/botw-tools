-------- EventFlow: Npc_TabantaHatago002 --------

Actor: Npc_TabantaHatago002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_TabantaHatago002.CheckActorAction13() {
      case 0:
        Event12:
        Npc_TabantaHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago002:talk_2000', 'ASName': ''})
        Npc_TabantaHatago002.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_TabantaHatago003_Talk'}) {
            Npc_TabantaHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago002:talk_5000'})
        } else {
            if Npc_TabantaHatago002.IsOnInstEventFlag() {
                Event8:
                Npc_TabantaHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago002:talk_0003'})
            } else {
                Npc_TabantaHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago002:talk_0001'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_TabantaHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago002:talk_0002'})
                } else {
                    goto Event8
                }
            }
        }
      case 2:
        goto Event12
      case 3:
        goto Event12
      case 4:
        goto Event12
      case 5:
        Npc_TabantaHatago002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago002:talk_1000', 'ASName': 'Act_Cleaning_Floor'})
        Npc_TabantaHatago002.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    }
}
