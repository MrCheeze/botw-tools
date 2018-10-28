-------- EventFlow: Npc_NorthHateru003 --------

Actor: Npc_NorthHateru003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'GeneralChoice4', 'CheckFlag', 'RandomChoice2', 'HasPorchItem', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_NorthHateru003_First'}) {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
            Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk08'})
            switch EventSystemActor.GeneralChoice4() {
              case 2:
                Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk09'})
                Event33:
                Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk11'})
              case 3:
                Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk10'})
                goto Event33
            }
        } else
        if !EventSystemActor.RandomChoice2() {
            Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk04'})
        } else {
            Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk05'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_NorthHateru003_First', 'IsWaitFinish': True})
        Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk07'})
        if EventSystemActor.GeneralChoice4() in [2, 3] {
            Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk00'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk01'})
            } else {
                Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk02'})
            }
            Npc_NorthHateru003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:talk03'})
        }
    }
}

void Near() {
    if !Npc_NorthHateru003.CheckActorAction13() {
        Npc_NorthHateru003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:near04'})
    } else
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_NorthHateru003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:near00', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Npc_NorthHateru003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:near01'})
      case 2:
        Npc_NorthHateru003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:near03'})
      case 3:
        Npc_NorthHateru003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru003:near02'})
    }
}
