-------- EventFlow: Demo346_6 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_ChangeScene', 'Demo_FlagOFF', 'Demo_ChangeMiniMapScale']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble', 'Demo_RumbleLoop', 'Demo_RumbleLoopStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire[RemainsFire_Battle]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_XLinkEventFade', 'Demo_WatchCannonHit', 'Demo_XLinkEventKill']
queries: ['IsSuccessEndLastDemoAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_GoronCannonBall_YunBo
entrypoint: None()
actions: ['Demo_Delete']
queries: ['DummyQuery']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[For_YunBoCannonBall]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_FollowGoron[YunBo_Bridge]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_GoronHeroDescendentAppear', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[RemainsFire_VoDamage]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[RemainsFire_BOM]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_StopInAir', 'Demo_ReserveParashawlStart']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[RemainsFire_BOM]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[ibutsu]
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo346_6_Cannon03() {

    call InitialSetting()

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 2, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'InterpolateCount': 0.0, 'SceneName': 'C05-2', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    RemainsFire[RemainsFire_Battle].Demo_WatchCannonHit({'IsWaitFinish': True, 'WatchFrame': 160.0, 'XLinkKey': ''})
    if RemainsFire[RemainsFire_Battle].IsSuccessEndLastDemoAction() {
        RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'SLinkKey': 'HitRemainsFire', 'IsWaitFinish': True, 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Fire_Relic_DeathMT_Cannon3', 'IsWaitFinish': True})
        EventBgmCtrlTag.Demo_Stop({'FadeSec': 2.0, 'BgmName': 'RemainsFireBattleBgm', 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'SceneName': 'C01-2', 'Accept1FrameDelay': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'ActorName': 'DgnObj_GoronCannonBase_A_01'})
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Trouble', 'SoundDelay': 0, 'SLinkInst': ''})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'SceneName': 'C03-2'})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'SceneName': 'C03-3'})
        } {
            EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 20.0, 'Pattern': 3, 'IsWaitFinish': False})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'IsWaitFinish': True, 'Power': 15.0, 'Count': 3})
            EventControllerRumble.Demo_RumbleLarge({'Count': 2, 'IsWaitFinish': False})
            EventSystemActor[RemainsFire_BOM].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
            EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
            EventSystemActor[RemainsFire_BOM].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo346_6_RemainsFire_Hit_01'})
            EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 15.0, 'Pattern': 3, 'IsWaitFinish': False})
            EventControllerRumble[RemainsFire_BOM].Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 3})
            EventSystemActor[RemainsFire_BOM].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo346_6_RemainsFire_Hit_02'})
            EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 20.0, 'Pattern': 3, 'IsWaitFinish': False})
            EventSystemActor[RemainsFire_BOM].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
            EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo346_6_RemainsFire_Hit_03'})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Power': 20.0, 'Pattern': 4, 'Count': 2})
            EventSystemActor[RemainsFire_BOM].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo346_6_RemainsFire_Dmage'})
        } {
            RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_6-C03-DgnObj_IbutsuFireField_A_01-A-0', 'StartFrame': -1.0})
        } {
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Hidaruma'})
            EventSystemActor[RemainsFire_VoDamage].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Hidaruma'})
        } {
            EventSystemActor[For_YunBoCannonBall].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            FldObj_GoronCannonBall_YunBo.Demo_Delete({'IsWaitFinish': False})
        }

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Battle3rdAttack'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_StopForever_VolcanicPlume'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo114_0', 'EndFade': 1})
        EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_BattlePlaying', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'PlayerUpdateOnlyBottomComebackPos'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Bridge00'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Cannon1st'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Cannon2nd'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Cannon3nd'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_YunboStopGo'})
        EventSystemActor.Demo_ChangeMiniMapScale({'IsWaitFinish': True, 'ScaleLevel': -1})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaInAppear'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaIn'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaInAppear'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaIn'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
        EventSystemActor.Demo_ChangeScene({'StartType': -1, 'IsWaitFinish': True, 'WarpDestMapName': 'MainFieldDungeon/RemainsFire', 'EvflName': 'Demo705_0', 'EntryPointName': 'EnterRemainFire', 'WarpDestPosName': 'StartDemoEnter', 'FadeType': 0})
    } else {
        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 0.0, 'ReviseMode': 1, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True})
    }
}

void Demo346_6_Cannon02() {

    call InitialSetting()

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 2, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'InterpolateCount': 0.0, 'SceneName': 'C05-1', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    RemainsFire[RemainsFire_Battle].Demo_WatchCannonHit({'IsWaitFinish': True, 'WatchFrame': 140.0, 'XLinkKey': ''})
    if RemainsFire[RemainsFire_Battle].IsSuccessEndLastDemoAction() {
        RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'SLinkKey': 'HitRemainsFire', 'IsWaitFinish': True, 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Fire_Relic_DeathMT_Cannon2', 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'SceneName': 'C01-1', 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'ActorName': 'LookTag', 'InterpolateCount': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'SceneName': 'C02-1', 'ActorName': 'LookTag', 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'SceneName': 'C03-1', 'UniqueName': '', 'ActorName': 'LookTag', 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 20.0, 'Pattern': 3, 'IsWaitFinish': False})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'IsWaitFinish': True, 'Power': 15.0, 'Count': 3})
            EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
            EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
        } {
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Hidaruma'})
            RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_6-C02-DgnObj_IbutsuFireField_A_01-A-0', 'StartFrame': -1.0})
        } {
            EventSystemActor[RemainsFire_VoDamage].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'RemainsFire_VoDamage2', 'IsTargetDemoSLinkUser': False})
            EventControllerRumble[ibutsu].Demo_TimeSpecRumbleSmall({'Seconds': 3, 'IsWaitFinish': False, 'IsWait': False})
        } {
            EventSystemActor[For_YunBoCannonBall].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            FldObj_GoronCannonBall_YunBo.Demo_Delete({'IsWaitFinish': False})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'ActorName': 'LookTag', 'UniqueName': '', 'Accept1FrameDelay': False, 'SceneName': 'C04-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            RemainsFire[RemainsFire_Battle].Demo_VisibleOff({'IsWaitFinish': False})
            Npc_FollowGoron[YunBo_Bridge].Demo_GoronHeroDescendentAppear({'IsWaitFinish': True})
            Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'YunBo_Demo346_6_2'})
            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 3.0, 'Pattern': 3, 'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
                EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 2.0, 'Pattern': 3, 'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Pattern': 3, 'IsWaitFinish': False, 'Power': 2.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
            } {
                Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Demo346_6-C01-Npc_Goron_HeroDescendants-A-0', 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            }

            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
        }


        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2692.203125, 'Pattern1PosY': 728.2969360351562, 'Pattern1PosZ': -2365.36669921875, 'Pattern1AtX': 2695.4169921875, 'Pattern1AtY': 728.39697265625, 'Pattern1AtZ': -2369.197021484375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } {
            Npc_FollowGoron[YunBo_Bridge].Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': -40.0, 'DestinationX': 2695.4169921875, 'DestinationZ': -2369.197021484375, 'DestinationY': 726.7040405273438})
            Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': False, 'ASName': 'Act_Dizzy', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'CustomPiyoPiyo02', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }

        Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo346_6:Demo346_0_Text001', 'ASName': 'Act_Dizzy_Talk'})
        Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo346_6-C01-Npc_Goron_HeroDescendants-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo346_6:Demo346_0_Text002', 'ASName': ''})
        RemainsFire[RemainsFire_Battle].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Hidaruma'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Place3_Wait', 'StartFrame': -1.0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Battle2ndAttack'})
        Event50:
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } else {
        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 0.0, 'ReviseMode': 1, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True})
    }
}

void Demo346_6_Cannon01() {

    call InitialSetting()

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 2, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'InterpolateCount': 0.0, 'SceneName': 'C05-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    RemainsFire[RemainsFire_Battle].Demo_WatchCannonHit({'IsWaitFinish': True, 'WatchFrame': 120.0, 'XLinkKey': ''})
    if RemainsFire[RemainsFire_Battle].IsSuccessEndLastDemoAction() {
        RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'SLinkKey': 'HitRemainsFire', 'IsWaitFinish': True, 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Fire_Relic_DeathMT_Cannon1', 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 2, 'ActorName': 'LookTag', 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'InterpolateCount': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C02-0', 'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'Accept1FrameDelay': False, 'ActorName': 'LookTag', 'UniqueName': '', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'ActorName': 'LookTag', 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 20.0, 'Pattern': 3, 'IsWaitFinish': False})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'IsWaitFinish': True, 'Power': 15.0, 'Count': 3})
            EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
            EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
        } {
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Hidaruma'})
            RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_6-C01-DgnObj_IbutsuFireField_A_01-A-0', 'StartFrame': -1.0})
        } {
            EventSystemActor[RemainsFire_VoDamage].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 81})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'RemainsFire_VoDamage1', 'IsTargetDemoSLinkUser': False})
            EventControllerRumble[ibutsu].Demo_TimeSpecRumbleSmall({'Seconds': 2, 'IsWaitFinish': False, 'IsWait': False})
        } {
            EventSystemActor[For_YunBoCannonBall].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            FldObj_GoronCannonBall_YunBo.Demo_Delete({'IsWaitFinish': False})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': True, 'ActorName': 'LookTag', 'UniqueName': '', 'Accept1FrameDelay': False, 'SceneName': 'C04-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            Npc_FollowGoron[YunBo_Bridge].Demo_GoronHeroDescendentAppear({'IsWaitFinish': True})
            Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'YunBo_Demo346_6_1'})
            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Count': 1, 'Sideways': False, 'Pattern': 1, 'Power': 0.5})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 21})
                EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 2.0, 'Pattern': 3, 'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 13})
                EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Pattern': 3, 'IsWaitFinish': False, 'Power': 2.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
            } {
                Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Demo346_6-C01-Npc_Goron_HeroDescendants-A-0', 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            }

            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
        }


        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2496.27978515625, 'Pattern1PosY': 670.697265625, 'Pattern1PosZ': -2276.423583984375, 'Pattern1AtX': 2500.591552734375, 'Pattern1AtY': 669.697265625, 'Pattern1AtZ': -2278.954833984375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } {
            Npc_FollowGoron[YunBo_Bridge].Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': -59.58409881591797, 'DestinationX': 2500.592041015625, 'DestinationZ': -2278.9541015625, 'DestinationY': 667.9972534179688})
            Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': False, 'ASName': 'Act_Dizzy', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'ClothWarpMode': 1})
            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'CustomPiyoPiyo01', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        }

        Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo346_6:Demo346_0_Text000', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Dizzy_Talk'})
        RemainsFire[RemainsFire_Battle].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Hidaruma'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Place2_Wait', 'IsWaitFinish': False, 'StartFrame': -1.0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Battle1stAttack'})
        goto Event50
    } else {
        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 0.0, 'ReviseMode': 1, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True})
    }
}

void InitialSetting() {

    fork {
    } {
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    }

    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event428:
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
            GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': False})
            Event433:
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': False, 'NoFixed': False})
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
                goto Event433
            } else {
                goto Event428
            }
        }
    }
}
