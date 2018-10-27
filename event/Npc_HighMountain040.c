-------- EventFlow: Npc_HighMountain040 --------

Actor: Npc_HighMountain040
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckTimeType', 'CheckPlayerState', 'GeneralChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Jougo_Hello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 100}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk25'})

        call Flint_Sell({'Value': 1200, 'PorchItemName': 'Item_Ore_I', 'Value_000': -100})

    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 50}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk24'})

        call Flint_Sell({'Value': 500, 'PorchItemName': 'Item_Ore_I', 'Value_000': -50})

    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 30}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk23'})

        call Flint_Sell({'Value': 250, 'PorchItemName': 'Item_Ore_I', 'Value_000': -30})

    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 10}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk22'})

        call Flint_Sell({'Value': 70, 'PorchItemName': 'Item_Ore_I', 'Value_000': -10})

    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk21'})

        call Flint_Sell({'Value': 30, 'PorchItemName': 'Item_Ore_I', 'Value_000': -5})

    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 1}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk20', 'IsOverWriteLabelActorName': False})

        call Flint_Sell({'Value': 5, 'PorchItemName': 'Item_Ore_I', 'Value_000': -1})

    } else {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk19'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk29', 'IsCloseMessageDialog': False})
    }
}

void Near() {
    if Npc_HighMountain040.CheckActorAction13() in [0, 1, 10] {
        Npc_HighMountain040.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Ready_Flint_Husband() {

    call Jougo_Hello()

    Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk06', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk07', 'IsOverWriteLabelActorName': False})
        Event11:
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk09', 'IsOverWriteLabelActorName': False})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk16', 'IsOverWriteLabelActorName': False})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk27'})
        EventSystemActor.Demo_FlagON({'FlagName': 'RitoMini_Flint_Activated', 'IsWaitFinish': True})
    } else {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk08', 'IsOverWriteLabelActorName': False})
        goto Event11
    }
}

void Finish_Flint_Husband() {

    call Jougo_Hello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 1}) {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk17'})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk20'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk18', 'IsCloseMessageDialog': True})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RitoMini_Flint_Finish'})
            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -1})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk28', 'IsCloseMessageDialog': False})
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk26', 'IsCloseMessageDialog': False})
        } else {
            Event41:
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk16', 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk15', 'IsOverWriteLabelActorName': False})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk27'})
        goto Event41
    }
}

void Jougo_Hello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain040.CheckActorAction13() {
      case [0, 1]:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Event15:
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk11', 'IsOverWriteLabelActorName': False})
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_HighMountain040.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case [2, 3, 4, 5]:
                Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk01', 'IsOverWriteLabelActorName': False})
              case [6, 7]:
                Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk02', 'IsOverWriteLabelActorName': False})
            }
          case [1, 2, 3]:
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk03', 'IsOverWriteLabelActorName': False})
        }
      case 10:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            goto Event15
        } else {
            Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk13', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Yawn'})
        }
      case 11:
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk30'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void Ready_Flint_Husband_near() {
    if Npc_HighMountain040.CheckActorAction13() in [0, 1, 10] {
        Event91:
        Npc_HighMountain040.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:near00', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Finish_Flint_Husband_near() {
    if Npc_HighMountain040.CheckActorAction13() in [0, 1, 10] {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 1}) {
            goto Event91
        } else {
            Npc_HighMountain040.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:near00', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void Flint_Sell() {
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        Npc_HighMountain040.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk18', 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': 'Value'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'PorchItemName', 'Value': 'Value_000'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk26', 'IsCloseMessageDialog': False})
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk29', 'IsCloseMessageDialog': False})
    } else {
        Npc_HighMountain040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:talk16', 'IsOverWriteLabelActorName': False})
    }
}
