-------- EventFlow: FironeMini_HorseEnemy --------

Actor: Npc_FaronWoods001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: ['CheckActorAction', 'IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AdvanceQuest']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Exterminate_Npc_FaronWoods001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_FaronWoods001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk06'})
    } else {
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk08'})
    }
}

void Ready_Npc_FaronWoods001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_FaronWoods001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk06'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HorseEnemy_Exterminate'}) {
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk11'})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': True, 'StepName': ''})
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
        Event53:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_Q'}) {
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk09'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_PlantGet_Q'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_HorseEnemy_GetReward'})
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk03'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_HorseEnemy_Finish'})
        } else {
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk10'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HorseEnemy_IsTalked'}) {
        Event30:
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk01'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk05'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
        } else {
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk06'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_HorseEnemy_IsTalked', 'IsWaitFinish': True})
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk07'})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk00'})
            WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            if Npc_FaronWoods001.IsArriveAnchorForRain() {
                Npc_FaronWoods001.Demo_LookAtObject({'ObjectId': 2, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [490.0, 153.0, 3395.0]})
                Event72:
                GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [490.0, 153.0, 3395.0]})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtX': 508.0, 'Pattern1PosX': 509.0, 'Pattern1PosY': 160.0, 'Pattern1PosZ': 3442.699951171875, 'Pattern1AtY': 159.6999969482422, 'Pattern1AtZ': 3437.60009765625, 'Pattern1Fovy': 40.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})

                fork {
                    Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk04', 'IsCloseMessageDialog': True})
                } {
                    GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtX': 508.0, 'Pattern1PosX': 509.0, 'Pattern1Fovy': 30.0, 'Pattern1PosY': 160.0, 'Pattern1PosZ': 3442.699951171875, 'Pattern1AtY': 159.6999969482422, 'Pattern1AtZ': 3437.60009765625, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                }

                GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0, 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                if Npc_FaronWoods001.IsArriveAnchorForRain() {
                    Npc_FaronWoods001.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
                    Event75:
                    GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_FaronWoods001'})
                    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
                    goto Event30
                } else {
                    Npc_FaronWoods001.Demo_TurnAndLookToObject({'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False})
                    goto Event75
                }
            } else {
                Npc_FaronWoods001.Demo_TurnAndLookToObject({'ObjectId': 2, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [490.0, 153.0, 3395.0], 'IsConfront': False})
                goto Event72
            }
        }
    }
}

void Finish_Npc_FaronWoods001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_FaronWoods001.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk06'})
    } else {
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_HorseEnemy:talk02'})
        goto Event53
    }
}

void Exterminate_Npc_FaronWoods001_Near() {

    call Npc_FaronWoods001.NearSub({'DispFrame': 90, 'IsChecked': False})

}

void Ready_Npc_FaronWoods001_Near() {
    Event50:

    call Npc_FaronWoods001.NearSub({'DispFrame': 300, 'IsChecked': True})

}

void Finish_Npc_FaronWoods001_Near() {
    goto Event50
}
