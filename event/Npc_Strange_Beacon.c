-------- EventFlow: Npc_Strange_Beacon --------

Actor: Npc_Strange_Beacon
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnToObjectGreeting', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag', 'CheckActorAction13', 'IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_EnableCameraInput']
queries: ['GeneralChoice2', 'GeneralChoice4', 'CheckFlag', 'RandomChoice4', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkInWater']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Strange_Beacon.CheckActorAction13() {
      case [0, 1, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Strange_Beacon_First'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Strange_Beacon_Recipe'}) {
                Event2:
                Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_052', 'ASName': ''})
                Event35:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_004', 'ASName': ''})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_005', 'IsCloseMessageDialog': False, 'ASName': ''})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_101', 'ASName': '', 'IsCloseMessageDialog': False})
                    Event50:
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_103', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Strange_Beacon_Recipe', 'IsWaitFinish': True})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_053', 'ASName': ''})
                    goto Event35
                  case 1:
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_006', 'ASName': ''})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_007', 'ASName': ''})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_100', 'ASName': '', 'IsCloseMessageDialog': False})
                    goto Event50
                  case 2:
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_008', 'ASName': ''})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_009', 'ASName': ''})
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_102', 'ASName': '', 'IsCloseMessageDialog': False})
                    goto Event50
                  case 3:
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_051', 'ASName': ''})
                }
            } else {
                Event52:
                Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_056'})
                Event33:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_003', 'ASName': ''})
                    goto Event35
                } else {
                    Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_050', 'IsCloseMessageDialog': False, 'ASName': ''})
                }
            }
        } else {
            Event8:
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_011'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Strange_Beacon_First', 'IsWaitFinish': True})
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_010'})
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_000', 'ASName': ''})
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_001', 'ASName': '', 'IsCloseMessageDialog': False})
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_002', 'ASName': ''})
            goto Event33
        }
      case 10:
        Event48:
        Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_054', 'ASName': ''})
      case 11:
        Event16:
        Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk007', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
    }
}

void Clear_Dungeon103_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Strange_Beacon.CheckActorAction13() {
      case [0, 1, 13]:
        if Npc_Strange_Beacon.IsOnInstEventFlag() {
            if EventSystemActor.CheckFlag({'FlagName': 'Strange_Beacon_Recipe'}) {
                goto Event2
            } else {
                goto Event52
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Strange_Beacon_Recipe'}) {
            goto Event2
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Strange_Beacon_First'}) {
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk_055', 'IsCloseMessageDialog': False, 'ASName': ''})
            goto Event35
        } else {
            goto Event8
        }
      case 10:
        goto Event48
      case 11:
        goto Event16
    }
}

void Near() {
    if Npc_Strange_Beacon.CheckActorAction13() {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Strange_Beacon.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk006', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Npc_Strange_Beacon.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk008'})
          case 2:
            Npc_Strange_Beacon.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk009'})
          case 3:
            Npc_Strange_Beacon.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Strange_Beacon:Talk010'})
        }
    }
}

void InitTalk_Npc_Strange_Beacon() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            GameRomCamera.Demo_TalkInWater({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        } else {
            GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        }
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'Arg_Greeting'})
    } {
        Npc_Strange_Beacon.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if Npc_Strange_Beacon.IsWeaponDrawn() {
            Npc_Strange_Beacon.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'TargetIndex': 0})
            Event82:
            Npc_Strange_Beacon.Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 'Arg_Turn', 'GreetingType': 'Arg_Greeting'})
        } else {
            goto Event82
        }
    }

}
