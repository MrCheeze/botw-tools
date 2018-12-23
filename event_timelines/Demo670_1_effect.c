-------- Event timeline: Demo670_1_effect --------
actors: 2
clips: 14
oneshots: 0
cuts: 1
duration: 1833.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoXLinkActor[0]
x36: 2
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 5
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=4)
               duration: 270.0
               {A: 0.0, Actor: GameROMPlayer, B: 0.0, CutChangeReset: false, ELinkKey: Demo670_Fringe, G: 0.0,
                 InstanceName: '12', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    270.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=4)
[    935.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 330.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1025.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
               duration: 240.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1265.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[   1265.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
[   1265.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
               duration: 23.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[   1265.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
               duration: 4.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[   1265.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
               duration: 35.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_appear_bottom,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1269.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
[   1288.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
[   1300.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
[   1330.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
               duration: 27.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1357.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
[   1386.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 81.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1467.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[   1491.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=0)
               duration: 139.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1630.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=0)
[   1645.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=0)
               duration: 160.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1645.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=2)
               duration: 711.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1652.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=1)
               duration: 100.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_tornado,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1655.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=3)
               duration: 90.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType03,
                 G: 0.0, InstanceName: '5', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1745.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=3)
[   1752.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=1)
[   1780.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=3)
               duration: 40.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1805.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=0)
[   1820.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=3)
[   2356.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=2)
