-------- Event timeline: Demo116_0_effect --------
actors: 2
clips: 7
oneshots: 0
cuts: 1
duration: 4036.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoXLinkActor[0]
x36: 1
actions: ['Demo_XLinkEventCreate']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 2
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      1.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 179.0
               {ELinkKey: Demo116_0_Vapor, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    180.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[    338.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=0)
               duration: 100.0
               {A: 0.0, Actor: RemainsFire, B: 0.0, CutChangeReset: false, ELinkKey: Demo116_0_Step_ArmR, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    438.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=0)
[    799.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=0)
               duration: 100.0
               {A: 0.0, Actor: RemainsFire, B: 0.0, CutChangeReset: false, ELinkKey: Demo116_0_Step_ArmR, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    899.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=0)
[   1409.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
               duration: 85.0
               {A: 0.0, Actor: RemainsFire, B: 0.0, CutChangeReset: false, ELinkKey: Demo116_0_Charge, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1494.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
[   1494.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
               duration: 2542.0
               {A: 0.0, Actor: RemainsFire, B: 0.0, CutChangeReset: false, ELinkKey: Demo116_0_LockOn, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1506.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 2542.0
               {ELinkKey: Demo116_0_Hit, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1865.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=1)
               duration: 2171.0
               {A: 0.0, Actor: Dm_Npc_Goron_Hero, B: 0.0, CutChangeReset: true, ELinkKey: Ghost_Demo, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   4036.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=0)
[   4036.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=1)
[   4048.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#1, xc=0)
