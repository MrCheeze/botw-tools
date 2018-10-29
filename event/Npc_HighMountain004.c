-------- EventFlow: Npc_HighMountain004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_WarpPlayer']
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'CheckGameDataInt', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
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

    if EventSystemActor.CheckFlag({'FlagName': 'Get_RitoWeapon'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_NormalFirst'}) {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk23'})
            Event113:
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk34'})
            Event112:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk36', 'IsCloseMessageDialog': True})
                    Event124:
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk40'})
                    goto Event112
                } else {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk44'})

                    call Karn_MSword()

                    goto Event124
                }
              case 1:
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk13', 'IsCloseMessageDialog': True})
                goto Event124
              case 2:
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk37'})
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk38', 'IsCloseMessageDialog': True})
                goto Event124
              case 3:
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk43'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC004_NormalFirst'})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk23'})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk24'})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk19'})
            goto Event113
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_First_Clear'}) {
        Event47:
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk42'})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk27', 'IsCloseMessageDialog': True})
        } else {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk28'})

            call Karn_MSword()

        }
    } else {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk23'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC004_First_Clear', 'IsWaitFinish': True})
        goto Event47
    }
}

void WindRelic_Karn_Ready() {

    call KarnCamera()

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_SelfTalk'}) {
        Event98:
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk26'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk04'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_Activated', 'IsWaitFinish': True})
        } else {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk03'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC004_SelfTalk'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_First'}) {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk41'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.378906011581421, 'Pattern1PosY': 1.2916560173034668, 'Pattern1PosZ': 0.8508300185203552, 'Pattern1AtX': -1.0080569982528687, 'Pattern1AtY': 0.3939819931983948, 'Pattern1AtZ': -0.296875, 'Pattern1Fovy': 41.717342376708984, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk09'})
        Event56:
        if !EventSystemActor.GeneralChoice2() {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1728520393371582, 'Pattern1PosY': 1.580291986465454, 'Pattern1PosZ': 3.427733898162842, 'Pattern1AtX': 0.11596699804067612, 'Pattern1AtY': 1.9885560274124146, 'Pattern1AtZ': 0.4465329945087433, 'Pattern1Fovy': 51.58906555175781, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_HighMountain004', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk01'})
            goto Event98
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1728520393371582, 'Pattern1PosY': 1.580291986465454, 'Pattern1PosZ': 3.427733898162842, 'Pattern1AtX': 0.11596699804067612, 'Pattern1AtY': 1.9885560274124146, 'Pattern1AtZ': 0.4465329945087433, 'Pattern1Fovy': 51.58906555175781, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_HighMountain004', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk02'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC004_First', 'IsWaitFinish': True})
        }
    } else {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk00'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.378906011581421, 'Pattern1PosY': 1.2916560173034668, 'Pattern1PosZ': 0.8508300185203552, 'Pattern1AtX': -1.0080569982528687, 'Pattern1AtY': 0.3939819931983948, 'Pattern1AtZ': -0.296875, 'Pattern1Fovy': 41.717342376708984, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk21'})
        goto Event56
    }
}

void WindRelic_Karn_ToTeba() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk43'})
    Event72:
    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk07'})
    Event73:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_First_NPC010'}) {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk20', 'IsCloseMessageDialog': True})
        } else {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk14', 'IsCloseMessageDialog': True})
        }
        Event76:
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk05'})
        goto Event73
      case 1:
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk15', 'IsCloseMessageDialog': True})
        goto Event76
      case 2:
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk06', 'IsCloseMessageDialog': True})
        goto Event76
      case 3:
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk16'})
    }
}

void WindRelic_Karn_MeetTeba() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_First_NPC010'}) {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk11'})
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk18'})
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk19'})
        goto Event72
    } else {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk10'})
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk18'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC004_First_NPC010', 'IsWaitFinish': True})
        goto Event72
    }
}

void WindRelic_Karn_Finished() {

    call KarnCamera()

    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'MsterSword_TalkLv', 'Value': 1, 'IsWaitFinish': True})
    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk12'})
    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk38'})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_TBox_Appear', 'IsWaitFinish': True})
    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk39'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3625.95166015625, 'Pattern1PosY': 326.16925048828125, 'Pattern1PosZ': -1827.701416015625, 'Pattern1AtX': -3626.9365234375, 'Pattern1AtY': 325.6747131347656, 'Pattern1AtZ': -1830.2412109375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3625.839599609375, 'Pattern1PosY': 326.937255859375, 'Pattern1PosZ': -1828.447021484375, 'Pattern1AtX': -3628.278564453125, 'Pattern1AtY': 325.6747131347656, 'Pattern1AtZ': -1828.0966796875, 'Pattern1Fovy': 54.999996185302734, 'MotionMode': 1, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    } {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk42', 'ASName': 'Talk_PresentWeapon'})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk27', 'IsCloseMessageDialog': True})
        Event78:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'ForceRunTelop': True, 'StepName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } else {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk28'})

        call Karn_MSword()

        goto Event78
    }
}

void WindRelic_Karn_Ready_near() {
    Npc_HighMountain004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:near00', 'DispFrame': 300, 'IsChecked': True})
}

void WindRelic_Karn_Finish_near() {
    Npc_HighMountain004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:near01', 'DispFrame': 90, 'IsChecked': True})
}

void Karn_MSword() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 4}) {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk32', 'IsCloseMessageDialog': True})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 3}) {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk31', 'IsCloseMessageDialog': True})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 2}) {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk30', 'IsCloseMessageDialog': True})
    } else {
        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk29', 'IsCloseMessageDialog': True})
    }
}

void KarnCamera() {
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

    fork {

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3627.698486328125, 'Pattern1PosY': 325.1558532714844, 'Pattern1PosZ': -1827.2239990234375, 'Pattern1AtX': -3627.002197265625, 'Pattern1AtY': 325.5635986328125, 'Pattern1AtZ': -1830.3963623046875, 'Pattern1Fovy': 51.58906555175781, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False})
        } {
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'B-3', 'WarpDestPosName': 'KarnFront', 'IsWaitFinish': True})
        }

    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    }

    Npc_HighMountain004.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_HighMountain004.Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True})
}
