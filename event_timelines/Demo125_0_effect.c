-------- Event timeline: Demo125_0_effect --------
actors: 2
clips: 9
oneshots: 0
cuts: 1
duration: 4680.0
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
x36: 3
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[    812.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
               duration: 30.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_Step_ArmL,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    842.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
[    888.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=1)
               duration: 30.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_Step_LegR,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    903.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=0)
               duration: 30.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_Step_ArmR,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    918.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#5, xc=1)
[    933.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=0)
[   1016.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=1)
               duration: 30.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_Step_LegL,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1032.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=0)
               duration: 30.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_Step_ArmL,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1046.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=1)
[   1062.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=0)
[   2522.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
               duration: 93.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_Charge,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   2615.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#4, xc=0)
[   2615.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
               duration: 2065.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo125_0_LockOn,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: true, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   2627.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 2053.0
               {ELinkKey: Demo125_0_Hit, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   3722.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=2)
               duration: 958.0
               {A: 0.0, Actor: Dm_Npc_Gerdo_Hero, B: 0.0, CutChangeReset: true, ELinkKey: Ghost_Demo, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   4680.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[   4680.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=1)
[   4680.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=2)
