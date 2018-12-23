-------- Event timeline: Demo124_0_effect --------
actors: 2
clips: 15
oneshots: 0
cuts: 1
duration: 1620.0
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
x36: 8
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 1043.0
               {ELinkKey: TerminalGrudge, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
               duration: 93.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_cg_appear,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=7)
               duration: 850.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: GrudgeEnv_MainDungeon_Demo,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[     93.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
[    120.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=6)
               duration: 610.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    180.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
               duration: 541.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_cg_gludge,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    242.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=2)
               duration: 479.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_bodyMelt,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    460.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=3)
               duration: 261.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_cg_GludgeLine,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    590.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=4)
               duration: 131.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_flash01,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    710.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=5)
               duration: 90.0
               {A: 0.0, Actor: Enemy_SiteBoss_Sword, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_burst01,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    721.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
[    721.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=2)
[    721.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=3)
[    721.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=4)
[    730.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=6)
[    800.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=5)
[    800.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
               duration: 85.0
               {A: 0.0, Actor: DemoXLinkActor, B: 0.0, CutChangeReset: false, ELinkKey: Demo124_0_GrudgeHaze,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    850.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=7)
[    885.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
[   1013.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
               duration: 122.0
               {ELinkKey: TerminalRelease, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1043.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[   1043.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
               duration: 17.0
               {ELinkKey: TerminalGrudge, IsWaitFinish: true, SLinkKey: ''}
[   1060.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
[   1135.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
[   1135.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
               duration: 10.0
               {ELinkKey: TerminalRelease, IsWaitFinish: true, SLinkKey: ''}
[   1145.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
[   1240.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 380.0
               {A: 0.0, Actor: Obj_HeartUtuwa_A_01, B: 0.0, CutChangeReset: false, ELinkKey: Kirakira, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1536.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=1)
               duration: 84.0
               {A: 0.0, Actor: RemainsClearTerminal, B: 0.0, CutChangeReset: false, ELinkKey: BossBattle_Clear,
                 G: 0.0, InstanceName: '', IsWaitFinish: true, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1620.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[   1620.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=1)
