-------- EventFlow: Demo041_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_Bind', 'Demo_TrigNullASPlay', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Item_Conductor]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DownloadTerminal_A_01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[Demo041(FldObj_Terminal_A_01)]
entrypoint: Demo041(FldObj_Terminal_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_OnWaitRevival']
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[DownloadTermial_Activate(FldObj_DownloadTerminal_A_01)]
entrypoint: DownloadTermial_Activate(FldObj_DownloadTerminal_A_01)
actions: ['Demo_TrigNullASPlay', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[DripCatch(FldObj_DownloadTerminal_A_01)]
entrypoint: DripCatch(FldObj_DownloadTerminal_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: FldObj_DownloadTerminal_A_01[SheikPadSetOff(FldObj_DownloadTerminal_A_01)]
entrypoint: SheikPadSetOff(FldObj_DownloadTerminal_A_01)
actions: ['Demo_PlayASForDemo', 'Demo_OnWaitRevival']
queries: []
params: None

void Demo041() {
    FldObj_Terminal_A_01[Demo041(FldObj_Terminal_A_01)].Demo_XLinkEventCreate({'Key': 'TerminalOpen', 'Target': 'B', 'IsWaitFinish': False, 'ELinkKey': 'TerminalOpen', 'SLinkKey': 'TerminalOpen', 'IsTargetDemoSLinkUser': False})
    FldObj_Terminal_A_01[Demo041(FldObj_Terminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Activate', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    FldObj_Terminal_A_01[Demo041(FldObj_Terminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    FldObj_Terminal_A_01[Demo041(FldObj_Terminal_A_01)].Demo_OnWaitRevival({'IsWaitFinish': False})
}

void DownloadTermial_Activate() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    fork {
        FldObj_DownloadTerminal_A_01[DownloadTermial_Activate(FldObj_DownloadTerminal_A_01)].Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Activate', 'IsIgnoreSame': True})
    } {
        FldObj_DownloadTerminal_A_01[DownloadTermial_Activate(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Activate_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor[DownloadTerminal_A_01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 88})
        FldObj_DownloadTerminal_A_01[DownloadTermial_Activate(FldObj_DownloadTerminal_A_01)].Demo_XLinkEventCreate({'Key': 'Set', 'Target': 'B', 'IsWaitFinish': True, 'ELinkKey': 'Set', 'SLinkKey': 'Set', 'IsTargetDemoSLinkUser': False})
    } {
        Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'ActorName': 'ActorName', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'UniqueName': 'SheikerStoneTarget_UniqueName'})
        EventSystemActor[Item_Conductor].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 86})
        Item_Conductor.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Set', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void DripCatch() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    FldObj_DownloadTerminal_A_01[DripCatch(FldObj_DownloadTerminal_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': False, 'Key': 'DripCatch', 'Target': 'B', 'ELinkKey': 'DripCatch', 'SLinkKey': 'DripCatch', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})

    fork {
        FldObj_DownloadTerminal_A_01[DripCatch(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'ToActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        FldObj_DownloadTerminal_A_01[DripCatch(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Item_Conductor.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ReadyToOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

}

void SheikPadSetOff() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadSetOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        FldObj_DownloadTerminal_A_01[SheikPadSetOff(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'GetOffStone_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        FldObj_DownloadTerminal_A_01[SheikPadSetOff(FldObj_DownloadTerminal_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ToActivatedWait_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {

        fork {
            Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'ShiekerStoneBindTargetActorName', 'UniqueName': 'ShiekerStoneBindTargetUniqueName'})
        } {
            Item_Conductor.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Off', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': True})
        }

    }

    FldObj_DownloadTerminal_A_01[SheikPadSetOff(FldObj_DownloadTerminal_A_01)].Demo_OnWaitRevival({'IsWaitFinish': False})
}
