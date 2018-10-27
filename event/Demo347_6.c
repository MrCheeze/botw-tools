-------- EventFlow: Demo347_6 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_IncreasePorchItem', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_WarpPlayerToDestination']
queries: ['GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis051[Rouge_R]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_WarpToAnchor', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff', 'Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_WarpToAnchor', 'Demo_LookAtObject', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtTheFront', 'Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic02]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Helmet_Equipping() {
    RemainsElectric[Thunder_Relic02].Demo_Join({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C00-0', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': -1.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    call R_ResetPos()

    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -3870.1298828125, 'DestinationY': 166.6699981689453, 'DestinationZ': 2949.7099609375, 'IsWaitFinish': True, 'DirectionY': 135.0})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'ClothWarpMode': 1, 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0})
    Npc_oasis003.Demo_TurnAndLookToObject({'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'IsConfront': False, 'ObjectId': 3, 'TurnDirection': 80.0, 'IsValid': False})
    Npc_oasis003.Demo_LookAtObject({'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'ObjectId': 0, 'IsValid': True, 'TurnDirection': 0.0})
    Npc_oasis003.Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'SeqBank': 0, 'ClothWarpMode': -1, 'MorphingFrame': 15.0, 'ASName': 'Talk_Rest', 'TargetIndex': -1, 'IsIgnoreSame': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_109', 'IsBecomingSpeaker': True, 'ASName': ''})
    }

    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_101', 'ASName': ''})
    Npc_oasis003.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    Npc_oasis003.Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -1, 'ASName': 'Talk_Wait', 'MorphingFrame': 15.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_118', 'ASName': ''})
    GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActor': 1, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': True, 'SceneName': 'C08-0', 'EndFrame': 180.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_oasis003.Demo_WarpToAnchor({'DestinationX': -3846.1201171875, 'DestinationY': 148.97999572753906, 'DestinationZ': 2942.7900390625, 'IsWaitFinish': True, 'DirectionY': 0.0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electlic_Relic_raimeinokabuto'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call R_Armor_ResetPos()

        Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'Talk_GdQueen_Armor_115_Head_Wait', 'ClothWarpMode': 1})
        EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'IsWaitFinish': True, 'PorchItemName': 'Obj_Armor_115_Head'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'EndFrame': 5.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_oasis051', 'UniqueName': 'Rouge_R', 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsTurnToLookAtPos': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Npc_oasis051[Rouge_R].Demo_TurnAndLookToObject({'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'GameROMPlayer', 'TurnDirection': -100.0, 'IsConfront': True, 'IsValid': True, 'ObjectId': 3, 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'IsWaitFinish': False, 'ASName': 'Talk', 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -1, 'ASName': 'Talk_GdQueen_Armor_115_Head', 'IsWaitFinish': False, 'MorphingFrame': 15.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_oasis051[Rouge_R].Demo_Talk({'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_103', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': 'Talk_GdQueen_Armor_115_Head'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'Volume': 0.0, 'ExceptGroups': '', 'FadeInSec': 5.0, 'StartDelaySec': 0.0, 'FadeOutSec': 1.7999999523162842})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo309_2', 'EntryPointName': 'HerosMemoryStart_Gerudo'})
    Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'Wait', 'ClothWarpMode': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis051', 'UniqueName': 'Rouge_R', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_oasis051[Rouge_R].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_117', 'ASName': 'Talk'})
    }

    Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_102', 'ASName': 'Talk'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_105', 'ASName': 'Talk_GdQueen_Shy'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'ASName': 'Talk_GdQueen_Armor_115_Head_Slip', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        Event99:
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0', 'IsWaitFinish': False, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': False, 'ASName': 'Talk', 'MorphingFrame': 0.0, 'ClothWarpMode': -1, 'IsWaitFinish': False})
        Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_106', 'ASName': 'Talk_GdQueen_Armor_115_Head'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'EndFrame': 140.0, 'SceneName': 'C04-0', 'StartFrame': 135.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_112', 'ASName': 'Talk_GdQueen_Armor_115_Head'})
        if !EventSystemActor.GeneralChoice2() {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_104', 'ASName': 'Talk_GdQueen_Armor_115_Head'})
            Event111:
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'SceneName': 'C06-0', 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_108', 'ASName': 'Talk'})
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 1.0})
            Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_107', 'ASName': ''})
            Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'ASName': 'Talk_GdQueen_Armor_115_Head_Slip', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_GdQueen_Armor_115_Head', 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_113'})
            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'ReduceOff'})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Electric_Relic', 'StepName': 'Strategy', 'ForceRunTelop': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo347_2RougeGenFlg'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.040038999170064926, 'Pattern1PosY': 1.8621519804000854, 'Pattern1PosZ': -3.210448980331421, 'Pattern1AtX': 0.03418000042438507, 'Pattern1AtY': 1.6693880558013916, 'Pattern1AtZ': -0.03979500010609627, 'Pattern1Fovy': 50.00001907348633, 'AtAppendMode': 2, 'PosAppendMode': 2, 'TargetActor1': 1, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -3870.1298828125, 'DestinationY': 166.6699981689453, 'DestinationZ': 2949.7099609375, 'DirectionY': 100.0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        } else {
            Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_111', 'ASName': 'Talk_GdQueen_Armor_115_Head'})
            goto Event111
        }
    } else {
        Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_114', 'ASName': 'Talk'})
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
        Npc_oasis051[Rouge_R].Demo_PlayASForDemo({'ASName': 'Talk_GdQueen_Armor_115_Head_Slip', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        Npc_oasis051[Rouge_R].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_115', 'ASName': 'Talk_GdQueen_Armor_115_Head'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        goto Event99
    }
}

void R_ResetPos() {
    Npc_oasis003.Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationY': 166.6667022705078, 'DirectionY': 135.21800231933594, 'DestinationX': -3869.949951171875, 'DestinationZ': 2948.419921875})
}

void R_Armor_ResetPos() {
    Npc_oasis051[Rouge_R].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationY': 166.6699981689453, 'DirectionY': 30.0, 'DestinationX': -3868.090087890625, 'DestinationZ': 2949.669921875})
}

void R_Armor_UnHide() {
    Npc_oasis051[Rouge_R].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationY': 166.6699981689453, 'DirectionY': 30.0, 'DestinationX': -3868.090087890625, 'DestinationZ': 2949.669921875})
}

void R_Armor_Hide() {
    Npc_oasis051[Rouge_R].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationY': 166.6699981689453, 'DirectionY': 135.21800231933594, 'DestinationX': -3869.949951171875, 'DestinationZ': 2948.419921875})
}
