-------- EventFlow: Npc_kokiri012 --------

Actor: Npc_kokiri012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckEquipment', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri012_Talk'}) {
        Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk001'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_kokiri012_Talk', 'IsWaitFinish': True})
        Npc_kokiri012.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk000', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False})
    }
}

void KorokMini_RodShiren_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
        Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk003', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Sword_070'}) {
            Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk004'})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkYes', 'IsWaitFinish': False, 'NoErrorCheck': False})
                Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk005', 'IsCloseMessageDialog': True})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    Npc_kokiri012.Demo_PlayASForDemo({'ASName': 'Surprised', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkWeaponShowSword', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                }

                Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk006'})
            } else {
                Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk007'})
            }
        }
    } else {
        Npc_kokiri012.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri012:Npc_kokiri012_Talk002'})
    }
}
