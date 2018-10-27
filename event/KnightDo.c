-------- EventFlow: KnightDoll --------

Actor: Npc_oasis027
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CallDemo', 'Demo_AdvanceQuest']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_01
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_02
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_03
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_04
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_05
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_06
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_KnightDollMini_07
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[fog]
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis027_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_00', 'IsCloseMessageDialog': True, 'ASName': 'Talk_EquipBook'})
    Npc_oasis027.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': True, 'IsValid': True})
    Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_07', 'IsCloseMessageDialog': False, 'ASName': ''})
    if !EventSystemActor.GeneralChoice2() {
        Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_08', 'IsCloseMessageDialog': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_09', 'IsCloseMessageDialog': False, 'ASName': ''})
            Event41:
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_01', 'ASName': ''})
                Event47:
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                    Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_11', 'ASName': ''})
                    Event71:
                    EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'StepName': 'Finish', 'IsWaitFinish': True, 'QuestName': ''})
                    if EventSystemActor.CheckFlag({'FlagName': 'KnightDoll_Dungeon'}) {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KnightDoll_Finish'})
                    }
                } else {
                    Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_02', 'ASName': ''})
                    goto Event71
                }
            } else {
                goto Event47
            }
        } else {
            Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_10', 'ASName': ''})
            goto Event41
        }
    } else {
        Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_03', 'ASName': ''})
    }
}

void Finish_Npc_oasis027_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis027.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': True, 'IsValid': True})
    if Npc_oasis027.IsOnInstEventFlag() {
        Event12:
        Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_04', 'ASName': ''})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_13', 'ASName': ''})
            } else {
                Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_12', 'ASName': ''})
            }
          case 1:
            Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_01', 'ASName': ''})
          case 2:
            Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_05', 'ASName': ''})
        }
    } else {

        call hello()

        goto Event12
    }
}

void EntryPoint0() {
    WorldManagerControl[fog].Demo_EventSetAddFogOff({'IsWaitFinish': True})

    fork {
        FldObj_KnightDollMini_01.Demo_Join({'IsWaitFinish': True})
    } {
        FldObj_KnightDollMini_02.Demo_Join({'IsWaitFinish': True})
    } {
        FldObj_KnightDollMini_03.Demo_Join({'IsWaitFinish': True})
    } {
        FldObj_KnightDollMini_04.Demo_Join({'IsWaitFinish': True})
    } {
        FldObj_KnightDollMini_05.Demo_Join({'IsWaitFinish': True})
    } {
        FldObj_KnightDollMini_06.Demo_Join({'IsWaitFinish': True})
    } {
        FldObj_KnightDollMini_07.Demo_Join({'IsWaitFinish': True})
    }

    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'DungeonAppearanceTrigger', 'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2720.0478515625, 'Pattern1PosY': 157.70053100585938, 'Pattern1PosZ': 2843.15771484375, 'Pattern1AtX': -2716.10986328125, 'Pattern1AtY': 149.9872283935547, 'Pattern1AtZ': 2839.28759765625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Cushion': 0.0, 'MotionMode': 1, 'Count': 90.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 1, 'IsValid': True, 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    if EventSystemActor.CheckFlag({'FlagName': 'KnightDoll_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KnightDoll_Finish'})
    }
}

void Ready_Npc_oasis027_Near() {
    Npc_oasis027.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/KnightDoll:Near_002', 'DispFrame': 90, 'IsChecked': True})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event76:
        Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_14'})
      case 1:
        goto Event76
      case 2:
        Event77:
        Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_15'})
      case 3:
        goto Event77
      case 4:
        goto Event77
      case 5:
        Event78:
        Npc_oasis027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/KnightDoll:Talk_16'})
      case 6:
        goto Event78
      case 7:
        goto Event78
    }
}
