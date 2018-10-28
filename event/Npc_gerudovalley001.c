-------- EventFlow: Npc_gerudovalley001 --------

Actor: Npc_gerudovalley001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreasePorchItem', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_IncreaseRupee', 'Demo_AppearRupee']
queries: ['GeneralChoice2', 'GeneralChoice3', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_gerudovalley001.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_gerudovalley001:Talk_02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_Sleep'})
        Npc_gerudovalley001.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    } else
    if !Npc_gerudovalley001.IsOnInstEventFlag() {
        Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_gerudovalley001:Talk_06'})
    }
    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_gerudovalley001:Talk_0001', 'IsCloseMessageDialog': True})
    if !EventSystemActor.GeneralChoice2() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        Event72:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 55}) {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_059', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_MushroomGet_D', 'Value': -55})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': 330})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 55}) {
                Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_gerudovalley001:Talk_20', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_gerudovalley001:Talk_21', 'IsCloseMessageDialog': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    goto Event72
                } else {
                    Event76:
                    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_063'})
                }
            } else {
                goto Event76
            }
        } else
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 35}) {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_057'})
        } else
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 25}) {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_056'})
        } else
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 15}) {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_054'})
        } else
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 1}) {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_053'})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_062'})
        }
    } else {
        Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_gerudovalley001:Talk_22'})
    }
}
