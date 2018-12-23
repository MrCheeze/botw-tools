-------- Event timeline: Demo176_0 --------
actors: 11
clips: 30
oneshots: 0
cuts: 3
duration: 730.0
subtimelines: ['Demo176_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C03
start time: 120.0
x4: 0
params: (none)

Cut: C02
start time: 220.0
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
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventSetFogDirect']
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

Actor: Npc_oasis007[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Weapon_Lsword_029[0]
x36: 1
actions: ['Demo_Bind']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_oasis003[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 730.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 730.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 730.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.23999999463558197, WindDirY: 0.0, WindDirZ: 0.11999999731779099,
                 WindPower: 2.700000047683716}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
               duration: 730.0
               {IsWaitFinish: true, angleY: 7.5}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#6, xc=2)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#9, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 4.5, ApertureEnd: 4.5, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 120.0, DOFStartFrame: 0.0, DOFUse: true,
                 EndFrame: -1.0, FocalLength: 17.200000762939453, FocalLengthEnd: 17.200000762939453, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#12, xc=1)
               duration: 120.0
               {FocusDistEnd: 13.0, FocusDistStart: 13.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#20, xc=0)
               duration: 120.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_oasis007[0] - Demo_PlayASForTimeline (#23, xc=0)
               duration: 120.0
               {ASName: C01-Npc_Gerudo_General-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Weapon_Lsword_029[0] - Demo_Bind (#26, xc=0)
               duration: 730.0
               {ActorName: Npc_oasis007, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 120.0
               {ASName: Demo176_0-C01-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    120.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#6, xc=2)
[    120.0] L GameRomCamera[0] - Demo_CameraAnim (#9, xc=0)
[    120.0] L GameRomCamera[0] - Demo_FocusDistSetting (#12, xc=1)
[    120.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#20, xc=0)
[    120.0] L Npc_oasis007[0] - Demo_PlayASForTimeline (#23, xc=0)
[    120.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#27, xc=0)
[    120.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=2)
               duration: 100.0
               {Far: 100.0, FarUse: true, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: 3.0, NearUse: true}
[    120.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 100.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 18.299999237060547, ApertureEnd: 18.299999237060547,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.509999990463257,
                 FocalLengthEnd: 3.509999990463257, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    120.0] E GameRomCamera[0] - Demo_FocusDistSetting (#13, xc=1)
               duration: 100.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    120.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#21, xc=0)
               duration: 100.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    120.0] E Npc_oasis007[0] - Demo_PlayASForTimeline (#24, xc=0)
               duration: 100.0
               {ASName: C03-Npc_Gerudo_General-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    120.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#28, xc=0)
               duration: 100.0
               {ASName: Demo176_0-C03-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    140.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#16, xc=0)
               duration: 21.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo176_0_Text003}
[    161.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#16, xc=0)
[    220.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=2)
[    220.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    220.0] L GameRomCamera[0] - Demo_FocusDistSetting (#13, xc=1)
[    220.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#21, xc=0)
[    220.0] L Npc_oasis007[0] - Demo_PlayASForTimeline (#24, xc=0)
[    220.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#28, xc=0)
[    220.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
               duration: 510.0
               {Far: 78.0, FarUse: true, FogRatio: 0.30000001192092896, InstantSW: true, IsWaitFinish: true,
                 Near: 3.0, NearUse: true}
[    220.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 510.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 78.0, ApertureEnd: 78.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    220.0] E GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
               duration: 510.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    220.0] E EventSystemActor[0] - Demo_PlayUiActorName (#15, xc=0)
               duration: 180.0
               {ActorName: Npc_oasis003, ActorType: 1, IsWaitFinish: true}
[    220.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#22, xc=0)
               duration: 510.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    220.0] E Npc_oasis007[0] - Demo_PlayASForTimeline (#25, xc=0)
               duration: 510.0
               {ASName: C02-Npc_Gerudo_General-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    220.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#29, xc=0)
               duration: 510.0
               {ASName: Demo176_0-C02-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    390.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#17, xc=0)
               duration: 123.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo176_0_Text000}
[    400.0] L EventSystemActor[0] - Demo_PlayUiActorName (#15, xc=0)
[    513.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#17, xc=0)
[    570.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#18, xc=0)
               duration: 27.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo176_0_Text001}
[    597.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#18, xc=0)
[    615.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#19, xc=0)
               duration: 81.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo176_0_Text002}
[    696.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#19, xc=0)
[    700.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    730.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    730.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    730.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    730.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    730.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
[    730.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
[    730.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    730.0] L GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
[    730.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#22, xc=0)
[    730.0] L Npc_oasis007[0] - Demo_PlayASForTimeline (#25, xc=0)
[    730.0] L Weapon_Lsword_029[0] - Demo_Bind (#26, xc=0)
[    730.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#29, xc=0)
