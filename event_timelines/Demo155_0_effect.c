-------- Event timeline: Demo155_0_effect --------
actors: 2
clips: 18
oneshots: 0
cuts: 1
duration: 1711.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EffectEmitter[0]
x36: 4
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoXLinkActor[0]
x36: 6
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[     60.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#15, xc=4)
               duration: 100.0
               {ELinkKey: TerminalTouch01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[     95.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#13, xc=2)
               duration: 100.0
               {ELinkKey: Grudge_Terminal01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    151.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#16, xc=5)
               duration: 94.0
               {ELinkKey: TerminalTouch02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    160.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#15, xc=4)
[    188.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#14, xc=3)
               duration: 92.0
               {ELinkKey: Grudge_Terminal02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    195.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#13, xc=2)
[    245.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#16, xc=5)
[    245.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#17, xc=5)
               duration: 12.0
               {ELinkKey: TerminalTouch02, IsWaitFinish: true, SLinkKey: ''}
[    257.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#17, xc=5)
[    280.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#14, xc=3)
[    290.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=0)
               duration: 330.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    380.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#11, xc=1)
               duration: 240.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    620.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=0)
[    620.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#11, xc=1)
[    620.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
               duration: 35.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_appear_bottom,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    620.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#10, xc=0)
               duration: 23.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[    620.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#12, xc=1)
               duration: 4.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[    624.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#12, xc=1)
[    643.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#10, xc=0)
[    655.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
[    685.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
               duration: 27.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    712.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
[    741.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=0)
               duration: 81.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    822.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=0)
[    846.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=0)
               duration: 139.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    985.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=0)
[   1000.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
               duration: 160.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1000.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=2)
               duration: 711.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1007.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=1)
               duration: 100.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_tornado,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1010.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=3)
               duration: 90.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType03,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1100.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=3)
[   1107.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=1)
[   1135.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=3)
               duration: 40.0
               {A: 0.0, Actor: Enemy_SiteBoss_Bow, B: 0.0, CutChangeReset: false, ELinkKey: Demo155_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1160.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
[   1175.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=3)
[   1711.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=2)
