-------- Event timeline: Demo154_1_effect --------
actors: 2
clips: 2
oneshots: 0
cuts: 1
duration: 2285.0
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
x36: 1
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
               duration: 735.0
               {A: 0.0, Actor: Npc_King_Vagrant001, B: 0.0, CutChangeReset: true, ELinkKey: Demo154_1_Ghost,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    680.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 140.0
               {ELinkKey: Demo154_1_Transformation, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    735.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
[    820.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
