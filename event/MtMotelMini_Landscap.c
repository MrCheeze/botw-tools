-------- EventFlow: MtMotelMini_Landscape --------

Actor: Npc_DeathMt001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_DeathMt001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_DeathMt001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Talk_00', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_DeathMt001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    Npc_DeathMt001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Talk_01', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
    Event8:
    Npc_DeathMt001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Talk_02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
    Npc_DeathMt001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Talk_03', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'MtMotelMini_Landscape_Activated'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': '', 'StepName': ''})
        if EventSystemActor.CheckFlag({'FlagName': 'Open_Dungeon000'}) {
            EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
            Npc_DeathMt001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Talk_04', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingS', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_DeathMt001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Talk_05'})
        }
    }
}

void Finished_Npc_DeathMt001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event8
}

void Ready_Npc_DeathMt001_Near() {
    Npc_DeathMt001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/MtMotelMini_Landscape:Ready_Npc_DeathMt001_Near', 'DispFrame': 300})
}
