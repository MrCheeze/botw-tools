-------- EventFlow: Npc_Zora010 --------

Actor: Npc_Zora010
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora010[Lake]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckTimeType', 'CheckWeather', 'GeneralChoice2', 'CheckAddPorchItem', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event19:

    call DhimeHello()

    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk04'})
        Event12:
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk07'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk08', 'IsCloseMessageDialog': True})
            } else {
                Event13:
                Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk06'})
            }
        } else {
            goto Event13
        }
      case 1:
        Event11:
        Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk05'})
        goto Event12
      case 2:
        goto Event11
      case 3:
        goto Event11
    }
}

void Near() {
    Event47:
    Npc_Zora010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:near02'})
}

void Ready_DhimeFlowedWife() {
    goto Event19
}

void Finish_DhimeFlowedWife() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora010_FinishFirst'}) {
        Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk17'})
        Event25:
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Animal_Fish_L', 'Count': 5}) {

            call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'GetNumber': 5, 'IncreaseTargetActorName': 'Item_FishGet_L', 'ShowDialogTargetActorName': 'Item_FishGet_L_00'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora010_GetReward'})
            Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk12'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_FlowedWife_Finish'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
        } else {
            Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk11'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora010_FinishFirst'})
        Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk09'})
        Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk10'})
        goto Event25
    }
}

void DhimeHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora010_First'}) {
        if Npc_Zora010[Lake].IsOnInstEventFlag() {
            Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk03'})
        } else {
            Event6:
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event9:
                Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk00'})
              case 1:
                goto Event9
              case 2:
                Event3:
                Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk01'})
              case 3:
                goto Event3
              case 4:
                goto Event3
              case 5:
                goto Event3
              case 6:
                Event8:
                Npc_Zora010[Lake].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk02'})
              case 7:
                goto Event8
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora010_First'})
        goto Event6
    }
}

void FinishNear_DhimeFlowedWife() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora010_FinishFirst'}) {
        Npc_Zora010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora010:near01', 'IsChecked': True})
    } else {
        Npc_Zora010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora010:near00', 'DispFrame': 90, 'IsChecked': True})
    }
}

void ReadyNear_DhimeFlowedWife() {
    Npc_Zora010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora010:near00', 'DispFrame': 90, 'IsChecked': False})
}

void Water_Relic_Finished_Talk() {

    call DhimeHelloZora()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora010_NormalFirst'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk15'})
        } else {
            Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk16'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora010_NormalFirst'})
        Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk14'})
    }
}

void Water_Relic_Finished_Near() {
    goto Event47
}

void DhimeHelloZora() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora010_First'}) {
        if Npc_Zora010.IsOnInstEventFlag() {
            Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk03'})
        } else {
            Event53:
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event55:
                Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk00'})
              case 1:
                goto Event55
              case 2:
                Event50:
                Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk01'})
              case 3:
                goto Event50
              case 4:
                goto Event50
              case 5:
                goto Event50
              case 6:
                Event54:
                Npc_Zora010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora010:talk02'})
              case 7:
                goto Event54
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora010_First'})
        goto Event53
    }
}
