-------- EventFlow: Npc_SouthernVillage004 --------

Actor: Npc_SouthernVillage004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_EnableCameraInput']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage004.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage004_IsTalked'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage004_EatFish'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage004_EatFishTalk'}) {
                        Event16:
                        Npc_SouthernVillage004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk03'})
                        } else {
                            Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk04'})
                        }
                    } else {
                        Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk12'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk14'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage004_EatFishTalk'})
                        } else {
                            Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk13'})
                        }
                    }
                } else {
                    goto Event16
                }
            } else
            switch Npc_SouthernVillage004.CheckActorAction13() {
              case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                Npc_SouthernVillage004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event26:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage004_IsTalked', 'IsWaitFinish': True})
                goto Event16
              case 1:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage004_NoFish'}) {
                    goto Event16
                } else {
                    Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk15'})
                    goto Event26
                }
            }
          case [1, 2, 3]:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage004_IsTalked'}) in [1, 0] {
                Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk16'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk17'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk19'})
                    } else {
                        Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk05'})
                    }
                } else {
                    Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk18'})
                }
            }
        }
      case 10:
        Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk20'})
    }
}

void Near() {
    switch Npc_SouthernVillage004.CheckActorAction13() {
      case 0:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_SouthernVillage004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:Near00'})
        }
      case 10:
        Npc_SouthernVillage004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:Near01'})
      case 11:
        Npc_SouthernVillage004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:Near02'})
    }
}

void CheckOnly() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 4, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk09'})
}

void CheckAndNPC() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_SouthernVillage004")})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage004_IsTalked'}) in [1, 0] {
        Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk10'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk08'})
            Event46:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage004_FishTalk', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage004_IsTalked', 'IsWaitFinish': True})
        } else {
            Npc_SouthernVillage004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage004:talk11'})
            goto Event46
        }
    }
}
