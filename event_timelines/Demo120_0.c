-------- Event timeline: Demo120_0 --------
actors: 15
clips: 112
oneshots: 0
cuts: 10
duration: 1770.0
subtimelines: ['Demo120_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 180.0
x4: 0
params: (none)

Cut: C04
start time: 465.0
x4: 0
params: (none)

Cut: C05
start time: 615.0
x4: 0
params: (none)

Cut: C06
start time: 690.0
x4: 0
params: (none)

Cut: C07
start time: 810.0
x4: 0
params: (none)

Cut: C08
start time: 930.0
x4: 0
params: (none)

Cut: C09
start time: 1035.0
x4: 0
params: (none)

Cut: C10
start time: 1260.0
x4: 0
params: (none)

Cut: C11
start time: 1470.0
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
x36: 4
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventSetFogDirect', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleLarge', 'Demo_RumbleSmall']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Npc_ZoraB001[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Zora030[0]
x36: 1
actions: ['Demo_VisibleOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[1]
x36: 3
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[2]
x36: 3
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[3]
x36: 3
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[4]
x36: 3
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#9, xc=0)
               duration: 1770.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#10, xc=0)
               duration: 1770.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: 100.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#21, xc=1)
               duration: 1770.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.07999999821186066, WindDirY: 0.0, WindDirZ: 0.17000000178813934,
                 WindPower: 7.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=2)
               duration: 180.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3700000047683716, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#32, xc=3)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.17000000178813934, setPos_y: 0.05999999865889549}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 180.0
               {FocusDistEnd: 50.0, FocusDistStart: 50.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#65, xc=2)
               duration: 180.0
               {IsWaitFinish: true, Near: 4.0}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 180.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#83, xc=0)
               duration: 180.0
               {ASName: C01-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Npc_Zora030[0] - Demo_VisibleOff (#89, xc=0)
               duration: 1770.0
               {IsWaitFinish: true}
[      0.0] E RemainsWater[0] - Demo_PlayASForTimeline (#90, xc=0)
               duration: 180.0
               {ASName: C01-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater[0] - Demo_PlayASForTimeline (#99, xc=1)
               duration: 1770.0
               {ASName: BeforeClear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[1] - Demo_EventBind (#100, xc=0)
               duration: 1770.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_1, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[1] - Demo_PlayASForTimeline (#101, xc=1)
               duration: 1770.0
               {ASName: WaterStopWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[1] - Demo_PlayASForTimeline (#102, xc=2)
               duration: 1770.0
               {ASName: Deactive, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[2] - Demo_EventBind (#103, xc=0)
               duration: 1770.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_2, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[2] - Demo_PlayASForTimeline (#104, xc=1)
               duration: 1770.0
               {ASName: WaterStopWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[2] - Demo_PlayASForTimeline (#105, xc=2)
               duration: 1771.0
               {ASName: Deactive, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[3] - Demo_EventBind (#106, xc=0)
               duration: 1770.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_3, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[3] - Demo_PlayASForTimeline (#107, xc=1)
               duration: 1770.0
               {ASName: WaterStopWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[3] - Demo_PlayASForTimeline (#108, xc=2)
               duration: 1770.0
               {ASName: Deactive, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[4] - Demo_EventBind (#109, xc=0)
               duration: 1770.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_4, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[4] - Demo_PlayASForTimeline (#110, xc=1)
               duration: 1770.0
               {ASName: WaterStopWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[4] - Demo_PlayASForTimeline (#111, xc=2)
               duration: 1771.0
               {ASName: Deactive, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      1.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#32, xc=3)
[      1.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#33, xc=3)
               duration: 179.0
               {IsWaitFinish: true, setSpeed_x: 0.0, setSpeed_y: 0.000699999975040555}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    180.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
[    180.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=2)
[    180.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#33, xc=3)
[    180.0] L GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
[    180.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[    180.0] L GameRomCamera[0] - Demo_OverwriteNear (#65, xc=2)
[    180.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
[    180.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#83, xc=0)
[    180.0] L RemainsWater[0] - Demo_PlayASForTimeline (#90, xc=0)
[    180.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 285.0
               {IsWaitFinish: true, angleY: 90.0}
[    180.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=2)
               duration: 285.0
               {Far: 300.0, FarUse: true, FogRatio: 0.5, InstantSW: true, IsWaitFinish: true, Near: -18.0,
                 NearUse: true}
[    180.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#34, xc=3)
               duration: 285.0
               {IsWaitFinish: true}
[    180.0] E GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
               duration: 285.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 45.5, ApertureEnd: 45.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.5, FocalLengthEnd: 4.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    180.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 285.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[    180.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 285.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    180.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#84, xc=0)
               duration: 285.0
               {ASName: C02-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    193.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
               duration: 58.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text023}
[    251.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
[    261.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
               duration: 69.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text024}
[    330.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
[    382.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#4, xc=0)
               duration: 143.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text019}
[    465.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
[    465.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=2)
[    465.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#34, xc=3)
[    465.0] L GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
[    465.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[    465.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
[    465.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#84, xc=0)
[    465.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: 90.0}
[    465.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=2)
               duration: 150.0
               {Far: 0.0, FarUse: false, FogRatio: 0.4300000071525574, InstantSW: true, IsWaitFinish: true,
                 Near: -10.0, NearUse: true}
[    465.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#35, xc=3)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.15000000596046448, setPos_y: 0.12999999523162842}
[    465.0] E GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    465.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 150.0
               {FocusDistEnd: 40.0, FocusDistStart: 40.0, IsWaitFinish: true}
[    465.0] E RemainsWater[0] - Demo_PlayASForTimeline (#91, xc=0)
               duration: 150.0
               {ASName: C04-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    466.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#35, xc=3)
[    466.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#36, xc=3)
               duration: 149.0
               {IsWaitFinish: true, setSpeed_x: 0.0, setSpeed_y: 0.000699999975040555}
[    525.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#4, xc=0)
[    615.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
[    615.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=2)
[    615.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#36, xc=3)
[    615.0] L GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
[    615.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[    615.0] L RemainsWater[0] - Demo_PlayASForTimeline (#91, xc=0)
[    615.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
               duration: 75.0
               {IsWaitFinish: true, angleY: 50.0}
[    615.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=2)
               duration: 75.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23999999463558197, InstantSW: true, IsWaitFinish: true,
                 Near: -40.0, NearUse: true}
[    615.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#37, xc=3)
               duration: 315.0
               {IsWaitFinish: true}
[    615.0] E GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 15.0, FocalLengthEnd: 15.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    615.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 75.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    615.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#71, xc=0)
               duration: 75.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    615.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#85, xc=0)
               duration: 75.0
               {ASName: C05-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    615.0] E RemainsWater[0] - Demo_PlayASForTimeline (#92, xc=0)
               duration: 75.0
               {ASName: C05-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    690.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
[    690.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=2)
[    690.0] L GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
[    690.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[    690.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#71, xc=0)
[    690.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#85, xc=0)
[    690.0] L RemainsWater[0] - Demo_PlayASForTimeline (#92, xc=0)
[    690.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: 62.0}
[    690.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=2)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3199999928474426, InstantSW: true, IsWaitFinish: true,
                 Near: -37.0, NearUse: true}
[    690.0] E GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    690.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 120.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    690.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 120.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    690.0] E RemainsWater[0] - Demo_PlayASForTimeline (#93, xc=0)
               duration: 120.0
               {ASName: C06-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    724.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#77, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    725.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#77, xc=1)
[    735.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#78, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    736.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#78, xc=1)
[    747.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    748.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
[    789.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    790.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
[    810.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
[    810.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=2)
[    810.0] L GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
[    810.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[    810.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#72, xc=0)
[    810.0] L RemainsWater[0] - Demo_PlayASForTimeline (#93, xc=0)
[    810.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: 61.0}
[    810.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=2)
               duration: 120.0
               {Far: 220.0, FarUse: true, FogRatio: 0.5, InstantSW: true, IsWaitFinish: true, Near: -15.0,
                 NearUse: true}
[    810.0] E GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 72.0, ApertureEnd: 72.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7000000476837158, DOFBlurStart: 1.7000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.200000047683716, FocalLengthEnd: 2.200000047683716,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    810.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 120.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[    810.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#73, xc=0)
               duration: 120.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    810.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    810.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#86, xc=0)
               duration: 120.0
               {ASName: C07-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    810.0] E RemainsWater[0] - Demo_PlayASForTimeline (#94, xc=0)
               duration: 120.0
               {ASName: C07-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    811.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
[    814.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#5, xc=0)
               duration: 51.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text025}
[    865.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#5, xc=0)
[    877.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#6, xc=0)
               duration: 63.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text026}
[    930.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=0)
[    930.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=2)
[    930.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#37, xc=3)
[    930.0] L GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
[    930.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[    930.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#73, xc=0)
[    930.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#86, xc=0)
[    930.0] L RemainsWater[0] - Demo_PlayASForTimeline (#94, xc=0)
[    930.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=0)
               duration: 105.0
               {IsWaitFinish: true, angleY: 77.0}
[    930.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=2)
               duration: 105.0
               {Far: 300.0, FarUse: true, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -16.0, NearUse: true}
[    930.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#38, xc=3)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.25, setPos_y: 0.36000001430511475}
[    930.0] E GameRomCamera[0] - Demo_CameraAnim (#49, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.5, FocalLengthEnd: 1.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    930.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 105.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[    930.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#74, xc=0)
               duration: 105.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    930.0] E RemainsWater[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 105.0
               {ASName: C08-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    931.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#38, xc=3)
[    931.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#39, xc=3)
               duration: 104.0
               {IsWaitFinish: true, setSpeed_x: 0.0, setSpeed_y: 0.000699999975040555}
[    940.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#6, xc=0)
[    948.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#7, xc=0)
               duration: 24.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text027}
[    970.0] E EventControllerRumble[0] - Demo_RumbleLarge (#66, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    972.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#7, xc=0)
[    980.0] L EventControllerRumble[0] - Demo_RumbleLarge (#66, xc=0)
[    998.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[    999.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
[   1035.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=0)
[   1035.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=2)
[   1035.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#39, xc=3)
[   1035.0] L GameRomCamera[0] - Demo_CameraAnim (#49, xc=0)
[   1035.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   1035.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#74, xc=0)
[   1035.0] L RemainsWater[0] - Demo_PlayASForTimeline (#95, xc=0)
[   1035.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=0)
               duration: 225.0
               {IsWaitFinish: true, angleY: 82.0}
[   1035.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=2)
               duration: 225.0
               {Far: 0.0, FarUse: false, FogRatio: 0.33000001311302185, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[   1035.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#40, xc=3)
               duration: 225.0
               {IsWaitFinish: true}
[   1035.0] E GameRomCamera[0] - Demo_CameraAnim (#50, xc=0)
               duration: 225.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C09-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1035.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 225.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   1035.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#87, xc=0)
               duration: 225.0
               {ASName: C09-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1035.0] E RemainsWater[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 225.0
               {ASName: C09-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1095.0] E EventControllerRumble[0] - Demo_RumbleSmall (#67, xc=0)
               duration: 377.0
               {Count: 55, IsWaitFinish: true}
[   1260.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=0)
[   1260.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=2)
[   1260.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#40, xc=3)
[   1260.0] L GameRomCamera[0] - Demo_CameraAnim (#50, xc=0)
[   1260.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   1260.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#87, xc=0)
[   1260.0] L RemainsWater[0] - Demo_PlayASForTimeline (#96, xc=0)
[   1260.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: 77.0}
[   1260.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=2)
               duration: 210.0
               {Far: 280.0, FarUse: true, FogRatio: 0.6000000238418579, InstantSW: true, IsWaitFinish: true,
                 Near: -37.0, NearUse: true}
[   1260.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#41, xc=3)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.17000000178813934, setPos_y: 0.3400000035762787}
[   1260.0] E GameRomCamera[0] - Demo_CameraAnim (#51, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C10-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1260.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 210.0
               {FocusDistEnd: 36.0, FocusDistStart: 2.0, IsWaitFinish: true}
[   1260.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#75, xc=0)
               duration: 210.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1260.0] E RemainsWater[0] - Demo_PlayASForTimeline (#97, xc=0)
               duration: 210.0
               {ASName: C10-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1261.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#41, xc=3)
[   1261.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#42, xc=3)
               duration: 509.0
               {IsWaitFinish: true, setSpeed_x: 0.0, setSpeed_y: 0.000699999975040555}
[   1470.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=0)
[   1470.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=2)
[   1470.0] L GameRomCamera[0] - Demo_CameraAnim (#51, xc=0)
[   1470.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   1470.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#75, xc=0)
[   1470.0] L RemainsWater[0] - Demo_PlayASForTimeline (#97, xc=0)
[   1470.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=0)
               duration: 300.0
               {IsWaitFinish: true, angleY: 10.0}
[   1470.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=2)
               duration: 300.0
               {Far: 850.0, FarUse: true, FogRatio: 0.41999998688697815, InstantSW: true, IsWaitFinish: true,
                 Near: -70.0, NearUse: true}
[   1470.0] E GameRomCamera[0] - Demo_CameraAnim (#52, xc=0)
               duration: 300.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 2.0, DOFEndFrame: 210.0, DOFStartFrame: 150.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 15.0, FocalLengthEnd: 15.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C11-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1470.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 190.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   1470.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#76, xc=0)
               duration: 300.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1470.0] E Npc_ZoraB001[0] - Demo_PlayASForTimeline (#88, xc=0)
               duration: 300.0
               {ASName: C11-Npc_Zora_Prince-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1470.0] E RemainsWater[0] - Demo_PlayASForTimeline (#98, xc=0)
               duration: 300.0
               {ASName: C11-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1472.0] L EventControllerRumble[0] - Demo_RumbleSmall (#67, xc=0)
[   1472.0] E EventControllerRumble[0] - Demo_RumbleLarge (#68, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   1482.0] L EventControllerRumble[0] - Demo_RumbleLarge (#68, xc=0)
[   1619.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#8, xc=0)
               duration: 71.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo120_0_Text022}
[   1660.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   1660.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 55.0
               {FocusDistEnd: 1.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   1690.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#8, xc=0)
[   1715.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   1715.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 55.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1740.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1770.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1770.0] L Obj_Sun_A_01[0] - Demo_SunMove (#9, xc=0)
[   1770.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#10, xc=0)
[   1770.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=0)
[   1770.0] L WorldManagerControl[0] - Demo_SetWind (#21, xc=1)
[   1770.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=2)
[   1770.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#42, xc=3)
[   1770.0] L GameRomCamera[0] - Demo_CameraAnim (#52, xc=0)
[   1770.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   1770.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#76, xc=0)
[   1770.0] L Npc_ZoraB001[0] - Demo_PlayASForTimeline (#88, xc=0)
[   1770.0] L Npc_Zora030[0] - Demo_VisibleOff (#89, xc=0)
[   1770.0] L RemainsWater[0] - Demo_PlayASForTimeline (#98, xc=0)
[   1770.0] L RemainsWater[0] - Demo_PlayASForTimeline (#99, xc=1)
[   1770.0] L RemainsWater_WeakPoint[1] - Demo_EventBind (#100, xc=0)
[   1770.0] L RemainsWater_WeakPoint[1] - Demo_PlayASForTimeline (#101, xc=1)
[   1770.0] L RemainsWater_WeakPoint[1] - Demo_PlayASForTimeline (#102, xc=2)
[   1770.0] L RemainsWater_WeakPoint[2] - Demo_EventBind (#103, xc=0)
[   1770.0] L RemainsWater_WeakPoint[2] - Demo_PlayASForTimeline (#104, xc=1)
[   1770.0] L RemainsWater_WeakPoint[3] - Demo_EventBind (#106, xc=0)
[   1770.0] L RemainsWater_WeakPoint[3] - Demo_PlayASForTimeline (#107, xc=1)
[   1770.0] L RemainsWater_WeakPoint[3] - Demo_PlayASForTimeline (#108, xc=2)
[   1770.0] L RemainsWater_WeakPoint[4] - Demo_EventBind (#109, xc=0)
[   1770.0] L RemainsWater_WeakPoint[4] - Demo_PlayASForTimeline (#110, xc=1)
[   1771.0] L RemainsWater_WeakPoint[2] - Demo_PlayASForTimeline (#105, xc=2)
[   1771.0] L RemainsWater_WeakPoint[4] - Demo_PlayASForTimeline (#111, xc=2)
