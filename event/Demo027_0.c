-------- EventFlow: Demo027_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_WarpPlayerToDestination']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: PlayerStole2_Vagrant
entrypoint: None()
actions: ['Demo_EventBind', 'Demo_VisibleOff', 'Demo_TrigNullASPlay']
queries: []
params: {'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsGrounding': True}

Actor: Npc_King_Parasail002
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail004
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail005
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail002[Demo027_0(Self)]
entrypoint: Demo027_0(Self)
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: None

void Demo027_1() {

    call Demo027_0({'Self': ActorIdentifier(name="Npc_King_Parasail002")})

}

void Demo027_2() {
    PlayerStole2_Vagrant.Demo_EventBind({'IsContinueBind': True, 'NodeName': 'Weapon_R', 'IsWaitFinish': False, 'UniqueName': '', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'Npc_King_Parasail002'})
    PlayerStole2_Vagrant.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Open', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})
    EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'E-6', 'WarpDestPosName': 'Demo027_2', 'IsWaitFinish': False})
    GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_King_Parasail002', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

    call Demo027_0({'Self': ActorIdentifier(name="Npc_King_Parasail002")})

}

void Demo027_3() {

    call Demo027_0({'Self': ActorIdentifier(name="Npc_King_Parasail002")})

}

void Demo027_4() {
    PlayerStole2_Vagrant.Demo_EventBind({'IsContinueBind': True, 'NodeName': 'Weapon_R', 'IsWaitFinish': False, 'UniqueName': '', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'Npc_King_Parasail004'})
    PlayerStole2_Vagrant.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Open', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})

    call Para4_WarpPlayer()


    call Demo027_0({'Self': ActorIdentifier(name="Npc_King_Parasail004")})

}

void Demo027_5() {
    PlayerStole2_Vagrant.Demo_EventBind({'IsContinueBind': True, 'NodeName': 'Weapon_R', 'IsWaitFinish': False, 'UniqueName': '', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'Npc_King_Parasail005'})
    PlayerStole2_Vagrant.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Open', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})

    call Para5_WarpPlayer()


    call Demo027_0({'Self': ActorIdentifier(name="Npc_King_Parasail005")})

}

void Demo027_0() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'SceneName': 'C01-0', 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'BgCheck': True, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_King_Parasail002[Demo027_0(Self)].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo_Appearance_Para', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'ParasailVagrantAppearBgm', 'IsWaitFinish': True})
    } {
        Npc_King_Parasail002[Demo027_0(Self)].Demo_XLinkEventCreate({'ELinkKey': '', 'SLinkKey': 'Demo_ParasailEquip', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'Frame': 67, 'IsWaitFinish': True})
        Npc_King_Parasail002[Demo027_0(Self)].Demo_XLinkEventFade({'ELinkKey': '', 'SLinkKey': 'Demo_ParasailEquip', 'IsWaitFinish': True})
        Npc_King_Parasail002[Demo027_0(Self)].Demo_XLinkEventCreate({'ELinkKey': '', 'SLinkKey': 'Demo_ParasailUnEquip', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False})
        PlayerStole2_Vagrant.Demo_VisibleOff({'IsWaitFinish': False})
    }

}

void Para4_WarpPlayer() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Aonuma'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DestinationX': -664.5951538085938, 'DestinationY': 173.09690856933594, 'DestinationZ': 1519.8734130859375, 'DirectionY': 51.566001892089844})
        Event102:
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_King_Parasail004', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Fujibayashi'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DirectionY': -90.0, 'DestinationX': -457.7188415527344, 'DestinationY': 180.02589416503906, 'DestinationZ': 1990.182373046875})
        goto Event102
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Iwamoto'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DirectionY': -180.0, 'DestinationX': -925.0302734375, 'DestinationY': 274.1745910644531, 'DestinationZ': 2310.201904296875})
        goto Event102
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Tominaga'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DirectionY': 106.56189727783203, 'DestinationX': -1425.76123046875, 'DestinationY': 337.5956115722656, 'DestinationZ': 1987.843017578125})
        goto Event102
    }
}

void Para5_WarpPlayer() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Aonuma'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DestinationX': -664.5951538085938, 'DestinationY': 173.09690856933594, 'DestinationZ': 1519.8734130859375, 'DirectionY': 51.566001892089844})
        Event111:
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_King_Parasail005', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Fujibayashi'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DirectionY': -90.0, 'DestinationX': -457.7188415527344, 'DestinationY': 180.02589416503906, 'DestinationZ': 1990.182373046875})
        goto Event111
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Iwamoto'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DirectionY': -180.0, 'DestinationX': -925.0302734375, 'DestinationY': 274.1745910644531, 'DestinationZ': 2310.201904296875})
        goto Event111
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Tominaga'}) {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DirectionY': 106.56189727783203, 'DestinationX': -1425.76123046875, 'DestinationY': 337.5956115722656, 'DestinationZ': 1987.843017578125})
        goto Event111
    }
}
