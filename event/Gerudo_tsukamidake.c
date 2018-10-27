-------- EventFlow: Gerudo_tsukamidake --------

Actor: Npc_gerudovalley001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag', 'Demo_TalkASync']
queries: ['CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_WaitFrame']
queries: ['HasPorchItem', 'GeneralChoice2', 'GeneralChoice3', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_gerudovalley001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_gerudovalley001.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Event16:
        Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_Sleep', 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_1000'})
        Npc_gerudovalley001.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    } else {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_011', 'ASName': ''})
            Event35:
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_002', 'ASName': ''})
            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_tsukamidake_Activated', 'IsWaitFinish': True})
        } else {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_001', 'ASName': ''})
            goto Event35
        }
    }
}

void Finish_Npc_gerudovalley001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_gerudovalley001.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        goto Event16
    } else {
        if Npc_gerudovalley001.IsOnInstEventFlag() {
            Event50:
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_050', 'IsCloseMessageDialog': True})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 55}) {
                    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_051'})
                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_MushroomGet_D', 'Value': -55})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_tsukamidake_Finish'})
                    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_052'})
                } else {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 35}) {
                        Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_057'})
                    } else {
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 25}) {
                            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_056'})
                        } else {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 15}) {
                                Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_054'})
                            } else {
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 1}) {
                                    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_053'})
                                } else {
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                    Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_062'})
                                }
                            }
                        }
                    }
                }
              case 1:
                Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_055'})
                Event63:
                Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_061'})
              case 2:
                goto Event63
            }
        } else {
            Npc_gerudovalley001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Talk_060'})
            goto Event50
        }
    }
}

void Ready_Npc_gerudovalley001_Near() {
    if !Npc_gerudovalley001.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Npc_gerudovalley001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Near01', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Finish_Npc_gerudovalley001_Near() {
    if !Npc_gerudovalley001.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_D', 'Count': 55}) {
            Npc_gerudovalley001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Near01', 'DispFrame': 300, 'IsChecked': True})
        } else {
            Npc_gerudovalley001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_tsukamidake:Near01', 'DispFrame': 90, 'IsChecked': False})
        }
    }
}
