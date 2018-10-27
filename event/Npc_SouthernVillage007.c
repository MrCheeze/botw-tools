-------- EventFlow: Npc_SouthernVillage007 --------

Actor: Npc_SouthernVillage007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage007.CheckActorAction13() {
      case 0:
        Event3:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:talk02'})
      case 1:
        goto Event3
      case 2:
        Event18:
        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecipieSea_FinishDay'}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:talk04'})
              case 1:
                Event22:
                Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:talk03'})
              case 2:
                goto Event22
              case 3:
                goto Event22
            }
        } else {
            Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:talk01'})
        }
      case 3:
        goto Event18
      case 4:
        goto Event3
      case 5:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:talk00'})
      case 6:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk26'})
      case 7:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk27'})
      case 10:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk06'})
      case 11:
        Npc_SouthernVillage007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecipeSea:talk05'})
    }
}

void Near() {
    switch Npc_SouthernVillage007.CheckActorAction13() {
      case 1:
        Event5:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near00', 'IsChecked': False, 'DispFrame': 90})
      case 2:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event14:
            Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near02'})
          case 2:
            goto Event14
          case 3:
            goto Event14
        }
      case 3:
        goto Event5
      case 5:
        goto Event5
      case 6:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near03'})
      case 10:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near03'})
      case 11:
        Npc_SouthernVillage007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage007:Near01'})
    }
}
