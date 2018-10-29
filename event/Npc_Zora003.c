-------- EventFlow: Npc_Zora003 --------

Actor: Npc_Zora003
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_DeleteAllIceMakerForDemo', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalkKingZora({'Self': ActorIdentifier(name="Npc_Zora003"), 'Arg_Turn': 2})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora003_Talk'}) {
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk08'})
        } else {
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk00', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk01', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk02', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Surprised'})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk04', 'ASName': 'Talk_Sad', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk05', 'ASName': 'Talk_Sad'})
                    Event47:
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk07'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora003_Talk'})
                } else {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk06', 'ASName': 'Talk_Sad'})
                    goto Event47
                }
            }
        }
    } else {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk100'})
    }
}
