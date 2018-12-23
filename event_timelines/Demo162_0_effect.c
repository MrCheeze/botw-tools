-------- Event timeline: Demo162_0_effect --------
actors: 2
clips: 20
oneshots: 0
cuts: 1
duration: 2145.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoXLinkActor[0]
x36: 4
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 6
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[    160.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 48.0
               {ELinkKey: TerminalTouch01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    200.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=2)
               duration: 100.0
               {ELinkKey: Grudge_Terminal01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    208.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[    208.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#7, xc=1)
               duration: 167.0
               {ELinkKey: TerminalTouch02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    212.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
               duration: 12.0
               {ELinkKey: TerminalTouch01, IsWaitFinish: true, SLinkKey: ''}
[    224.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
[    255.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#10, xc=3)
               duration: 100.0
               {ELinkKey: Grudge_Terminal02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    300.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=2)
[    355.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#10, xc=3)
[    375.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#7, xc=1)
[    375.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=0)
               duration: 7.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    375.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#8, xc=1)
               duration: 11.0
               {ELinkKey: TerminalTouch02, IsWaitFinish: true, SLinkKey: ''}
[    382.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=0)
[    382.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
               duration: 7.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    386.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#8, xc=1)
[    389.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
[    645.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#4, xc=0)
               duration: 2.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[    645.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=0)
               duration: 65.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    647.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#4, xc=0)
[    647.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=0)
               duration: 2.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[    649.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=0)
[    710.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=0)
[    821.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=4)
               duration: 26.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_SpearSpark,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    847.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=4)
[    855.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=1)
               duration: 60.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    915.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=1)
[    945.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=2)
               duration: 85.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1030.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=2)
[   1050.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=3)
               duration: 25.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1075.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=3)
[   1080.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#18, xc=5)
               duration: 660.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1125.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#17, xc=4)
               duration: 25.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1130.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=2)
               duration: 95.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1133.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#6, xc=0)
               duration: 28.0
               {ELinkKey: Splash, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1150.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#17, xc=4)
[   1161.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#6, xc=0)
[   1225.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=2)
[   1740.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#18, xc=5)
[   1905.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#19, xc=5)
               duration: 240.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   2145.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#19, xc=5)
