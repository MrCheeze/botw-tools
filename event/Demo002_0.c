-------- EventFlow: Demo002_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_SetItemDataToPouch', 'Demo_PickOutFromPorch', 'Demo_OpenMessageDialog', 'Demo_EnableCameraInput', 'Demo_OpenPickup', 'Demo_WaitFrame']
queries: ['CheckAddPorchItem', 'CheckPorchInItem', 'CheckContainerItem', 'CheckFlag', 'CheckEquipItemType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Argument
entrypoint: None()
actions: ['Demo_GetItem', 'Demo_UpdateDataByGetDemo', 'Demo_SendCatchWeaponMsgToPlayer']
queries: ['CheckGetDemoType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo002_1() {
    switch EventSystemActor.CheckEquipItemType({'CheckTargetActorName': 'Arg_CurrentActorName'}) {
      case [0, 1, 2]:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Arg_CurrentActorName'}) {
            Argument.Demo_SendCatchWeaponMsgToPlayer({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 0, 'IsWaitFinish': True})
            Event53:
            Argument.Demo_GetItem({'IsWaitFinish': False})
            if EventSystemActor.CheckPorchInItem({'PorchItemName': 'Arg_CurrentActorName'}) {
                if EventSystemActor.CheckContainerItem({'PorchItemName': 'Arg_CurrentActorName'}) {
                    Event59:

                    call GetDemo.GetItemByActorIdentifier({'Arg_IsInvalidOpenPouch': False, 'Current': ActorIdentifier(name="Argument"), 'Arg_CurrentActorName': 'Arg_CurrentActorName'})


                    call GetDemo.OpenOperationAndShortCutGuide({'CheckTargetActorName': 'Arg_CurrentActorName'})

                } else
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Arg_CurrentActorName'}) {
                    goto Event59
                } else {

                    call GetDemo.GetItemPouchFullWithNameByCurrent({'Arg_IsInvalidOpenPouch': True, 'Current': ActorIdentifier(name="Argument"), 'PorchItemName': 'Arg_CurrentActorName'})

                }
            } else {
                goto Event59
            }
        } else {
            goto Event53
        }
      case [3, 4, 5]:
        goto Event53
    }
}

void Demo002_0() {
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    switch Argument.CheckGetDemoType({'CheckTargetActorName': '', 'UseLastTryGetItemName': False}) {
      case [2, 1]:
        Event42:

        call Demo002_1({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName'})

      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Arg_FlagName'}) {
            Argument.Demo_GetItem({'IsWaitFinish': True})
            Argument.Demo_UpdateDataByGetDemo({'IsWaitFinish': True})
            EventSystemActor.Demo_OpenPickup({'PorchItemName': 'Arg_CurrentActorName', 'IsAddPorch': False, 'IsWaitFinish': True})

            call GetDemo.OpenOperationAndShortCutGuide({'CheckTargetActorName': 'Arg_CurrentActorName'})

        } else {
            goto Event42
        }
    }
}

void GetAnotherInnerItem() {
    EventSystemActor.Demo_SetItemDataToPouch({'IsWaitFinish': False, 'TargetActorName': 'Arg_CurrentActorName'})

    call GetDemo.ShowGetDemoDialogByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Arg_CurrentActorName'})

}

void GetAnotherInnerItemPouchFull() {
    EventSystemActor.Demo_SetItemDataToPouch({'IsWaitFinish': False, 'TargetActorName': 'Arg_CurrentActorName'})

    call GetDemo.ShowGetDemoDialogByName({'CheckTargetActorName': 'Arg_CurrentActorName', 'IsInvalidOpenPouch': True})

    EventSystemActor.Demo_OpenMessageDialog({'IsWaitFinish': True, 'Mstxt': 'StaticMsg/GetDemoOther', 'Label': 'PorchFullText00'})
    EventSystemActor.Demo_PickOutFromPorch({'IsWaitFinish': True, 'IsUseCarryBox': False})
}
