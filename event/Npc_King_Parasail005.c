-------- EventFlow: Npc_King_Parasail005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_AutoSave', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_XLinkEventCreate', 'Demo_ChangeEquipState', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_BustUpFront', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Sword_500
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Appear() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'StopWithFade'})

    call Npc_King_Common.InitParasail()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': False, 'FlagName': 'Npc_King_Parasail005_Appear'})
    Npc_King_Parasail005.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo027_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo027_5', 'EndFade': 0})
    Npc_King_Parasail005.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_King_Parasail005.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_King_Parasail005")})

    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_King_Parasail005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail005:Appear01', 'IsOverWriteLabelActorName': False})
    Npc_King_Parasail005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail005:Appear02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_BustUpFront({'Count': 0.0, 'IsWaitFinish': True, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'StartCalcOnly': True, 'UseImaginaryLineAngle': True, 'NearSide': True, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224], 'Lat': 5.0})
    Npc_King_Parasail005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail005:Appear03', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

    fork {
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_King_Parasail005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-812.0, 263.0, 1968.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        Npc_King_Parasail005.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail005:Appear04', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Point'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 2, 'TurnPosition': [-812.0, 263.0, 1968.0]})
    }

    Npc_King_Parasail005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_King_Parasail005', 'IsValid': True})

    fork {
        Weapon_Sword_500.Demo_PlayASForDemo({'ASName': 'Weapon_FadeOut', 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
    } {
        Npc_King_Parasail005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail005:Appear05', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait_FadeOut'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 150.0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosX': -2.161010980606079, 'Pattern1PosY': 2.483124017715454, 'Pattern1PosZ': -5.32080078125, 'Pattern1AtY': 1.799988031387329, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_King_Parasail005.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Disappear', 'SLinkKey': 'Demo_Disappear', 'IsTargetDemoSLinkUser': False})
    } {
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FindDungeon_AllClear'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}
