-------- EventFlow: Demo017_0 --------

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_SetupGetDemoModeNumUi', 'Demo_DeleteAllIceMakerForDemo']
queries: ['CheckPlayerState', 'CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_DisableUnliftInEvent', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HiddenKorokGround
entrypoint: None()
actions: ['Demo_OnWaitRevival', 'Demo_HiddenKorokAppear', 'Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_Talk', 'Demo_TurnAndLookAtObjectNow']
queries: ['IsWaitRevival']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HiddenKorokFly
entrypoint: None()
actions: ['Demo_OnWaitRevival', 'Demo_HiddenKorokAppear', 'Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_Talk', 'Demo_ChangeEquipState', 'Demo_TurnAndLookAtObjectNow']
queries: ['IsWaitRevival']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_NotifyTalk', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void HiddenKorok_Ground() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})
    Npc_HiddenKorokGround.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})

    call AirWait()

    Event361:
    Npc_HiddenKorokGround.Demo_TurnAndLookAtObjectNow({'IsWaitFinish': True, 'IsConfront': False, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnliftInEvent({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'LatShiftRange': 10.0, 'IsWaitFinish': False, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 70.0, 'CollisionInterpolateSkip': False, 'Pattern1PosY': 1.315000057220459, 'Pattern1PosZ': 1.781499981880188, 'StartCalcOnly': True, 'Pattern1AtY': 0.6499999761581421, 'ActorName1': 'Npc_HiddenKorokGround', 'LngShiftRange': 40.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    SoundTriggerTag.Demo_SoundTrigger({'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo017_0_KorogAppear', 'SoundDelay': 0})
    Npc_HiddenKorokGround.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Appear', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    Npc_HiddenKorokGround.Demo_HiddenKorokAppear({'IsWaitFinish': True})
    EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
    Npc_HiddenKorokGround.Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Surprised', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    Npc_HiddenKorokGround.Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Wait', 'ClothWarpMode': -1})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 6}) {
            Event111:
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 1, 'ObjectId': 3, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        }
        Event110:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'BeginTalk'})
        if !Npc_HiddenKorokGround.IsWaitRevival() {
            if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_First'}) {
                Npc_HiddenKorokGround.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo017_0:Talk02'})
            } else {
                Npc_HiddenKorokGround.Demo_Talk({'MessageId': 'DemoMsg/Demo017_0:Talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
            }
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'NumUiType': 1, 'AddNum': 1, 'IsWaitFinish': True})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_KorokNuts'})

            Npc_HiddenKorokGround.Demo_OnWaitRevival({'IsWaitFinish': False})
            EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'GameDataIntName': 'HiddenKorok_Number', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_First'}) {
                Npc_HiddenKorokGround.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo017_0:Talk03'})
            } else {
                Npc_HiddenKorokGround.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo017_0:Talk01'})
            }
            if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_First'}) {
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 900, 'GameDataIntName': 'HiddenKorok_Number'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Maracus'}) {
                        NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo017_0:CompTalk01'})
                    } else {
                        NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo017_0:CompTalk02'})
                    }
                    EventSystemActor.Demo_FlagON({'FlagName': 'HiddenKorok_Complete', 'IsWaitFinish': True})
                    Event371:

                    fork {
                        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'TargetActor2': 1, 'FovyAppendMode': 0, 'MotionMode': 1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosY': 3.0, 'PosAppendMode': 3, 'IsWaitFinish': True, 'AtAppendMode': 0, 'StartCalcOnly': False, 'Pattern1Fovy': 0.0, 'Pattern1PosZ': -3.0, 'Count': 0.0, 'Cushion': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 1, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False})
                    }

                } else {
                    goto Event371
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HiddenKorok_First', 'IsWaitFinish': True})
                goto Event371
            }
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
        goto Event111
    }
    goto Event110
}

void HiddenKorok_Air() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})

    call AirWait()

    Event362:
    Npc_HiddenKorokFly.Demo_TurnAndLookAtObjectNow({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': False, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    GameROMPlayer.Demo_DisableUnliftInEvent({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 2, 'LatShiftRange': 10.0, 'IsWaitFinish': False, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 70.0, 'CollisionInterpolateSkip': False, 'Pattern1PosY': 1.315000057220459, 'Pattern1PosZ': 1.781499981880188, 'StartCalcOnly': True, 'Pattern1AtY': 0.6499999761581421, 'LngShiftRange': 40.0, 'ActorName1': 'Npc_HiddenKorokFly', 'ActorName2': 'Obj_IceMakerBlock', 'TargetActor2': -1, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    SoundTriggerTag.Demo_SoundTrigger({'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo017_0_KorogAppear', 'SoundDelay': 0})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'EffectWater', 'FadeOutSec': 1.0, 'FadeInSec': 2.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})
    Npc_HiddenKorokFly.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Appear', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    Npc_HiddenKorokFly.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
    Npc_HiddenKorokFly.Demo_HiddenKorokAppear({'IsWaitFinish': True})
    EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
    Npc_HiddenKorokFly.Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Surprised', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
    Npc_HiddenKorokFly.Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Act_Wait_Fly', 'ClothWarpMode': -1})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 6}) {
            Event238:
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 1, 'ObjectId': 3, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        }
        Event237:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'BeginTalk'})
        if !Npc_HiddenKorokFly.IsWaitRevival() {
            if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_First'}) {
                Npc_HiddenKorokFly.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo017_0:Talk02', 'ASName': 'Act_Talk'})
            } else {
                Npc_HiddenKorokFly.Demo_Talk({'MessageId': 'DemoMsg/Demo017_0:Talk00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': 'Act_Talk'})
            }
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'NumUiType': 1, 'AddNum': 1, 'IsWaitFinish': True})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_KorokNuts'})

            Npc_HiddenKorokFly.Demo_OnWaitRevival({'IsWaitFinish': False})
            EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'GameDataIntName': 'HiddenKorok_Number', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_First'}) {
                Npc_HiddenKorokFly.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo017_0:Talk03', 'ASName': 'Act_Talk'})
            } else {
                Npc_HiddenKorokFly.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo017_0:Talk01', 'ASName': 'Act_Talk'})
            }
            if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_First'}) {
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 900, 'GameDataIntName': 'HiddenKorok_Number'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Maracus'}) {
                        NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo017_0:CompTalk01'})
                    } else {
                        NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo017_0:CompTalk02'})
                    }
                    EventSystemActor.Demo_FlagON({'FlagName': 'HiddenKorok_Complete', 'IsWaitFinish': True})
                    Event373:

                    fork {
                        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'TargetActor2': 1, 'FovyAppendMode': 0, 'CollisionInterpolateSkip': False, 'MotionMode': 1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosY': 3.0, 'PosAppendMode': 3, 'AtAppendMode': 0, 'StartCalcOnly': False, 'Pattern1Fovy': 0.0, 'Pattern1PosZ': -3.0, 'Count': 0.0, 'Cushion': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'Accept1FrameDelay': False})
                    }

                } else {
                    goto Event373
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HiddenKorok_First', 'IsWaitFinish': True})
                goto Event373
            }
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
        goto Event238
    }
    goto Event237
}

void HiddenKorok_Ground_Lift() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})

    call AirWait()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    goto Event361
}

void HiddenKorok_Air_Lift() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True, 'BgmCtrlType': 'Mute'})

    call AirWait()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    goto Event362
}

void AirWait() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        Event352:
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        goto Event352
    }
}
