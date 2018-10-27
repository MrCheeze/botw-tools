-------- EventFlow: SearchStone --------

Actor: Npc_SouthernVillage014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_TalkASync', 'Demo_ChangePostureWithAS']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_LoopEnd', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_ShowPhoto', 'Demo_CloseItemMenu', 'Demo_CloseMessageDialog']
queries: ['CheckSelectPicture', 'CheckPlayerState', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithograph_A_01[Lithograph_01]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_OnWaitRevival']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithograph_A_01[Lithograph_02]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_OnWaitRevival']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayASAdapt', 'Demo_PlayerTurnInner']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthernVillage014[LookPicture1(Self)]
entrypoint: LookPicture1(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_SouthernVillage014[LookPicture2(Self)]
entrypoint: LookPicture2(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_SouthernVillage014[LookPicture3(Self)]
entrypoint: LookPicture3(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_SouthernVillage014[LookPicture3_2(Self)]
entrypoint: LookPicture3_2(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_SouthernVillage014[LookPicture3_3(Self)]
entrypoint: LookPicture3_3(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_SouthernVillage014[LookPicture2_2(Self)]
entrypoint: LookPicture2_2(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Ready_Npc_SouthernVillage014_Talk() {
    if Npc_SouthernVillage014.IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_008'})
        Event72:
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'FldObj_SearchStone_A_01', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 1})
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_003', 'IsCloseMessageDialog': True})
            Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_009'})
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_010'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_005', 'IsCloseMessageDialog': True})
                Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'FldObj_SearchStone_A_01', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 1})
                Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_006', 'IsCloseMessageDialog': True})
                Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_007', 'IsCloseMessageDialog': False})
                Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_011', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'SearchStone_Activated', 'IsWaitFinish': True})
            }
        } else {
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_004'})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

        Npc_SouthernVillage014.Demo_Talk({'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_001', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_Checkup'})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHello', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_SouthernVillage014.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Talk_Surprised', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_002'})
        goto Event72
    }
}

void Step1_Npc_SouthernVillage014_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_001', 'IsCloseMessageDialog': True})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone2end'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone3end'}) {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                    call LookPicture3_3({'ActorName': 'FldObj_SearchStone_A_04', 'Self': ActorIdentifier(name="Npc_SouthernVillage014")})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                    Event18:
                    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_003', 'IsCloseMessageDialog': True})
                    Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 1, 'ActorName': 'FldObj_SearchStone_A_01'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'SearchStone_Step1', 'IsWaitFinish': True})
                    Npc_SouthernVillage014.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Checkup', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_011', 'ASName': '', 'IsCloseMessageDialog': True})
                    Npc_SouthernVillage014.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_012'})
                } else {
                    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_020'})
                }
            } else
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {

                    call LookPicture3_3({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_03'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                    goto Event18
                } else
                if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                    call LookPicture3_2({'ActorName': 'FldObj_SearchStone_A_03', 'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName_000': 'FldObj_SearchStone_A_04'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                    goto Event18
                } else {

                    call LookPicture2_2({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_03'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_007'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_018'})
            } else
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                call LookPicture2_2({'ActorName': 'FldObj_SearchStone_A_04', 'Self': ActorIdentifier(name="Npc_SouthernVillage014")})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_008'})
            } else {
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_018'})
            }
        } else
        if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone3end'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {

                    call LookPicture3_3({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_02'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                    goto Event18
                } else
                if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                    call LookPicture3_2({'ActorName_000': 'FldObj_SearchStone_A_04', 'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_02'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                    goto Event18
                } else {

                    call LookPicture2_2({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_02'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_007'})
                }
            } else
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {

                    call LookPicture3_2({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_02', 'ActorName_000': 'FldObj_SearchStone_A_03'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                    goto Event18
                } else
                if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                    call LookPicture3({'ActorName': 'FldObj_SearchStone_A_02', 'ActorName_000': 'FldObj_SearchStone_A_03', 'ActorName_001': 'FldObj_SearchStone_A_04', 'Self': ActorIdentifier(name="Npc_SouthernVillage014")})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                    goto Event18
                } else {

                    call LookPicture2({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_02', 'ActorName_000': 'FldObj_SearchStone_A_03'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_007'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {

                call LookPicture2_2({'ActorName': 'FldObj_SearchStone_A_02', 'Self': ActorIdentifier(name="Npc_SouthernVillage014")})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_008'})
            } else
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                call LookPicture2({'ActorName': 'FldObj_SearchStone_A_02', 'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName_000': 'FldObj_SearchStone_A_04'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_008'})
            } else {

                call LookPicture1({'ActorName': 'FldObj_SearchStone_A_02', 'Self': ActorIdentifier(name="Npc_SouthernVillage014")})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone2end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_005'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone3end'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_019'})
            } else
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                call LookPicture2_2({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_04'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_009'})
            } else {
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_019'})
            }
        } else
        if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_03'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {

                call LookPicture2_2({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_03'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_009'})
            } else
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

                call LookPicture2({'ActorName_000': 'FldObj_SearchStone_A_04', 'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_03'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_009'})
            } else {

                call LookPicture1({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_03'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone3end'})
                Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_004'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_Stone4end'}) {
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_018'})
        } else
        if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_SearchStone_A_04'}) {

            call LookPicture1({'Self': ActorIdentifier(name="Npc_SouthernVillage014"), 'ActorName': 'FldObj_SearchStone_A_04'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_Stone4end'})
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_006'})
        } else {
            Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_015'})
            Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_011', 'IsCloseMessageDialog': False})
        }
    } else {
        Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_002', 'IsCloseMessageDialog': False})
        Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_011', 'IsCloseMessageDialog': False})
    }
}

void Finish_Npc_SouthernVillage014_Talk() {
    Event3:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthernVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_F_001'})
}

void EntryPoint0() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3464.647705078125, 'Pattern1PosY': 119.55525207519531, 'Pattern1PosZ': 3346.318115234375, 'Pattern1AtX': 3459.2431640625, 'Pattern1AtY': 117.99409484863281, 'Pattern1AtZ': 3345.2216796875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 60.0, 'MotionMode': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 1})
    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_013', 'IsWaitFinish': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_LookAround'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_014', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': 'Act_LookAround'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3454.207275390625, 'Pattern1PosY': 122.3171615600586, 'Pattern1PosZ': 3358.41357421875, 'Pattern1AtX': 3451.770263671875, 'Pattern1AtY': 119.07987213134766, 'Pattern1AtZ': 3352.385498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_PlayerPlace01'}) {
        Event40:
        Npc_SouthernVillage014.Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'AnchorUniqueName': 'I-8_02', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': True})
        Event60:
        Npc_SouthernVillage014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 1, 'ActorName': 'FldObj_SearchStone_A_01'})
        Npc_SouthernVillage014.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Squat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})

        fork {
            DgnObj_RemainsLithograph_A_01[Lithograph_01].Demo_XLinkEventCreate({'SLinkKey': 'RemainsLithogragh', 'IsWaitFinish': True, 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
            DgnObj_RemainsLithograph_A_01[Lithograph_01].Demo_PlayASForDemo({'ASName': 'Demo_Clear', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsIgnoreSame': False, 'MorphingFrame': -1.0})
            DgnObj_RemainsLithograph_A_01[Lithograph_01].Demo_OnWaitRevival({'IsWaitFinish': True})
        } {
            DgnObj_RemainsLithograph_A_01[Lithograph_02].Demo_XLinkEventCreate({'SLinkKey': 'RemainsLithogragh', 'IsWaitFinish': True, 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
            DgnObj_RemainsLithograph_A_01[Lithograph_02].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            DgnObj_RemainsLithograph_A_01[Lithograph_02].Demo_OnWaitRevival({'IsWaitFinish': True})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Npc_SouthernVillage014.Demo_ChangePostureWithAS({'Posture': 'Stand', 'IsWaitFinish': True})
            Npc_SouthernVillage014.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Talk_Surprised', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        } {
            GameROMPlayer.Demo_PlayerTurnInner({'IsWaitFinish': True})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
        EventSystemActor.Demo_FlagON({'FlagName': 'SearchStone_Finish', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_PlayerPlace02'}) {
        Npc_SouthernVillage014.Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'AnchorUniqueName': 'I-8_01', 'IsTurnToAnchorDir': False, 'ASKeyName': 'Run', 'IsAlignmentAnchor': True})
        goto Event60
    } else {
        goto Event40
    }
}

void Finish_Npc_SouthernVillage014_SearchStone_PlayerCHK_Talk() {
    goto Event3
}

void Finish_Npc_SouthernVillage014_SearchStone_PlayerCHK_EachFrame() {
    Event35:
    if EventSystemActor.CheckPlayerState({'PlayerState': 14}) {
        if EventSystemActor.CheckFlag({'FlagName': 'SearchStone_PlayerCHK'}) {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event35
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SearchStone_PlayerCHK'})
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event35
        }
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SearchStone_PlayerCHK'})
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event35
    }
}

void Ready_Npc_SouthernVillage014_Near() {
    Npc_SouthernVillage014.Demo_TalkASync({'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_R_Near_001', 'IsWaitFinish': True})
}

void LookPicture1() {

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'ActorName': 'ActorName', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture1(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture', 'ASName': ''})

    call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void LookPicture2() {

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'ActorName': 'ActorName', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture2(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture', 'IsOverWriteLabelActorName': True, 'ASName': ''})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_016', 'IsWaitFinish': True, 'ASName': ''})

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'ActorName': 'ActorName_000', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture2(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_00', 'IsOverWriteLabelActorName': True, 'ASName': ''})

    call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void LookPicture3() {

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'ActorName': 'ActorName', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture3(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture', 'IsOverWriteLabelActorName': True, 'ASName': ''})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_016', 'IsWaitFinish': True, 'ASName': ''})

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'ActorName': 'ActorName_000', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture3(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_00', 'IsOverWriteLabelActorName': True, 'ASName': ''})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_017', 'IsWaitFinish': True, 'ASName': ''})

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'ActorName': 'ActorName_001', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture3(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_01', 'IsOverWriteLabelActorName': True, 'ASName': ''})

    call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void LookPicture3_2() {

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'ActorName'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture3_2(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_00', 'IsOverWriteLabelActorName': True, 'ASName': ''})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    Npc_SouthernVillage014.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SearchStone:Npc_SouthernVillage014_S1_017', 'IsWaitFinish': True, 'ASName': ''})

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'ActorName_000'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture3_2(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_01', 'IsOverWriteLabelActorName': True, 'ASName': ''})

    call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void LookPicture3_3() {

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'ActorName'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture3_3(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_01', 'IsOverWriteLabelActorName': True, 'ASName': ''})

    call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void LookPicture2_2() {

    call Common.ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'ActorName'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_SouthernVillage014[LookPicture2_2(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:LookPicture_00', 'IsOverWriteLabelActorName': True, 'ASName': ''})

    call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

}
