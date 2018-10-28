-------- EventFlow: Npc_HighMountain035 --------

Actor: Npc_HighMountain036
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: ['CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Reric_Finish_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031]
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

    switch Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 10, 12, 13]:
        Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_020'})
        Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 8:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_010'})
            Event16:
            Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case [1, 2, 3]:
            Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_003'})
            goto Event16
        }
      case 9:
        if Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].IsOnInstEventFlag() {
            Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_003'})
        } else {
            Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_000'})
            if Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'})
            && Npc_HighMountain036.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                Npc_HighMountain036.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HighMountain035', 'UniqueName': 'Reric_Finish_Npc_HighMountain035', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_001'})
                Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_002'})
            }
        }
      case 11:
        Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_030'})
        Npc_HighMountain035[Reric_Finish_Npc_HighMountain035].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    }
}

void Rito_BrosRock_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
        switch Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 12, 13]:
            Event31:
            Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_202'})
          case 6:
            Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_201'})
          case 11:
            Event19:
            Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_030'})
            Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
        }
    } else
    switch Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 7, 8, 9, 12, 13]:
        goto Event31
      case 6:
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_110'})
      case 10:
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_120'})
      case 11:
        goto Event19
    }
}

void Song_Together() {

    fork {
        Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
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
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_200'})
    } else
    if Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].IsOnInstEventFlag() {
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_101'})
    } else {
        Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain035:Talk_100', 'ASName': ''})
    }
}
