-------- EventFlow: GetDemo --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_StartLifeUpDemo', 'Demo_WaitUntilLifeUpDemoEnd', 'Demo_StartStaminaUpDemo', 'Demo_WaitForStaminaUpDemoEnd', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_AppearFullPouchInfo', 'Demo_PickOutFromPorch', 'Demo_OpenGetDemoDialog', 'Demo_SetItemDataToPouch', 'Demo_CheckAndCreateEquip', 'Demo_SetGetFlagByActorName', 'Demo_NoDeleteCurrent', 'Demo_IncreasePorchItem', 'Demo_SetGameDataInt', 'Demo_OpenGetDemoDressFairy', 'Demo_SetDispHeartGauge']
queries: ['CheckFlag', 'CheckTreasure', 'CheckEquipItemType', 'CheckGetDemoTypeFromArg', 'HasPouchItemByPouchCategory']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_KillDucking']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Temp]
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Argument[_main(Current)]
entrypoint: _main(Current)
actions: ['Demo_OpenGetDemo']
queries: ['CheckTreasure']
params: None

Actor: Argument[GetItemByActorIdentifier(Current)]
entrypoint: GetItemByActorIdentifier(Current)
actions: []
queries: []
params: None

Actor: Argument[GetItemPouchFullWithNameByCurrent(Current)]
entrypoint: GetItemPouchFullWithNameByCurrent(Current)
actions: ['Demo_GetItem', 'Demo_CancelGet']
queries: []
params: None

Actor: Argument[GetItemByActorIdentifierBase(Current)]
entrypoint: GetItemByActorIdentifierBase(Current)
actions: ['Demo_UpdateDataByGetDemo', 'Demo_SetGetFlag', 'Demo_SuccessGet']
queries: []
params: None

Actor: Argument[GetItemPouchFullWithNameByCurrentBase(Current)]
entrypoint: GetItemPouchFullWithNameByCurrentBase(Current)
actions: ['Demo_UpdateDataByGetDemo']
queries: []
params: None

Actor: Argument[GetItemByActorIdentifier_VisibleOn(Current)]
entrypoint: GetItemByActorIdentifier_VisibleOn(Current)
actions: []
queries: []
params: None

Actor: Argument[GetItemPouchFullWithNameByCurrent_VisibleOn_NoChkEquipItemType(Current)]
entrypoint: GetItemPouchFullWithNameByCurrent_VisibleOn_NoChkEquipItemType(Current)
actions: []
queries: []
params: None

Actor: Argument[CheckSpecialActorAndGetDemoSoundCall(Current)]
entrypoint: CheckSpecialActorAndGetDemoSoundCall(Current)
actions: []
queries: ['CheckTreasure', 'CheckGetDemoType']
params: None

Actor: Argument[CallHeartOrGanbariIncleaseDemo(Current)]
entrypoint: CallHeartOrGanbariIncleaseDemo(Current)
actions: []
queries: ['CheckTreasure']
params: None

void _main() {

    call CheckSpecialActorAndGetDemoSoundCall({'Current': 'Current'})

    if Argument[_main(Current)].CheckTreasure({'ActorName': 'Obj_HeartUtuwa_A_01', 'CheckTargetActorName': ''}) {
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': False, 'IsGetDemo': True})
        Event100:
        EventSystemActor[Temp].Demo_CloseMessageDialog({'IsWaitFinish': False})

        call PorchProhibitionON()

        Argument[_main(Current)].Demo_OpenGetDemo({'IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch', 'IsWaitFinish': True})

        call PorchProhibitionOFF()


        call CallHeartOrGanbariIncleaseDemo({'Current': 'Current'})

    } else {
        goto Event100
    }
}

void GetItemByActorIdentifier() {

    call GetItemByActorIdentifierBase({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch', 'Arg_CurrentActorName': 'Arg_CurrentActorName'})

}

void PorchProhibitionON() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CarryProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TrashProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PlayFlashbackDemoProhibition'})
}

void PorchProhibitionOFF() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'CarryProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'TrashProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'PlayFlashbackDemoProhibition'})
}

void TresureBoxPorchFull() {
    EventSystemActor.Demo_SetItemDataToPouch({'IsWaitFinish': False, 'TargetActorName': 'CheckTargetActorName'})

    call ShowGetDemoDialogByName({'IsInvalidOpenPouch': 'IsInvalidOpenPouch', 'CheckTargetActorName': 'CheckTargetActorName'})

    NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'StaticMsg/GetDemoOther:PorchFullText00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})

    call Demo000_2.Close()

}

void ShowGetDemoDialogByName() {

    call CheckSpecialActorAndGetDemoSoundCall({'Current': ActorIdentifier(name="EventSystemActor"), 'CheckTargetActorName': 'CheckTargetActorName'})

    if EventSystemActor.CheckTreasure({'ActorName': 'Obj_HeartUtuwa_A_01', 'CheckTargetActorName': 'CheckTargetActorName'}) {
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': False, 'IsGetDemo': True})
        Event183:
        EventSystemActor[Temp].Demo_CloseMessageDialog({'IsWaitFinish': False})

        call PorchProhibitionON()

        EventSystemActor.Demo_OpenGetDemoDialog({'IsWaitFinish': True, 'IsInvalidOpenPouch': 'IsInvalidOpenPouch', 'TargetActorName': 'CheckTargetActorName', 'UseLastTryGetItemName': False, 'EnableMultiGet': False})

        call PorchProhibitionOFF()


        call CallHeartOrGanbariIncleaseDemo({'Current': ActorIdentifier(name="EventSystemActor"), 'CheckTargetActorName': 'CheckTargetActorName'})

    } else {
        goto Event183
    }
}

void GetItemByName() {
    EventSystemActor.Demo_SetItemDataToPouch({'IsWaitFinish': False, 'TargetActorName': 'CheckTargetActorName'})
    EventSystemActor.Demo_CheckAndCreateEquip({'IsWaitFinish': True, 'TargetActorName': 'CheckTargetActorName'})

    call ShowGetDemoDialogByName({'IsInvalidOpenPouch': 'IsInvalidOpenPouch', 'CheckTargetActorName': 'CheckTargetActorName'})

    EventSystemActor.Demo_SetGetFlagByActorName({'IsWaitFinish': True, 'ActorName': 'CheckTargetActorName'})
}

void GetItemPouchFullWithNameByCurrent() {
    Argument[GetItemPouchFullWithNameByCurrent(Current)].Demo_GetItem({'IsWaitFinish': True})

    call GetItemPouchFullWithNameByCurrentBase({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch', 'PorchItemName': 'PorchItemName'})

    switch EventSystemActor.CheckEquipItemType({'CheckTargetActorName': 'PorchItemName'}) {
      case [0, 1, 2]:
        EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
        Argument[GetItemPouchFullWithNameByCurrent(Current)].Demo_CancelGet({'IsWaitFinish': True})
      case [3, 4, 5]:
        EventSystemActor.Demo_PickOutFromPorch({'IsWaitFinish': True, 'IsUseCarryBox': False})
    }
}

void ShowGetDemoCookResult() {

    call CheckAndCallGetDemoSound({'CheckTargetActorName': 'Item_Cook_O_01'})

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    call PorchProhibitionON()

    EventSystemActor.Demo_OpenGetDemoDialog({'IsInvalidOpenPouch': 'IsInvalidOpenPouch', 'IsWaitFinish': True, 'TargetActorName': 'Item_Cook_O_01', 'UseLastTryGetItemName': True, 'EnableMultiGet': 'EnableMultiGet'})

    call PorchProhibitionOFF()

}

void OpenShortCutGuide() {
    switch EventSystemActor.CheckEquipItemType({'CheckTargetActorName': 'CheckTargetActorName'}) {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutSword'}) {
            if !EventSystemActor.CheckFlag({'FlagName': 'Guide_Throw'}) {
                if !EventSystemActor.HasPouchItemByPouchCategory({'Category': 0, 'Count': 5}) {

                    call OperationGuide.Guide_Throw()

                }
            }
        } else
        if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 2, 'Category': 0}) {

            call OperationGuide.Guide_ShortCutSword()

        }
      case 1:
        if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutShield'}) {
            if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 2, 'Category': 3}) {

                call OperationGuide.Guide_ShortCutShield()

            }
        }
      case 2:
        if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutBow'}) {
            if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 2, 'Category': 1}) {

                call OperationGuide.Guide_ShortCutBow()

            }
        }
      case 5:
        if !EventSystemActor.CheckFlag({'FlagName': 'Guide_ShortCutArrow'}) {
            if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 2, 'Category': 2}) {

                call OperationGuide.Guide_ShortCutArrow()

            }
        }
    }
}

void OpenOperationAndShortCutGuide() {
    switch EventSystemActor.CheckEquipItemType({'CheckTargetActorName': 'CheckTargetActorName'}) {
      case 0:

        call OperationGuide.Guide_Attack()

        Event242:

        call OpenShortCutGuide({'CheckTargetActorName': 'CheckTargetActorName'})

      case 1:

        call OperationGuide.Guide_Shield()

        goto Event242
      case 2:

        call OperationGuide.Guide_Bow()

        goto Event242
      case 3:

        call OperationGuide.Guide_Pause()

        goto Event242
      case 5:
        goto Event242
    }
}

void ShopDressFairyGetDemo() {

    call CheckAndCallGetDemoSound({'CheckTargetActorName': 'Armor_Default_Head'})

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    call PorchProhibitionON()

    EventSystemActor.Demo_OpenGetDemoDressFairy({'IsWaitFinish': True})

    call PorchProhibitionOFF()

}

void GetManyItemsByName() {
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'GiveItemNumber', 'Value': 'GetNumber'})
    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'IncreaseTargetActorName', 'Value': 'GetNumber'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call ShowGetDemoDialogByName({'IsInvalidOpenPouch': 'IsInvalidOpenPouch', 'CheckTargetActorName': 'ShowDialogTargetActorName'})

    EventSystemActor.Demo_SetGetFlagByActorName({'IsWaitFinish': True, 'ActorName': 'IncreaseTargetActorName'})
}

void GetItemByActorIdentifierBase() {
    Argument[GetItemByActorIdentifierBase(Current)].Demo_UpdateDataByGetDemo({'IsWaitFinish': False})
    switch EventSystemActor.CheckEquipItemType({'CheckTargetActorName': 'Arg_CurrentActorName'}) {
      case [0, 1, 2]:
        Argument[GetItemByActorIdentifierBase(Current)].Demo_SetGetFlag({'IsWaitFinish': True})
        Argument[GetItemByActorIdentifierBase(Current)].Demo_SuccessGet({'IsWaitFinish': True})

        call _main({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch'})

      case [3, 4, 5]:

        call _main({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch'})

        Argument[GetItemByActorIdentifierBase(Current)].Demo_SetGetFlag({'IsWaitFinish': True})
        Argument[GetItemByActorIdentifierBase(Current)].Demo_SuccessGet({'IsWaitFinish': True})
    }
}

void GetItemPouchFullWithNameByCurrentBase() {
    Argument[GetItemPouchFullWithNameByCurrentBase(Current)].Demo_UpdateDataByGetDemo({'IsWaitFinish': False})

    call _main({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch'})

    EventSystemActor.Demo_AppearFullPouchInfo({'IsWaitFinish': True, 'PorchItemName': 'PorchItemName'})
}

void GetItemByActorIdentifier_VisibleOn() {

    call GetItemByActorIdentifierBase({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch', 'Arg_CurrentActorName': 'Arg_CurrentActorName'})

}

void GetItemPouchFullWithNameByCurrent_VisibleOn_NoChkEquipItemType() {

    call GetItemPouchFullWithNameByCurrentBase({'Current': 'Current', 'Arg_IsInvalidOpenPouch': 'Arg_IsInvalidOpenPouch', 'PorchItemName': 'PorchItemName'})

}

void CheckAndCallGetDemoSound() {
    SceneSoundCtrlTag.Demo_KillDucking({'DuckerType': 'cEventSkip', 'IsWaitFinish': True})
    switch EventSystemActor.CheckGetDemoTypeFromArg({'UseLastTryGetItemName': True, 'CheckTargetActorName': 'CheckTargetActorName'}) {
      case 2:
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'GetDemo_HighGrade'})
      case 1:
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'GetDemo_Deluxe'})
      case 0:
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'GetDemo_Standard'})
    }
}

void CheckSpecialActorAndGetDemoSoundCall() {
    SceneSoundCtrlTag.Demo_KillDucking({'DuckerType': 'cEventSkip', 'IsWaitFinish': True})
    if Argument[CheckSpecialActorAndGetDemoSoundCall(Current)].CheckTreasure({'ActorName': 'Obj_HeartUtuwa_A_01', 'CheckTargetActorName': 'CheckTargetActorName'}) {
        Event322:
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'GetDemo_Heart', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    } else
    if Argument[CheckSpecialActorAndGetDemoSoundCall(Current)].CheckTreasure({'ActorName': 'Obj_StaminaUtuwa_A_01', 'CheckTargetActorName': 'CheckTargetActorName'}) {
        goto Event322
    } else
    if Argument[CheckSpecialActorAndGetDemoSoundCall(Current)].CheckTreasure({'ActorName': 'Obj_DRStone_Get', 'CheckTargetActorName': 'CheckTargetActorName'}) {
        Event324:
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'GetDemo_SheikPad', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    } else
    if Argument[CheckSpecialActorAndGetDemoSoundCall(Current)].CheckTreasure({'CheckTargetActorName': 'CheckTargetActorName', 'ActorName': 'Weapon_Sword_502'}) {
        goto Event324
    } else
    switch Argument[CheckSpecialActorAndGetDemoSoundCall(Current)].CheckGetDemoType({'UseLastTryGetItemName': False, 'CheckTargetActorName': 'CheckTargetActorName'}) {
      case 2:
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'GetDemo_HighGrade', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
      case 1:
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'GetDemo_Deluxe', 'SoundDelay': 0, 'SLinkInst': ''})
      case 0:
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'GetDemo_Standard', 'SoundDelay': 0, 'SLinkInst': ''})
    }
}

void CallHeartOrGanbariIncleaseDemo() {
    if Argument[CallHeartOrGanbariIncleaseDemo(Current)].CheckTreasure({'ActorName': 'Obj_HeartUtuwa_A_01', 'CheckTargetActorName': 'CheckTargetActorName'}) {
        EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': False, 'IsGetDemo': True})
    } else
    if Argument[CallHeartOrGanbariIncleaseDemo(Current)].CheckTreasure({'CheckTargetActorName': 'CheckTargetActorName', 'ActorName': 'Obj_StaminaUtuwa_A_01'}) {
        EventSystemActor.Demo_StartStaminaUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitForStaminaUpDemoEnd({'IsWaitFinish': True})
    }
}
