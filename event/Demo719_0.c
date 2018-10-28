-------- EventFlow: Demo719_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_OpenMessageTips']
queries: ['HasPorchItemByCategory', 'CheckPlayerEquip']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Player]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Message]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_OpenMessageTips', 'Demo_FlagON']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void StartTutorial_SideStep() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})

    fork {
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'LookAround', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo719_0:talk00', 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 17, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SideStep'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SideStep'})

        call NoSwordCheck()

    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TutorialDungeon_Activated'})
}

void StartTutorial_BackStep() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    fork {
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor[Message].Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo719_0:talk01', 'IsWaitFinish': True})
        EventSystemActor[Message].Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 16, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_BackStep'})
        EventSystemActor[Message].Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_BackStep'})

        call NoSwordCheck()

    }

}

void StartTutorial_GuardJust() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    fork {
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor[Message].Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo719_0:talk02', 'IsWaitFinish': True})
        EventSystemActor[Message].Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 15, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_GurdJust'})
        EventSystemActor[Message].Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_GurdJust'})

        call NoShieldCheck()

    }

}

void StartTutorial_SpinAttack() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})

    fork {
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor[Message].Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo719_0:talk03', 'IsWaitFinish': True})

        call OperationGuide.Guide_SpinAttack()


        call NoSwordCheck()

    }

}

void ClearTutorial() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

    call Common.Play_ReadRiddle()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo719_0:talk04'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'FlagName': 'ClearTutorial_DungeonAll', 'IsWaitFinish': True})
}

void NoShieldCheck() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    if EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1})
    && !EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 1}) {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo719_0:talk05'})
    }
}

void NoSwordCheck() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    if EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 3})
    && EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 2})
    && EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 5})
    && !EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 0}) {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo719_0:talk06'})
    }
}

void Dungeon043() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})
    }
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo719_0:talk07'})
}
