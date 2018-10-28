-------- EventFlow: Npc_HatenoVillage025 --------

Actor: Npc_HatenoVillage025
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckPlayerWeaponFired', 'GeneralChoice2', 'CheckTimeType', 'CheckAddPorchItem', 'CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call HatenoNPC025_BlueFire()

    if Npc_HatenoVillage025.IsOnInstEventFlag() {
        Event62:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk25'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk00'})
        Event5:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk22'})
            goto Event62
          case [1, 2, 3]:
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk23'})
            goto Event62
        }
      case [2, 3]:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk01'})
        goto Event5
      case [4, 5, 6, 7]:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk02'})
        goto Event5
    }
}

void Near() {
    Npc_HatenoVillage025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:near03'})
}

void Extermination_HatenoNPC025() {

    call HatenoNPC025_BlueFire()

    Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk10'})
    Event37:
    switch EventSystemActor.GeneralChoice4() {
      case 1:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk11', 'IsCloseMessageDialog': True})
        Event83:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk28'})
        goto Event37
      case 2:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk12', 'IsCloseMessageDialog': True})
        goto Event83
      case 3:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk13'})
    }
}

void Finished_HatenoNPC025() {

    call HatenoNPC025_BlueFire()

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC025_NotMilk'}) {
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk25'})
        Event70:
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk19'})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Material_05', 'Count': 10}) {

            call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'IncreaseTargetActorName': 'Item_Material_05', 'GetNumber': 10, 'ShowDialogTargetActorName': 'Item_Material_05_00'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC025_GetMilk'})
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk18'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_GoatThief_Finished', 'IsWaitFinish': True})
        } else {
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk20'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC025_NotMilk', 'IsWaitFinish': True})
        }
    } else {
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk14'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk15'})
            goto Event70
        } else {
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk16'})
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk17'})
            goto Event70
        }
    }
}

void Ready_HatenoNPC025() {

    call HatenoNPC025_BlueFire()

    Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk06'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk07'})
    } else {
        Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk08'})
    }
    Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk09'})
    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_GoatThief_Activated', 'IsWaitFinish': True})
}

void HatenoNPC025_BlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if Npc_HatenoVillage025.IsOnInstEventFlag() {
                Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk05'})
            } else {
                Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk04'})
            }
            Event84:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else
        if Npc_HatenoVillage025.IsOnInstEventFlag() {
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk27'})
        } else {
            Npc_HatenoVillage025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:talk26'})
        }
        goto Event84
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}

void Ready_SheepTokoyu_Near() {
    Npc_HatenoVillage025.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:near01', 'DispFrame': 300, 'IsChecked': True})
}

void Finish_SheepTokoyu_Near() {
    Npc_HatenoVillage025.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:near02', 'DispFrame': 300, 'IsChecked': True})
}

void Extermination_SheepTokoyu_Near() {
    Npc_HatenoVillage025.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage025:near01', 'DispFrame': 90, 'IsChecked': False})
}
