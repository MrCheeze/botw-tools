-------- Event timeline: Demo177_0 --------
actors: 9
clips: 36
oneshots: 0
cuts: 5
duration: 760.0
subtimelines: ['Demo177_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 210.0
x4: 0
params: (none)

Cut: C03
start time: 310.0
x4: 0
params: (none)

Cut: C04
start time: 360.0
x4: 0
params: (none)

Cut: C05
start time: 560.0
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
x36: 4
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventSetFogDirect', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_ZoraB001[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 760.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 760.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 760.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.18000000715255737, WindDirY: 0.0, WindDirZ: -0.20000000298023224,
                 WindPower: 7.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=2)
               duration: 210.0
               {Far: 0.0, FarUse: false, FogRatio: 0.36000001430511475, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#9, xc=3)
               duration: 760.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 8.470000267028809, ApertureEnd: 8.470000267028809,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.900000095367432,
                 FocalLengthEnd: 6.900000095367432, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#26, xc=0)
               duration: 210.0
               {ASName: C01-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 210.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     30.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#21, xc=0)
               duration: 55.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_0_Text000}
[     85.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#21, xc=0)
[    150.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#22, xc=0)
               duration: 55.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_0_Text003}
[    205.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#22, xc=0)
[    210.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=2)
[    210.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    210.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#26, xc=0)
[    210.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#31, xc=0)
[    210.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
               duration: 550.0
               {Far: 0.0, FarUse: false, FogRatio: 0.4000000059604645, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    210.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 100.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 6.300000190734863, ApertureEnd: 6.300000190734863,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 4.940000057220459, FocalLengthEnd: 4.940000057220459,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    210.0] E GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
               duration: 76.0
               {FocusDistEnd: 15.0, FocusDistStart: 15.0, IsWaitFinish: true}
[    210.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 100.0
               {ASName: C02-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    210.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 100.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    270.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#23, xc=0)
               duration: 30.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_0_Text004}
[    286.0] L GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
[    286.0] E GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
               duration: 24.0
               {FocusDistEnd: 5.0, FocusDistStart: 15.0, IsWaitFinish: true}
[    300.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#23, xc=0)
[    310.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    310.0] L GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
[    310.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#27, xc=0)
[    310.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#32, xc=0)
[    310.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 50.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 12.180000305175781, BgCheck: false,
                 CameraName: DemoCamera, DOFBlurEnd: 1.0199999809265137, DOFBlurStart: 1.0199999809265137,
                 DOFEndFrame: 12.0, DOFStartFrame: 8.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.4100000858306885,
                 FocalLengthEnd: 6.710000038146973, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    310.0] E GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
               duration: 50.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    310.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#28, xc=0)
               duration: 50.0
               {ASName: C03-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    310.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 50.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    360.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    360.0] L GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
[    360.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#28, xc=0)
[    360.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#33, xc=0)
[    360.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
               duration: 200.0
               {IsWaitFinish: true, angleY: -14.399999618530273}
[    360.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 200.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 34.0, ApertureEnd: 34.0, BgCheck: false,
                 CameraName: DemoCamera, DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.440000057220459, FocalLengthEnd: 2.440000057220459,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    360.0] E GameRomCamera[0] - Demo_FocusDistSetting (#18, xc=1)
               duration: 200.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    360.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#29, xc=0)
               duration: 200.0
               {ASName: C04-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    360.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#34, xc=0)
               duration: 200.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    380.0] E EventSystemActor[0] - Demo_PlayUiActorName (#20, xc=0)
               duration: 180.0
               {ActorName: Npc_ZoraB001, ActorType: 1, IsWaitFinish: true}
[    560.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
[    560.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    560.0] L GameRomCamera[0] - Demo_FocusDistSetting (#18, xc=1)
[    560.0] L EventSystemActor[0] - Demo_PlayUiActorName (#20, xc=0)
[    560.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#29, xc=0)
[    560.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#34, xc=0)
[    560.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=1)
               duration: 200.0
               {IsWaitFinish: true, angleY: -32.0}
[    560.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 200.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 66.30000305175781, ApertureEnd: 66.30000305175781,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 1.8700000047683716, DOFBlurStart: 1.8700000047683716,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.3300000429153442,
                 FocalLengthEnd: 1.3300000429153442, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    560.0] E GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
               duration: 200.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    560.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#24, xc=0)
               duration: 70.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_0_Text001}
[    560.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 200.0
               {ASName: C05-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    560.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#35, xc=0)
               duration: 200.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    630.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#24, xc=0)
[    660.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#25, xc=0)
               duration: 90.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_0_Text002}
[    730.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    750.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#25, xc=0)
[    760.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    760.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    760.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    760.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    760.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=1)
[    760.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
[    760.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#9, xc=3)
[    760.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    760.0] L GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
[    760.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#30, xc=0)
[    760.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#35, xc=0)
