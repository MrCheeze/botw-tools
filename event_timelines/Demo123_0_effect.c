-------- Event timeline: Demo123_0_effect --------
actors: 1
clips: 4
oneshots: 0
cuts: 1
duration: 1835.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EffectEmitter[0]
x36: 3
actions: ['Demo_EmitEffectLoop', 'Demo_FootStepCalcOn']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[    224.0] E EffectEmitter[0] - Demo_FootStepCalcOn (#2, xc=1)
               duration: 1281.0
               {Actor: GameROMPlayer, InstanceName: '0', IsWaitFinish: false}
[    288.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
               duration: 100.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo123_0_Down, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    388.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#0, xc=0)
[   1153.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=2)
               duration: 500.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo123_0_Awake, G: 0.0,
                 InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1270.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
               duration: 420.0
               {A: 0.0, Actor: RemainsElectric, B: 0.0, CutChangeReset: false, ELinkKey: Demo123_0_StandUp,
                 G: 0.0, InstanceName: '0', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1505.0] L EffectEmitter[0] - Demo_FootStepCalcOn (#2, xc=1)
[   1653.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#3, xc=2)
[   1690.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#1, xc=0)
