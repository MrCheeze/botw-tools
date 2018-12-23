-------- Event timeline: Demo141_3_effect --------
actors: 2
clips: 4
oneshots: 0
cuts: 1
duration: 400.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoXLinkActor[0]
x36: 1
actions: []
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 3
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      2.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
               duration: 83.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_Castle, B: 0.0, CutChangeReset: false, ELinkKey: Demo121_0_cg_appear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[     85.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
[    122.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=2)
               duration: 100.0
               {A: 0.0, Actor: DemoXLinkActor, B: 0.0, CutChangeReset: false, ELinkKey: Splash, G: 0.0, InstanceName: '',
                 IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0, RX: 0.0, RY: 0.0,
                 RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    125.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
               duration: 64.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: Demo_RadialBlurType01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    125.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=1)
               duration: 70.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear_Castle, B: 0.0, CutChangeReset: false, ELinkKey: Demo162_0_cg_particle,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    189.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
[    195.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#2, xc=1)
[    222.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=2)
