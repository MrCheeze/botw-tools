-------- EventFlow: Npc_HighMountain025 --------

Actor: Npc_HighMountain025
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckWeather', 'CheckTimeType', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain025.CheckActorAction13() {
      case 0:
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk14'})
      case 1:

        call Bare_Hello()

        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk08'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC025_Explain'}) {
                Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk03'})
                Event65:
                Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk07'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC025_Explain'})
                Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk02'})
                goto Event65
            }
          case 1:
            Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk04'})
          case 2:
            Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk05'})
        }
      case 2:
        Event48:
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk13'})
      case 3:
        goto Event48
    }
}

void Near() {
    Event39:
    switch Npc_HighMountain025.CheckActorAction13() {
      case 0:
        Event47:
        Npc_HighMountain025.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:near02', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_HighMountain025.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': 'Act_ToutingSp', 'MessageId': 'EventFlowMsg/Npc_HighMountain025:near01'})
      case 2:
        goto Event47
    }
}

void Clear_RemainsWind_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC025_ClearFirst'}) {

        call Bare_Hello()

        Event27:
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk09'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC025_ClearFirst', 'IsWaitFinish': True})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk23'})
        goto Event27
    }
}

void NearActorsNear() {
    Npc_HighMountain025.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Bare_Hello() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event30:
            Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk00'})
          case 1:
            goto Event30
          case 2:
            goto Event30
          case 3:
            goto Event30
          case 4:
            goto Event30
          case 5:
            goto Event30
          case 6:
            Event35:
            Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk01'})
          case 7:
            goto Event35
        }
      case 1:
        Event32:
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk06'})
      case 2:
        goto Event32
      case 3:
        goto Event32
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    Npc_HighMountain013.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Talk_Wait', 'MorphingFrame': -1.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC025_First'}) {
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk19', 'IsCloseMessageDialog': True})
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk20', 'IsCloseMessageDialog': True})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk21'})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC025_First'})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk15'})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk16', 'IsCloseMessageDialog': True})
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk17', 'IsCloseMessageDialog': True})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain025:talk18'})
    }
}

void Clear_RemainsWind_Near() {
    goto Event39
}
