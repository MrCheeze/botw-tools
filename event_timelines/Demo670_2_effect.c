-------- Event timeline: Demo670_2_effect --------
actors: 3
clips: 14
oneshots: 0
cuts: 1
duration: 2024.0
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
x36: 6
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E EffectEmitter[1] - Demo_EmitEffectLoop (#0, xc=0)
               duration: 270.0
               {A: 0.0, Actor: GameROMPlayer, B: 0.0, CutChangeReset: false, ELinkKey: Demo670_Fringe, G: 0.0,
                 InstanceName: '10', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    270.0] L EffectEmitter[1] - Demo_EmitEffectLoop (#0, xc=0)
[    930.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 7.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    937.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
[    937.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=1)
               duration: 7.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    944.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=1)
[   1200.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
               duration: 2.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[   1200.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 65.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1202.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
[   1202.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=1)
               duration: 2.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[   1204.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=1)
[   1265.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[   1376.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=4)
               duration: 26.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_SpearSpark,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1402.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=4)
[   1410.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
               duration: 60.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1470.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
[   1500.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=2)
               duration: 85.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1585.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=2)
[   1605.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=3)
               duration: 25.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1630.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=3)
[   1635.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=5)
               duration: 387.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1680.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=4)
               duration: 25.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1685.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=2)
               duration: 95.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '5', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1688.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
               duration: 28.0
               {ELinkKey: Splash, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1705.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=4)
[   1716.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
[   1780.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=2)
[   2022.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=5)
