-------- EventFlow: RinelSearch --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckSelectPicture', 'CheckAddPorchItem', 'CheckTimeType', 'CheckFlag', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Lynel_Junior
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora015_Talk() {

    call FrarattoHello()

    switch Npc_Zora015.CheckActorAction13() {
      case 2:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk12', 'IsCloseMessageDialog': False})
      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Step1_2'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
                    Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk36', 'IsCloseMessageDialog': True})
                    Event59:

                    call LookMt()

                    Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk07', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.GeneralChoice2() {

                        call ReturnTalk()

                        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk09'})
                        Event272:
                        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk19', 'IsCloseMessageDialog': False})
                        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk20', 'IsCloseMessageDialog': False})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RinelSearch_Activated'})
                    } else {

                        call ReturnTalk()

                        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk13', 'IsCloseMessageDialog': True})

                        call LookMt()

                        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk14', 'IsCloseMessageDialog': True})
                        if !EventSystemActor.GeneralChoice2() {

                            call ReturnTalk()

                            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk15', 'IsCloseMessageDialog': False})
                            goto Event272
                        } else {

                            call ReturnTalk()

                            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk16', 'IsCloseMessageDialog': True})

                            call LookMt()

                            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk17', 'IsCloseMessageDialog': True})

                            call ReturnTalk()

                            goto Event272
                        }
                    }
                } else {
                    Event339:
                    Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk37'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk35', 'IsCloseMessageDialog': True})
                goto Event59
            } else {
                goto Event339
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora015_ReadyFirst'}) {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk08', 'IsCloseMessageDialog': False})
            Event321:
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
                    Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk06', 'IsCloseMessageDialog': True})
                    goto Event59
                } else {
                    Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/RinelSearch:talk11'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora015_ReadyFirst', 'IsWaitFinish': True})
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk05', 'IsCloseMessageDialog': False})
            }
        } else {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk03', 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk04', 'IsCloseMessageDialog': False})
                goto Event321
            } else {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk05', 'IsCloseMessageDialog': False})
            }
        }
    }
}

void Ready_Npc_Zora015_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
        Event1:
        Npc_Zora015.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/RinelSearch:near01'})
    } else {
        Event320:
        Npc_Zora015.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/RinelSearch:near01'})
    }
}

void Finish_Npc_Zora015_Talk() {

    call FrarattoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora015_Impossible'}) {
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk33'})
        Event317:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/RinelSearch:talk34'})
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_006_Lower'}) {

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_006_Lower'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RinelSearch_ArmorSend'})
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk31', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RinelSearch_Finish'})
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora015_Impossible', 'IsWaitFinish': True})
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk32', 'IsCloseMessageDialog': False})
        }
    } else
    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Lynel_Junior'}) {
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk26'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk27', 'IsCloseMessageDialog': True})

            call Common.LookPicture({'ActorName': 'Enemy_Lynel_Junior', 'Self': ActorIdentifier(name="Npc_Zora015")})

            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/RinelSearch:talk30'})
            goto Event317
        } else {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk22'})
        }
    } else {
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk21', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {

            call LookMt()

            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk23', 'IsCloseMessageDialog': True})

            call ReturnTalk()

            if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': False, 'CheckHead': False, 'CheckType': 'Zora', 'CheckUpper': True}) {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/RinelSearch:talk39'})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora015_Armor'}) {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk25'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora015_Armor', 'IsWaitFinish': True})
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk24'})
            }
        } else {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk22'})
        }
    }
}

void LookMt() {
    Npc_Zora015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': 'DestinationAnchor', 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [3758.7099609375, 623.4000244140625, -430.2699890136719], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Npc_Zora015.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Point', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [3758.7099609375, 623.4000244140625, -430.2699890136719], 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 25.0, 'TargetActor1': 1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1PosY': 3.0, 'PosAppendMode': 2, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'MotionMode': 1, 'Pattern1AtX': 3797.780029296875, 'Pattern1AtY': 598.8400268554688, 'Pattern1AtZ': -482.1300048828125, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora015', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': '', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
}

void ReturnTalk() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0})
    Npc_Zora015.Demo_TurnAndLookToObject({'ActorName': 'AnchorAction2', 'TurnDirection': 0.0, 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
}

void RinelMtStealth() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RinelMt_Enter'})
    Enemy_Lynel_Junior.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Wait', 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Enemy_Lynel_Junior.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Body_Move_Normal_Gear1', 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 0, 'Count': 0.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Pattern1PosX': 3779.110107421875, 'Pattern1PosY': 556.8099975585938, 'Pattern1PosZ': -290.82000732421875, 'Pattern1AtX': 3767.830078125, 'Pattern1AtY': 573.97998046875, 'Pattern1AtZ': -336.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'Pattern1AtX': 0.0, 'Pattern1PosX': 3.0, 'Pattern1AtY': 0.5, 'Pattern1PosZ': 3.0, 'Pattern1PosY': 1.0, 'Pattern1AtZ': 1.0, 'ActorName1': 'Enemy_Lynel_Junior', 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'UniqueName1': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 0, 'Count': 0.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Pattern1PosX': 3684.5, 'Pattern1PosY': 600.4199829101562, 'Pattern1PosZ': -530.4000244140625, 'Pattern1AtX': 3741.5400390625, 'Pattern1AtY': 519.8099975585938, 'Pattern1AtZ': -558.5800170898438, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'Pattern1PosX': -1.6831049919128418, 'Pattern1PosY': 2.615710973739624, 'Pattern1PosZ': 3.390625, 'Pattern1AtX': -0.8010249733924866, 'Pattern1AtY': 1.8228839635849, 'Pattern1AtZ': -1.4912110567092896, 'ActorName1': 'Enemy_Lynel_Junior', 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'UniqueName1': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 0, 'Count': 0.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Pattern1PosX': 3843.64990234375, 'Pattern1PosY': 701.77001953125, 'Pattern1PosZ': -607.719970703125, 'Pattern1AtX': 3723.919921875, 'Pattern1AtY': 559.52001953125, 'Pattern1AtZ': -539.1500244140625, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'Pattern1PosX': 1.1933590173721313, 'Pattern1PosY': 5.613346099853516, 'Pattern1PosZ': -1.0722659826278687, 'Pattern1AtX': -1.4575200080871582, 'Pattern1AtY': 2.1360819339752197, 'Pattern1AtZ': 1.4020999670028687, 'ActorName1': 'Enemy_Lynel_Junior', 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'UniqueName1': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'Pattern1PosX': 3906.77001953125, 'Pattern1PosY': 592.510009765625, 'Pattern1PosZ': -578.8800048828125, 'Pattern1AtX': 3904.449951171875, 'Pattern1AtY': 591.6300048828125, 'Pattern1AtZ': -572.8400268554688, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.700000047683716, 'Pattern1PosZ': -5.0, 'Pattern1AtY': 1.600000023841858, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 1, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void FrarattoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora015.IsOnInstEventFlag() {
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk02', 'IsCloseMessageDialog': False})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk29'})
      case [2, 3, 4, 5]:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk00', 'IsCloseMessageDialog': False})
      case [6, 7]:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/RinelSearch:talk01', 'IsCloseMessageDialog': False})
    }
}

void Finish_Npc_Zora015_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'Enemy_Lynel_Junior'}) {
        goto Event1
    } else {
        goto Event320
    }
}
