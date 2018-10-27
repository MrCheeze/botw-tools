-------- EventFlow: Npc_TabantaBridgeHatago004 --------

Actor: Npc_TabantaBridgeHatago004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag', 'Demo_ChangePosture', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_TabantaBridgeHatago004.CheckActorAction13() {
      case [0, 2]:
        Event8:
        Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk01', 'ASName': ''})
        Event25:
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo128_0'}) {
            Event23:
            Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk02', 'IsCloseMessageDialog': False})
            Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk03'})
            if !Npc_TabantaBridgeHatago004.IsOnInstEventFlag() {
                Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk04'})
            }
        }
      case [1, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk00', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Farmer', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo128_0'}) {
                if Npc_TabantaBridgeHatago004.IsOnInstEventFlag() {
                    Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Farmer', 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk05'})
                } else {
                    Npc_TabantaBridgeHatago004.Demo_ChangePosture({'Posture': 'Stand', 'IsWaitFinish': True})
                    Npc_TabantaBridgeHatago004.Demo_LookAtObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk02', 'IsCloseMessageDialog': True})
                    Npc_TabantaBridgeHatago004.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsConfront': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk03'})
                    Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk04', 'ASName': ''})
                }
            } else {
                goto Event8
            }
          case [1, 2, 3]:
            Event3:
            Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk70'})
            Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk71'})
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo128_0'}) {
                goto Event23
            }
        }
      case 3:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk40'})
          case [1, 2, 3]:
            goto Event3
        }
      case 10:
        Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk61'})
        goto Event25
      case 11:
        Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk60'})
        Npc_TabantaBridgeHatago004.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk50'})
        Npc_TabantaBridgeHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago004:talk55'})
        goto Event25
      case [1, 2, 3]:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        goto Event3
    }
}

void NearActorsNear() {
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}
