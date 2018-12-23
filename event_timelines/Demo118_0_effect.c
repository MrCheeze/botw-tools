-------- Event timeline: Demo118_0_effect --------
actors: 2
clips: 15
oneshots: 0
cuts: 1
duration: 1900.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EffectEmitter[0]
x36: 7
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoXLinkActor[0]
x36: 4
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
               duration: 206.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo118_0_cg_appear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[      0.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#11, xc=1)
               duration: 1235.0
               {ELinkKey: TerminalGrudge, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    206.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
[    244.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=1)
               duration: 746.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo118_0_cg_gludge,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    260.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=4)
               duration: 756.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    429.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=6)
               duration: 561.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo118_0_bodyMelt,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    658.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=2)
               duration: 332.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo118_0_cg_GludgeLine,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    807.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=5)
               duration: 273.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo118_0_flash01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    982.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=3)
               duration: 97.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo118_0_cg_burst,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    990.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=1)
[    990.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=2)
[    990.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=6)
[   1016.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=4)
[   1079.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=3)
[   1080.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=5)
[   1081.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=0)
               duration: 162.0
               {ELinkKey: Demo118_0_GrudgeHaze, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1214.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#13, xc=2)
               duration: 96.0
               {ELinkKey: TerminalRelease, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1235.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#11, xc=1)
[   1243.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=0)
[   1243.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#10, xc=0)
               duration: 17.0
               {ELinkKey: Demo118_0_GrudgeHaze, IsWaitFinish: true, SLinkKey: ''}
[   1260.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#10, xc=0)
[   1260.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#12, xc=1)
               duration: 17.0
               {ELinkKey: TerminalGrudge, IsWaitFinish: true, SLinkKey: ''}
[   1277.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#12, xc=1)
[   1310.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#13, xc=2)
[   1310.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#14, xc=2)
               duration: 10.0
               {ELinkKey: TerminalRelease, IsWaitFinish: true, SLinkKey: ''}
[   1320.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#14, xc=2)
[   1520.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=4)
               duration: 380.0
               {A: 0.0, Actor: Obj_HeartUtuwa_A_01, B: 0.0, CutChangeReset: false, ELinkKey: Kirakira, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1782.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=6)
               duration: 118.0
               {A: 0.0, Actor: RemainsClearTerminal, B: 0.0, CutChangeReset: false, ELinkKey: BossBattle_Clear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1900.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=4)
[   1900.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=6)
