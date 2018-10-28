-------- EventFlow: Npc_King_Parasail004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_OpenMap', 'Demo_CloseItemMenu', 'Demo_AutoSave']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_ChangeEquipState', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_BustUpFront', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if Npc_King_Parasail004.CheckActorAction({'ActionName': 'Root/Terror'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Parasail004_Talk'}) {
        if Npc_King_Parasail004.CheckActorAction({'ActionName': 'Root/Terror'}) {
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Talk01', 'ASName': ''})
        } else {
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Talk01', 'ASName': 'Point'})
        }
        if !EventSystemActor.GeneralChoice2() {
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Kotsu01'})
        } else
        Event210:
        if Npc_King_Parasail004.IsOnInstEventFlag() {
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:GoodBye00', 'IsCloseMessageDialog': True})
        } else {
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:GoodBye01'})
        }
    } else
    if Npc_King_Parasail004.CheckActorAction({'ActionName': 'Root/Terror'}) {
        Npc_King_Parasail004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
    } else {
        Npc_King_Parasail004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Point'})
    }
    if !EventSystemActor.GeneralChoice2() {
        Npc_King_Parasail004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Kotsu00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Parasail004_Talk'})
    } else
    goto Event210
}

void Near() {
    Npc_King_Parasail004.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}

void Appear() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'IsWaitFinish': False, 'level': 255, 'pos': [0.0, 0.0, 0.0], 'type': 0, 'meshReso': -1})
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'StopWithFade'})

    call Npc_King_Common.InitParasail()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': False, 'FlagName': 'Npc_King_Parasail004_Appear'})
    Npc_King_Parasail004.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo027_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo027_4', 'EndFade': 0})
    Npc_King_Parasail004.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_King_Parasail004.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_King_Parasail004")})

    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear01', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'UseImaginaryLineAngle': True, 'StartCalcOnly': True, 'NearSide': True, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224], 'Lat': 5.0})
        Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear02'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear03'})
        Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear04'})
        Event96:
        Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear06', 'IsCloseMessageDialog': True})

        fork {
            Npc_King_Parasail004.Demo_PlayASForDemo({'ASName': 'Point', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }

        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear07'})
        } {
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'StartCalcOnly': True, 'Pattern1AtZ': 0.20000000298023224, 'Pattern1AtY': 0.7300000190734863, 'Pattern1AtX': 0.20000000298023224, 'Pattern1PosX': 1.0, 'Pattern1PosZ': 1.0, 'Pattern1PosY': 0.9300000071525574, 'Pattern1Fovy': 55.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'LngShiftRange': 20.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'LatShiftRange': 0.0, 'Pattern1PosY': 0.8299999833106995, 'Pattern1AtX': 0.20000000298023224, 'Cushion': 0.20000000298023224, 'StartCalcOnly': False, 'Pattern1AtZ': 0.20000000298023224, 'Pattern1PosX': 0.800000011920929, 'Pattern1PosZ': 0.800000011920929, 'Pattern1AtY': 0.7300000190734863, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'LngShiftRange': 20.0, 'Count': 80.0, 'IsWaitFinish': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        if !EventSystemActor.GeneralChoice2() {
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
            Npc_King_Parasail004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event179:

            fork {
                Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear10', 'IsCloseMessageDialog': True})
            } {
                GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Pattern1Fovy': 50.0, 'Pattern1PosY': 6.0, 'Pattern1AtY': 1.649999976158142, 'Pattern1PosZ': -5.199999809265137, 'Pattern1PosX': 2.799999952316284, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'Count': 135.0, 'CollisionInterpolateSkip': False, 'TargetActor2': 3, 'PosAppendMode': 3, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'AtAppendMode': 3, 'Cushion': 0.20000000298023224, 'Pattern1Fovy': 50.0, 'MotionMode': 0, 'UniqueName2': '', 'ActorName2': 'DgnObj_DungeonEntrance_A_01', 'Pattern1PosZ': 12.300000190734863, 'Pattern1PosY': 11.5, 'Pattern1AtZ': 4.0, 'Pattern1AtY': 9.800000190734863, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
            }


            fork {
                Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear11', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            } {

                call Appear11_Camera()

            }

            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear12', 'ASName': 'Point'})
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear13', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'UseImaginaryLineAngle': True, 'StartCalcOnly': True, 'NearSide': True, 'Lat': 5.0, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224]})
                Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear14'})
                Event217:
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
                Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear16'})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -518.6639404296875, 'Pattern1PosY': 190.61573791503906, 'Pattern1PosZ': 1583.6229248046875, 'Pattern1AtX': -529.7380981445312, 'Pattern1AtY': 196.1664581298828, 'Pattern1AtZ': 1602.191650390625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': False, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear17', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
                    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear18'})
                    Event196:
                    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear20'})
                    Item_Conductor.Demo_Join({'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'SheikPadLookPicture', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                    EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'WorldPos': [-1000.0, 271.0, 1900.0], 'ScaleLevel': 2})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear21'})
                    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

                    fork {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'SheikPadEquipOff', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    }

                    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Point', 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear22'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
                    Npc_King_Parasail004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-560.0, 246.0, 1695.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
                    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear23', 'ASName': ''})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FindDungeon_1stClear'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Parasail004_Disappear'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_AmiiboItem'})

                    call CommonFlagON()

                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                } else {
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
                    Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear19'})
                    goto Event196
                }
            } else {
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'UseImaginaryLineAngle': True, 'StartCalcOnly': True, 'NearSide': True, 'Lat': 5.0, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224]})
                Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear15'})
                goto Event217
            }
        } else {
            GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'UseImaginaryLineAngle': True, 'StartCalcOnly': True, 'NearSide': True, 'Lat': 5.0, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224]})
            Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear09'})
            goto Event179
        }
    } else {
        Npc_King_Parasail004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail004:Appear05'})
        goto Event96
    }
}

void CommonFlagON() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'King_Vagrant_FirstTalk'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Common_Anataha', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Common_Kokoha', 'IsWaitFinish': True})
}

void Appear11_Camera() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Aonuma'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Count': 120.0, 'Cushion': 0.20000000298023224, 'Accept1FrameDelay': True, 'StartCalcOnly': False, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': -658.2183837890625, 'Pattern1PosY': 173.86329650878906, 'Pattern1PosZ': 1521.6600341796875, 'Pattern1AtX': -663.1732177734375, 'Pattern1AtY': 174.03469848632812, 'Pattern1AtZ': 1521.010986328125, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Event268:
        GameRomCamera.Demo_Talk({'IsWaitFinish': False, 'CameraReset': False, 'NoConnect': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Fujibayashi'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'TargetActor1': -1, 'IsWaitFinish': True, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 120.0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': -463.837890625, 'Pattern1PosY': 180.65170288085938, 'Pattern1PosZ': 1992.748046875, 'Pattern1AtX': -459.5528869628906, 'Pattern1AtY': 180.82310485839844, 'Pattern1AtZ': 1990.177001953125, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        goto Event268
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Iwamoto'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 120.0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': -927.5952758789062, 'Pattern1PosY': 274.943115234375, 'Pattern1PosZ': 2304.0849609375, 'Pattern1AtX': -925.0244140625, 'Pattern1AtY': 275.114501953125, 'Pattern1AtZ': 2308.3701171875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        goto Event268
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Tominaga'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 120.0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': -1420.633056640625, 'Pattern1PosY': 338.1449890136719, 'Pattern1PosZ': 1983.64404296875, 'Pattern1AtX': -1424.009033203125, 'Pattern1AtY': 338.31640625, 'Pattern1AtZ': 1987.3289794921875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 120.0, 'Cushion': 0.20000000298023224, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosX': 2.562865972518921, 'Pattern1PosY': 0.7665860056877136, 'Pattern1PosZ': 6.106354236602783, 'Pattern1AtX': -0.008057000115513802, 'Pattern1AtY': 0.9379879832267761, 'Pattern1AtZ': 1.8213809728622437, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }
    goto Event268
}
