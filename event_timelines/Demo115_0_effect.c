-------- Event timeline: Demo115_0_effect --------
actors: 2
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

Actor: DemoXLinkActor[0]
x36: 3
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 8
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
               duration: 1039.0
               {ELinkKey: TerminalGrudge, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 99.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo115_0_cg_appear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[     99.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[    105.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=7)
               duration: 601.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    150.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
               duration: 552.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo115_0_cg_gludge,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    213.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=5)
               duration: 489.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo115_0_bodyMelt,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    380.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=2)
               duration: 322.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo115_0_cg_GludgeLine,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    480.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=3)
               duration: 276.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo115_0_flash01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    700.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=4)
               duration: 99.0
               {A: 0.0, Actor: Enemy_SiteBoss_Lsword, B: 0.0, CutChangeReset: false, ELinkKey: Demo115_0_burst01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    702.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
[    702.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=2)
[    702.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=5)
[    706.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=7)
[    756.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=3)
[    799.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=4)
[    799.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 86.0
               {ELinkKey: Demo_GrudgeHaze, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    885.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[    885.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
               duration: 22.0
               {ELinkKey: Demo_GrudgeHaze, IsWaitFinish: true, SLinkKey: ''}
[    907.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
[    991.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=2)
               duration: 109.0
               {ELinkKey: TerminalRelease, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1039.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
[   1039.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
               duration: 10.0
               {ELinkKey: TerminalGrudge, IsWaitFinish: true, SLinkKey: ''}
[   1049.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
[   1100.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=2)
[   1100.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=2)
               duration: 9.0
               {ELinkKey: TerminalRelease, IsWaitFinish: true, SLinkKey: ''}
[   1109.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=2)
[   1220.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=6)
               duration: 450.0
               {A: 0.0, Actor: Obj_HeartUtuwa_A_01, B: 0.0, CutChangeReset: false, ELinkKey: Kirakira, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1507.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=7)
               duration: 163.0
               {A: 0.0, Actor: RemainsClearTerminal, B: 0.0, CutChangeReset: false, ELinkKey: BossBattle_Clear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1670.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=6)
[   1670.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=7)
