-------- EventFlow: Npc_goron004 --------

Actor: Npc_goron004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: ['CheckTimeType', 'GeneralChoice4', 'RandomChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: []
queries: ['ComparePlayerFireResistantLevel']
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch GameROMPlayer.ComparePlayerFireResistantLevel() {
      case 0:
        Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk17', 'ASName': 'Talk_Salesclerk'})
        Event58:
        switch EventSystemActor.GeneralChoice4() {
          case [0, 2]:
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk13', 'ASName': 'Talk_Salesclerk'})
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk21', 'ASName': 'Talk_Salesclerk', 'IsCloseMessageDialog': True})
            Event70:
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Salesclerk', 'MessageId': 'EventFlowMsg/Npc_goron004:talk23'})
            goto Event58
          case 1:
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk18', 'ASName': 'Talk_Salesclerk'})

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_goron004")})

            goto Event70
          case 3:
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk22', 'ASName': 'Talk_Salesclerk'})
        }
      case [1, 2, 3, 4]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron004:talk00', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Salesclerk'})
            Event19:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk20', 'ASName': 'Talk_Salesclerk'})
                switch GameROMPlayer.ComparePlayerFireResistantLevel() {
                  case 1:
                    Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk14', 'ASName': 'Talk_Salesclerk', 'IsCloseMessageDialog': True})
                    Event68:
                    Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Salesclerk', 'MessageId': 'EventFlowMsg/Npc_goron004:talk07'})
                    goto Event19
                  case 2:
                    Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk15', 'ASName': 'Talk_Salesclerk', 'IsCloseMessageDialog': True})
                    goto Event68
                  case [3, 4]:
                    Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk16', 'ASName': 'Talk_Salesclerk', 'IsCloseMessageDialog': True})
                    goto Event68
                }
              case 1:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_goron004")})

                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                goto Event68
              case 2:
                Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk06', 'ASName': 'Talk_Salesclerk'})
                Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk09', 'ASName': 'Talk_Salesclerk', 'IsCloseMessageDialog': True})
                goto Event68
              case 3:
                Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron004:talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Salesclerk'})
            }
          case [6, 7]:
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron004:talk01', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Salesclerk'})
            goto Event19
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Armor({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName', 'Self': ActorIdentifier(name="Npc_goron004")})


    call Sell()

}

void Near() {
    Npc_goron004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_goron004:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Sell() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_goron004_SoldOut'}) {
        Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk10', 'ASName': 'Talk_Salesclerk'})
    } else
    if !EventSystemActor.RandomChoice2() {
        Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk11', 'ASName': 'Talk_Salesclerk'})
        Event73:
        if !GameROMPlayer.ComparePlayerFireResistantLevel() {
            Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Salesclerk', 'MessageId': 'EventFlowMsg/Npc_goron004:talk24'})
        }
    } else {
        Npc_goron004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron004:talk12', 'ASName': 'Talk_Salesclerk'})
        goto Event73
    }
}
