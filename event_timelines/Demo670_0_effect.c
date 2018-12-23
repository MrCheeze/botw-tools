-------- Event timeline: Demo670_0_effect --------
actors: 3
clips: 15
oneshots: 0
cuts: 1
duration: 1725.0
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
                 InstanceName: '7', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    270.0] L EffectEmitter[1] - Demo_EmitEffectLoop (#0, xc=0)
[    930.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 8.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    938.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
[    938.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=1)
               duration: 14.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    952.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=1)
[   1095.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
               duration: 4.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[   1095.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
               duration: 64.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1099.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
[   1099.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#4, xc=1)
               duration: 3.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[   1102.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#4, xc=1)
[   1159.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
[   1173.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=5)
               duration: 100.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_BladeAppear,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1245.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
               duration: 44.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1273.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=5)
[   1289.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
[   1303.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=2)
               duration: 422.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: demo160_0_fire01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1359.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=3)
               duration: 165.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1494.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=5)
               duration: 40.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1509.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=4)
               duration: 216.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: true, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1524.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=3)
[   1534.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=5)
[   1544.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=3)
               duration: 80.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '5', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1552.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 70.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_fireExplosion,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1552.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=1)
               duration: 70.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword_R, B: 0.0, CutChangeReset: false, ELinkKey: Demo160_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1622.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[   1622.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=1)
[   1624.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=3)
[   1725.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=2)
[   1725.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=4)
