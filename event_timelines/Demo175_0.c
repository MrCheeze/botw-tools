-------- Event timeline: Demo175_0 --------
actors: 9
clips: 29
oneshots: 0
cuts: 4
duration: 698.0
subtimelines: ['Demo175_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 120.0
x4: 0
params: (none)

Cut: C03
start time: 251.0
x4: 0
params: (none)

Cut: C04
start time: 368.0
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
x36: 3
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventSetFogDirect']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Goron020[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 698.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 698.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: 95.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#8, xc=1)
               duration: 698.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.23999999463558197, WindDirY: 0.0, WindDirZ: 0.10999999940395355,
                 WindPower: 3.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=2)
               duration: 698.0
               {Far: 0.0, FarUse: false, FogRatio: 0.20000000298023224, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
               duration: 120.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[      0.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#18, xc=0)
               duration: 155.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo175_0_Text000}
[      0.0] E Npc_Goron020[0] - Demo_PlayASForTimeline (#22, xc=0)
               duration: 120.0
               {ASName: C01-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#26, xc=0)
               duration: 120.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    120.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[    120.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    120.0] L GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
[    120.0] L Npc_Goron020[0] - Demo_PlayASForTimeline (#22, xc=0)
[    120.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#26, xc=0)
[    120.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 131.0
               {IsWaitFinish: true, angleY: 95.0}
[    120.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 131.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    120.0] E GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
               duration: 131.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[    120.0] E Npc_Goron020[0] - Demo_PlayASForTimeline (#23, xc=0)
               duration: 131.0
               {ASName: C02-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    120.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 578.0
               {ASName: DemoWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    120.0] E GameROMPlayer[0] - Demo_VisibleOff (#28, xc=1)
               duration: 578.0
               {IsWaitFinish: true}
[    155.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#18, xc=0)
[    180.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#19, xc=0)
               duration: 220.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo175_0_Text001}
[    251.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    251.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    251.0] L GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
[    251.0] L Npc_Goron020[0] - Demo_PlayASForTimeline (#23, xc=0)
[    251.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 117.0
               {IsWaitFinish: true, angleY: 120.0}
[    251.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 117.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    251.0] E GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
               duration: 117.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[    251.0] E Npc_Goron020[0] - Demo_PlayASForTimeline (#24, xc=0)
               duration: 117.0
               {ASName: C03-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    368.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    368.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    368.0] L GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
[    368.0] L Npc_Goron020[0] - Demo_PlayASForTimeline (#24, xc=0)
[    368.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 330.0
               {IsWaitFinish: true, angleY: 120.0}
[    368.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 330.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    368.0] E GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
               duration: 330.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    368.0] E Npc_Goron020[0] - Demo_PlayASForTimeline (#25, xc=0)
               duration: 330.0
               {ASName: C04-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    400.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#19, xc=0)
[    405.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#20, xc=0)
               duration: 225.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo175_0_Text002}
[    458.0] E EventSystemActor[0] - Demo_PlayUiActorName (#21, xc=0)
               duration: 180.0
               {ActorName: Npc_FollowGoron, ActorType: 1, IsWaitFinish: true}
[    630.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#20, xc=0)
[    638.0] L EventSystemActor[0] - Demo_PlayUiActorName (#21, xc=0)
[    668.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    698.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    698.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    698.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    698.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    698.0] L WorldManagerControl[0] - Demo_SetWind (#8, xc=1)
[    698.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=2)
[    698.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    698.0] L GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
[    698.0] L Npc_Goron020[0] - Demo_PlayASForTimeline (#25, xc=0)
[    698.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#27, xc=0)
[    698.0] L GameROMPlayer[0] - Demo_VisibleOff (#28, xc=1)
