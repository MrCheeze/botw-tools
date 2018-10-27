-------- EventFlow: ClearRemains --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_AutoSave']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Gerudo() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo125_0', 'EntryPointName': '', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo005_1', 'EntryPointName': 'ClearRemains'})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_HeroSoul_Gerudo'})

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo050_0', 'EntryPointName': 'Demo050_Electric', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

    call Find_4Relic.Check_4Relic()

    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Rito() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo119_0', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo005_1', 'EntryPointName': 'ClearRemains'})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_HeroSoul_Rito'})

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo050_0', 'EntryPointName': 'Demo050_Wind', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

    call Find_4Relic.Check_4Relic()

    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Goron() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo116_0', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo005_1', 'EntryPointName': 'ClearRemains'})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_HeroSoul_Goron'})

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo050_0', 'EntryPointName': 'Demo050_Fire', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

    call Find_4Relic.Check_4Relic()

    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Zora() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo122_0', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo005_1', 'EntryPointName': 'ClearRemains'})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_HeroSoul_Zora'})

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo050_0', 'EntryPointName': 'Demo050_Water', 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

    call Find_4Relic.Check_4Relic()

    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}
