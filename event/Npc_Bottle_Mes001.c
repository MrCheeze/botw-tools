-------- EventFlow: Npc_Bottle_Mes001 --------

Actor: Npc_Bottle_Mes001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_EnableCameraInput']
queries: ['CheckFlag', 'CheckTimeType', 'RandomChoice2', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora126
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MultiTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Bottle_Mes001.CheckActorAction13() {
      case 0:

        call SatoSasanoHello()

        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk07'})
      case 1:

        call SatoSasanoHello()

        if !EventSystemActor.RandomChoice2() {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk08'})
        } else {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk10'})
        }
      case 2:

        call SatoSasanoHello()

        if !EventSystemActor.RandomChoice2() {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk11'})
        } else {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk12'})
        }
      case 3:

        call SatoSasanoHello()

        if !EventSystemActor.RandomChoice2() {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk13'})
        } else {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk14'})
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk04'})
        } else {
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk05'})
        }
      case 11:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk06'})
    }
}

void NearActorsTalk() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_Bottle_Mes001', 'ActorName2': 'Npc_Zora126'})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Npc_Bottle_Mes001.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_Bottle_Mes001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Zora126', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
    } {
        Npc_Zora126.Demo_ReturnAnchor({'IsWaitFinish': True})
        Npc_Zora126.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Bottle_Mes001', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
    }

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk15'})
        Event14:
        Npc_Zora126.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk19'})
      case 1:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk16'})
        goto Event14
      case 2:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk17'})
        goto Event14
      case 3:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk18'})
        goto Event14
    }
}

void NearActorsNear() {
    Npc_Bottle_Mes001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:near00'})
}

void SatoSasanoHello() {
    if Npc_Bottle_Mes001.IsOnInstEventFlag() {
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk03'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk00'})
        Event31:
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Bottle_Mes001_NormalFirst'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Bottle_Mes001_NormalFirst', 'IsWaitFinish': True})
            Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk09'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
      case [2, 3, 4, 5]:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk01'})
        goto Event31
      case [6, 7]:
        Npc_Bottle_Mes001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Bottle_Mes001:talk02'})
        goto Event31
    }
}

void Near() {
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}
