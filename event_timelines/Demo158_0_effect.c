-------- Event timeline: Demo158_0_effect --------
actors: 2
clips: 20
oneshots: 0
cuts: 1
duration: 1655.0
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
x36: 4
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[    156.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 34.0
               {ELinkKey: TerminalTouch01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    190.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[    190.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 208.0
               {ELinkKey: TerminalTouch02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    205.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#7, xc=1)
               duration: 9.0
               {ELinkKey: Grudge_Terminal01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    214.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#7, xc=1)
[    221.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=2)
               duration: 9.0
               {ELinkKey: GrudgeWave, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    230.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#9, xc=2)
[    262.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#8, xc=1)
               duration: 55.0
               {ELinkKey: Grudge_Terminal02, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    317.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#8, xc=1)
[    398.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
[    398.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
               duration: 2.0
               {ELinkKey: TerminalTouch02, IsWaitFinish: true, SLinkKey: ''}
[    400.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#2, xc=0)
[    400.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
               duration: 9.0
               {ELinkKey: WarpLarge01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    409.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#3, xc=0)
[    409.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=0)
               duration: 10.0
               {ELinkKey: AppearCore, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    419.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=0)
[    555.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=0)
               duration: 2.0
               {ELinkKey: WarpLarge01, IsWaitFinish: true, SLinkKey: ''}
[    555.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=0)
               duration: 63.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_appear_Rhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    557.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=0)
[    557.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#6, xc=0)
               duration: 2.0
               {ELinkKey: AppearCore, IsWaitFinish: true, SLinkKey: ''}
[    559.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#6, xc=0)
[    618.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=0)
[    642.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#17, xc=3)
               duration: 30.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: SwordOpen, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    650.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=1)
               duration: 62.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_appear_Lhand,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    672.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#17, xc=3)
[    704.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#18, xc=3)
               duration: 30.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: ShieldOpen, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    712.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=1)
[    734.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#18, xc=3)
[    750.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=2)
               duration: 122.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_appear_top,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    872.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=2)
[    875.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=2)
               duration: 40.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    877.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=0)
               duration: 90.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_elecSpark,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    877.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=1)
               duration: 39.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    880.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#19, xc=3)
               duration: 685.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    915.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=2)
[    916.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=1)
[    967.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=0)
[    975.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=1)
               duration: 40.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo158_0_cg_Boot,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1015.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=1)
[   1565.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#19, xc=3)
