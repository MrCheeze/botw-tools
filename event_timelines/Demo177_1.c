-------- Event timeline: Demo177_1 --------
actors: 11
clips: 29
oneshots: 0
cuts: 3
duration: 715.0
subtimelines: ['Demo177_1_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 250.0
x4: 0
params: (none)

Cut: C03
start time: 385.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeOut', 'Demo_FadeIn']
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

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Npc_ZoraB001[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Zora003[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Zora004[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 20.0
               {Color: 1, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 715.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 715.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 250.0
               {IsWaitFinish: true, angleY: 81.36000061035156}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#7, xc=1)
               duration: 715.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.18000000715255737, WindDirY: 0.0, WindDirZ: 0.6700000166893005,
                 WindPower: 5.199999809265137}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
               duration: 250.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 3.9000000953674316, ApertureEnd: 3.9000000953674316,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 17.600000381469727,
                 FocalLengthEnd: 17.600000381469727, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C01-A-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#13, xc=1)
               duration: 250.0
               {FocusDistEnd: 17.0, FocusDistStart: 17.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#20, xc=0)
               duration: 250.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#22, xc=0)
               duration: 250.0
               {ASName: C01-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_Zora003[0] - Demo_PlayASForTimeline (#25, xc=0)
               duration: 250.0
               {ASName: Demo177_1-C01-Npc_Zora_King-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_Zora004[0] - Demo_PlayASForTimeline (#28, xc=0)
               duration: 250.0
               {ASName: C01-Npc_Zora_Priest-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     10.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#17, xc=0)
               duration: 234.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_1_Text005}
[     20.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    244.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#17, xc=0)
[    250.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[    250.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
[    250.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    250.0] L GameRomCamera[0] - Demo_FocusDistSetting (#13, xc=1)
[    250.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#20, xc=0)
[    250.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#22, xc=0)
[    250.0] L Npc_Zora003[0] - Demo_PlayASForTimeline (#25, xc=0)
[    250.0] L Npc_Zora004[0] - Demo_PlayASForTimeline (#28, xc=0)
[    250.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 135.0
               {IsWaitFinish: true, angleY: 88.55999755859375}
[    250.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=2)
               duration: 465.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3799999952316284, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    250.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 22.799999237060547, ApertureEnd: 22.799999237060547,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 7.800000190734863,
                 FocalLengthEnd: 7.800000190734863, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C02-A-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    250.0] E GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
               duration: 135.0
               {FocusDistEnd: 7.5, FocusDistStart: 7.5, IsWaitFinish: true}
[    250.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#21, xc=0)
               duration: 135.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    250.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#23, xc=0)
               duration: 135.0
               {ASName: C02-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    250.0] E Npc_Zora003[0] - Demo_PlayASForTimeline (#26, xc=0)
               duration: 135.0
               {ASName: Demo177_1-C02-Npc_Zora_King-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    260.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#18, xc=0)
               duration: 115.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_1_Text006}
[    375.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#18, xc=0)
[    385.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    385.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    385.0] L GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
[    385.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#21, xc=0)
[    385.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#23, xc=0)
[    385.0] L Npc_Zora003[0] - Demo_PlayASForTimeline (#26, xc=0)
[    385.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 330.0
               {IsWaitFinish: true, angleY: 85.68000030517578}
[    385.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 330.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 74.0, ApertureEnd: 74.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 8.0, FocalLengthEnd: 8.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C03-A-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    385.0] E GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
               duration: 330.0
               {FocusDistEnd: 7.5, FocusDistStart: 7.5, IsWaitFinish: true}
[    385.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#24, xc=0)
               duration: 330.0
               {ASName: C03-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    385.0] E Npc_Zora003[0] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 715.0
               {ASName: Demo177_1-C02-Npc_Zora_King-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    400.0] E EventSystemActor[0] - Demo_PlayUiActorName (#16, xc=0)
               duration: 180.0
               {ActorName: Npc_ZoraB001, ActorType: 1, IsWaitFinish: true}
[    540.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#19, xc=0)
               duration: 95.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo177_1_Text007}
[    580.0] L EventSystemActor[0] - Demo_PlayUiActorName (#16, xc=0)
[    635.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#19, xc=0)
[    695.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 20.0
               {Color: 1, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[    715.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    715.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    715.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    715.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    715.0] L WorldManagerControl[0] - Demo_SetWind (#7, xc=1)
[    715.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=2)
[    715.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    715.0] L GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
[    715.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#24, xc=0)
[   1100.0] L Npc_Zora003[0] - Demo_PlayASForTimeline (#27, xc=0)
