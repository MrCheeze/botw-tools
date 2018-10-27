-------- EventFlow: Npc_TamourHatago002 --------

Actor: Npc_TamourHatago002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckTimeType', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call NobotanHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC002_First'}) {
        Event25:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MinakkareHatago_NPC002_Ichikara', 'IsWaitFinish': True})
            Event21:
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk08'})
            Event24:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC002_EnokidaFirst'}) {
                    Event48:
                    Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk19', 'IsCloseMessageDialog': True})
                    Event56:
                    Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk14'})
                    goto Event24
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC002_EnokidaFirst', 'IsWaitFinish': True})
                    Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk13'})
                    goto Event48
                }
              case 1:
                if EventSystemActor.CheckFlag({'FlagName': 'Higakkare_NPC002_HereFirst'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'HigakkareMini_RedDragon_Step1'}) {
                        Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk21', 'IsCloseMessageDialog': True})
                        goto Event56
                    } else {
                        Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk20', 'IsCloseMessageDialog': True})
                        goto Event56
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC002_HereFirst', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HigakkareMini_RedDragon_Activated'})
                    Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk09', 'IsCloseMessageDialog': True})
                    goto Event56
                }
              case 2:
                Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk18', 'IsCloseMessageDialog': True})
                goto Event56
              case 3:
                Event18:
                Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk10'})
                Npc_TamourHatago002.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            }
        } else {
            goto Event21
        }
    } else
    if Npc_TamourHatago002.IsOnInstEventFlag() {
        Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk12'})
        Event17:
        if !EventSystemActor.GeneralChoice2() {
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk16'})
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk11'})
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk05'})
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk07'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Higakkare_NPC002_First', 'IsWaitFinish': True})
            goto Event25
        } else {
            goto Event18
        }
    } else {
        Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk01'})
        goto Event17
    }
}

void NobotanHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TamourHatago002.IsOnInstEventFlag() {
        Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk00'})
    } else
    switch Npc_TamourHatago002.CheckActorAction13() {
      case [0, 1, 10, 12]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk02'})
          case [2, 3, 4, 5]:
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk03'})
          case [6, 7]:
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk04'})
        }
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk17'})
        } else {
            Npc_TamourHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:talk06'})
        }
    }
}

void Ready_Nobotan_RedDragon() {
    goto Event0
}

void Finish_Nobotan_RedDragon() {
    goto Event0
}

void Near() {
    Event53:
    Npc_TamourHatago002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:near02'})
}

void Step1_Nobotan_RedDragon() {
    goto Event0
}

void ReadyNear_Nobotan_RedDragon() {
    Npc_TamourHatago002.Demo_TalkASync({'IsChecked': True, 'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:near00'})
}

void Step1Near_Nobotan_RedDragon() {
    Npc_TamourHatago002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago002:near01', 'DispFrame': 90})
}

void FinishNear_Nobotan_RedDragon() {
    goto Event53
}
