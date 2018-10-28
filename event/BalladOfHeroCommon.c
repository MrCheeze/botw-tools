-------- EventFlow: BalladOfHeroCommon --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ChangeScene', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_RestorePouchForQuest', 'Demo_WaitFrame', 'Demo_InitPouchForQuest', 'Demo_SwitchPlayerEquipment', 'Demo_IncreasePorchItem', 'Demo_CurseRRematchCount', 'Demo_SetCookItem', 'Demo_ForceSetPlayerSavePosAngle']
queries: ['CheckPlayerState', 'CheckFlag', 'CheckCurrentMap', 'GeneralChoice2', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_DisableUnequipInEvent', 'Demo_StopInAir', 'Demo_Join', 'Demo_PlayerTurnAndLookToObject', 'Demo_UpdateEquip', 'Demo_Unequip', 'Demo_ReserveParashawlStart', 'Demo_PlayerWait', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayerAirWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[Boss]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Priest_Boss_Giant[Priest_Boss_Giant]
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void PlayerWait() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': False})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -2})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        GameROMPlayer.Demo_Join({'IsWaitFinish': False})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': False, 'NoFixed': False})
    }
}

void RemainsSetFlag() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Prohibit_App_CurseR'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsBattle_CurseR'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_GenerateCurse'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_GenerateCurse'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_GenerateCurse'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_GenerateCurse'})
}

void RemainsResetFlag() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Prohibit_App_CurseR'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsBattle_CurseR'})
    EventSystemActor.Demo_RestorePouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
}

void Escape() {

    call PlayerWait()

    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWind'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) in [1, 0] {

            call RemainsResetFlag()

            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EvflName': '', 'EntryPointName': '', 'WarpDestMapName': 'MainField/B-3', 'WarpDestPosName': 'Clear_RemainsWind'})
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWater'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Finish'}) in [1, 0] {

            call RemainsResetFlag()

            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EvflName': '', 'EntryPointName': '', 'WarpDestPosName': 'Clear_RemainsWater', 'WarpDestMapName': 'MainField/H-5'})
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsFire'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) in [1, 0] {

            call RemainsResetFlag()

            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EvflName': '', 'EntryPointName': '', 'WarpDestPosName': 'Clear_RemainsFire', 'WarpDestMapName': 'MainField/H-2'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) in [1, 0] {

        call RemainsResetFlag()

        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EvflName': '', 'EntryPointName': '', 'WarpDestPosName': 'Clear_RemainsElectric', 'WarpDestMapName': 'MainField/C-7'})
    }
}

void AppearDungeon_first() {

    call Common.AirStartUP_Player()

    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce'})
}

void AppearDungeon_last() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'DemoName': 'Demo602_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo602_EPName'})
    if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': True})
    }
}

void EndLastBoss() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'DLC_BeforeDemo681_EnvRain', 'SoundDelay': 0, 'SLinkInst': ''})
    if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': True})
    }
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -15.538116455078125, 'Pattern1PosY': 6.500181198120117, 'Pattern1PosZ': 18.54351806640625, 'Pattern1AtX': -12.645721435546875, 'Pattern1AtY': 7.232500076293945, 'Pattern1AtZ': 14.1632080078125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Priest_Boss_Giant', 'StartCalcOnly': True, 'Count': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventCameraRumble.Demo_Rumble({'Pattern': 4, 'IsWaitFinish': True, 'Sideways': False, 'Power': 0.800000011920929, 'Count': 20})
        EventControllerRumble.Demo_RumbleLarge({'Count': 16, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.127716064453125, 'Pattern1PosY': 13.058110237121582, 'Pattern1PosZ': 2.226012945175171, 'Pattern1AtX': -1.0884089469909668, 'Pattern1AtY': 11.604625701904297, 'Pattern1AtZ': -2.763245105743408, 'Pattern1Fovy': 79.9999771118164, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Priest_Boss_Giant', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 140})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.3856048583984375, 'Pattern1PosY': 2.578423023223877, 'Pattern1PosZ': 4.073546886444092, 'Pattern1AtX': -2.930449962615967, 'Pattern1AtY': 5.775036811828613, 'Pattern1AtZ': 0.6325680017471313, 'Pattern1Fovy': 79.9999771118164, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Priest_Boss_Giant', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    SoundTriggerTag.Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'DLC_BeforeDemo681_EnvRain'})
    Fader.Demo_FadeOut({'Color': 0, 'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Frame': 1})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Priest_Boss_Giant[Priest_Boss_Giant].Demo_VisibleOff({'IsWaitFinish': False})
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo681_0'}) {
        EventSystemActor.Demo_CallDemo({'EntryPointName': '', 'IsWaitFinish': True, 'DemoName': 'Demo681_1', 'EndFade': 1})
        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'StartType': -1, 'WarpDestMapName': 'MainField/D-6', 'EvflName': 'Demo646_0', 'EntryPointName': 'Demo646_0_2nd', 'WarpDestPosName': 'StartPoint_Start', 'FadeType': 0})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo681_0', 'EntryPointName': '', 'IsWaitFinish': True, 'EndFade': 1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_BossField_Demo2'})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        FldObj_DownloadTerminal_A_01[Boss].Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'OffWait', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})
        FldObj_DownloadTerminal_A_01[Boss].Demo_PlayASForDemo({'ASName': 'OffWait_Skl', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeOutSec': 0.10000000149011612, 'Volume': 0.0, 'StartDelaySec': 0.0, 'ExceptGroups': 'Player', 'FadeInSec': 0.5})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo645_0', 'EntryPointName': 'Demo645_0', 'IsWaitFinish': True, 'EndFade': 1})
    }
}

void RemainsSetFlag_Wind() {
    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 0, 'CurseRType': 0, 'GameDataStringCounterName': 'CurseR_Wind_Challenge'})

    call RemainsSetFlag()

    EventSystemActor.Demo_InitPouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Sword_031'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Bow_017', 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_071_Head'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_071_Lower'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_071_Upper'})
    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_ArrowBundle_A_02', 'IsWaitFinish': True, 'Value': 10})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_BombArrow_A_02', 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Bow_040', 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Weapon_Bow_029'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Arrow': 'Obj_ArrowNormal_A_01', 'PorchItemName_Shield': 'Weapon_Shield_042', 'IsWaitFinish': True, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_ArmorHead': 'Armor_071_Head', 'PorchItemName_ArmorUpper': 'Armor_071_Upper', 'PorchItemName_ArmorLower': 'Armor_071_Lower', 'UnequipWeapon': False, 'PorchItemName_Weapon': 'Weapon_Sword_031', 'PorchItemName_Bow': 'Weapon_Bow_017', 'UnequipShield': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurseR_Wind_Challenge', 'Value': 3, 'Operator': 'LessThanOrEqualTo'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_B'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_O'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Meat_06'})
        Event93:
        GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurseR_Wind_Challenge', 'Value': 6, 'Operator': 'LessThanOrEqualTo'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_B'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_O'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Meat_06'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        goto Event93
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_B'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_O'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Meat_06'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName01': 'Animal_Insect_B', 'SetNum': 1, 'PorchItemName02': 'Item_Enemy_14', 'PorchItemName04': 'Item_PlantGet_Q', 'PorchItemName03': 'Item_Mushroom_O', 'PorchItemName05': ''})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName01': 'Animal_Insect_B', 'SetNum': 1, 'PorchItemName02': 'Item_Enemy_14', 'PorchItemName04': 'Item_PlantGet_Q', 'PorchItemName03': 'Item_Mushroom_O', 'PorchItemName05': ''})
        goto Event93
    }
}

void RemainsSetFlag_Water() {
    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 0, 'CurseRType': 3, 'GameDataStringCounterName': 'CurseR_Water_Challenge'})

    call RemainsSetFlag()

    EventSystemActor.Demo_InitPouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Spear_050', 'IsWaitFinish': True, 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Spear_049', 'Value': 2})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_062_Upper'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_062_Lower'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_062_Head'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Weapon_Bow_014'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Obj_ArrowBundle_A_02'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Arrow': 'Obj_ArrowNormal_A_01', 'PorchItemName_Weapon': 'Weapon_Spear_050', 'PorchItemName_Shield': 'Weapon_Shield_025', 'PorchItemName_Bow': 'Weapon_Bow_014', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_ArmorHead': 'Armor_062_Head', 'PorchItemName_ArmorUpper': 'Armor_062_Upper', 'PorchItemName_ArmorLower': 'Armor_062_Lower', 'UnequipBow': False, 'UnequipShield': True})
    if EventSystemActor.CheckGameDataInt({'Value': 3, 'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'CurseR_Water_Challenge'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_FishGet_A'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_E'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_E'})
        goto Event93
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 6, 'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'CurseR_Water_Challenge'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_FishGet_A'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_E'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_E'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        goto Event93
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_FishGet_A'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_E'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_E'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'SetNum': 1, 'PorchItemName02': 'Item_Material_07', 'PorchItemName03': 'Item_Material_05', 'PorchItemName04': 'Item_Material_06', 'PorchItemName01': 'Item_FishGet_K', 'PorchItemName05': ''})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName01': 'Animal_Insect_S', 'PorchItemName02': 'Item_Enemy_00', 'PorchItemName05': '', 'SetNum': 1, 'PorchItemName03': 'Animal_Insect_A', 'PorchItemName04': 'Item_Enemy_01'})
        goto Event93
    }
}

void RemainsSetFlag_Fire() {
    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 0, 'CurseRType': 2, 'GameDataStringCounterName': 'CurseR_Fire_Challenge'})

    call RemainsSetFlag()

    EventSystemActor.Demo_InitPouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Weapon_Lsword_054', 'IsWaitFinish': True, 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_011_Head'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_011_Upper'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_011_Lower'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Weapon_Bow_035'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_IceArrow_A_03', 'Value': 1})
    EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Lsword_054', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': 'Weapon_Bow_035', 'PorchItemName_Arrow': 'Obj_IceArrow_A_01', 'PorchItemName_ArmorHead': 'Armor_011_Head', 'PorchItemName_ArmorUpper': 'Armor_011_Upper', 'PorchItemName_ArmorLower': 'Armor_011_Lower'})
    if EventSystemActor.CheckGameDataInt({'Value': 3, 'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'CurseR_Fire_Challenge'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_01'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_38'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_03'})
        goto Event93
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 6, 'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'CurseR_Fire_Challenge'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_01'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_38'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_03'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        goto Event93
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_01'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_38'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Roast_03'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'SetNum': 1, 'PorchItemName01': 'Item_Meat_01', 'PorchItemName02': 'Item_Material_07', 'PorchItemName03': 'Item_Material_05', 'PorchItemName04': 'Item_Material_06', 'PorchItemName05': 'Item_PlantGet_B'})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'SetNum': 1, 'PorchItemName01': 'Animal_Insect_P', 'PorchItemName02': 'Item_Enemy_08', 'PorchItemName03': 'Item_Mushroom_M', 'PorchItemName04': 'Item_PlantGet_H', 'PorchItemName05': 'Item_FishGet_G'})
        goto Event93
    }
}

void RemainsSetFlag_Electric() {
    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 0, 'CurseRType': 1, 'GameDataStringCounterName': 'CurseR_Electric_Challenge'})

    call RemainsSetFlag()

    EventSystemActor.Demo_InitPouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_037', 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_065_Head'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_065_Upper'})
    EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Armor_065_Lower'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Sword_052', 'Value': 1})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Weapon_Shield_041'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Weapon_Lsword_055'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Arrow': 'Obj_ArrowNormal_A_01', 'PorchItemName_Bow': 'Weapon_Bow_015', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': 'Weapon_Sword_052', 'PorchItemName_Shield': 'Weapon_Shield_037', 'UnequipBow': True, 'PorchItemName_ArmorHead': 'Armor_065_Head', 'PorchItemName_ArmorUpper': 'Armor_065_Upper', 'PorchItemName_ArmorLower': 'Armor_065_Lower'})
    if EventSystemActor.CheckGameDataInt({'Value': 3, 'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'CurseR_Electric_Challenge'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_C'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_H'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Meat_01'})
        goto Event93
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 6, 'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'CurseR_Electric_Challenge'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_C'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_H'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Meat_01'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        goto Event93
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Fruit_C'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Mushroom_H'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Item_Meat_01'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': 1, 'PorchItemName': 'Animal_Insect_F'})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'SetNum': 1, 'PorchItemName01': 'Item_Meat_01', 'PorchItemName02': 'Item_Material_07', 'PorchItemName03': 'Item_Material_05', 'PorchItemName04': 'Item_Material_06', 'PorchItemName05': 'Item_PlantGet_B'})
        EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName01': 'Animal_Insect_I', 'PorchItemName02': 'Item_Enemy_03', 'PorchItemName04': '', 'PorchItemName05': '', 'SetNum': 1, 'PorchItemName03': 'Animal_Insect_R'})
        goto Event93
    }
}

void FinalTrial_LiftComplete() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Lift_Complete'})
    EventSystemActor.Demo_ForceSetPlayerSavePosAngle({'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'UniqueName': 'UnderLift', 'IsWaitFinish': True})
}

void AppearDungeon_first_forOutroBgm() {

    call Common.AirStartUP_Player()

    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'ExceptGroups': 'BgmNoSquatDuck', 'FadeOutSec': 1.5, 'FadeInSec': 2.0, 'Volume': 0.0, 'StartDelaySec': 0.0})
}
