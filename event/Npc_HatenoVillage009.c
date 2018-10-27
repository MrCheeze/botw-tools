-------- EventFlow: Npc_HatenoVillage009 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckPlayerWeaponFired', 'CheckFlag', 'CheckWeather', 'RandomChoice2', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage009.CheckActorAction13() {
      case 0:
        Event66:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event31:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                if Npc_HatenoVillage009.IsOnInstEventFlag() {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk07'})
                    Event75:
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk18'})
                } else {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk06'})
                }
            } else {
                if Npc_HatenoVillage009.IsOnInstEventFlag() {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk17'})
                    goto Event75
                } else {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk16'})
                }
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC009_First'}) {
                if Npc_HatenoVillage009.IsOnInstEventFlag() {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk08'})
                    Event52:
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk11'})
                } else {
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk15'})
                        goto Event52
                      case 1:
                        Event60:
                        Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk14'})
                        goto Event52
                      case 2:
                        goto Event60
                      case 3:
                        goto Event60
                    }
                }
            } else {
                Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk00'})
                switch EventSystemActor.GeneralChoice4() {
                  case 2:
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk03'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC009_First', 'IsWaitFinish': True})
                  case 3:
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk01'})
                }
            }
        }
      case 1:
        goto Event66
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event31
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage009.IsOnInstEventFlag() {
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk13'})
                } else {
                    Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk10'})
                }
            } else {
                Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk12'})
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event80:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk05'})
            } else {
                Npc_HatenoVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:talk04'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event80
        }
    }
}

void Near() {
    switch Npc_HatenoVillage009.CheckActorAction13() {
      case 0:
        Npc_HatenoVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:near02', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:near01', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Event79:
            Npc_HatenoVillage009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:near04'})
          case 2:
            goto Event79
          case 3:
            goto Event79
        }
      case 10:
        Npc_HatenoVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:near03', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HatenoVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage009:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}
