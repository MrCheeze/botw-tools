-------- EventFlow: SDemo_B-7 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_SetPLStateToUnequipAndWait', 'Demo_WaitFrame']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void FrontGate() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Front_Passing'})
    EventSystemActor.Demo_CallDemo({'EntryPointName': 'Demo', 'DemoName': 'Demo378_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void PlayerReaction_and_Animal_CK() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        EventSystemActor.Demo_SetPLStateToUnequipAndWait({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'IsWaitFinish': False, 'ASName': 'Talk', 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'IsWaitFinish': True})
    } else
    ;
}

void PlayerReaction_and_Animal_CK_Demo378_0() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        EventSystemActor.Demo_SetPLStateToUnequipAndWait({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'IsWaitFinish': False, 'ASName': 'LookAroundAttention', 'ClothWarpMode': -1})
    } else
    ;
}
