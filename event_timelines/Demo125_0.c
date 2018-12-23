-------- Event timeline: Demo125_0 --------
actors: 10
clips: 206
oneshots: 0
cuts: 25
duration: 4680.0
subtimelines: ['Demo125_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 195.0
x4: 0
params: (none)

Cut: C03
start time: 300.0
x4: 0
params: (none)

Cut: C04
start time: 420.0
x4: 0
params: (none)

Cut: C05
start time: 600.0
x4: 0
params: (none)

Cut: C06
start time: 830.0
x4: 0
params: (none)

Cut: C08
start time: 1200.0
x4: 0
params: (none)

Cut: C09
start time: 1350.0
x4: 0
params: (none)

Cut: C10
start time: 1500.0
x4: 0
params: (none)

Cut: C11
start time: 1710.0
x4: 0
params: (none)

Cut: C14
start time: 2070.0
x4: 0
params: (none)

Cut: C15
start time: 2145.0
x4: 0
params: (none)

Cut: C12
start time: 2235.0
x4: 0
params: (none)

Cut: C16
start time: 2355.0
x4: 0
params: (none)

Cut: C17
start time: 2535.0
x4: 0
params: (none)

Cut: C18
start time: 2625.0
x4: 0
params: (none)

Cut: C19
start time: 2805.0
x4: 0
params: (none)

Cut: C20
start time: 3030.0
x4: 0
params: (none)

Cut: C21
start time: 3210.0
x4: 0
params: (none)

Cut: C22
start time: 3515.0
x4: 0
params: (none)

Cut: C23
start time: 3720.0
x4: 0
params: (none)

Cut: C24
start time: 3870.0
x4: 0
params: (none)

Cut: C25
start time: 4100.0
x4: 0
params: (none)

Cut: C26
start time: 4220.0
x4: 0
params: (none)

Cut: C27
start time: 4415.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
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
actions: ['Demo_SetWind', 'Demo_EventSetFogDirect', 'Demo_SetYfog', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_OverwriteNear', 'Demo_FocusDistSetting']
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

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Npc_Gerdo_Hero[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsElectric[0]
x36: 3
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 4680.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 4680.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
               duration: 4680.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.32199999690055847, WindDirY: 0.20999999344348907,
                 WindDirZ: 0.20000000298023224, WindPower: 8.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=1)
               duration: 195.0
               {Far: 0.0, FarUse: false, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -22.0, NearUse: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#36, xc=3)
               duration: 195.0
               {IsWaitFinish: true, angleY: 68.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#61, xc=4)
               duration: 2.0
               {IsWaitFinish: true, setPos_x: 0.5699999928474426, setPos_y: 0.1459999978542328}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#75, xc=0)
               duration: 195.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 5.0, ApertureEnd: 5.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 388.0, FocalLengthEnd: 388.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 300.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#100, xc=1)
               duration: 195.0
               {IsWaitFinish: true, Near: 1.0}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#113, xc=2)
               duration: 195.0
               {FocusDistEnd: 772.0, FocusDistStart: 772.0, IsWaitFinish: true}
[      0.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#142, xc=0)
               duration: 195.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-3570.0, 130.0, 3563.0]
               type: 0
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#179, xc=0)
               duration: 195.0
               {ASName: C01-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#204, xc=1)
               duration: 4680.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#205, xc=2)
               duration: 4680.0
               {ASName: WeakPointAll_Clear_ForTimeLine, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: 2}
[      2.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#61, xc=4)
[      2.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#62, xc=4)
               duration: 193.0
               {IsWaitFinish: true, setSpeed_x: -0.0010000000474974513, setSpeed_y: 0.0}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    195.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=1)
[    195.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#36, xc=3)
[    195.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#62, xc=4)
[    195.0] L GameRomCamera[0] - Demo_CameraAnim (#75, xc=0)
[    195.0] L GameRomCamera[0] - Demo_OverwriteNear (#100, xc=1)
[    195.0] L GameRomCamera[0] - Demo_FocusDistSetting (#113, xc=2)
[    195.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#142, xc=0)
[    195.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#179, xc=0)
[    195.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=1)
               duration: 105.0
               {Far: 0.0, FarUse: false, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    195.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#37, xc=3)
               duration: 105.0
               {IsWaitFinish: true, angleY: 41.0}
[    195.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#63, xc=4)
               duration: 225.0
               {IsWaitFinish: true}
[    195.0] E GameRomCamera[0] - Demo_CameraAnim (#76, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 125.0, ApertureEnd: 125.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 336.0, FocalLengthEnd: 336.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    195.0] E GameRomCamera[0] - Demo_OverwriteNear (#101, xc=1)
               duration: 105.0
               {IsWaitFinish: true, Near: 700.0}
[    195.0] E GameRomCamera[0] - Demo_FocusDistSetting (#114, xc=2)
               duration: 105.0
               {FocusDistEnd: 750.0, FocusDistStart: 750.0, IsWaitFinish: true}
[    195.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#143, xc=0)
               duration: 1005.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-2875.0, 118.0, 3914.0]
               type: 0
[    195.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#180, xc=0)
               duration: 105.0
               {ASName: C02-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    300.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=1)
[    300.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#37, xc=3)
[    300.0] L GameRomCamera[0] - Demo_CameraAnim (#76, xc=0)
[    300.0] L GameRomCamera[0] - Demo_OverwriteNear (#101, xc=1)
[    300.0] L GameRomCamera[0] - Demo_FocusDistSetting (#114, xc=2)
[    300.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#180, xc=0)
[    300.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=1)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2199999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    300.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#38, xc=3)
               duration: 120.0
               {IsWaitFinish: true, angleY: 29.0}
[    300.0] E GameRomCamera[0] - Demo_CameraAnim (#77, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 60.0, FocalLengthEnd: 60.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    300.0] E GameRomCamera[0] - Demo_OverwriteNear (#102, xc=1)
               duration: 300.0
               {IsWaitFinish: true, Near: 1.0}
[    300.0] E GameRomCamera[0] - Demo_FocusDistSetting (#115, xc=2)
               duration: 120.0
               {FocusDistEnd: 214.0, FocusDistStart: 214.0, IsWaitFinish: true}
[    300.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#181, xc=0)
               duration: 120.0
               {ASName: C03-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    420.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=1)
[    420.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#38, xc=3)
[    420.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#63, xc=4)
[    420.0] L GameRomCamera[0] - Demo_CameraAnim (#77, xc=0)
[    420.0] L GameRomCamera[0] - Demo_FocusDistSetting (#115, xc=2)
[    420.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#181, xc=0)
[    420.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=1)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[    420.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#39, xc=3)
               duration: 180.0
               {IsWaitFinish: true, angleY: 29.0}
[    420.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#64, xc=4)
               duration: 180.0
               {IsWaitFinish: true}
[    420.0] E GameRomCamera[0] - Demo_CameraAnim (#78, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 20.0, FocalLengthEnd: 20.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    420.0] E GameRomCamera[0] - Demo_FocusDistSetting (#116, xc=2)
               duration: 26.0
               {FocusDistEnd: 55.0, FocusDistStart: 33.0, IsWaitFinish: true}
[    420.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#182, xc=0)
               duration: 180.0
               {ASName: C04-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    446.0] L GameRomCamera[0] - Demo_FocusDistSetting (#116, xc=2)
[    446.0] E GameRomCamera[0] - Demo_FocusDistSetting (#117, xc=2)
               duration: 154.0
               {FocusDistEnd: 55.0, FocusDistStart: 55.0, IsWaitFinish: true}
[    600.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=1)
[    600.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#39, xc=3)
[    600.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#64, xc=4)
[    600.0] L GameRomCamera[0] - Demo_CameraAnim (#78, xc=0)
[    600.0] L GameRomCamera[0] - Demo_OverwriteNear (#102, xc=1)
[    600.0] L GameRomCamera[0] - Demo_FocusDistSetting (#117, xc=2)
[    600.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#182, xc=0)
[    600.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=1)
               duration: 230.0
               {Far: 0.0, FarUse: false, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    600.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#40, xc=3)
               duration: 230.0
               {IsWaitFinish: true, angleY: 29.0}
[    600.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#65, xc=4)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.9480000138282776, setPos_y: 0.1459999978542328}
[    600.0] E GameRomCamera[0] - Demo_CameraAnim (#79, xc=0)
               duration: 230.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 35.0, ApertureEnd: 35.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 50.0, FocalLengthEnd: 50.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    600.0] E GameRomCamera[0] - Demo_OverwriteNear (#103, xc=1)
               duration: 230.0
               {IsWaitFinish: true, Near: 82.0}
[    600.0] E GameRomCamera[0] - Demo_FocusDistSetting (#118, xc=2)
               duration: 230.0
               {FocusDistEnd: 106.0, FocusDistStart: 106.0, IsWaitFinish: true}
[    600.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#183, xc=0)
               duration: 230.0
               {ASName: C05-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    601.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#65, xc=4)
[    601.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#66, xc=4)
               duration: 899.0
               {IsWaitFinish: true, setSpeed_x: -0.0010000000474974513, setSpeed_y: 0.0}
[    808.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#153, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    830.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=1)
[    830.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#40, xc=3)
[    830.0] L GameRomCamera[0] - Demo_CameraAnim (#79, xc=0)
[    830.0] L GameRomCamera[0] - Demo_OverwriteNear (#103, xc=1)
[    830.0] L GameRomCamera[0] - Demo_FocusDistSetting (#118, xc=2)
[    830.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#183, xc=0)
[    830.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=1)
               duration: 370.0
               {Far: 4450.0, FarUse: true, FogRatio: 0.44999998807907104, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[    830.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#41, xc=3)
               duration: 370.0
               {IsWaitFinish: true, angleY: 29.0}
[    830.0] E GameRomCamera[0] - Demo_CameraAnim (#80, xc=0)
               duration: 370.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 200.0, FocalLengthEnd: 200.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1200.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    830.0] E GameRomCamera[0] - Demo_OverwriteNear (#104, xc=1)
               duration: 370.0
               {IsWaitFinish: true, Near: 2.0}
[    830.0] E GameRomCamera[0] - Demo_FocusDistSetting (#119, xc=2)
               duration: 370.0
               {FocusDistEnd: 1170.0, FocusDistStart: 1050.0, IsWaitFinish: true}
[    830.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#184, xc=0)
               duration: 370.0
               {ASName: C06-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    833.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#153, xc=0)
[    890.0] E EventControllerRumble[0] - Demo_RumbleSmall (#154, xc=0)
               duration: 30.0
               {Count: 6, IsWaitFinish: true}
[    920.0] L EventControllerRumble[0] - Demo_RumbleSmall (#154, xc=0)
[   1016.0] E EventControllerRumble[0] - Demo_RumbleSmall (#155, xc=0)
               duration: 30.0
               {Count: 6, IsWaitFinish: true}
[   1046.0] L EventControllerRumble[0] - Demo_RumbleSmall (#155, xc=0)
[   1144.0] E EventControllerRumble[0] - Demo_RumbleSmall (#156, xc=0)
               duration: 30.0
               {Count: 6, IsWaitFinish: true}
[   1174.0] L EventControllerRumble[0] - Demo_RumbleSmall (#156, xc=0)
[   1200.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=1)
[   1200.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#41, xc=3)
[   1200.0] L GameRomCamera[0] - Demo_CameraAnim (#80, xc=0)
[   1200.0] L GameRomCamera[0] - Demo_OverwriteNear (#104, xc=1)
[   1200.0] L GameRomCamera[0] - Demo_FocusDistSetting (#119, xc=2)
[   1200.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#143, xc=0)
[   1200.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#184, xc=0)
[   1200.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=1)
               duration: 150.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2199999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1200.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#42, xc=3)
               duration: 150.0
               {IsWaitFinish: true, angleY: 35.0}
[   1200.0] E GameRomCamera[0] - Demo_CameraAnim (#81, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 300.0, ApertureEnd: 300.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2540.0, FocalLengthEnd: 2540.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1000.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1200.0] E GameRomCamera[0] - Demo_OverwriteNear (#105, xc=1)
               duration: 150.0
               {IsWaitFinish: true, Near: 1.0}
[   1200.0] E GameRomCamera[0] - Demo_FocusDistSetting (#120, xc=2)
               duration: 150.0
               {FocusDistEnd: 2640.0, FocusDistStart: 2640.0, IsWaitFinish: true}
[   1200.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#144, xc=0)
               duration: 300.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-2025.0, 472.0, 2568.0]
               type: 0
[   1200.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#185, xc=0)
               duration: 150.0
               {ASName: C08-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1238.0] E EventControllerRumble[0] - Demo_RumbleSmall (#157, xc=0)
               duration: 20.0
               {Count: 6, IsWaitFinish: true}
[   1258.0] L EventControllerRumble[0] - Demo_RumbleSmall (#157, xc=0)
[   1320.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[   1350.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1350.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=1)
[   1350.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#42, xc=3)
[   1350.0] L GameRomCamera[0] - Demo_CameraAnim (#81, xc=0)
[   1350.0] L GameRomCamera[0] - Demo_OverwriteNear (#105, xc=1)
[   1350.0] L GameRomCamera[0] - Demo_FocusDistSetting (#120, xc=2)
[   1350.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#185, xc=0)
[   1350.0] E Fader[0] - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 1, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[   1350.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=1)
               duration: 150.0
               {Far: 14900.0, FarUse: true, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: -850.0, NearUse: true}
[   1350.0] E WorldManagerControl[0] - Demo_SetYfog (#32, xc=2)
               duration: 150.0
               {IsWaitFinish: true, YfogRatio: 0.30000001192092896}
[   1350.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#43, xc=3)
               duration: 150.0
               {IsWaitFinish: true, angleY: 29.0}
[   1350.0] E GameRomCamera[0] - Demo_CameraAnim (#82, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 145.0, ApertureEnd: 145.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 624.0, FocalLengthEnd: 624.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 300.0, SceneName: C09-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1350.0] E GameRomCamera[0] - Demo_OverwriteNear (#106, xc=1)
               duration: 150.0
               {IsWaitFinish: true, Near: 3.0}
[   1350.0] E GameRomCamera[0] - Demo_FocusDistSetting (#121, xc=2)
               duration: 150.0
               {FocusDistEnd: 940.0, FocusDistStart: 940.0, IsWaitFinish: true}
[   1350.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#186, xc=0)
               duration: 150.0
               {ASName: C09-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1380.0] L Fader[0] - Demo_FadeIn (#2, xc=0)
[   1471.0] E EventControllerRumble[0] - Demo_RumbleSmall (#158, xc=0)
               duration: 15.0
               {Count: 2, IsWaitFinish: true}
[   1486.0] L EventControllerRumble[0] - Demo_RumbleSmall (#158, xc=0)
[   1500.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=1)
[   1500.0] L WorldManagerControl[0] - Demo_SetYfog (#32, xc=2)
[   1500.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#43, xc=3)
[   1500.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#66, xc=4)
[   1500.0] L GameRomCamera[0] - Demo_CameraAnim (#82, xc=0)
[   1500.0] L GameRomCamera[0] - Demo_OverwriteNear (#106, xc=1)
[   1500.0] L GameRomCamera[0] - Demo_FocusDistSetting (#121, xc=2)
[   1500.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#144, xc=0)
[   1500.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#186, xc=0)
[   1500.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#15, xc=1)
               duration: 210.0
               {Far: 0.0, FarUse: false, FogRatio: 0.10999999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1500.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#44, xc=3)
               duration: 210.0
               {IsWaitFinish: true, angleY: 66.0}
[   1500.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#67, xc=4)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.21799999475479126, setPos_y: 0.1459999978542328}
[   1500.0] E GameRomCamera[0] - Demo_CameraAnim (#83, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 600.0, FocalLengthEnd: 600.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 2300.0, SceneName: C10-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1500.0] E GameRomCamera[0] - Demo_OverwriteNear (#107, xc=1)
               duration: 855.0
               {IsWaitFinish: true, Near: 1.0}
[   1500.0] E GameRomCamera[0] - Demo_FocusDistSetting (#122, xc=2)
               duration: 210.0
               {FocusDistEnd: 1500.0, FocusDistStart: 1500.0, IsWaitFinish: true}
[   1500.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#145, xc=0)
               duration: 210.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-1324.0, 300.0, 1700.0]
               type: 0
[   1500.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#187, xc=0)
               duration: 210.0
               {ASName: C10-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1501.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#67, xc=4)
[   1501.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#68, xc=4)
               duration: 854.0
               {IsWaitFinish: true, setSpeed_x: -0.0010000000474974513, setSpeed_y: 0.0}
[   1578.0] E EventControllerRumble[0] - Demo_RumbleSmall (#159, xc=0)
               duration: 15.0
               {Count: 3, IsWaitFinish: true}
[   1593.0] L EventControllerRumble[0] - Demo_RumbleSmall (#159, xc=0)
[   1612.0] E EventControllerRumble[0] - Demo_RumbleSmall (#160, xc=0)
               duration: 15.0
               {Count: 3, IsWaitFinish: true}
[   1627.0] L EventControllerRumble[0] - Demo_RumbleSmall (#160, xc=0)
[   1710.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#15, xc=1)
[   1710.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#44, xc=3)
[   1710.0] L GameRomCamera[0] - Demo_CameraAnim (#83, xc=0)
[   1710.0] L GameRomCamera[0] - Demo_FocusDistSetting (#122, xc=2)
[   1710.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#145, xc=0)
[   1710.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#187, xc=0)
[   1710.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#16, xc=1)
               duration: 360.0
               {Far: 0.0, FarUse: false, FogRatio: 0.17000000178813934, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1710.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#45, xc=3)
               duration: 360.0
               {IsWaitFinish: true, angleY: 32.0}
[   1710.0] E GameRomCamera[0] - Demo_CameraAnim (#84, xc=0)
               duration: 360.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 110.0, FocalLengthEnd: 110.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1280.0, SceneName: C11-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1710.0] E GameRomCamera[0] - Demo_FocusDistSetting (#123, xc=2)
               duration: 127.0
               {FocusDistEnd: 115.0, FocusDistStart: 115.0, IsWaitFinish: true}
[   1710.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#146, xc=0)
               duration: 360.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-1554.0, 211.0, 1346.0]
               type: 0
[   1710.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#188, xc=0)
               duration: 360.0
               {ASName: C11-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1737.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#161, xc=0)
               duration: 40.0
               {Count: 3, IsWaitFinish: true}
[   1777.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#161, xc=0)
[   1837.0] L GameRomCamera[0] - Demo_FocusDistSetting (#123, xc=2)
[   1837.0] E GameRomCamera[0] - Demo_FocusDistSetting (#124, xc=2)
               duration: 203.0
               {FocusDistEnd: 888.0, FocusDistStart: 115.0, IsWaitFinish: true}
[   2040.0] L GameRomCamera[0] - Demo_FocusDistSetting (#124, xc=2)
[   2040.0] E GameRomCamera[0] - Demo_FocusDistSetting (#125, xc=2)
               duration: 30.0
               {FocusDistEnd: 888.0, FocusDistStart: 888.0, IsWaitFinish: true}
[   2070.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#16, xc=1)
[   2070.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#45, xc=3)
[   2070.0] L GameRomCamera[0] - Demo_CameraAnim (#84, xc=0)
[   2070.0] L GameRomCamera[0] - Demo_FocusDistSetting (#125, xc=2)
[   2070.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#146, xc=0)
[   2070.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#188, xc=0)
[   2070.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#17, xc=1)
               duration: 75.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2070.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#46, xc=3)
               duration: 75.0
               {IsWaitFinish: true, angleY: 20.0}
[   2070.0] E GameRomCamera[0] - Demo_CameraAnim (#85, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 10.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 90.0, FocalLengthEnd: 90.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 500.0, SceneName: C14-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2070.0] E GameRomCamera[0] - Demo_FocusDistSetting (#126, xc=2)
               duration: 75.0
               {FocusDistEnd: 130.0, FocusDistStart: 130.0, IsWaitFinish: true}
[   2070.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#147, xc=0)
               duration: 465.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-2025.0, 472.0, 2568.0]
               type: 0
[   2070.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#189, xc=0)
               duration: 75.0
               {ASName: C14-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2145.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#17, xc=1)
[   2145.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#46, xc=3)
[   2145.0] L GameRomCamera[0] - Demo_CameraAnim (#85, xc=0)
[   2145.0] L GameRomCamera[0] - Demo_FocusDistSetting (#126, xc=2)
[   2145.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#189, xc=0)
[   2145.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#18, xc=1)
               duration: 90.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2145.0] E WorldManagerControl[0] - Demo_SetYfog (#33, xc=2)
               duration: 90.0
               {IsWaitFinish: true, YfogRatio: 0.4000000059604645}
[   2145.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#47, xc=3)
               duration: 90.0
               {IsWaitFinish: true, angleY: 29.0}
[   2145.0] E GameRomCamera[0] - Demo_CameraAnim (#86, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 10.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 90.0, FocalLengthEnd: 90.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 400.0, SceneName: C15-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2145.0] E GameRomCamera[0] - Demo_FocusDistSetting (#127, xc=2)
               duration: 43.0
               {FocusDistEnd: 620.0, FocusDistStart: 445.0, IsWaitFinish: true}
[   2145.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#190, xc=0)
               duration: 90.0
               {ASName: C15-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2188.0] L GameRomCamera[0] - Demo_FocusDistSetting (#127, xc=2)
[   2188.0] E GameRomCamera[0] - Demo_FocusDistSetting (#128, xc=2)
               duration: 47.0
               {FocusDistEnd: 620.0, FocusDistStart: 620.0, IsWaitFinish: true}
[   2235.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#18, xc=1)
[   2235.0] L WorldManagerControl[0] - Demo_SetYfog (#33, xc=2)
[   2235.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#47, xc=3)
[   2235.0] L GameRomCamera[0] - Demo_CameraAnim (#86, xc=0)
[   2235.0] L GameRomCamera[0] - Demo_FocusDistSetting (#128, xc=2)
[   2235.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#190, xc=0)
[   2235.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#19, xc=1)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1899999976158142, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2235.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#48, xc=3)
               duration: 120.0
               {IsWaitFinish: true, angleY: -2.0}
[   2235.0] E GameRomCamera[0] - Demo_CameraAnim (#87, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 110.0, FocalLengthEnd: 110.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C12-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2235.0] E GameRomCamera[0] - Demo_FocusDistSetting (#129, xc=2)
               duration: 120.0
               {FocusDistEnd: 100.0, FocusDistStart: 100.0, IsWaitFinish: true}
[   2235.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#191, xc=0)
               duration: 120.0
               {ASName: C12-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2355.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#19, xc=1)
[   2355.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#48, xc=3)
[   2355.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#68, xc=4)
[   2355.0] L GameRomCamera[0] - Demo_CameraAnim (#87, xc=0)
[   2355.0] L GameRomCamera[0] - Demo_OverwriteNear (#107, xc=1)
[   2355.0] L GameRomCamera[0] - Demo_FocusDistSetting (#129, xc=2)
[   2355.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#191, xc=0)
[   2355.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#20, xc=1)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.14000000059604645, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2355.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#49, xc=3)
               duration: 180.0
               {IsWaitFinish: true, angleY: 4.0}
[   2355.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#69, xc=4)
               duration: 270.0
               {IsWaitFinish: true}
[   2355.0] E GameRomCamera[0] - Demo_CameraAnim (#88, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 110.0, FocalLengthEnd: 110.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 300.0, SceneName: C16-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2355.0] E GameRomCamera[0] - Demo_OverwriteNear (#108, xc=1)
               duration: 180.0
               {IsWaitFinish: true, Near: 150.0}
[   2355.0] E GameRomCamera[0] - Demo_FocusDistSetting (#130, xc=2)
               duration: 180.0
               {FocusDistEnd: 190.0, FocusDistStart: 190.0, IsWaitFinish: true}
[   2355.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#192, xc=0)
               duration: 180.0
               {ASName: C16-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2521.0] E EventControllerRumble[0] - Demo_RumbleSmall (#162, xc=0)
               duration: 80.0
               {Count: 12, IsWaitFinish: true}
[   2535.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#20, xc=1)
[   2535.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#49, xc=3)
[   2535.0] L GameRomCamera[0] - Demo_CameraAnim (#88, xc=0)
[   2535.0] L GameRomCamera[0] - Demo_OverwriteNear (#108, xc=1)
[   2535.0] L GameRomCamera[0] - Demo_FocusDistSetting (#130, xc=2)
[   2535.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#147, xc=0)
[   2535.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#192, xc=0)
[   2535.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#21, xc=1)
               duration: 90.0
               {Far: 0.0, FarUse: false, FogRatio: 0.11999999731779099, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2535.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#50, xc=3)
               duration: 90.0
               {IsWaitFinish: true, angleY: 4.0}
[   2535.0] E GameRomCamera[0] - Demo_CameraAnim (#89, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 110.0, FocalLengthEnd: 110.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C17-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2535.0] E GameRomCamera[0] - Demo_OverwriteNear (#109, xc=1)
               duration: 1335.0
               {IsWaitFinish: true, Near: 1.0}
[   2535.0] E GameRomCamera[0] - Demo_FocusDistSetting (#131, xc=2)
               duration: 90.0
               {FocusDistEnd: 190.0, FocusDistStart: 190.0, IsWaitFinish: true}
[   2535.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#148, xc=0)
               duration: 270.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-1554.0, 211.0, 1346.0]
               type: 0
[   2535.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#193, xc=0)
               duration: 90.0
               {ASName: C17-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2601.0] L EventControllerRumble[0] - Demo_RumbleSmall (#162, xc=0)
[   2614.0] E EventControllerRumble[0] - Demo_RumbleLarge (#163, xc=0)
               duration: 40.0
               {Count: 2, IsWaitFinish: true}
[   2625.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#21, xc=1)
[   2625.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#50, xc=3)
[   2625.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#69, xc=4)
[   2625.0] L GameRomCamera[0] - Demo_CameraAnim (#89, xc=0)
[   2625.0] L GameRomCamera[0] - Demo_FocusDistSetting (#131, xc=2)
[   2625.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#193, xc=0)
[   2625.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=1)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.07000000029802322, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[   2625.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#51, xc=3)
               duration: 180.0
               {IsWaitFinish: true, angleY: 105.0}
[   2625.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#70, xc=4)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.30000001192092896, setPos_y: 0.10000000149011612}
[   2625.0] E GameRomCamera[0] - Demo_CameraAnim (#90, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 2300.0, SceneName: C18-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2625.0] E GameRomCamera[0] - Demo_FocusDistSetting (#132, xc=2)
               duration: 180.0
               {FocusDistEnd: 4376.0, FocusDistStart: 4376.0, IsWaitFinish: true}
[   2625.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#194, xc=0)
               duration: 180.0
               {ASName: C18-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2626.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#70, xc=4)
[   2626.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#71, xc=4)
               duration: 1244.0
               {IsWaitFinish: true, setSpeed_x: -0.0010000000474974513, setSpeed_y: 0.0}
[   2654.0] L EventControllerRumble[0] - Demo_RumbleLarge (#163, xc=0)
[   2753.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#164, xc=0)
               duration: 52.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text021}
[   2805.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=1)
[   2805.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#51, xc=3)
[   2805.0] L GameRomCamera[0] - Demo_CameraAnim (#90, xc=0)
[   2805.0] L GameRomCamera[0] - Demo_FocusDistSetting (#132, xc=2)
[   2805.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#148, xc=0)
[   2805.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#164, xc=0)
[   2805.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#194, xc=0)
[   2805.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=1)
               duration: 225.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2805.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#52, xc=3)
               duration: 225.0
               {IsWaitFinish: true, angleY: 20.0}
[   2805.0] E GameRomCamera[0] - Demo_CameraAnim (#91, xc=0)
               duration: 225.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1500.0, SceneName: C19-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2805.0] E GameRomCamera[0] - Demo_FocusDistSetting (#133, xc=2)
               duration: 225.0
               {FocusDistEnd: 140.0, FocusDistStart: 140.0, IsWaitFinish: true}
[   2805.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#149, xc=0)
               duration: 225.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-2025.0, 472.0, 2568.0]
               type: 0
[   2805.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#165, xc=0)
               duration: 100.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text022}
[   2805.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#195, xc=0)
               duration: 225.0
               {ASName: C19-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2905.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#165, xc=0)
[   2940.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#166, xc=0)
               duration: 232.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text013}
[   3030.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=1)
[   3030.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#52, xc=3)
[   3030.0] L GameRomCamera[0] - Demo_CameraAnim (#91, xc=0)
[   3030.0] L GameRomCamera[0] - Demo_FocusDistSetting (#133, xc=2)
[   3030.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#149, xc=0)
[   3030.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#195, xc=0)
[   3030.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=1)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.10000000149011612, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[   3030.0] E WorldManagerControl[0] - Demo_SetYfog (#34, xc=2)
               duration: 180.0
               {IsWaitFinish: true, YfogRatio: 0.4000000059604645}
[   3030.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#53, xc=3)
               duration: 180.0
               {IsWaitFinish: true, angleY: 78.0}
[   3030.0] E GameRomCamera[0] - Demo_CameraAnim (#92, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 2300.0, SceneName: C20-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3030.0] E GameRomCamera[0] - Demo_FocusDistSetting (#134, xc=2)
               duration: 180.0
               {FocusDistEnd: 4250.0, FocusDistStart: 4250.0, IsWaitFinish: true}
[   3030.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#150, xc=0)
               duration: 180.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-1554.0, 211.0, 1346.0]
               type: 0
[   3030.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#196, xc=0)
               duration: 180.0
               {ASName: C20-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3172.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#166, xc=0)
[   3210.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=1)
[   3210.0] L WorldManagerControl[0] - Demo_SetYfog (#34, xc=2)
[   3210.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#53, xc=3)
[   3210.0] L GameRomCamera[0] - Demo_CameraAnim (#92, xc=0)
[   3210.0] L GameRomCamera[0] - Demo_FocusDistSetting (#134, xc=2)
[   3210.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#150, xc=0)
[   3210.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#196, xc=0)
[   3210.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=1)
               duration: 305.0
               {Far: 0.0, FarUse: false, FogRatio: 0.20000000298023224, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   3210.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#54, xc=3)
               duration: 305.0
               {IsWaitFinish: true, angleY: 15.0}
[   3210.0] E GameRomCamera[0] - Demo_CameraAnim (#93, xc=0)
               duration: 305.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 300.0, SceneName: C21-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3210.0] E GameRomCamera[0] - Demo_FocusDistSetting (#135, xc=2)
               duration: 305.0
               {FocusDistEnd: 180.0, FocusDistStart: 180.0, IsWaitFinish: true}
[   3210.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#151, xc=0)
               duration: 890.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-2025.0, 472.0, 2568.0]
               type: 0
[   3210.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#197, xc=0)
               duration: 305.0
               {ASName: C21-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3231.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#167, xc=0)
               duration: 271.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text014}
[   3502.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#167, xc=0)
[   3515.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=1)
[   3515.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#54, xc=3)
[   3515.0] L GameRomCamera[0] - Demo_CameraAnim (#93, xc=0)
[   3515.0] L GameRomCamera[0] - Demo_FocusDistSetting (#135, xc=2)
[   3515.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#197, xc=0)
[   3515.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=1)
               duration: 205.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1550000011920929, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   3515.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#55, xc=3)
               duration: 205.0
               {IsWaitFinish: true, angleY: 40.0}
[   3515.0] E GameRomCamera[0] - Demo_CameraAnim (#94, xc=0)
               duration: 205.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 110.0, FocalLengthEnd: 110.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 150.0, SceneName: C22-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3515.0] E GameRomCamera[0] - Demo_FocusDistSetting (#136, xc=2)
               duration: 205.0
               {FocusDistEnd: 110.0, FocusDistStart: 110.0, IsWaitFinish: true}
[   3515.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#198, xc=0)
               duration: 205.0
               {ASName: C22-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3529.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#168, xc=0)
               duration: 189.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text015}
[   3718.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#168, xc=0)
[   3720.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=1)
[   3720.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#55, xc=3)
[   3720.0] L GameRomCamera[0] - Demo_CameraAnim (#94, xc=0)
[   3720.0] L GameRomCamera[0] - Demo_FocusDistSetting (#136, xc=2)
[   3720.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#198, xc=0)
[   3720.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=1)
               duration: 150.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   3720.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#56, xc=3)
               duration: 150.0
               {IsWaitFinish: true, angleY: 40.0}
[   3720.0] E GameRomCamera[0] - Demo_CameraAnim (#95, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C23-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3720.0] E GameRomCamera[0] - Demo_FocusDistSetting (#137, xc=2)
               duration: 150.0
               {FocusDistEnd: 21.0, FocusDistStart: 21.0, IsWaitFinish: true}
[   3720.0] E Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#173, xc=0)
               duration: 150.0
               {ASName: C23-Npc_Gerudo_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3720.0] E Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#178, xc=1)
               duration: 960.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3720.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#199, xc=0)
               duration: 150.0
               {ASName: C23-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3737.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#169, xc=0)
               duration: 132.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text016}
[   3869.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#169, xc=0)
[   3870.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=1)
[   3870.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#56, xc=3)
[   3870.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#71, xc=4)
[   3870.0] L GameRomCamera[0] - Demo_CameraAnim (#95, xc=0)
[   3870.0] L GameRomCamera[0] - Demo_OverwriteNear (#109, xc=1)
[   3870.0] L GameRomCamera[0] - Demo_FocusDistSetting (#137, xc=2)
[   3870.0] L Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#173, xc=0)
[   3870.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#199, xc=0)
[   3870.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=1)
               duration: 230.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2199999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: -10.0, NearUse: true}
[   3870.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#57, xc=3)
               duration: 230.0
               {IsWaitFinish: true, angleY: 30.0}
[   3870.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#72, xc=4)
               duration: 545.0
               {IsWaitFinish: true}
[   3870.0] E GameRomCamera[0] - Demo_CameraAnim (#96, xc=0)
               duration: 230.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 85.0, ApertureEnd: 85.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C24-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3870.0] E GameRomCamera[0] - Demo_OverwriteNear (#110, xc=1)
               duration: 230.0
               {IsWaitFinish: true, Near: 1.0}
[   3870.0] E GameRomCamera[0] - Demo_FocusDistSetting (#138, xc=2)
               duration: 230.0
               {FocusDistEnd: 0.699999988079071, FocusDistStart: 0.699999988079071, IsWaitFinish: true}
[   3870.0] E Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#174, xc=0)
               duration: 230.0
               {ASName: C24-Npc_Gerudo_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3870.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#200, xc=0)
               duration: 230.0
               {ASName: C24-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3942.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#170, xc=0)
               duration: 88.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text017}
[   4030.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#170, xc=0)
[   4100.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=1)
[   4100.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#57, xc=3)
[   4100.0] L GameRomCamera[0] - Demo_CameraAnim (#96, xc=0)
[   4100.0] L GameRomCamera[0] - Demo_OverwriteNear (#110, xc=1)
[   4100.0] L GameRomCamera[0] - Demo_FocusDistSetting (#138, xc=2)
[   4100.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#151, xc=0)
[   4100.0] L Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#174, xc=0)
[   4100.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#200, xc=0)
[   4100.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=1)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2199999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: -5.0, NearUse: true}
[   4100.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#58, xc=3)
               duration: 120.0
               {IsWaitFinish: true, angleY: 27.0}
[   4100.0] E GameRomCamera[0] - Demo_CameraAnim (#97, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 350.0, ApertureEnd: 350.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 3.0, DOFBlurStart: 3.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.2999999523162842, FocalLengthEnd: 1.2999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C25-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   4100.0] E GameRomCamera[0] - Demo_OverwriteNear (#111, xc=1)
               duration: 315.0
               {IsWaitFinish: true, Near: 1.0}
[   4100.0] E GameRomCamera[0] - Demo_FocusDistSetting (#139, xc=2)
               duration: 120.0
               {FocusDistEnd: 1.2999999523162842, FocusDistStart: 1.2999999523162842, IsWaitFinish: true}
[   4100.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#152, xc=0)
               duration: 580.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-1554.0, 211.0, 1346.0]
               type: 0
[   4100.0] E Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#175, xc=0)
               duration: 120.0
               {ASName: C25-Npc_Gerudo_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4100.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#201, xc=0)
               duration: 120.0
               {ASName: C25-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4116.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#171, xc=0)
               duration: 268.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text018}
[   4220.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=1)
[   4220.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#58, xc=3)
[   4220.0] L GameRomCamera[0] - Demo_CameraAnim (#97, xc=0)
[   4220.0] L GameRomCamera[0] - Demo_FocusDistSetting (#139, xc=2)
[   4220.0] L Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#175, xc=0)
[   4220.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#201, xc=0)
[   4220.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=1)
               duration: 195.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2199999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: -12.0, NearUse: true}
[   4220.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#59, xc=3)
               duration: 195.0
               {IsWaitFinish: true, angleY: 78.0}
[   4220.0] E GameRomCamera[0] - Demo_CameraAnim (#98, xc=0)
               duration: 195.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.6000000238418579, DOFBlurStart: 1.0, DOFEndFrame: 190.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 14.0, FocalLengthEnd: 14.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C26-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   4220.0] E GameRomCamera[0] - Demo_FocusDistSetting (#140, xc=2)
               duration: 195.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[   4220.0] E Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#176, xc=0)
               duration: 195.0
               {ASName: C26-Npc_Gerudo_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4220.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#202, xc=0)
               duration: 195.0
               {ASName: C26-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4384.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#171, xc=0)
[   4415.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=1)
[   4415.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#59, xc=3)
[   4415.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#72, xc=4)
[   4415.0] L GameRomCamera[0] - Demo_CameraAnim (#98, xc=0)
[   4415.0] L GameRomCamera[0] - Demo_OverwriteNear (#111, xc=1)
[   4415.0] L GameRomCamera[0] - Demo_FocusDistSetting (#140, xc=2)
[   4415.0] L Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#176, xc=0)
[   4415.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#202, xc=0)
[   4415.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=1)
               duration: 265.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[   4415.0] E WorldManagerControl[0] - Demo_SetYfog (#35, xc=2)
               duration: 265.0
               {IsWaitFinish: true, YfogRatio: 0.44999998807907104}
[   4415.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#60, xc=3)
               duration: 265.0
               {IsWaitFinish: true, angleY: 65.0}
[   4415.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#73, xc=4)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.5440000295639038, setPos_y: 0.1459999978542328}
[   4415.0] E GameRomCamera[0] - Demo_CameraAnim (#99, xc=0)
               duration: 265.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 1.0, DOFEndFrame: 210.0, DOFStartFrame: 30.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 14.0, FocalLengthEnd: 14.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 2500.0, SceneName: C27-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   4415.0] E GameRomCamera[0] - Demo_OverwriteNear (#112, xc=1)
               duration: 265.0
               {IsWaitFinish: true, Near: 10.0}
[   4415.0] E GameRomCamera[0] - Demo_FocusDistSetting (#141, xc=2)
               duration: 265.0
               {FocusDistEnd: 332.0, FocusDistStart: 53.0, IsWaitFinish: true}
[   4415.0] E Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#177, xc=0)
               duration: 265.0
               {ASName: C27-Npc_Gerudo_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4415.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#203, xc=0)
               duration: 265.0
               {ASName: C27-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4416.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#73, xc=4)
[   4416.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#74, xc=4)
               duration: 264.0
               {IsWaitFinish: true, setSpeed_x: -0.0010000000474974513, setSpeed_y: 0.0}
[   4433.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#172, xc=0)
               duration: 212.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo125_0_Text019}
[   4645.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#172, xc=0)
[   4650.0] E Fader[0] - Demo_FadeOut (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   4680.0] L Fader[0] - Demo_FadeOut (#3, xc=0)
[   4680.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   4680.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   4680.0] L WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
[   4680.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=1)
[   4680.0] L WorldManagerControl[0] - Demo_SetYfog (#35, xc=2)
[   4680.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#60, xc=3)
[   4680.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#74, xc=4)
[   4680.0] L GameRomCamera[0] - Demo_CameraAnim (#99, xc=0)
[   4680.0] L GameRomCamera[0] - Demo_OverwriteNear (#112, xc=1)
[   4680.0] L GameRomCamera[0] - Demo_FocusDistSetting (#141, xc=2)
[   4680.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#152, xc=0)
[   4680.0] L Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#177, xc=0)
[   4680.0] L Dm_Npc_Gerdo_Hero[0] - Demo_PlayASForTimeline (#178, xc=1)
[   4680.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#203, xc=0)
[   4680.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#204, xc=1)
[   4680.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#205, xc=2)
