-------- EventFlow: Npc_UMiiVillage007 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF']
queries: ['RandomChoice2', 'CheckFlag', 'CheckTimeType', 'GeneralChoice2', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage007
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call MonaryHello()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC027_First'}) {
        Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk12'})
        Event73:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC027_Cooker'}) {
                Event85:
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk21'})
                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC027_Cooker', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_GiveCake_Activated'}) {
                    Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk19'})
                    Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk20'})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'UMiiVillage_NPC027_MamonoCake', 'IsWaitFinish': True})
                    Event88:
                    Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk23', 'IsCloseMessageDialog': True})
                    Event91:
                    Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk00'})
                    goto Event73
                } else {
                    Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk18', 'IsCloseMessageDialog': True})
                    goto Event91
                }
            } else {
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk17'})
                goto Event85
            }
          case 1:
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk22'})
            goto Event88
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC027_BigFlower'}) {
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk14'})
                Event78:
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk16', 'IsCloseMessageDialog': True})
                goto Event91
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC027_BigFlower', 'IsWaitFinish': True})
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk13'})
                goto Event78
            }
          case 3:
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk15'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC027_First', 'IsWaitFinish': True})
        Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk01'})
        if !EventSystemActor.GeneralChoice2() {
            Event66:
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk09'})
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk10'})
            if !EventSystemActor.GeneralChoice2() {
                Event69:
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk09'})
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk11'})
                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC027_First', 'IsWaitFinish': True})
            } else {
                goto Event69
            }
        } else {
            goto Event66
        }
    }
}

void MonaryHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage007.CheckActorAction13() {
      case 0:
        Event49:
        if Npc_UMiiVillage007.IsOnInstEventFlag() {
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk05'})
        } else {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event62:
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk02'})
              case 1:
                goto Event62
              case 2:
                Event63:
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk03'})
              case 3:
                goto Event63
              case 4:
                goto Event63
              case 5:
                goto Event63
              case 6:
                Event64:
                Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk04'})
              case 7:
                goto Event64
            }
        }
      case 1:
        goto Event49
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk08'})
            Event53:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {
            Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk07'})
            goto Event53
        }
      case 11:
        Npc_UMiiVillage007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage007:talk06'})
        goto Event53
      case 12:
        goto Event49
    }
}
