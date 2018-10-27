-------- EventFlow: OperationGuide --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_OpenMessageTips', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckDownloadItemNum']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Guide_Squat() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Squat'}) {
        EventSystemActor.Demo_OpenMessageTips({'TipsType': 0, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Squat'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Squat', 'IsWaitFinish': True})
    }
}

void Guide_Parashawl() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Parashawl'}) {
        EventSystemActor.Demo_OpenMessageTips({'TipsType': 2, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Parashawl'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Parashawl', 'IsWaitFinish': True})
    }
}

void Guide_Surfing() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Surfing'}) {
        EventSystemActor.Demo_OpenMessageTips({'TipsType': 1, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Surfing'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Surfing', 'IsWaitFinish': True})
    }
}

void Guide_Jump() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Jump'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 3, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Jump'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Jump', 'IsWaitFinish': True})
    }
}

void Guide_Pause() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Pause'}) {

        call GetDemo.PorchProhibitionON()

        EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 5, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Pause'})

        call GetDemo.PorchProhibitionOFF()

        EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Pause', 'IsWaitFinish': True})
    }
}

void Guide_Attack() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Attack'}) {
        EventSystemActor.Demo_OpenMessageTips({'TipsType': 4, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Attack', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Attack', 'IsWaitFinish': True})
    }
}

void Guide_Bow() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Bow'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 7, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Bow'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Bow', 'IsWaitFinish': True})
    }
}

void Guide_Attention() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Attention'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 6, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Attention'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Attention', 'IsWaitFinish': True})
    }
}

void Guide_Quest() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Quest'}) {

        call GetDemo.PorchProhibitionON()

        EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Quest', 'TipsType': 8})

        call GetDemo.PorchProhibitionOFF()

        EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Quest', 'IsWaitFinish': True})
    }
}

void Guide_Shield() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Shield'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Shield', 'TipsType': 12})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Shield'})
    }
}

void Guide_Scope() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Scope'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 13, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Scope'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Scope'})
    }
}

void Guide_PadMenu() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_PadMenu'}) {

        call GetDemo.PorchProhibitionON()

        EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_PadMenu', 'TipsType': 25})

        call GetDemo.PorchProhibitionOFF()

        EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_PadMenu'})
    }
}

void Guide_Magne() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ItemMagnetglove'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 27, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ItemMagnetglove'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ItemMagnetglove'})
    }
}

void Guide_Bomb() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ItemBomb'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 26, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ItemBomb'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ItemBomb'})
    }
}

void Guide_IceMaker() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ItemIceMaker'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 29, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ItemIceMaker'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ItemIceMaker'})
    }
}

void Guide_StopTimer() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ItemStopTimer'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 28, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ItemStopTimer'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ItemStopTimer'})
    }
}

void Guide_SandSeal() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_SandSeal'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 19, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SandSeal'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SandSeal'})
    }
}

void Guide_amiibo() {
    EventSystemActor.Demo_FlagON({'FlagName': 'ItemLockStartUp_Demo', 'IsWaitFinish': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_amiibo'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_amiibo', 'TipsType': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_amiibo'})
    }
}

void Guide_Whiistle() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Whistle'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Whistle', 'TipsType': 31})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Whistle'})
    }
}

void Guide_BackStep() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_BackStep'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 16, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_BackStep'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_BackStep'})
    }
}

void Guide_SideStep() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_SideStep'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 17, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SideStep'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SideStep'})
    }
}

void Guide_GurdJust() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_GurdJust'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 15, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_GurdJust'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_GurdJust'})
    }
}

void Guide_JumpAttack() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_JumpAtack'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 18, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_JumpAtack'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_JumpAtack'})
    }
}

void Guide_SpinAttack() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_SpinAtack'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 24, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SpinAtack'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SpinAtack'})
    }
}

void Guide_SystemMenu() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_SystemMenu'}) {

        call GetDemo.PorchProhibitionON()

        EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SystemMenu', 'TipsType': 32})

        call GetDemo.PorchProhibitionOFF()

        EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SystemMenu'})
    }
}

void Guide_ItemUse() {
    if EventSystemActor.CheckFlag({'FlagName': 'Guide_ItemUse'}) {
        Event121:
        if EventSystemActor.CheckDownloadItemNum({'CheckNum': 2, 'IsUnityCheckBomb': False}) in [0, 1] {

            call Guide_ShortCutItem()

        }
    } else {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ItemUse', 'TipsType': 33})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ItemUse'})
        goto Event121
    }
}

void Guide_ShortCutSword() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutSword'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ShortCutSword', 'TipsType': 34})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ShortCutSword'})
    }
}

void Guide_ShortCutShield() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutShield'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ShortCutShield', 'TipsType': 35})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ShortCutShield'})
    }
}

void Guide_ShortCutBow() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutBow'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ShortCutBow', 'TipsType': 36})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ShortCutBow'})
    }
}

void Guide_ShortCutArrow() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutArrow'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ShortCutArrow', 'TipsType': 37})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ShortCutArrow'})
    }
}

void Guide_ShortCutItem() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutItem'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_ShortCutItem', 'TipsType': 38})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_ShortCutItem'})
    }
}

void Guide_amiibo_f() {
    EventSystemActor.Demo_FlagON({'FlagName': 'ItemLockStartUp_Demo', 'IsWaitFinish': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_amiibo_f'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_amiibo', 'TipsType': 39})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_amiibo_f'})
    }
}

void Guide_Throw() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Throw'}) {
        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 10, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Throw'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Throw'})
    }
}
