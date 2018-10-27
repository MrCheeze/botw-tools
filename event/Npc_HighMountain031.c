-------- EventFlow: Npc_HighMountain031 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Reric_Now_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Finish_Npc_HighMountain032]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_006
entrypoint: None()
actions: ['Demo_ChangeEquipState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain031[Reric_Now_Npc_HighMountain031].CheckActorAction13() {
      case 0:
        Event10:
        Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_020'})
        Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 1:
        goto Event10
      case 2:
        goto Event10
      case 3:
        goto Event10
      case 4:
        goto Event10
      case 5:
        goto Event10
      case 6:
        goto Event10
      case 7:
        goto Event10
      case 8:
        Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_010'})
        Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 9:
        if Npc_HighMountain031[Reric_Now_Npc_HighMountain031].IsOnInstEventFlag() {
            Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_001'})
        } else {
            Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_000'})
        }
      case 10:
        goto Event10
      case 11:
        Npc_HighMountain031[Reric_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_030'})
      case 12:
        goto Event10
      case 13:
        goto Event10
    }
}

void Song_Together() {

    fork {
        Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain032[Brosrock_Finish_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
            Npc_Musician_006.Demo_ChangeEquipState({'IsWaitFinish': False, 'EquipState': 'Invisible'})
        }
    }

}

void Rito_BrosRock_Finish_NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Song_Together()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
        if Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].IsOnInstEventFlag() {
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_201'})
        } else {
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_200'})
        }
    } else {
        if Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].IsOnInstEventFlag() {
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_101'})
        } else {
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_100'})
        }
    }
}

void Rito_BrosRock_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
        switch Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].CheckActorAction13() {
          case 0:
            Event27:
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_110'})
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 1:
            goto Event27
          case 2:
            goto Event27
          case 3:
            goto Event27
          case 4:
            goto Event27
          case 5:
            goto Event27
          case 6:
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_210'})
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 7:
            goto Event27
          case 8:
            goto Event27
          case 9:
            goto Event27
          case 10:
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_220'})
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 11:
            Event11:
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_030'})
          case 12:
            goto Event27
          case 13:
            goto Event27
        }
    } else {
        switch Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].CheckActorAction13() {
          case 0:
            goto Event27
          case 1:
            goto Event27
          case 2:
            goto Event27
          case 3:
            goto Event27
          case 4:
            goto Event27
          case 5:
            goto Event27
          case 6:
            goto Event27
          case 7:
            goto Event27
          case 8:
            goto Event27
          case 9:
            goto Event27
          case 10:
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain031:Talk_120'})
            Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 11:
            goto Event11
          case 12:
            goto Event27
          case 13:
            goto Event27
        }
    }
}
