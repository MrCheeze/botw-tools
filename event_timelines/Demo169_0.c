-------- Event timeline: Demo169_0 --------
actors: 4
clips: 7
oneshots: 0
cuts: 1
duration: 1230.0
subtimelines: ['Demo169_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_VariableFadeOut']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 1
actions: ['Demo_XLinkEventCreate']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_EventPlayUiOPText']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[     30.0] E EventSystemActor[0] - Demo_EventPlayUiOPText (#4, xc=0)
               duration: 150.0
               {IsWaitFinish: true, TextType: 0}
[    180.0] L EventSystemActor[0] - Demo_EventPlayUiOPText (#4, xc=0)
[    225.0] E EventSystemActor[0] - Demo_EventPlayUiOPText (#5, xc=0)
               duration: 150.0
               {IsWaitFinish: true, TextType: 1}
[    375.0] L EventSystemActor[0] - Demo_EventPlayUiOPText (#5, xc=0)
[    420.0] E EventSystemActor[0] - Demo_EventPlayUiOPText (#6, xc=0)
               duration: 150.0
               {IsWaitFinish: true, TextType: 2}
[    515.0] E GameRomCamera[0] - Demo_XLinkEventCreate (#1, xc=0)
               duration: 715.0
               {ELinkKey: Flare, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    570.0] L EventSystemActor[0] - Demo_EventPlayUiOPText (#6, xc=0)
[    790.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
               duration: 75.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo169_0_Text002}
[    865.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
[    990.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
               duration: 90.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo169_0_Text003}
[   1080.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
[   1170.0] E Fader[0] - Demo_VariableFadeOut (#0, xc=0)
               duration: 60.0
               {Color: 0, FadeTime: 60.0, IsWaitFinish: true}
[   1230.0] L Fader[0] - Demo_VariableFadeOut (#0, xc=0)
[   1230.0] L GameRomCamera[0] - Demo_XLinkEventCreate (#1, xc=0)
