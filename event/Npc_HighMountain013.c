-------- EventFlow: Npc_HighMountain013 --------

Actor: Npc_HighMountain013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TalkToPlayer', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice4', 'CheckWeather', 'HasPorchItem', 'CheckPlayerState', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain025
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain013.CheckActorAction13() {
      case 0:
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk19'})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC013_First'}) {
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk17'})
            } else
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Upper'}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Lower'}) {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Armor_009_Head', 'Count': 1}) {
                        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk16'})
                    } else {
                        Event67:

                        call Hack_Hello()

                        Event7:
                        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk01'})
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk02'})
                          case 1:
                            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk08'})
                          case 2:
                            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk03'})
                          case 3:
                            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk04'})
                        }
                    }
                } else {
                    goto Event67
                }
            } else {
                goto Event67
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC013_First'})
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk00'})
            goto Event7
        }
      case [2, 3]:
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC013_First'}) {
            Event71:
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk18'})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC013_First'})
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk00'})
            goto Event71
        }
    }
}

void Near() {
    Event58:
    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_HighMountain013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:near03', 'IsChecked': False, 'DispFrame': 90})
    } else
    switch Npc_HighMountain013.CheckActorAction13() {
      case 0:
        Npc_HighMountain013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:near02', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_HighMountain013.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:near00', 'ASKeyName': 'Act_ToutingSp'})
      case 2:
        Npc_HighMountain013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Clear_RemainsWind_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC013_First'}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk17'})
        } else
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Upper'}) {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_009_Lower'}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Armor_009_Head', 'Count': 1}) {
                    Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk16'})
                } else {
                    Event53:

                    call Hack_Hello()

                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC013_First_After'}) {
                        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk06'})
                        Event94:

                        call Hack_Choice4()

                    } else {
                        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk05'})
                        Event16:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC013_First_After'})
                        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk15'})
                        goto Event94
                    }
                }
            } else {
                goto Event53
            }
        } else {
            goto Event53
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC013_First'})
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk00'})
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk14'})
        goto Event16
    }
}

void Clear_RemainsWind_Near() {
    goto Event58
}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain025.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    Npc_HighMountain025.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsIgnoreSame': True, 'ClothWarpMode': -2, 'ASName': 'Talk_Wait', 'MorphingFrame': -1.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC013_Explain'}) {
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk24'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk26'})
            Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk27'})
        } else {
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk04'})
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk25'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC013_Explain', 'IsWaitFinish': True})
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk20'})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk21', 'IsCloseMessageDialog': True})
        Npc_HighMountain013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HighMountain025', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk22', 'IsCloseMessageDialog': True})
        Npc_HighMountain025.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HighMountain013', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_HighMountain025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk23'})
    }
}

void Hack_Hello() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        if EventSystemActor.CheckTimeType() in [6, 7] {
            Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk07'})
        }
      case [1, 2, 3]:
        Npc_HighMountain013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:talk11'})
    }
}

void NearActorsNear() {
    if !EventSystemActor.RandomChoice2() {
        Npc_HighMountain013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:near04', 'IsChecked': False, 'DispFrame': 90})
    } else {
        Npc_HighMountain013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain013:near05', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Hack_Choice4() {
    goto Event7
}
