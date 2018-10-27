-------- EventFlow: Npc_DungeonPriest001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FromCDunToMainField', 'Demo_SetCurrentDungeonClearFlag', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_IncreaseGameDataInt']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriest001
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {
        Npc_DungeonPriest001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_DungeonPriest001:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        Event23:

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DungeonClearSeal'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon000_SmallKey00'})
        Npc_DungeonPriest001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_DungeonPriest001:talk03', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_SetCurrentDungeonClearFlag({'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 1}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon_Clear_1'})
            Event15:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': '', 'EntryPointName': ''})
        } else {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 4}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon_Clear_4'})
                goto Event15
            } else {
                goto Event15
            }
        }
    } else {
        Npc_DungeonPriest001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_DungeonPriest001:talk04', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_DungeonPriest_First', 'IsWaitFinish': True})
        goto Event23
    }
}
