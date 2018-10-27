-------- EventFlow: Npc_RitoHatago001 --------

Actor: Npc_RitoHatago001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreasePorchItem']
queries: ['CheckWeather', 'GeneralChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_RitoHatago001.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event28:
            Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk_05'})
          case 1:
            Event59:
            Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk18'})
          case 2:
            goto Event59
          case 3:
            goto Event59
        }
      case 1:
        Event57:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event32:
            Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk_11'})
            Event34:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Material_02', 'Count': 1}) {
                Npc_RitoHatago001.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk12'})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_Material_02', 'Value': -1, 'IsWaitFinish': True})
                    Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk13'})
                    Npc_RitoHatago001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk14', 'IsWaitFinish': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Item_Material_03'})

                } else {
                    Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk15'})
                }
            } else {
                Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk19'})
            }
          case 1:
            Event54:
            Npc_RitoHatago001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk17'})
            goto Event34
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
      case 2:
        goto Event28
      case 3:
        if Npc_RitoHatago001.IsOnInstEventFlag() {
            goto Event32
        } else {
            Npc_RitoHatago001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:talk_10'})
            goto Event32
        }
      case 4:
        goto Event57
      case 5:
        goto Event57
      case 6:
        goto Event57
      case 7:
        goto Event57
      case 8:
        goto Event57
      case 9:
        goto Event57
      case 10:
        goto Event57
      case 11:
        goto Event57
      case 12:
        goto Event57
      case 13:
        goto Event57
    }
}
