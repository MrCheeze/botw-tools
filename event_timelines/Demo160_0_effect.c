-------- Event timeline: Demo160_0_effect --------
actors: 2
clips: 20
oneshots: 0
cuts: 1
duration: 1741.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoXLinkActor[0]
x36: 3
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 6
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[    110.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 59.0
               {ELinkKey: TerminalTouch01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    166.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#7, xc=1)
               duration: 100.0
               {ELinkKey: Grudge_Terminal01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    169.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[    170.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 279.0
               {ELinkKey: TerminalTouch02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    187.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#8, xc=2)
               duration: 100.0
               {ELinkKey: Grudge_Terminal02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    266.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#7, xc=1)
[    287.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#8, xc=2)
[    449.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
[    449.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
               duration: 2.0
               {ELinkKey: TerminalTouch02, IsWaitFinish: true, SLinkKey: ''}
[    451.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
[    451.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
               duration: 8.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    459.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
[    459.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=0)
               duration: 14.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    473.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=0)
[    616.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=0)
               duration: 4.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[    616.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=0)
               duration: 64.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    620.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=0)
[    620.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#6, xc=0)
               duration: 3.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[    623.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#6, xc=0)
[    680.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=0)
[    694.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#18, xc=5)
               duration: 100.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_BladeAppear,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    766.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=1)
               duration: 44.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    794.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#18, xc=5)
[    810.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=1)
[    824.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=2)
               duration: 456.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: demo160_0_fire01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    880.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=3)
               duration: 165.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1015.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#19, xc=5)
               duration: 40.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1030.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=4)
               duration: 366.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: true, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1045.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=3)
[   1055.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#19, xc=5)
[   1065.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=3)
               duration: 80.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1073.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=0)
               duration: 70.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_fireExplosion,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1073.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=1)
               duration: 70.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1143.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=0)
[   1143.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=1)
[   1145.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=3)
[   1280.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=2)
[   1396.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=4)
[   1576.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#17, xc=4)
               duration: 165.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1741.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#17, xc=4)
