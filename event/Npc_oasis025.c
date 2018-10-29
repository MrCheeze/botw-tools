-------- EventFlow: Npc_oasis025 --------

Actor: Npc_oasis025
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckEquipArmorSeriesType', 'CheckTimeType', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_BustUpFront', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RAIMEI_CK()

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
        Event46:
        if Npc_oasis025.IsOnInstEventFlag() {
            Event44:
            if !EventSystemActor.RandomChoice2() {
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_12'})
            } else {
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_16'})
            }
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_13'})
            } else {
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_14'})
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_06'})
            goto Event44
          case [2, 3, 4]:
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_05'})
            goto Event44
          case [5, 6, 7]:
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_04'})
            goto Event44
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
            goto Event46
        } else {
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_11'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_first'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_permitted'}) {
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_10'})
            } else {
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_08'})
                Event17:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_09', 'IsCloseMessageDialog': True})
                Npc_oasis025.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis042', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Lat': 0.0, 'Lng': 30.0, 'Offset': [0.0, 0.0, 0.20000000298023224], 'Count': 0.0, 'PlayerRelative': False, 'StartCalcOnly': True, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False})
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_17', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                Npc_oasis025.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_18'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis025_first', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis025_permitted', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_Search'})
            }
        } else {
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_02'})
            goto Event17
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_first'}) {
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_07'})
    } else {
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_02'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis025_first', 'IsWaitFinish': True})
    }
}

void Gerudo_CarryIce_Finished_Talk() {
    goto Event0
}

void RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'})
    && !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_Raimei_CK'}) {
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Raimei_CK_001'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis025_Raimei_CK'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}
