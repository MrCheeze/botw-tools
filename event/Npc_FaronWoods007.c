-------- EventFlow: Npc_FaronWoods007 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice3', 'CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_FaronWoods007
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['CheckActorAction', 'IsOnInstEventFlag', 'IsAwakened']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Talk', 'Demo_Unequip', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods007_talk'}) {
        if Npc_FaronWoods007.IsOnInstEventFlag() {
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk00'})
            Event18:
            switch EventSystemActor.GeneralChoice3() {
              case 0:

                call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_FaronWoods007")})

                Event22:
                Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk01'})
                goto Event18
              case 1:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_FaronWoods007")})

                goto Event22
              case 2:

                call GoodBye()

            }
        } else
        if Npc_FaronWoods007.IsAwakened() {
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk07'})
            Event19:
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk08'})
            goto Event18
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk02'})
                goto Event19
              case [2, 3, 4, 5]:
                Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk03'})
                goto Event19
              case [6, 7]:
                Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk04'})
                goto Event19
            }
          case [1, 2]:
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk05'})
            goto Event19
          case 3:
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Talk06'})
            goto Event19
        }
    } else
    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:FirstTalk00'})
        Event11:
        if !EventSystemActor.GeneralChoice2() {

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_FaronWoods007")})

            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:FirstTalk02'})
            Event13:
            if !EventSystemActor.GeneralChoice2() {

                call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_FaronWoods007")})

                Event33:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods007_talk'}) {
                    Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:GoodBye01'})
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FaronWoods007_talk', 'IsWaitFinish': True})
                    Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:GoodBye00'})
                }
            } else
            goto Event33
        } else {
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:FirstTalk01'})
            goto Event13
        }
      case [1, 2, 3]:
        Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:FirstTalk00_Rain'})
        goto Event11
    }
}

void Near() {
    if Npc_FaronWoods007.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FaronWoods007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Near02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods007_talk'}) {
        Npc_FaronWoods007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Near01', 'IsChecked': False, 'DispFrame': 90})
    } else {
        Npc_FaronWoods007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void GoodBye() {
    goto Event33
}

void Axe() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_FaronWoods007_Axe'})
    if Npc_FaronWoods007.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        if Npc_FaronWoods007.IsAwakened() {
            Event53:

            call InitTalk.InitTalkEquipOnEvent({'Self': ActorIdentifier(name="Npc_FaronWoods007"), 'Arg_Turn': 0})

            GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_FaronWoods007'})
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Axe00', 'IsCloseMessageDialog': False})

            call UnequipTalk()

            EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
            Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Axe01'})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods007_talk'}) {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            } else {
                Npc_FaronWoods007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods007:Axe02'})
                goto Event11
            }
        }
    } else {
        goto Event53
    }
}

void UnequipTalk() {

    fork {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': False})
    }

}
