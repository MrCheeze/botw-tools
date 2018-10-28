-------- EventFlow: Npc_UMiiVillage031 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_CallDemo', 'Demo_ExitEventPlayer']
queries: ['RandomChoice4', 'GeneralChoice2', 'HasPorchItem', 'CheckFlag', 'CheckAddPorchItem', 'CheckTime', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis050[Pauda_Ichikara]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: Npc_UMiiVillage031
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call PoudaLook()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk85'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk87'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk88'})
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk89'})
    }
}

void Near() {
    switch Npc_UMiiVillage031.CheckActorAction13() {
      case [6, 7]:
        Npc_UMiiVillage031.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:near04'})
      case [8, 9]:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_UMiiVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:near00', 'DispFrame': 90, 'IsChecked': False})
          case 1:
            Npc_UMiiVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:near01', 'DispFrame': 90, 'IsChecked': False})
          case 2:
            Npc_UMiiVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:near02', 'DispFrame': 90, 'IsChecked': False})
          case 3:
            Npc_UMiiVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:near03', 'DispFrame': 90, 'IsChecked': False})
        }
    }
}

void Invite01_IchikaraNpc031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk17'})

    call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk16'})

}

void Invite02_IchikaraNpc031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk26'})

    call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk25'})

}

void Invite03_IchikaraNpc031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk36'})

    call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk35'})

}

void Invite04_IchikaraNpc031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk50'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk49'})

    call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk30'})

}

void Finish_IchikaraNpc031_Talk() {

    call PoudaLook()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk85'})
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC031_FinishFirst'}) {
        Event396:
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk79'})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 3}) {

            call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'IncreaseTargetActorName': 'Item_Ore_A', 'ShowDialogTargetActorName': 'Item_Ore_A_00', 'GetNumber': 3})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC031_Get'})
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk83'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Finish'})
        } else {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk84'})
            EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC031_FinishFirst', 'IsWaitFinish': True})
        }
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk80'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk81'})
        } else {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk38'})
        }
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk82'})
        goto Event396
    }
}

void LookFor01_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Count': 10}) {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk12'})

        call GiveMaterials()

        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Value': -10, 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wood01_OK'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk17'})

        call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk16'})

        EventSystemActor.Demo_FlagON({'FlagName': 'UMiiMini_MakeVillage_LookFor01', 'IsWaitFinish': True})
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk14'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk15'})
    }
}

void Wood01_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk01'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk02'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk04'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk05'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk06'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk07'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk08'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk09'})
                                    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk10'})
                                    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk11'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Wood01'})
                                } else {
                                    Event20:
                                    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06'})
                                }
                            } else {
                                goto Event20
                            }
                        } else {
                            goto Event20
                        }
                    } else {
                        goto Event20
                    }
                } else {
                    goto Event20
                }
            } else {
                goto Event20
            }
        } else {
            goto Event20
        }
    } else {
        goto Event20
    }
}

void Wood02_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk21'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk22'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk11'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Wood02'})
}

void LookFor02_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Count': 20}) {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk23'})

        call GiveMaterials()

        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'IsWaitFinish': True, 'Value': -20})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wood02_OK'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk26'})

        call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk25'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_LookFor02'})
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk24'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk15'})
    }
}

void LookFor03_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Count': 30}) {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk33'})

        call GiveMaterials()

        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'IsWaitFinish': True, 'Value': -30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wood03_OK'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk36'})

        call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk35'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_LookFor03'})
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk34'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk15'})
    }
}

void LookFor04_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    if EventSystemActor.CheckFlag({'FlagName': 'Wood04_OK'}) {
        Event179:
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk43'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk44'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk45'})
        } else {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk47'})
        }
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_oasis050[Pauda_Ichikara].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3965.4052734375, 'Pattern1PosY': 235.4259033203125, 'Pattern1PosZ': -1628.92919921875, 'Pattern1AtX': 3962.040771484375, 'Pattern1AtY': 235.33108520507812, 'Pattern1AtZ': -1633.1182861328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk46'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk38'})
        } else {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk48'})
        }
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk49'})

        call EnokidaInvite({'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk30'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_LookFor04'})
    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Count': 50}) {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk41'})

        call GiveMaterials()

        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'IsWaitFinish': True, 'Value': -50})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wood04_OK'})
        goto Event179
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk42'})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk15'})
    }
}

void Wood03_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk31'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk32'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk11'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Wood03'})
}

void Wood04_IchikaraNPC031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk39'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk40'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk11'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Wood04'})
}

void Marry_IchikaraNPC031_Talk() {

    call PoudaLook()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC031_Marry_First'}) {
        Event434:
        if EventSystemActor.CheckTime({'Hour': 5, 'ConditionType': 'ge', 'Minute': 0})
        && EventSystemActor.CheckTime({'Hour': 21, 'ConditionType': 'le', 'Minute': 0}) {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk58'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk60'})
                EventSystemActor.Demo_CallDemo({'EntryPointName': 'Demo370_0', 'DemoName': 'Demo370_0', 'IsWaitFinish': True, 'EndFade': 0})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Marry'})
            } else {
                Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk59'})
            }
        } else
        if Npc_UMiiVillage031.IsOnInstEventFlag() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk29'})
        } else {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk27'})
        }
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk28'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC031_Marry_First', 'IsWaitFinish': True})
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk57'})
        goto Event434
    }
}

void LookFor05_IchikaraNPC031_Talk() {

    call PoudaLook()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk51'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk00'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk52'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk53'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk54'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk95'})
            } else {
                Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk09'})
            }
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk55'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_LookFor05'})
        } else {
            Event221:
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06'})
        }
    } else {
        goto Event221
    }
}

void Invite05_IchikaraNpc031_Talk() {

    call EnokidaHello_Ichikara()

    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk50'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk56'})
}

void EnokidaInvite() {
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk37'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk18'})
    Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk19'})
}

void EnokidaHello_Ichikara() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_UMiiVillage031.IsOnInstEventFlag() {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk91'})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk90'})
    } else {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk86'})
    }
}

void GiveMaterials() {
    if !EventSystemActor.GeneralChoice2() {
        Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk13'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:talk09', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        } else {
            Event472:
            Npc_UMiiVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage031:talk06'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        }
    } else {
        goto Event472
    }
}

void PoudaLook() {
    Npc_oasis050[Pauda_Ichikara].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

    call EnokidaHello_Ichikara()

    Npc_oasis050[Pauda_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
}

void FinishNear() {
    Npc_UMiiVillage031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage031:near04', 'DispFrame': 300, 'IsChecked': True})
}
