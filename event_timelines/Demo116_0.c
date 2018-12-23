-------- Event timeline: Demo116_0 --------
actors: 11
clips: 187
oneshots: 0
cuts: 22
duration: 4036.0
subtimelines: ['Demo116_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C02
start time: 0.0
x4: 0
params: (none)

Cut: C06
start time: 180.0
x4: 0
params: (none)

Cut: C08
start time: 600.0
x4: 0
params: (none)

Cut: C09
start time: 840.0
x4: 0
params: (none)

Cut: C10
start time: 1115.0
x4: 0
params: (none)

Cut: C11
start time: 1235.0
x4: 0
params: (none)

Cut: C14
start time: 1505.0
x4: 0
params: (none)

Cut: C17
start time: 1595.0
x4: 0
params: (none)

Cut: C18
start time: 1685.0
x4: 0
params: (none)

Cut: C19
start time: 1865.0
x4: 0
params: (none)

Cut: C21
start time: 2135.0
x4: 0
params: (none)

Cut: C23
start time: 2265.0
x4: 0
params: (none)

Cut: C24
start time: 2370.0
x4: 0
params: (none)

Cut: C25
start time: 2640.0
x4: 0
params: (none)

Cut: C26
start time: 2800.0
x4: 0
params: (none)

Cut: C27
start time: 2875.0
x4: 0
params: (none)

Cut: C28
start time: 2935.0
x4: 0
params: (none)

Cut: C29
start time: 3162.0
x4: 0
params: (none)

Cut: C31
start time: 3487.0
x4: 0
params: (none)

Cut: C32
start time: 3562.0
x4: 0
params: (none)

Cut: C33
start time: 3727.0
x4: 0
params: (none)

Cut: C34
start time: 3841.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Sun_A_01[0]
x36: 1
actions: ['Demo_SunMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Moon_A_01[0]
x36: 1
actions: ['Demo_MoonMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[0]
x36: 5
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventSetFogDirect', 'Demo_SetYfog', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: TerrainCalcCenterTag[0]
x36: 1
actions: ['Demo_TerrainCalcCenter']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_OverwriteNear', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsFire[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Npc_Goron_Hero[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Goron020_2[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#15, xc=0)
               duration: 4036.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#16, xc=0)
               duration: 4036.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: -11.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#39, xc=1)
               duration: 4036.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.12200000137090683, WindDirY: 0.0, WindDirZ: 0.03999999910593033,
                 WindPower: 4.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#40, xc=2)
               duration: 4036.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#41, xc=3)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2199999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E WorldManagerControl[0] - Demo_SetYfog (#63, xc=4)
               duration: 180.0
               {IsWaitFinish: true, YfogRatio: 0.6000000238418579}
[      0.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#66, xc=0)
               duration: 180.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2338.0, 897.0, -2567.0]
               type: 0
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#86, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#108, xc=1)
               duration: 180.0
               {IsWaitFinish: true, Near: 3.0}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#121, xc=2)
               duration: 180.0
               {FocusDistEnd: 455.0, FocusDistStart: 455.0, IsWaitFinish: true}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    180.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=0)
[    180.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#41, xc=3)
[    180.0] L WorldManagerControl[0] - Demo_SetYfog (#63, xc=4)
[    180.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#66, xc=0)
[    180.0] L GameRomCamera[0] - Demo_CameraAnim (#86, xc=0)
[    180.0] L GameRomCamera[0] - Demo_OverwriteNear (#108, xc=1)
[    180.0] L GameRomCamera[0] - Demo_FocusDistSetting (#121, xc=2)
[    180.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=0)
               duration: 420.0
               {IsWaitFinish: true, angleY: 160.0}
[    180.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#42, xc=3)
               duration: 420.0
               {Far: 0.0, FarUse: false, FogRatio: 0.0, InstantSW: true, IsWaitFinish: true, Near: 0.0, NearUse: false}
[    180.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#67, xc=0)
               duration: 1325.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2416.0, 967.0, -2596.0]
               type: 0
[    180.0] E GameRomCamera[0] - Demo_CameraAnim (#87, xc=0)
               duration: 420.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    180.0] E GameRomCamera[0] - Demo_OverwriteNear (#109, xc=1)
               duration: 935.0
               {IsWaitFinish: true, Near: 1.0}
[    180.0] E GameRomCamera[0] - Demo_FocusDistSetting (#122, xc=2)
               duration: 420.0
               {FocusDistEnd: 50.0, FocusDistStart: 50.0, IsWaitFinish: true}
[    180.0] E RemainsFire[0] - Demo_PlayASForTimeline (#145, xc=0)
               duration: 420.0
               {ASName: C06-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    180.0] E RemainsFire[0] - Demo_PlayASForTimeline (#163, xc=1)
               duration: 3856.0
               {ASName: AfterClear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    208.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#77, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    233.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#77, xc=0)
[    337.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#78, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    362.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#78, xc=0)
[    575.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#79, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    600.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=0)
[    600.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#42, xc=3)
[    600.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#79, xc=0)
[    600.0] L GameRomCamera[0] - Demo_CameraAnim (#87, xc=0)
[    600.0] L GameRomCamera[0] - Demo_FocusDistSetting (#122, xc=2)
[    600.0] L RemainsFire[0] - Demo_PlayASForTimeline (#145, xc=0)
[    600.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=0)
               duration: 240.0
               {IsWaitFinish: true, angleY: 160.0}
[    600.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#43, xc=3)
               duration: 240.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    600.0] E GameRomCamera[0] - Demo_CameraAnim (#88, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    600.0] E GameRomCamera[0] - Demo_FocusDistSetting (#123, xc=2)
               duration: 240.0
               {FocusDistEnd: 67.0, FocusDistStart: 67.0, IsWaitFinish: true}
[    600.0] E RemainsFire[0] - Demo_PlayASForTimeline (#146, xc=0)
               duration: 240.0
               {ASName: C08-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    702.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#80, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    727.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#80, xc=0)
[    796.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#81, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    821.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#81, xc=0)
[    840.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=0)
[    840.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#43, xc=3)
[    840.0] L GameRomCamera[0] - Demo_CameraAnim (#88, xc=0)
[    840.0] L GameRomCamera[0] - Demo_FocusDistSetting (#123, xc=2)
[    840.0] L RemainsFire[0] - Demo_PlayASForTimeline (#146, xc=0)
[    840.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=0)
               duration: 275.0
               {IsWaitFinish: true, angleY: 104.0}
[    840.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#44, xc=3)
               duration: 275.0
               {Far: 0.0, FarUse: false, FogRatio: 0.07999999821186066, InstantSW: true, IsWaitFinish: true,
                 Near: -80.0, NearUse: true}
[    840.0] E WorldManagerControl[0] - Demo_SetYfog (#64, xc=4)
               duration: 275.0
               {IsWaitFinish: true, YfogRatio: 0.4000000059604645}
[    840.0] E GameRomCamera[0] - Demo_CameraAnim (#89, xc=0)
               duration: 275.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C09-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    840.0] E GameRomCamera[0] - Demo_FocusDistSetting (#124, xc=2)
               duration: 275.0
               {FocusDistEnd: 38.0, FocusDistStart: 38.0, IsWaitFinish: true}
[    840.0] E RemainsFire[0] - Demo_PlayASForTimeline (#147, xc=0)
               duration: 275.0
               {ASName: C09-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    911.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#82, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    931.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#82, xc=0)
[   1013.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#83, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[   1033.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#83, xc=0)
[   1115.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=0)
[   1115.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#44, xc=3)
[   1115.0] L WorldManagerControl[0] - Demo_SetYfog (#64, xc=4)
[   1115.0] L GameRomCamera[0] - Demo_CameraAnim (#89, xc=0)
[   1115.0] L GameRomCamera[0] - Demo_OverwriteNear (#109, xc=1)
[   1115.0] L GameRomCamera[0] - Demo_FocusDistSetting (#124, xc=2)
[   1115.0] L RemainsFire[0] - Demo_PlayASForTimeline (#147, xc=0)
[   1115.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#21, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: 176.0}
[   1115.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#45, xc=3)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23999999463558197, InstantSW: true, IsWaitFinish: true,
                 Near: -23.0, NearUse: true}
[   1115.0] E GameRomCamera[0] - Demo_CameraAnim (#90, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C10-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1115.0] E GameRomCamera[0] - Demo_OverwriteNear (#110, xc=1)
               duration: 120.0
               {IsWaitFinish: true, Near: 3.0}
[   1115.0] E GameRomCamera[0] - Demo_FocusDistSetting (#125, xc=2)
               duration: 120.0
               {FocusDistEnd: 86.0, FocusDistStart: 86.0, IsWaitFinish: true}
[   1115.0] E RemainsFire[0] - Demo_PlayASForTimeline (#148, xc=0)
               duration: 120.0
               {ASName: C10-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1115.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#179, xc=0)
               duration: 120.0
               {ASName: C10-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1235.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#21, xc=0)
[   1235.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#45, xc=3)
[   1235.0] L GameRomCamera[0] - Demo_CameraAnim (#90, xc=0)
[   1235.0] L GameRomCamera[0] - Demo_OverwriteNear (#110, xc=1)
[   1235.0] L GameRomCamera[0] - Demo_FocusDistSetting (#125, xc=2)
[   1235.0] L RemainsFire[0] - Demo_PlayASForTimeline (#148, xc=0)
[   1235.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#179, xc=0)
[   1235.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#22, xc=0)
               duration: 270.0
               {IsWaitFinish: true, angleY: 160.0}
[   1235.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#46, xc=3)
               duration: 270.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1235.0] E GameRomCamera[0] - Demo_CameraAnim (#91, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1235.0] E GameRomCamera[0] - Demo_OverwriteNear (#111, xc=1)
               duration: 260.0
               {IsWaitFinish: true, Near: 200.0}
[   1235.0] E GameRomCamera[0] - Demo_FocusDistSetting (#126, xc=2)
               duration: 270.0
               {FocusDistEnd: 230.0, FocusDistStart: 230.0, IsWaitFinish: true}
[   1235.0] E RemainsFire[0] - Demo_PlayASForTimeline (#149, xc=0)
               duration: 270.0
               {ASName: C11-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1411.0] E EventControllerRumble[0] - Demo_RumbleSmall (#84, xc=0)
               duration: 64.0
               {Count: 10, IsWaitFinish: true}
[   1475.0] L EventControllerRumble[0] - Demo_RumbleSmall (#84, xc=0)
[   1491.0] E EventControllerRumble[0] - Demo_RumbleLarge (#85, xc=0)
               duration: 30.0
               {Count: 2, IsWaitFinish: true}
[   1495.0] L GameRomCamera[0] - Demo_OverwriteNear (#111, xc=1)
[   1495.0] E GameRomCamera[0] - Demo_OverwriteNear (#112, xc=1)
               duration: 10.0
               {IsWaitFinish: true, Near: 3.0}
[   1505.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#22, xc=0)
[   1505.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#46, xc=3)
[   1505.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#67, xc=0)
[   1505.0] L GameRomCamera[0] - Demo_CameraAnim (#91, xc=0)
[   1505.0] L GameRomCamera[0] - Demo_OverwriteNear (#112, xc=1)
[   1505.0] L GameRomCamera[0] - Demo_FocusDistSetting (#126, xc=2)
[   1505.0] L RemainsFire[0] - Demo_PlayASForTimeline (#149, xc=0)
[   1505.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#23, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: 117.0}
[   1505.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#47, xc=3)
               duration: 90.0
               {Far: 0.0, FarUse: false, FogRatio: 0.07999999821186066, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1505.0] E WorldManagerControl[0] - Demo_SetYfog (#65, xc=4)
               duration: 90.0
               {IsWaitFinish: true, YfogRatio: 0.3799999952316284}
[   1505.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#68, xc=0)
               duration: 90.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-11.0, 316.0, -1180.0]
               type: 0
[   1505.0] E GameRomCamera[0] - Demo_CameraAnim (#92, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 480.0, SceneName: C14-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1505.0] E GameRomCamera[0] - Demo_OverwriteNear (#113, xc=1)
               duration: 760.0
               {IsWaitFinish: true, Near: 1.0}
[   1505.0] E GameRomCamera[0] - Demo_FocusDistSetting (#127, xc=2)
               duration: 90.0
               {FocusDistEnd: 2690.0, FocusDistStart: 2690.0, IsWaitFinish: true}
[   1505.0] E RemainsFire[0] - Demo_PlayASForTimeline (#150, xc=0)
               duration: 90.0
               {ASName: C14-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1521.0] L EventControllerRumble[0] - Demo_RumbleLarge (#85, xc=0)
[   1595.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#23, xc=0)
[   1595.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#47, xc=3)
[   1595.0] L WorldManagerControl[0] - Demo_SetYfog (#65, xc=4)
[   1595.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#68, xc=0)
[   1595.0] L GameRomCamera[0] - Demo_CameraAnim (#92, xc=0)
[   1595.0] L GameRomCamera[0] - Demo_FocusDistSetting (#127, xc=2)
[   1595.0] L RemainsFire[0] - Demo_PlayASForTimeline (#150, xc=0)
[   1595.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#24, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: 160.0}
[   1595.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#48, xc=3)
               duration: 90.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1595.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#69, xc=0)
               duration: 670.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2415.0, 990.0, -2560.0]
               type: 0
[   1595.0] E GameRomCamera[0] - Demo_CameraAnim (#93, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 120.0, SceneName: C17-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1595.0] E GameRomCamera[0] - Demo_FocusDistSetting (#128, xc=2)
               duration: 90.0
               {FocusDistEnd: 124.0, FocusDistStart: 124.0, IsWaitFinish: true}
[   1595.0] E RemainsFire[0] - Demo_PlayASForTimeline (#151, xc=0)
               duration: 90.0
               {ASName: C17-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1614.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
               duration: 205.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo116_0_Text006}
[   1685.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#24, xc=0)
[   1685.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#48, xc=3)
[   1685.0] L GameRomCamera[0] - Demo_CameraAnim (#93, xc=0)
[   1685.0] L GameRomCamera[0] - Demo_FocusDistSetting (#128, xc=2)
[   1685.0] L RemainsFire[0] - Demo_PlayASForTimeline (#151, xc=0)
[   1685.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#25, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: 160.0}
[   1685.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#49, xc=3)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1685.0] E GameRomCamera[0] - Demo_CameraAnim (#94, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C18-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1685.0] E GameRomCamera[0] - Demo_FocusDistSetting (#129, xc=2)
               duration: 180.0
               {FocusDistEnd: 22.0, FocusDistStart: 22.0, IsWaitFinish: true}
[   1685.0] E RemainsFire[0] - Demo_PlayASForTimeline (#152, xc=0)
               duration: 180.0
               {ASName: C18-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1819.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
[   1865.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#25, xc=0)
[   1865.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#49, xc=3)
[   1865.0] L GameRomCamera[0] - Demo_CameraAnim (#94, xc=0)
[   1865.0] L GameRomCamera[0] - Demo_FocusDistSetting (#129, xc=2)
[   1865.0] L RemainsFire[0] - Demo_PlayASForTimeline (#152, xc=0)
[   1865.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#26, xc=0)
               duration: 270.0
               {IsWaitFinish: true, angleY: 160.0}
[   1865.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#50, xc=3)
               duration: 270.0
               {Far: 0.0, FarUse: false, FogRatio: 0.10000000149011612, InstantSW: true, IsWaitFinish: true,
                 Near: -50.0, NearUse: true}
[   1865.0] E GameRomCamera[0] - Demo_CameraAnim (#95, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C19-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1865.0] E GameRomCamera[0] - Demo_FocusDistSetting (#130, xc=2)
               duration: 270.0
               {FocusDistEnd: 144.0, FocusDistStart: 144.0, IsWaitFinish: true}
[   1865.0] E RemainsFire[0] - Demo_PlayASForTimeline (#153, xc=0)
               duration: 270.0
               {ASName: C19-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1865.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#164, xc=0)
               duration: 270.0
               {ASName: C19-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1865.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#174, xc=1)
               duration: 775.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1879.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
               duration: 226.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo116_0_Text007}
[   2105.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
[   2135.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#26, xc=0)
[   2135.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#50, xc=3)
[   2135.0] L GameRomCamera[0] - Demo_CameraAnim (#95, xc=0)
[   2135.0] L GameRomCamera[0] - Demo_FocusDistSetting (#130, xc=2)
[   2135.0] L RemainsFire[0] - Demo_PlayASForTimeline (#153, xc=0)
[   2135.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#164, xc=0)
[   2135.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#27, xc=0)
               duration: 130.0
               {IsWaitFinish: true, angleY: -230.0}
[   2135.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#51, xc=3)
               duration: 130.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[   2135.0] E GameRomCamera[0] - Demo_CameraAnim (#96, xc=0)
               duration: 130.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C21-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2135.0] E GameRomCamera[0] - Demo_FocusDistSetting (#131, xc=2)
               duration: 130.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[   2135.0] E RemainsFire[0] - Demo_PlayASForTimeline (#154, xc=0)
               duration: 130.0
               {ASName: C21-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2135.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#165, xc=0)
               duration: 130.0
               {ASName: C21-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2186.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#4, xc=0)
               duration: 295.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo116_0_Text003}
[   2265.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#27, xc=0)
[   2265.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#51, xc=3)
[   2265.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#69, xc=0)
[   2265.0] L GameRomCamera[0] - Demo_CameraAnim (#96, xc=0)
[   2265.0] L GameRomCamera[0] - Demo_OverwriteNear (#113, xc=1)
[   2265.0] L GameRomCamera[0] - Demo_FocusDistSetting (#131, xc=2)
[   2265.0] L RemainsFire[0] - Demo_PlayASForTimeline (#154, xc=0)
[   2265.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#165, xc=0)
[   2265.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#28, xc=0)
               duration: 105.0
               {IsWaitFinish: true, angleY: -230.0}
[   2265.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#52, xc=3)
               duration: 105.0
               {Far: 0.0, FarUse: false, FogRatio: 0.20000000298023224, InstantSW: true, IsWaitFinish: true,
                 Near: -30.0, NearUse: true}
[   2265.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#70, xc=0)
               duration: 105.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [1754.0, 540.0, -2453.0]
               type: 0
[   2265.0] E GameRomCamera[0] - Demo_CameraAnim (#97, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 1.0, DOFEndFrame: 90.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C23-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2265.0] E GameRomCamera[0] - Demo_OverwriteNear (#114, xc=1)
               duration: 105.0
               {IsWaitFinish: true, Near: 0.30000001192092896}
[   2265.0] E GameRomCamera[0] - Demo_FocusDistSetting (#132, xc=2)
               duration: 105.0
               {FocusDistEnd: 5.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   2265.0] E RemainsFire[0] - Demo_PlayASForTimeline (#155, xc=0)
               duration: 105.0
               {ASName: C23-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2265.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#166, xc=0)
               duration: 105.0
               {ASName: C23-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#28, xc=0)
[   2370.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#52, xc=3)
[   2370.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#70, xc=0)
[   2370.0] L GameRomCamera[0] - Demo_CameraAnim (#97, xc=0)
[   2370.0] L GameRomCamera[0] - Demo_OverwriteNear (#114, xc=1)
[   2370.0] L GameRomCamera[0] - Demo_FocusDistSetting (#132, xc=2)
[   2370.0] L RemainsFire[0] - Demo_PlayASForTimeline (#155, xc=0)
[   2370.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#166, xc=0)
[   2370.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#29, xc=0)
               duration: 270.0
               {IsWaitFinish: true, angleY: -230.0}
[   2370.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#53, xc=3)
               duration: 270.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: -22.0, NearUse: true}
[   2370.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#71, xc=0)
               duration: 270.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2415.0, 990.0, -2560.0]
               type: 0
[   2370.0] E GameRomCamera[0] - Demo_CameraAnim (#98, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 12.0, FocalLengthEnd: 12.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 370.0, SceneName: C24-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2370.0] E GameRomCamera[0] - Demo_OverwriteNear (#115, xc=1)
               duration: 265.0
               {IsWaitFinish: true, Near: 10.0}
[   2370.0] E GameRomCamera[0] - Demo_FocusDistSetting (#133, xc=2)
               duration: 270.0
               {FocusDistEnd: 12.0, FocusDistStart: 12.0, IsWaitFinish: true}
[   2370.0] E RemainsFire[0] - Demo_PlayASForTimeline (#156, xc=0)
               duration: 270.0
               {ASName: C24-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#167, xc=0)
               duration: 270.0
               {ASName: C24-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2481.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#4, xc=0)
[   2512.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#5, xc=0)
               duration: 123.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo116_0_Text016}
[   2635.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#5, xc=0)
[   2635.0] L GameRomCamera[0] - Demo_OverwriteNear (#115, xc=1)
[   2640.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#29, xc=0)
[   2640.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#53, xc=3)
[   2640.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#71, xc=0)
[   2640.0] L GameRomCamera[0] - Demo_CameraAnim (#98, xc=0)
[   2640.0] L GameRomCamera[0] - Demo_FocusDistSetting (#133, xc=2)
[   2640.0] L RemainsFire[0] - Demo_PlayASForTimeline (#156, xc=0)
[   2640.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#167, xc=0)
[   2640.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#174, xc=1)
[   2640.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#30, xc=0)
               duration: 160.0
               {IsWaitFinish: true, angleY: 170.0}
[   2640.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#54, xc=3)
               duration: 160.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3799999952316284, InstantSW: true, IsWaitFinish: true,
                 Near: 44.0, NearUse: true}
[   2640.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#72, xc=0)
               duration: 160.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2330.0, 850.0, -2600.0]
               type: 0
[   2640.0] E GameRomCamera[0] - Demo_CameraAnim (#99, xc=0)
               duration: 160.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 350.0, SceneName: C25-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2640.0] E GameRomCamera[0] - Demo_OverwriteNear (#116, xc=1)
               duration: 160.0
               {IsWaitFinish: true, Near: 3.0}
[   2640.0] E GameRomCamera[0] - Demo_FocusDistSetting (#134, xc=2)
               duration: 160.0
               {FocusDistEnd: 71.0, FocusDistStart: 71.0, IsWaitFinish: true}
[   2640.0] E RemainsFire[0] - Demo_PlayASForTimeline (#157, xc=0)
               duration: 160.0
               {ASName: C25-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2640.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#180, xc=0)
               duration: 160.0
               {ASName: C25-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2651.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#6, xc=0)
               duration: 144.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo116_0_Text017}
[   2795.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#6, xc=0)
[   2800.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#30, xc=0)
[   2800.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#54, xc=3)
[   2800.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#72, xc=0)
[   2800.0] L GameRomCamera[0] - Demo_CameraAnim (#99, xc=0)
[   2800.0] L GameRomCamera[0] - Demo_OverwriteNear (#116, xc=1)
[   2800.0] L GameRomCamera[0] - Demo_FocusDistSetting (#134, xc=2)
[   2800.0] L RemainsFire[0] - Demo_PlayASForTimeline (#157, xc=0)
[   2800.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#180, xc=0)
[   2800.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#31, xc=0)
               duration: 75.0
               {IsWaitFinish: true, angleY: 166.0}
[   2800.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#55, xc=3)
               duration: 75.0
               {Far: 0.0, FarUse: false, FogRatio: 0.20000000298023224, InstantSW: true, IsWaitFinish: true,
                 Near: 25.0, NearUse: true}
[   2800.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#73, xc=0)
               duration: 135.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2376.0, 950.0, -2606.0]
               type: 0
[   2800.0] E GameRomCamera[0] - Demo_CameraAnim (#100, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 350.0, SceneName: C26-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2800.0] E GameRomCamera[0] - Demo_OverwriteNear (#117, xc=1)
               duration: 135.0
               {IsWaitFinish: true, Near: 0.30000001192092896}
[   2800.0] E GameRomCamera[0] - Demo_FocusDistSetting (#135, xc=2)
               duration: 75.0
               {FocusDistEnd: 79.0, FocusDistStart: 79.0, IsWaitFinish: true}
[   2800.0] E RemainsFire[0] - Demo_PlayASForTimeline (#158, xc=0)
               duration: 75.0
               {ASName: C26-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2800.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#168, xc=0)
               duration: 75.0
               {ASName: C26-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2800.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#175, xc=1)
               duration: 75.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2800.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#181, xc=0)
               duration: 75.0
               {ASName: C26-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2875.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#31, xc=0)
[   2875.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#55, xc=3)
[   2875.0] L GameRomCamera[0] - Demo_CameraAnim (#100, xc=0)
[   2875.0] L GameRomCamera[0] - Demo_FocusDistSetting (#135, xc=2)
[   2875.0] L RemainsFire[0] - Demo_PlayASForTimeline (#158, xc=0)
[   2875.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#168, xc=0)
[   2875.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#175, xc=1)
[   2875.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#181, xc=0)
[   2875.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#32, xc=0)
               duration: 60.0
               {IsWaitFinish: true, angleY: 210.0}
[   2875.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#56, xc=3)
               duration: 60.0
               {Far: 0.0, FarUse: false, FogRatio: 0.20000000298023224, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[   2875.0] E GameRomCamera[0] - Demo_CameraAnim (#101, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 8.0, FocalLengthEnd: 8.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C27-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2875.0] E GameRomCamera[0] - Demo_FocusDistSetting (#136, xc=2)
               duration: 60.0
               {FocusDistEnd: 12.0, FocusDistStart: 12.0, IsWaitFinish: true}
[   2875.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#182, xc=0)
               duration: 60.0
               {ASName: C27-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2891.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#7, xc=0)
               duration: 44.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text008}
[   2925.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#169, xc=0)
               duration: 10.0
               {ASName: C28-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2925.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#176, xc=1)
               duration: 10.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2935.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#7, xc=0)
[   2935.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#32, xc=0)
[   2935.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#56, xc=3)
[   2935.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#73, xc=0)
[   2935.0] L GameRomCamera[0] - Demo_CameraAnim (#101, xc=0)
[   2935.0] L GameRomCamera[0] - Demo_OverwriteNear (#117, xc=1)
[   2935.0] L GameRomCamera[0] - Demo_FocusDistSetting (#136, xc=2)
[   2935.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#169, xc=0)
[   2935.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#176, xc=1)
[   2935.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#182, xc=0)
[   2935.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#33, xc=0)
               duration: 227.0
               {IsWaitFinish: true, angleY: -264.0}
[   2935.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#57, xc=3)
               duration: 227.0
               {Far: 0.0, FarUse: false, FogRatio: 0.10000000149011612, InstantSW: true, IsWaitFinish: true,
                 Near: -50.0, NearUse: true}
[   2935.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#74, xc=0)
               duration: 552.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2406.0, 1000.0, -2590.0]
               type: 0
[   2935.0] E GameRomCamera[0] - Demo_CameraAnim (#102, xc=0)
               duration: 227.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 8.0, FocalLengthEnd: 8.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C28-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2935.0] E GameRomCamera[0] - Demo_OverwriteNear (#118, xc=1)
               duration: 227.0
               {IsWaitFinish: true, Near: 6.0}
[   2935.0] E GameRomCamera[0] - Demo_FocusDistSetting (#137, xc=2)
               duration: 227.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   2935.0] E RemainsFire[0] - Demo_PlayASForTimeline (#159, xc=0)
               duration: 227.0
               {ASName: C28-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2935.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#170, xc=0)
               duration: 227.0
               {ASName: C28-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2935.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#177, xc=1)
               duration: 552.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3007.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#8, xc=0)
               duration: 145.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo116_0_Text005}
[   3152.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#8, xc=0)
[   3162.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#33, xc=0)
[   3162.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#57, xc=3)
[   3162.0] L GameRomCamera[0] - Demo_CameraAnim (#102, xc=0)
[   3162.0] L GameRomCamera[0] - Demo_OverwriteNear (#118, xc=1)
[   3162.0] L GameRomCamera[0] - Demo_FocusDistSetting (#137, xc=2)
[   3162.0] L RemainsFire[0] - Demo_PlayASForTimeline (#159, xc=0)
[   3162.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#170, xc=0)
[   3162.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#9, xc=0)
               duration: 18.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text009}
[   3162.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#34, xc=0)
               duration: 325.0
               {IsWaitFinish: true, angleY: -264.0}
[   3162.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#58, xc=3)
               duration: 325.0
               {Far: 0.0, FarUse: false, FogRatio: 0.20000000298023224, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: false}
[   3162.0] E GameRomCamera[0] - Demo_CameraAnim (#103, xc=0)
               duration: 325.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 40.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C29-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3162.0] E GameRomCamera[0] - Demo_OverwriteNear (#119, xc=1)
               duration: 325.0
               {IsWaitFinish: true, Near: 1.0}
[   3162.0] E GameRomCamera[0] - Demo_FocusDistSetting (#138, xc=2)
               duration: 73.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   3162.0] E RemainsFire[0] - Demo_PlayASForTimeline (#160, xc=0)
               duration: 325.0
               {ASName: C29-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3162.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#171, xc=0)
               duration: 325.0
               {ASName: C29-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3180.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#9, xc=0)
[   3235.0] L GameRomCamera[0] - Demo_FocusDistSetting (#138, xc=2)
[   3235.0] E GameRomCamera[0] - Demo_FocusDistSetting (#139, xc=2)
               duration: 192.0
               {FocusDistEnd: 8.600000381469727, FocusDistStart: 1.0, IsWaitFinish: true}
[   3412.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#183, xc=0)
               duration: 75.0
               {ASName: C31-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3427.0] L GameRomCamera[0] - Demo_FocusDistSetting (#139, xc=2)
[   3427.0] E GameRomCamera[0] - Demo_FocusDistSetting (#140, xc=2)
               duration: 60.0
               {FocusDistEnd: 8.600000381469727, FocusDistStart: 8.600000381469727, IsWaitFinish: true}
[   3429.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#10, xc=0)
               duration: 19.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text015}
[   3448.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#10, xc=0)
[   3487.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#34, xc=0)
[   3487.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#58, xc=3)
[   3487.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#74, xc=0)
[   3487.0] L GameRomCamera[0] - Demo_CameraAnim (#103, xc=0)
[   3487.0] L GameRomCamera[0] - Demo_OverwriteNear (#119, xc=1)
[   3487.0] L GameRomCamera[0] - Demo_FocusDistSetting (#140, xc=2)
[   3487.0] L RemainsFire[0] - Demo_PlayASForTimeline (#160, xc=0)
[   3487.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#171, xc=0)
[   3487.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#177, xc=1)
[   3487.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#183, xc=0)
[   3487.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#35, xc=0)
               duration: 75.0
               {IsWaitFinish: true, angleY: 210.0}
[   3487.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#59, xc=3)
               duration: 75.0
               {Far: 0.0, FarUse: false, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: -42.0, NearUse: true}
[   3487.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#75, xc=0)
               duration: 240.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2376.0, 950.0, -2606.0]
               type: 0
[   3487.0] E GameRomCamera[0] - Demo_CameraAnim (#104, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 40.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 21.0, FocalLengthEnd: 21.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C31-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3487.0] E GameRomCamera[0] - Demo_OverwriteNear (#120, xc=1)
               duration: 549.0
               {IsWaitFinish: true, Near: 0.30000001192092896}
[   3487.0] E GameRomCamera[0] - Demo_FocusDistSetting (#141, xc=2)
               duration: 75.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[   3487.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#184, xc=0)
               duration: 75.0
               {ASName: C31-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3525.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#11, xc=0)
               duration: 37.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text010}
[   3562.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#11, xc=0)
[   3562.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#35, xc=0)
[   3562.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#59, xc=3)
[   3562.0] L GameRomCamera[0] - Demo_CameraAnim (#104, xc=0)
[   3562.0] L GameRomCamera[0] - Demo_FocusDistSetting (#141, xc=2)
[   3562.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#184, xc=0)
[   3562.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#36, xc=0)
               duration: 165.0
               {IsWaitFinish: true, angleY: 210.0}
[   3562.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#60, xc=3)
               duration: 165.0
               {Far: 0.0, FarUse: false, FogRatio: 0.4000000059604645, InstantSW: true, IsWaitFinish: true,
                 Near: -35.0, NearUse: true}
[   3562.0] E GameRomCamera[0] - Demo_CameraAnim (#105, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 120.0, DOFStartFrame: 90.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.5, FocalLengthEnd: 3.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C32-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3562.0] E GameRomCamera[0] - Demo_FocusDistSetting (#142, xc=2)
               duration: 165.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   3562.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#185, xc=0)
               duration: 165.0
               {ASName: C32-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3570.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#12, xc=0)
               duration: 37.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text011}
[   3607.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#12, xc=0)
[   3620.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#13, xc=0)
               duration: 107.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text012}
[   3727.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#13, xc=0)
[   3727.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#36, xc=0)
[   3727.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#60, xc=3)
[   3727.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#75, xc=0)
[   3727.0] L GameRomCamera[0] - Demo_CameraAnim (#105, xc=0)
[   3727.0] L GameRomCamera[0] - Demo_FocusDistSetting (#142, xc=2)
[   3727.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#185, xc=0)
[   3727.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#14, xc=0)
               duration: 167.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo116_0_Text013}
[   3727.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#37, xc=0)
               duration: 114.0
               {IsWaitFinish: true, angleY: 163.0}
[   3727.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#61, xc=3)
               duration: 114.0
               {Far: 0.0, FarUse: false, FogRatio: 0.17000000178813934, InstantSW: true, IsWaitFinish: true,
                 Near: -95.0, NearUse: true}
[   3727.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#76, xc=0)
               duration: 309.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [2400.0, 970.0, -2590.0]
               type: 0
[   3727.0] E GameRomCamera[0] - Demo_CameraAnim (#106, xc=0)
               duration: 114.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 420.0, SceneName: C33-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3727.0] E GameRomCamera[0] - Demo_FocusDistSetting (#143, xc=2)
               duration: 114.0
               {FocusDistEnd: 25.0, FocusDistStart: 25.0, IsWaitFinish: true}
[   3727.0] E RemainsFire[0] - Demo_PlayASForTimeline (#161, xc=0)
               duration: 114.0
               {ASName: C33-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3727.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#172, xc=0)
               duration: 114.0
               {ASName: C33-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3727.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#178, xc=1)
               duration: 309.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3727.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#186, xc=0)
               duration: 114.0
               {ASName: C33-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3841.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#37, xc=0)
[   3841.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#61, xc=3)
[   3841.0] L GameRomCamera[0] - Demo_CameraAnim (#106, xc=0)
[   3841.0] L GameRomCamera[0] - Demo_FocusDistSetting (#143, xc=2)
[   3841.0] L RemainsFire[0] - Demo_PlayASForTimeline (#161, xc=0)
[   3841.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#172, xc=0)
[   3841.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#186, xc=0)
[   3841.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#38, xc=0)
               duration: 195.0
               {IsWaitFinish: true, angleY: -220.0}
[   3841.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#62, xc=3)
               duration: 195.0
               {Far: 1120.0, FarUse: true, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[   3841.0] E GameRomCamera[0] - Demo_CameraAnim (#107, xc=0)
               duration: 195.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C34-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3841.0] E GameRomCamera[0] - Demo_FocusDistSetting (#144, xc=2)
               duration: 195.0
               {FocusDistEnd: 140.0, FocusDistStart: 62.0, IsWaitFinish: true}
[   3841.0] E RemainsFire[0] - Demo_PlayASForTimeline (#162, xc=0)
               duration: 195.0
               {ASName: C34-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3841.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#173, xc=0)
               duration: 195.0
               {ASName: C34-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3894.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#14, xc=0)
[   4006.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   4036.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   4036.0] L Obj_Sun_A_01[0] - Demo_SunMove (#15, xc=0)
[   4036.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#16, xc=0)
[   4036.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#38, xc=0)
[   4036.0] L WorldManagerControl[0] - Demo_SetWind (#39, xc=1)
[   4036.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#40, xc=2)
[   4036.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#62, xc=3)
[   4036.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#76, xc=0)
[   4036.0] L GameRomCamera[0] - Demo_CameraAnim (#107, xc=0)
[   4036.0] L GameRomCamera[0] - Demo_OverwriteNear (#120, xc=1)
[   4036.0] L GameRomCamera[0] - Demo_FocusDistSetting (#144, xc=2)
[   4036.0] L RemainsFire[0] - Demo_PlayASForTimeline (#162, xc=0)
[   4036.0] L RemainsFire[0] - Demo_PlayASForTimeline (#163, xc=1)
[   4036.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#173, xc=0)
[   4036.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#178, xc=1)
