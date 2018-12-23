-------- Event timeline: Demo670_3_effect --------
actors: 3
clips: 15
oneshots: 0
cuts: 1
duration: 1600.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EffectEmitter[1]
x36: 1
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoXLinkActor[0]
x36: 2
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 4
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E EffectEmitter[1] - Demo_EmitEffectLoop (#0, xc=0)
               duration: 270.0
               {A: 0.0, Actor: GameROMPlayer, B: 0.0, CutChangeReset: false, ELinkKey: Demo670_Fringe, G: 0.0,
                 InstanceName: '11', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    270.0] L EffectEmitter[1] - Demo_EmitEffectLoop (#0, xc=0)
[    930.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 9.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    939.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
[    939.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=1)
               duration: 10.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    949.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=1)
[   1085.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
               duration: 2.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[   1085.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
               duration: 63.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1087.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
[   1087.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#4, xc=1)
               duration: 2.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[   1089.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#4, xc=1)
[   1148.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
[   1172.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=3)
               duration: 30.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: SwordOpen,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1180.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
               duration: 62.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1202.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=3)
[   1234.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=3)
               duration: 30.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: ShieldOpen,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1242.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
[   1264.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=3)
[   1280.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=2)
               duration: 122.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1402.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=2)
[   1405.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=2)
               duration: 40.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '5', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1407.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 90.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_elecSpark,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1407.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=1)
               duration: 39.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1410.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=3)
               duration: 190.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1445.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=2)
[   1446.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=1)
[   1497.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[   1505.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=1)
               duration: 40.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1545.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=1)
[   1600.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=3)
