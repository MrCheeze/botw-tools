-------- EventFlow: Demo001_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_SetCookItem', 'Demo_RequestOpenPopUpHelp', 'Demo_SetGameDataInt']
queries: ['CheckCookResultStatus']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_CookTurn', 'Demo_PlayerWait', 'Demo_DisableUnliftInEvent', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_KillDucking']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[ForSkip]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_CookSet[Cook_Success(Item_CookSet)]
entrypoint: Cook_Success(Item_CookSet)
actions: ['Demo_Cooking', 'Demo_Idling']
queries: []
params: None

Actor: Item_CookSet[Cook_Fail(Item_CookSet)]
entrypoint: Cook_Fail(Item_CookSet)
actions: ['Demo_Cooking', 'Demo_Idling']
queries: []
params: None

Actor: Item_CookSet[Cook_SuperSuccess(Item_CookSet)]
entrypoint: Cook_SuperSuccess(Item_CookSet)
actions: ['Demo_Cooking', 'Demo_Idling']
queries: []
params: None

void Cook_Success() {

    fork {
        Item_CookSet[Cook_Success(Item_CookSet)].Demo_Cooking({'IsWaitFinish': True, 'IsSuccess': True})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Bgm_CookingSuccess', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    } {
        GameROMPlayer.Demo_CookTurn({'IsWaitFinish': True, 'DestPosX': 'arg_TargetPosX', 'DestPosY': 'arg_TargetPosY', 'DestPosZ': 'arg_TargetPosZ', 'ASName': 'LiftPutPouchL', 'IsWaitASFinish': True, 'UsePartBind': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'GetCookingGood', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {

        call BeginSkip()

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    EventSystemActor[ForSkip].Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor[ForSkip].CheckEventCancel() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
        Item_CookSet[Cook_Success(Item_CookSet)].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        SceneSoundCtrlTag.Demo_KillDucking({'DuckerType': 'cEventSkip', 'IsWaitFinish': True})
    }
}

void Demo001_0() {
    GameROMPlayer.Demo_DisableUnliftInEvent({'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    call Cooking({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ'})


    call GetDemo.ShowGetDemoCookResult({'IsInvalidOpenPouch': True, 'EnableMultiGet': False})

    EventSystemActor.Demo_RequestOpenPopUpHelp({'HelpType': 16, 'IsWaitFinish': True})
}

void Cook_Fail() {

    fork {
        Item_CookSet[Cook_Fail(Item_CookSet)].Demo_Cooking({'IsWaitFinish': True, 'IsSuccess': False})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Bgm_CookingFail', 'SoundDelay': 0, 'SLinkInst': ''})
    } {
        GameROMPlayer.Demo_CookTurn({'IsWaitFinish': True, 'DestPosX': 'arg_TargetPosX', 'DestPosY': 'arg_TargetPosY', 'DestPosZ': 'arg_TargetPosZ', 'ASName': 'LiftPutPouchL', 'IsWaitASFinish': True, 'UsePartBind': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'GetCookingBad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {

        call BeginSkip()

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    EventSystemActor[ForSkip].Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor[ForSkip].CheckEventCancel() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
        Item_CookSet[Cook_Fail(Item_CookSet)].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        SceneSoundCtrlTag.Demo_KillDucking({'DuckerType': 'cEventSkip', 'IsWaitFinish': True})
    }
}

void BeginSkip() {
    EventSystemActor[ForSkip].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventSystemActor[ForSkip].Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
}

void Cooking() {
    if EventSystemActor.CheckCookResultStatus({'CheckType': 0}) {
        if EventSystemActor.CheckCookResultStatus({'CheckType': 1}) {

            call Cook_SuperSuccess({'Item_CookSet': ActorIdentifier(name="Starter"), 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ'})

        } else {

            call Cook_Success({'Item_CookSet': ActorIdentifier(name="Starter"), 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ'})

        }
    } else {

        call Cook_Fail({'Item_CookSet': ActorIdentifier(name="Starter"), 'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ'})

    }
}

void Cook_SuperSuccess() {

    fork {
        Item_CookSet[Cook_SuperSuccess(Item_CookSet)].Demo_Cooking({'IsWaitFinish': True, 'IsSuccess': True})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_Bgm_CookingGreat'})
    } {
        GameROMPlayer.Demo_CookTurn({'IsWaitFinish': True, 'ASName': 'LiftPutPouchL', 'IsWaitASFinish': True, 'UsePartBind': False, 'DestPosX': 'arg_TargetPosX', 'DestPosY': 'arg_TargetPosY', 'DestPosZ': 'arg_TargetPosZ'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'GetCookingVeryGood', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {

        call BeginSkip()

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    EventSystemActor[ForSkip].Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor[ForSkip].CheckEventCancel() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsIgnoreSame': True})
        Item_CookSet[Cook_SuperSuccess(Item_CookSet)].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        SceneSoundCtrlTag.Demo_KillDucking({'DuckerType': 'cEventSkip', 'IsWaitFinish': True})
    }
}

void SetCookResult1() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName02': '', 'PorchItemName03': '', 'PorchItemName04': '', 'PorchItemName05': '', 'SetNum': 1, 'PorchItemName01': 'CookMaterial_01'})
    Event114:
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'GiveItemNumber', 'Value': 1})
    Event113:
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

    call GetDemo.ShowGetDemoCookResult({'IsInvalidOpenPouch': True, 'EnableMultiGet': True})

}

void SetCookResult2() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName03': '', 'PorchItemName04': '', 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'SetNum': 1})
    goto Event114
}

void SetCookResult3() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName04': '', 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'PorchItemName03': 'CookMaterial_03', 'SetNum': 1})
    goto Event114
}

void SetCookResult4() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'PorchItemName03': 'CookMaterial_03', 'PorchItemName04': 'CookMaterial_04', 'SetNum': 1})
    goto Event114
}

void SetCookResult5() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'PorchItemName03': 'CookMaterial_03', 'PorchItemName04': 'CookMaterial_04', 'PorchItemName05': 'CookMaterial_05', 'SetNum': 1})
    goto Event114
}

void SetCookResult1WithNum() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName02': '', 'PorchItemName03': '', 'PorchItemName04': '', 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'SetNum': 'SetNum'})
    Event115:
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'GiveItemNumber', 'Value': 'SetNum'})
    goto Event113
}

void SetCookResult2WithNum() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName03': '', 'PorchItemName04': '', 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'SetNum': 'SetNum'})
    goto Event115
}

void SetCookResult3WithNum() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName04': '', 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'PorchItemName03': 'CookMaterial_03', 'SetNum': 'SetNum'})
    goto Event115
}

void SetCookResult4WithNum() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName05': '', 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'PorchItemName03': 'CookMaterial_03', 'PorchItemName04': 'CookMaterial_04', 'SetNum': 'SetNum'})
    goto Event115
}

void SetCookResult5WithNum() {
    EventSystemActor.Demo_SetCookItem({'IsWaitFinish': True, 'PorchItemName01': 'CookMaterial_01', 'PorchItemName02': 'CookMaterial_02', 'PorchItemName03': 'CookMaterial_03', 'PorchItemName04': 'CookMaterial_04', 'PorchItemName05': 'CookMaterial_05', 'SetNum': 'SetNum'})
    goto Event115
}
