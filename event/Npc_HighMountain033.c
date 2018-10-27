-------- EventFlow: Npc_HighMountain033 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Finish_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Brsrock_Finish_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Finish_Npc_HighMountain032]
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

    if Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_030'})
    } else {
        if Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].IsOnInstEventFlag() {
            Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_003'})
        } else {
            Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_000'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_001'})
            } else {
                Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_002'})
            }
        }
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
        Npc_HighMountain031[Brosrock_Finish_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Song_Together', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
            Npc_Musician_006.Demo_ChangeEquipState({'IsWaitFinish': False, 'EquipState': 'Invisible'})
        }
    }

}

void Rito_BrosRock_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
        switch Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].CheckActorAction13() {
          case 0:
            Event64:
            Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_101'})
          case 1:
            goto Event64
          case 2:
            goto Event64
          case 3:
            goto Event64
          case 4:
            goto Event64
          case 5:
            goto Event64
          case 6:
            Event20:
            Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_210'})
            Event22:
            Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 7:
            goto Event64
          case 8:
            goto Event64
          case 9:
            goto Event64
          case 10:
            Event21:
            Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_220'})
            goto Event22
          case 11:
            Event23:
            Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_030'})
          case 12:
            goto Event64
          case 13:
            goto Event64
        }
    } else {
        switch Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].CheckActorAction13() {
          case 0:
            goto Event64
          case 1:
            goto Event64
          case 2:
            goto Event64
          case 3:
            goto Event64
          case 4:
            goto Event64
          case 5:
            goto Event64
          case 6:
            goto Event20
          case 7:
            goto Event64
          case 8:
            goto Event64
          case 9:
            goto Event64
          case 10:
            goto Event21
          case 11:
            goto Event23
          case 12:
            goto Event64
          case 13:
            goto Event64
        }
    }
}

void Rito_BrosRock_Finish_NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Song_Together()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_Come'}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 120, 'GameDataIntName': 'DungeonClearCounter'}) {
            if Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].IsOnInstEventFlag() {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_301'})
            } else {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_300'})
            }
        } else {
            if Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].IsOnInstEventFlag() {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_201'})
            } else {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_200'})
            }
        }
    } else {
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 120, 'GameDataIntName': 'DungeonClearCounter'}) {
            if Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].IsOnInstEventFlag() {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_301'})
            } else {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_300'})
            }
        } else {
            if Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].IsOnInstEventFlag() {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_101'})
            } else {
                Npc_HighMountain033[Brosrock_Finish_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk_100'})
            }
        }
    }
}
