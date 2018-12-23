-------- Event timeline: Demo174_0 --------
actors: 10
clips: 34
oneshots: 0
cuts: 4
duration: 850.0
subtimelines: ['Demo174_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 89.0
x4: 0
params: (none)

Cut: C04
start time: 460.0
x4: 0
params: (none)

Cut: C03
start time: 630.0
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
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventSetFogDirect']
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

Actor: DemoVoiceEmitTag[1]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_Join']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: true, PosX: -3789.0, PosY: 267.3999938964844,
  PosZ: -2319.60009765625, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Weapon_Bow_017[0]
x36: 2
actions: ['Demo_Bind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_ValleyVillage010[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 850.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 850.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 850.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.11999999731779099, WindDirY: 0.0, WindDirZ: -0.15000000596046448,
                 WindPower: 8.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
               duration: 850.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#6, xc=2)
               duration: 89.0
               {Far: 0.0, FarUse: false, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -7.0, NearUse: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 89.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 12.149999618530273, ApertureEnd: 12.149999618530273,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 7.599999904632568,
                 FocalLengthEnd: 7.599999904632568, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
               duration: 89.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_Join (#21, xc=0)
               duration: 850.0
               {IsWaitFinish: true}
[      0.0] E Weapon_Bow_017[0] - Demo_Bind (#22, xc=0)
               duration: 89.0
               {ActorName: Npc_ValleyVillage010, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_L,
                 RotOffsetX: 0.0, RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Weapon_Bow_017[0] - Demo_PlayASForTimeline (#26, xc=1)
               duration: 89.0
               {ASName: C01-Weapon_Bow_017-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 89.0
               {ASName: C01-Npc_Rito_Teba-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     89.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#6, xc=2)
[     89.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[     89.0] L GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=1)
[     89.0] L Weapon_Bow_017[0] - Demo_Bind (#22, xc=0)
[     89.0] L Weapon_Bow_017[0] - Demo_PlayASForTimeline (#26, xc=1)
[     89.0] L Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#30, xc=0)
[     89.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=2)
               duration: 371.0
               {Far: 0.0, FarUse: false, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -9.0, NearUse: true}
[     89.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 371.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 31.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 140.0,
                 DOFStartFrame: 85.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.600000023841858, FocalLengthEnd: 0.8399999737739563,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[     89.0] E GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
               duration: 371.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[     89.0] E Weapon_Bow_017[0] - Demo_Bind (#23, xc=0)
               duration: 371.0
               {ActorName: Npc_ValleyVillage010, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_L,
                 RotOffsetX: 0.0, RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[     89.0] E Weapon_Bow_017[0] - Demo_PlayASForTimeline (#27, xc=1)
               duration: 371.0
               {ASName: C02-Weapon_Bow_017-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     89.0] E Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 371.0
               {ASName: C02-Npc_Rito_Teba-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    235.0] E DemoVoiceEmitTag[1] - Demo_VoiceTrigger (#19, xc=0)
               duration: 45.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo174_0_Text000}
[    280.0] L DemoVoiceEmitTag[1] - Demo_VoiceTrigger (#19, xc=0)
[    280.0] E EventSystemActor[0] - Demo_PlayUiActorName (#18, xc=0)
               duration: 180.0
               {ActorName: Npc_ValleyVillage010, ActorType: 1, IsWaitFinish: true}
[    460.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=2)
[    460.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    460.0] L GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
[    460.0] L EventSystemActor[0] - Demo_PlayUiActorName (#18, xc=0)
[    460.0] L Weapon_Bow_017[0] - Demo_Bind (#23, xc=0)
[    460.0] L Weapon_Bow_017[0] - Demo_PlayASForTimeline (#27, xc=1)
[    460.0] L Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#31, xc=0)
[    460.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
               duration: 170.0
               {Far: 0.0, FarUse: false, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -9.0, NearUse: true}
[    460.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 170.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 48.5, ApertureEnd: 48.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.2999999523162842, FocalLengthEnd: 1.2999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    460.0] E GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
               duration: 170.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    460.0] E Weapon_Bow_017[0] - Demo_Bind (#24, xc=0)
               duration: 170.0
               {ActorName: Npc_ValleyVillage010, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_L,
                 RotOffsetX: 0.0, RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[    460.0] E Weapon_Bow_017[0] - Demo_PlayASForTimeline (#28, xc=1)
               duration: 170.0
               {ASName: C04-Weapon_Bow_017-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    460.0] E Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 170.0
               {ASName: C04-Npc_Rito_Teba-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    466.0] E DemoVoiceEmitTag[1] - Demo_VoiceTrigger (#20, xc=0)
               duration: 158.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo174_0_Text001}
[    624.0] L DemoVoiceEmitTag[1] - Demo_VoiceTrigger (#20, xc=0)
[    630.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=2)
[    630.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    630.0] L GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
[    630.0] L Weapon_Bow_017[0] - Demo_Bind (#24, xc=0)
[    630.0] L Weapon_Bow_017[0] - Demo_PlayASForTimeline (#28, xc=1)
[    630.0] L Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#32, xc=0)
[    630.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=2)
               duration: 220.0
               {Far: 0.0, FarUse: false, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -7.0, NearUse: true}
[    630.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 220.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 18.0, ApertureEnd: 18.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.0999999046325684, FocalLengthEnd: 3.0999999046325684,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    630.0] E GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
               duration: 220.0
               {FocusDistEnd: 3.200000047683716, FocusDistStart: 3.200000047683716, IsWaitFinish: true}
[    630.0] E Weapon_Bow_017[0] - Demo_Bind (#25, xc=0)
               duration: 220.0
               {ActorName: Npc_ValleyVillage010, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_L,
                 RotOffsetX: 0.0, RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[    630.0] E Weapon_Bow_017[0] - Demo_PlayASForTimeline (#29, xc=1)
               duration: 220.0
               {ASName: C03-Weapon_Bow_017-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    630.0] E Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 220.0
               {ASName: C03-Npc_Rito_Teba-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    820.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    850.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    850.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    850.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    850.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    850.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
[    850.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=2)
[    850.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    850.0] L GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
[    850.0] L GameROMPlayer[0] - Demo_Join (#21, xc=0)
[    850.0] L Weapon_Bow_017[0] - Demo_Bind (#25, xc=0)
[    850.0] L Weapon_Bow_017[0] - Demo_PlayASForTimeline (#29, xc=1)
[    850.0] L Npc_ValleyVillage010[0] - Demo_PlayASForTimeline (#33, xc=0)
