-------- EventFlow: FindDungeon --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WarpPlayer', 'Demo_AutoSave', 'Demo_AdvanceQuest', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_PlayerWait', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk', 'Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Npc_Hyrule_KingSoul
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'RotX': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'RotY': -10.0, 'PosZ': 1964.0, 'PosX': -811.3284301757812, 'IsGrounding': False, 'PosY': 263.5}

void Demo154_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce'})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    }

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo154_1', 'EndFade': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King001_Appear'})
    Event91:
    Dm_Npc_Hyrule_KingSoul.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [-811.7899780273438, 265.05999755859375, 1966.6600341796875]})
    Dm_Npc_Hyrule_KingSoul.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Dm_Npc_Hyrule_KingSoul.Demo_TrigNullASPlay({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Wait', 'ASSlot': 0, 'SequenceBank': 0})
    Dm_Npc_Hyrule_KingSoul.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Ghost', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})

    fork {
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'Npc_King', 'WarpDestMapName': 'E-6'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -811.584228515625, 'Pattern1AtX': -811.3758544921875, 'Pattern1AtZ': 1964.1787109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Pattern1PosZ': 1965.4599609375, 'Pattern1PosY': 265.49420166015625, 'Pattern1AtY': 265.794189453125, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Dm_Npc_Hyrule_KingSoul.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 2})
    Dm_Npc_Hyrule_KingSoul.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FindDungeon:Npc_King001_00', 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -814.6657104492188, 'Pattern1PosY': 265.39093017578125, 'Pattern1PosZ': 1969.549072265625, 'Pattern1AtX': -811.636474609375, 'Pattern1AtY': 265.1913146972656, 'Pattern1AtZ': 1965.7860107421875, 'Pattern1Fovy': 26.856021881103516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PlayerStole2'})

    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_AdvanceQuest({'QuestName': 'FindDungeon', 'ForceRunTelop': True, 'StepName': '', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Start'})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Dm_Npc_Hyrule_KingSoul.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/FindDungeon:Npc_King001_01', 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -825.6644287109375, 'Pattern1PosY': 270.1294250488281, 'Pattern1PosZ': 1990.75, 'Pattern1AtX': -817.1399536132812, 'Pattern1AtY': 268.5527648925781, 'Pattern1AtZ': 1985.2293701171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -811.584228515625, 'Pattern1AtX': -811.3758544921875, 'Pattern1AtZ': 1964.1787109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Pattern1PosZ': 1965.4599609375, 'Pattern1PosY': 265.49420166015625, 'Pattern1AtY': 265.794189453125, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    Dm_Npc_Hyrule_KingSoul.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FindDungeon:Npc_King001_02', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -814.6657104492188, 'Pattern1PosY': 265.39093017578125, 'Pattern1PosZ': 1969.549072265625, 'Pattern1AtX': -811.636474609375, 'Pattern1AtY': 265.1913146972656, 'Pattern1AtZ': 1965.7860107421875, 'Pattern1Fovy': 26.856021881103516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

    fork {
        Dm_Npc_Hyrule_KingSoul.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FindDungeon:Npc_King001_03', 'ASName': 'Wait_FadeOut_King'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 150.0, 'Cushion': 0.30000001192092896, 'CollisionInterpolateSkip': False, 'Pattern1PosX': 2.5556640625, 'Pattern1PosY': 1.799988031387329, 'Pattern1PosZ': -4.643065929412842, 'Pattern1AtY': 1.799988031387329, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 0})
    } {
        Dm_Npc_Hyrule_KingSoul.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Disappear', 'SLinkKey': 'Demo_Disappear', 'IsTargetDemoSLinkUser': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King001_Disappear'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GanonQuest_Activated'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_Impa_Activated'})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Npc_King001_Appear() {
    goto Event91
}
