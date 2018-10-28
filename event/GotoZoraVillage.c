-------- EventFlow: GotoZoraVillage --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAhead', 'Demo_PlayerHorseGetOff', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora013[PrinceGuide]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkToPlayer', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora025[PrinceGuide]
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora001[PrinceGuide]
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Lanayru003[PrinceGuide]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_StartTurnToPlayer']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora028[PrinceGuide]
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora029[PrinceGuide]
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince02]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_WarpToAnchor', 'Demo_LookAtTheFront', 'Demo_WarpToScheduleAnchor', 'Demo_MoveToRailPoint', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[FirstPrince]
entrypoint: None()
actions: ['Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora036[PrinceGuide]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkToPlayer']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[player_wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[prince_wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[another_system]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoCamera]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CameraWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora009
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora015
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora008
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_ZoraB001_Near() {
    Npc_ZoraB001[FirstPrince].Demo_TalkASync({'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
}

void ZoraArrival() {
    if !EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Step1'}) {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }

        fork {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 155.0, 'DestinationY': 242.68255615234375, 'DestinationX': 3277.64990234375, 'DestinationZ': -416.54998779296875})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsIgnoreSame': True, 'NoErrorCheck': True})
        } {
            Npc_ZoraB001[Prince02].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 3291.080078125, 'DestinationZ': -446.5199890136719, 'DirectionY': -25.0, 'DestinationY': 244.86000061035156})
            Npc_ZoraB001[Prince02].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': 0, 'ASName': 'Wait', 'MorphingFrame': -1.0})
        }


        call ZoraVillageIntro()


        fork {

            fork {
                Npc_ZoraB001[Prince02].Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'PrinceRunPoint', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                Npc_ZoraB001[Prince02].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_001', 'IsWaitFinish': True, 'ASName': 'Talk_Prince_Surprise', 'IsCloseMessageDialog': True})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                call camera_PrinceM_0()

            }

        } {
            EventSystemActor[player_wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince02', 'FaceId': 2})
        }


        call SeyHello()

        Event693:

        fork {
            Npc_ZoraB001[Prince02].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_002', 'ASName': 'Talk_Prince_Special', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
            Npc_ZoraB001[Prince02].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_ZoraB001[Prince02].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
        } {

            call camera_ShiningTooth()

        }


        fork {

            call camera_PrinceM_Fix()

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        } {
            Npc_ZoraB001[Prince02].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_003', 'ASName': 'Talk_Prince_Joy'})
        }


        call camera_A1_City_A()

        Npc_ZoraB001[Prince02].Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
        Npc_ZoraB001[Prince02].Demo_MoveToAnchor({'IsWaitFinish': False, 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'PrinceStairUp', 'IsTurnToAnchorDir': False, 'ASKeyName': 'Walk', 'IsAlignmentAnchor': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer01'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer03'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer04'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GotoZoraVillage_Step1'})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    }
}

void Ready_Npc_Zora013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_RiverFirst'}) {
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_004', 'IsCloseMessageDialog': True})
        Npc_Zora013[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2257.0, 120.0, -109.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'FaceId': 2, 'IsValid': True})

        fork {

            call camera_point_retoogan()

        } {
            Npc_Zora013[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'TurnPosition': [2257.0, 120.0, -109.0], 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_005', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
        }

    } else {
        Event513:
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora013_RiverFirst', 'IsWaitFinish': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_Call'}) {
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_001', 'ASName': '', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_011'})
        }
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_008'})
        } else {
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_007'})
        }
        Npc_Zora013[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2257.0, 120.0, -109.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'IsValid': True, 'FaceId': 2})

        fork {

            call camera_point_retoogan()

        } {
            Npc_Zora013[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'TurnPosition': [2257.0, 120.0, -109.0], 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_002', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
            Npc_Zora013[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'TurnPosition': [0.0, 0.0, 0.0]})
            GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'ObjectId': 0, 'ActorName': 'Npc_Zora013', 'UniqueName': 'PrinceGuide', 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
        Npc_Zora013[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_003', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'ASName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_ZoraXXX_end()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet03'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_Call'})
    }
}

void Ready_Npc_Zora025_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event764:
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora025_Call'})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_RiverFirst'}) {
        Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_004', 'IsCloseMessageDialog': True})
        Npc_Zora025[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'TurnPosition': [2056.0, 120.0, -195.0], 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora025[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_point_toon()

        GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [2056.0, 120.0, -195.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_006', 'ASName': 'Point'})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora025_RiverFirst'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_001'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_002', 'IsCloseMessageDialog': True})
        } else {
            Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_003', 'IsCloseMessageDialog': True})
        }
        Npc_Zora025[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'TurnPosition': [2056.0, 120.0, -195.0], 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'FaceId': 1})

        fork {

            call camera_point_toon()

        } {
            Npc_Zora025[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [2056.0, 120.0, -195.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_007', 'ASName': 'Point'})
            Npc_Zora025[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'FaceId': 1})
            GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'ObjectId': 0, 'UniqueName': 'PrinceGuide', 'IsValid': True, 'ActorName': 'Npc_Zora025', 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
        Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_008', 'ASName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_ZoraXXX_end()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet01'})
    }
}

void Ready_Npc_Zora001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event856:
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora001_Call'})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_RiverFirst'}) {
        Npc_Zora001[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_002', 'IsCloseMessageDialog': True})
        Event533:
        Npc_Zora001[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 1, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 2, 'TurnPosition': [2133.0, 120.0, -212.0], 'TurnDirection': 0.0})

        fork {
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [2133.0, 120.0, -212.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Zora001[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            Npc_Zora001[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_003', 'ASName': 'Point', 'IsCloseMessageDialog': True})
            Npc_Zora001[PrinceGuide].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsWaitFinish': True, 'FaceId': 2})
        } {

            call camera_point_takka()

        }

        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
        GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora001', 'UniqueName': 'PrinceGuide', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
        Npc_Zora001[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_004', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_ZoraXXX_end()

    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora001_RiverFirst'})
        Npc_Zora001[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_001', 'IsCloseMessageDialog': True})

        fork {
            Npc_Zora001[PrinceGuide].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_008', 'ASName': '', 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        }

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet02'})
        goto Event533
    }
}

void Ready_Npc_Lanayru003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_RiverFirst'}) {
        Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_010'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_011'})
        } else {
            Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_012'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Lanayru003_RiverFirst'})
        Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_001'})
        Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_003'})
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet02'}) {
            Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_005'})
            if !EventSystemActor.GeneralChoice2() {
                Event545:
                Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_006'})
                if !EventSystemActor.GeneralChoice2() {
                    Event552:
                    Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_004'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet06'})
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_LieFirst'}) {
                    Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_008'})
                } else {
                    Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_007'})
                }
                Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_009'})
                goto Event552
            } else {
                Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_007'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Lanayru003_LieFirst', 'IsWaitFinish': True})
                goto Event545
            }
        } else {
            Npc_Lanayru003[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_002'})
            goto Event552
        }
    }
}

void Ready_Npc_Zora028_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora028_RiverFirst'}) {
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_002', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora028[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2248.0, 120.0, -102.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [2248.0, 120.0, -102.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

            fork {

                call camera_point_rutoa()

            } {
                Npc_Zora028[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_004', 'ASName': 'Point', 'IsCloseMessageDialog': True})
                Npc_Zora028[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [2248.0, 120.0, -102.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'ObjectId': 0, 'UniqueName': 'PrinceGuide', 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora028', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }

            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
            Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_009'})
        } else {
            Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_006'})
        }
    } else {
        Event527:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora028_RiverFirst'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora028_FallNear'}) {
            Npc_Zora028[PrinceGuide].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_007', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        }
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_001', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': ''})
        Npc_Zora028[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2248.0, 120.0, -102.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

        fork {

            call camera_point_rutoa()

        } {
            Npc_Zora028[PrinceGuide].Demo_PlayASForDemo({'ASName': 'Point', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [2248.0, 120.0, -102.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_003', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
            Npc_Zora028[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [2248.0, 120.0, -102.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'ObjectId': 0, 'UniqueName': 'PrinceGuide', 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora028', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet04'})
        Npc_Zora028[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_005', 'ASName': '', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_ZoraXXX_end()

    }
}

void Ready_Npc_Zora029_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora029_RiverFirst'}) {
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_002', 'IsCloseMessageDialog': True})
        Npc_Zora029[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_007', 'ASName': ''})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_008', 'ASName': '', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2261.850830078125, 'Pattern1PosY': 320.6634826660156, 'Pattern1PosZ': -114.64915466308594, 'Pattern1AtX': 2263.713623046875, 'Pattern1AtY': 315.4571228027344, 'Pattern1AtZ': -118.5822982788086, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'MotionMode': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Zora029[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2331.0, 120.0, -267.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_004', 'ASName': 'Act_Call_Hello'})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora029_RiverFirst'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_001', 'IsCloseMessageDialog': False})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_005'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2261.850830078125, 'Pattern1PosY': 320.6634826660156, 'Pattern1PosZ': -114.64915466308594, 'Pattern1AtX': 2263.713623046875, 'Pattern1AtY': 315.4571228027344, 'Pattern1AtZ': -118.5822982788086, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'MotionMode': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Zora029[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2331.0, 120.0, -267.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'IsValid': False, 'FaceId': 0})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_003', 'ASName': 'Act_Call_Hello', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 15.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Npc_Zora029[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_006', 'ASName': ''})
        Npc_Zora029[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_007', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet05'})
    }
}

void Ready_Npc_Zora025_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_RiverFirst'}) {
        Npc_Zora025[PrinceGuide].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_Near', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Ready_Npc_Zora013_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_RiverFirst'}) {
        Npc_Zora013[PrinceGuide].Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_Near', 'ASKeyName': ''})
    }
}

void Ready_Npc_Zora001_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_RiverFirst'}) {
        Npc_Zora001[PrinceGuide].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_Near01'})
    }
}

void Ready_Npc_Lanayru003_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Lanayru003_RiverFirst'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Npc_Lanayru003[PrinceGuide].Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 360.0})
        Npc_Lanayru003[PrinceGuide].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Lanayru003_R_Near', 'IsChecked': False, 'DispFrame': 30})
    }
}

void Ready_Npc_Zora028_Near() {
    Npc_Zora028[PrinceGuide].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_Near', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_Zora029_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora029_RiverFirst'}) {
        Npc_Zora029[PrinceGuide].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_Near01'})
    } else {
        Npc_Zora029[PrinceGuide].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora029_R_Near00'})
    }
}

void ZoraArrival2() {
    if !EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Step1'}) {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }

        fork {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 155.0, 'DestinationX': 3284.739990234375, 'DestinationZ': -432.19000244140625, 'DestinationY': 244.66000366210938})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsIgnoreSame': False})
        } {
            Npc_ZoraB001[Prince02].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -25.0, 'DestinationY': 244.86000061035156, 'DestinationX': 3293.81005859375, 'DestinationZ': -452.3699951171875})
            Npc_ZoraB001[Prince02].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': 0, 'ASName': 'Wait', 'MorphingFrame': -1.0})
        }


        call ZoraVillageIntro()


        fork {

            fork {
                Npc_ZoraB001[Prince02].Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Run', 'AnchorUniqueName': 'PrinceRunPoint2', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                Npc_ZoraB001[Prince02].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_001', 'IsWaitFinish': True, 'ASName': 'Talk_Prince_Surprise', 'IsCloseMessageDialog': True})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

                call camera_A2_L_to_P()

            }

        } {
            EventSystemActor[player_wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsIgnoreSame': True, 'NoErrorCheck': True, 'IsWaitFinish': False})
        }

        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 155.0, 'DestinationX': 3284.739990234375, 'DestinationZ': -432.19000244140625, 'DestinationY': 244.66000366210938})

        call SeyHello()

        goto Event693
    }
}

void ZoraArrival3() {
    if !EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Step1'}) {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }

        fork {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 244.668701171875, 'DirectionY': 9.0, 'IsWaitFinish': True, 'DestinationX': 3292.0, 'DestinationZ': -448.1000061035156})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsIgnoreSame': True, 'NoErrorCheck': True})
        } {
            Npc_ZoraB001[Prince02].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
        }


        fork {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince02', 'PosOffset': [0.0, 0.0, 0.0]})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Talk', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor[player_wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        } {
            EventSystemActor[prince_wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_ZoraB001[Prince02].Demo_LookAtObject({'ActorName': '', 'IsWaitFinish': True, 'IsValid': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 3, 'FaceId': 2, 'TurnDirection': 340.0})
            EventSystemActor[prince_wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_ZoraB001[Prince02].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'FaceId': 2})
            Npc_ZoraB001[Prince02].Demo_Talk({'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_004', 'ASName': 'Talk_Surprised', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})

            call camera_A3_S_closeup()

            Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})

            call camera_A3_S_shoulder_L()

        }

        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHello', 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

        call camera_A3_S_L_2shot()

        Npc_ZoraB001[Prince02].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_005', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False})

        fork {
            Npc_ZoraB001[Prince02].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_002', 'ASName': 'Talk_Prince_Special', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
            Npc_ZoraB001[Prince02].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_ZoraB001[Prince02].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
        } {

            call camera_ShiningTooth()

        }


        fork {
            Npc_ZoraB001[Prince02].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_F_003', 'ASName': 'Talk_Prince_Joy'})
            Npc_ZoraB001[Prince02].Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
        } {

            call camera_A3_S_L_2shot()

            EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})

            call camera_A3_S_shoulder_L()

        }


        fork {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 157.0, 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince02'})
            Npc_ZoraB001[Prince02].Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'PrinceGoBack', 'IsTurnToAnchorDir': False, 'ASKeyName': 'Run', 'IsWaitFinish': True, 'IsAlignmentAnchor': False})
            Npc_ZoraB001[Prince02].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'UniqueName': 'Run'})
            Npc_ZoraB001[Prince02].Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'PrinceStairUp', 'IsTurnToAnchorDir': False, 'IsWaitFinish': False, 'ASKeyName': 'Run', 'IsAlignmentAnchor': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            call camera_A3_city()

            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 157.0, 'IsUseSlowTurn': False, 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince02', 'IsWaitFinish': False, 'IsTurnToLookAtPos': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        }

        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'TargetActor1': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1PosX': -1.5410159826278687, 'Pattern1PosY': 1.6899869441986084, 'Pattern1PosZ': -4.974853992462158, 'Pattern1AtY': 1.8000030517578125, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer01'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer03'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer04'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GotoZoraVillage_Step1'})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    }
}

void ZoraVillageIntro() {
    Npc_Zora008.Demo_Join({'IsWaitFinish': True})
    Npc_Zora015.Demo_Join({'IsWaitFinish': True})
    Npc_Zora009.Demo_Join({'IsWaitFinish': True})

    fork {
        Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } {

        call camera_IntroA()

    }


    call camera_IntroB()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})

    call camera_IntroC()

    Npc_ZoraB001[Prince02].Demo_TurnAndLookToObjectNow({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': False, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Ready_Npc_Zora036_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_RiverFirst'}) {
        Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_006'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2246.827392578125, 'Pattern1PosY': 151.48475646972656, 'Pattern1PosZ': -294.2436828613281, 'Pattern1AtX': 2252.93310546875, 'Pattern1AtY': 149.3976593017578, 'Pattern1AtZ': -292.3531494140625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Zora036[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2331.0, 120.0, -267.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_007', 'ASName': 'Point'})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora036_RiverFirst'})
        Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_001'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_002'})
        } else {
            Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_003'})
        }
        Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_004', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2246.827392578125, 'Pattern1PosY': 151.48475646972656, 'Pattern1PosZ': -294.2436828613281, 'Pattern1AtX': 2252.93310546875, 'Pattern1AtY': 149.3976593017578, 'Pattern1AtZ': -292.3531494140625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Zora036[PrinceGuide].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'TurnPosition': [2331.0, 120.0, -267.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Zora036[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_005', 'ASName': 'Point'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMeet07'})
    }
}

void Ready_Npc_Zora036_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_RiverFirst'}) {
        Npc_Zora036[PrinceGuide].Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora036_R_Near', 'ASKeyName': 'Act_Call_Hello'})
    }
}

void GyokuzaArrive() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GotoZoraVillage_Finish'})
}

void Ready_Npc_Zora028_Call() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora028_FallNear'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora028_Call'})
    } else {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora028_Call'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora028_Call'})
            Npc_Zora028[PrinceGuide].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0})
            Npc_Zora028[PrinceGuide].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_007', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            if EventSystemActor.CheckPlayerRideHorse() {
                GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora028', 'UniqueName': 'PrinceGuide', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                Event1010:

                fork {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
                }

                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora028', 'UniqueName': 'PrinceGuide', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})

                fork {
                    Npc_Zora028[PrinceGuide].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora028_R_008', 'IsWaitFinish': True, 'ASName': 'Act_Swim_Hello'})
                } {
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.8844149112701416, 'Pattern1PosZ': -2.335114002227783, 'Pattern1AtY': 0.6333919763565063, 'Pattern1AtZ': 4.578979015350342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'Cushion': 5.0, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                }

                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora028', 'UniqueName': 'PrinceGuide'})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

                call camera_talk_rutoa()

                goto Event527
            } else {
                goto Event1010
            }
        }
    }
}

void Ready_Npc_Zora013_Call() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_Call'}) {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Npc_Zora013[PrinceGuide].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsWaitFinish': True, 'FaceId': 2})
        Npc_Zora013[PrinceGuide].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_009', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -2})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        }

        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'PrinceGuide', 'ActorName': 'Npc_Zora013', 'IsWaitFinish': True, 'IsTurnToLookAtPos': False, 'IsUseSlowTurn': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

        fork {
            Npc_Zora013[PrinceGuide].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'ASName': 'Act_Swim_Hello', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora013_R_010'})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.8844149112701416, 'Pattern1PosZ': -2.335114002227783, 'Pattern1AtY': 0.6333919763565063, 'Pattern1AtZ': 4.578979015350342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'Cushion': 5.0, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 3.7462689876556396, 'Pattern1PosZ': 11.37017822265625, 'Pattern1Fovy': 35.009666442871094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora013', 'UniqueName1': 'PrinceGuide', 'Count': 45.0, 'Cushion': 5.0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'IsWaitFinish': True, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_Call'})

        fork {
            EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 1521.5999755859375, 'DestinationY': 115.9000015258789, 'DestinationZ': -277.70001220703125, 'DirectionY': 0.0, 'IsWaitFinish': True})
            GameROMPlayer.Demo_TurnAndLookToObjectNow({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'PrinceGuide', 'ActorName': 'Npc_Zora013', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            Npc_Zora013[PrinceGuide].Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsWaitFinish': True})
        } {

            call camera_pan_retoogan()

        }


        call camera_talk_retoogan()

        goto Event513
    }
}

void Ready_Npc_Zora025_Call() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora025_Pos1'})
    Event763:
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_Call'}) {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Npc_Zora025[PrinceGuide].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2})
        Npc_Zora025[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_010'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'PrinceGuide', 'IsUseSlowTurn': False, 'ActorName': 'Npc_Zora025', 'IsWaitFinish': True, 'IsTurnToLookAtPos': False})
            Event996:

            fork {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -2})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            }

            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'PrinceGuide', 'IsWaitFinish': True, 'IsTurnToLookAtPos': False, 'IsUseSlowTurn': True, 'ActorName': 'Npc_Zora025'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

            fork {
                Npc_Zora025[PrinceGuide].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'ASName': 'Act_Swim_Hello', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora025_R_011'})
            } {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.8844149112701416, 'Pattern1PosZ': -2.335114002227783, 'Pattern1AtY': 0.6333919763565063, 'Pattern1AtZ': 4.578979015350342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'Cushion': 5.0, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            fork {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_Pos1'}) {
                    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 2002.0, 'DestinationY': 116.36000061035156, 'DestinationZ': 18.549999237060547, 'IsWaitFinish': True, 'DirectionY': 0.0})
                    Event774:
                    GameROMPlayer.Demo_TurnAndLookToObjectNow({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'PrinceGuide', 'ActorName': 'Npc_Zora025', 'IsWaitFinish': True})
                    Npc_Zora025[PrinceGuide].Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2})
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_Pos2'}) {
                    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationZ': 1.2000000476837158, 'DestinationY': 115.0, 'DestinationX': 1999.0999755859375, 'IsWaitFinish': True, 'DirectionY': 0.0})
                    goto Event774
                }
            } {

                call camera_pan_toon()

            }


            call camera_talk_toon()

            goto Event764
        } else {
            goto Event996
        }
    }
}

void Ready_Npc_Zora001_Call() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora001_Pos1'})
    Event780:
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_Call'}) {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Npc_Zora001[PrinceGuide].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2})
        Npc_Zora001[PrinceGuide].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_005'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora001', 'UniqueName': 'PrinceGuide', 'ObjectId': 0, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsTurnToLookAtPos': False})
            Event845:

            fork {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            }

            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora001', 'UniqueName': 'PrinceGuide', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

            fork {
                Npc_Zora001[PrinceGuide].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'ASName': 'Act_Swim_Hello', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_006'})
            } {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 5.757584095001221, 'Pattern1PosZ': -1.1954350471496582, 'Pattern1AtY': 1.540153980255127, 'Pattern1AtZ': 4.72711181640625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Cushion': 5.0, 'Count': 30.0, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_Pos1'}) {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1975.7232666015625, 'Pattern1PosY': 122.52574157714844, 'Pattern1PosZ': -154.3477325439453, 'Pattern1AtX': 1978.418701171875, 'Pattern1AtY': 123.57830810546875, 'Pattern1AtZ': -154.00326538085938, 'Pattern1Fovy': 41.39957809448242, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationY': 119.30000305175781, 'DestinationX': 1992.5999755859375, 'DestinationZ': -145.0})
                GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora001', 'UniqueName': 'PrinceGuide', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
                Npc_Zora001[PrinceGuide].Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.026123046875, 'Pattern1PosY': 2.405890941619873, 'Pattern1PosZ': -2.799683094024658, 'Pattern1AtX': -0.9456790089607239, 'Pattern1AtY': 2.580193042755127, 'Pattern1AtZ': -0.09899900108575821, 'Pattern1Fovy': 41.39957809448242, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora001', 'UniqueName1': 'PrinceGuide', 'Count': 150.0, 'Cushion': 5.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True})
                Event792:

                fork {
                    Npc_Zora001[PrinceGuide].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'ASName': 'Act_Swim_Hello', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_Zora001_R_007', 'IsCloseMessageDialog': False})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                }


                call camera_talk_takka()

                goto Event856
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_Pos2'}) {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1976.9571533203125, 'Pattern1PosY': 122.23575592041016, 'Pattern1PosZ': -152.275146484375, 'Pattern1AtX': 1982.0576171875, 'Pattern1AtY': 124.49302673339844, 'Pattern1AtZ': -152.60101318359375, 'Pattern1Fovy': 32.309722900390625, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': 1997.0999755859375, 'DestinationY': 121.69999694824219, 'DestinationZ': -172.6999969482422})
                GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora001', 'UniqueName': 'PrinceGuide', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
                Npc_Zora001[PrinceGuide].Demo_TurnAndLookToObjectNow({'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.858886957168579, 'Pattern1PosY': 2.1738970279693604, 'Pattern1PosZ': -2.763305902481079, 'Pattern1AtX': -0.0837400034070015, 'Pattern1AtY': 2.6823039054870605, 'Pattern1AtZ': 2.450316905975342, 'Pattern1Fovy': 32.309722900390625, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora001', 'UniqueName1': 'PrinceGuide', 'ReviseModeEnd': 0, 'Count': 150.0, 'Cushion': 5.0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'CollisionInterpolateSkip': False})
                goto Event792
            }
        } else {
            goto Event845
        }
    }
}

void Ready_Npc_Zora025_Call2() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora025_Pos2'})
    goto Event763
}

void Ready_Npc_Zora001_Call2() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora001_Pos2'})
    goto Event780
}

void camera_ShiningTooth() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6596680283546448, 'Pattern1PosY': 1.9256130456924438, 'Pattern1PosZ': 2.982909917831421, 'Pattern1AtX': -0.5141599774360657, 'Pattern1AtY': 2.657470941543579, 'Pattern1AtZ': -0.7043460011482239, 'Pattern1Fovy': 37.99999237060547, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_ZoraB001', 'UniqueName1': 'Prince02', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    EventSystemActor[DemoCamera].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.4501950144767761, 'Pattern1PosY': 1.9256130456924438, 'Pattern1PosZ': 2.225464105606079, 'Pattern1AtX': -0.7880859971046448, 'Pattern1AtY': 3.3281099796295166, 'Pattern1AtZ': -1.6721190214157104, 'Pattern1Fovy': 37.99999237060547, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_ZoraB001', 'UniqueName1': 'Prince02', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'Cushion': 5.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_PrinceM_0() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.517822027206421, 'Pattern1PosY': 2.3978118896484375, 'Pattern1PosZ': -3.552855968475342, 'Pattern1AtX': 1.4663089513778687, 'Pattern1AtY': 1.6843260526657104, 'Pattern1AtZ': -0.0499269999563694, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor[DemoCamera].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.46875, 'Pattern1PosY': 2.8907620906829834, 'Pattern1PosZ': 9.1275634765625, 'Pattern1AtX': -0.07324200123548508, 'Pattern1AtY': 4.373383045196533, 'Pattern1AtZ': 12.335938453674316, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_IntroA() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3279.980224609375, 'Pattern1PosY': 250.70208740234375, 'Pattern1PosZ': -460.2989807128906, 'Pattern1AtX': 3283.20068359375, 'Pattern1AtY': 253.3732147216797, 'Pattern1AtZ': -463.355224609375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3277.061767578125, 'Pattern1PosY': 250.70208740234375, 'Pattern1PosZ': -455.3968505859375, 'Pattern1AtX': 3281.062255859375, 'Pattern1AtY': 251.04432678222656, 'Pattern1AtZ': -458.67169189453125, 'Pattern1Fovy': 50.00001907348633, 'Count': 120.0, 'Cushion': 5.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_PrinceM_Fix() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.24731400609016418, 'Pattern1PosY': 1.632262945175171, 'Pattern1PosZ': 3.752319097518921, 'Pattern1AtX': 0.3779299855232239, 'Pattern1AtY': 2.634826898574829, 'Pattern1AtZ': -1.298095941543579, 'Pattern1Fovy': 35.5496826171875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_ZoraB001', 'UniqueName1': 'Prince02', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_Shoulder_S() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.3249510526657104, 'Pattern1PosY': 3.7629849910736084, 'Pattern1PosZ': -3.714600086212158, 'Pattern1AtX': -0.8496090173721313, 'Pattern1AtY': 2.431122064590454, 'Pattern1AtZ': 0.3706049919128418, 'Pattern1Fovy': 25.739784240722656, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_ZoraB001', 'UniqueName1': 'Prince02', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void SeyHello() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHello', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsIgnoreSame': True, 'NoErrorCheck': True})
    } {

        call camera_Shoulder_S()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    }

}

void camera_A3_S_shoulder_L() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.8759770393371582, 'Pattern1PosY': 4.8364410400390625, 'Pattern1PosZ': 5.799903869628906, 'Pattern1AtX': -0.9245610237121582, 'Pattern1AtY': 0.9844970107078552, 'Pattern1AtZ': 0.6930689811706543, 'Pattern1Fovy': 25.289785385131836, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_A3_S_closeup() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3292.34814453125, 'Pattern1PosY': 246.739990234375, 'Pattern1PosZ': -447.7179260253906, 'Pattern1AtX': 3291.973876953125, 'Pattern1AtY': 247.72413635253906, 'Pattern1AtZ': -445.0716857910156, 'Pattern1Fovy': 24.569805145263672, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
}

void camera_A3_S_L_2shot() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.282227039337158, 'Pattern1PosY': 0.6479640007019043, 'Pattern1PosZ': -3.6509480476379395, 'Pattern1AtX': -0.7424319982528687, 'Pattern1AtY': 1.7108759880065918, 'Pattern1AtZ': 1.9557420015335083, 'Pattern1Fovy': 24.569805145263672, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_A3_city() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3275.612060546875, 'Pattern1PosY': 247.6544189453125, 'Pattern1PosZ': -438.2383117675781, 'Pattern1AtX': 3279.375, 'Pattern1AtY': 248.5675048828125, 'Pattern1AtZ': -442.1010437011719, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'Pattern1Fovy': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3275.612060546875, 'Pattern1PosY': 247.6544189453125, 'Pattern1PosZ': -438.2383117675781, 'Pattern1AtX': 3279.375, 'Pattern1AtY': 248.5675048828125, 'Pattern1AtZ': -442.1010437011719, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'Count': 90.0, 'Cushion': 5.0, 'Pattern1Fovy': 50.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_A1_City_A() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3275.005126953125, 'Pattern1PosY': 244.13729858398438, 'Pattern1PosZ': -413.4525146484375, 'Pattern1AtX': 3277.1591796875, 'Pattern1AtY': 244.5542755126953, 'Pattern1AtZ': -418.1528015136719, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3277.003662109375, 'Pattern1PosY': 250.3619842529297, 'Pattern1PosZ': -421.6083068847656, 'Pattern1AtX': 3279.15185546875, 'Pattern1AtY': 252.05091857910156, 'Pattern1AtZ': -426.0172119140625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_IntroB() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3287.31201171875, 'Pattern1PosY': 245.97366333007812, 'Pattern1PosZ': -486.2298583984375, 'Pattern1AtX': 3292.2734375, 'Pattern1AtY': 246.52894592285156, 'Pattern1AtZ': -487.6119384765625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3296.5146484375, 'Pattern1PosY': 245.04324340820312, 'Pattern1PosZ': -480.4918518066406, 'Pattern1AtX': 3301.2197265625, 'Pattern1AtY': 246.67138671875, 'Pattern1AtZ': -479.064697265625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'Count': 150.0, 'Cushion': 5.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False})
}

void camera_IntroC() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3261.461669921875, 'Pattern1PosY': 250.47479248046875, 'Pattern1PosZ': -413.08013916015625, 'Pattern1AtX': 3265.145751953125, 'Pattern1AtY': 250.01040649414062, 'Pattern1AtZ': -416.6983947753906, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3260.27978515625, 'Pattern1PosY': 250.47479248046875, 'Pattern1PosZ': -410.8744201660156, 'Pattern1AtX': 3264.102294921875, 'Pattern1AtY': 249.5055694580078, 'Pattern1AtZ': -414.24053955078125, 'Pattern1Fovy': 50.00001907348633, 'Count': 120.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Cushion': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_A2_L_to_P() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3282.31591796875, 'Pattern1PosY': 254.1022491455078, 'Pattern1PosZ': -426.39453125, 'Pattern1AtX': 3283.788330078125, 'Pattern1AtY': 253.16307067871094, 'Pattern1AtZ': -429.73046875, 'Pattern1Fovy': 37.99999237060547, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3279.245849609375, 'Pattern1PosY': 250.85459899902344, 'Pattern1PosZ': -419.73541259765625, 'Pattern1AtX': 3280.718017578125, 'Pattern1AtY': 249.91543579101562, 'Pattern1AtZ': -423.07135009765625, 'Pattern1Fovy': 37.99999237060547, 'Count': 150.0, 'Cushion': 5.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
}

void camera_point_retoogan() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 7.805115222930908, 'Pattern1PosY': 3.512665033340454, 'Pattern1PosZ': -7.3486328125, 'Pattern1AtX': -0.16827400028705597, 'Pattern1AtY': 2.662743091583252, 'Pattern1AtZ': 0.6458740234375, 'Pattern1Fovy': 33.000022888183594, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora013', 'UniqueName1': 'PrinceGuide', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1517.9498291015625, 'Pattern1PosY': 119.19784545898438, 'Pattern1PosZ': -300.6784362792969, 'Pattern1AtX': 1529.0269775390625, 'Pattern1AtY': 120.2394790649414, 'Pattern1AtZ': -298.57806396484375, 'Pattern1Fovy': 33.000022888183594, 'ReviseModeEnd': 0, 'Count': 150.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False})
}

void camera_talk_retoogan() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.2639159858226776, 'Pattern1PosY': 2.431243896484375, 'Pattern1PosZ': 2.3507840633392334, 'Pattern1AtX': 0.6510009765625, 'Pattern1AtY': 1.0283050537109375, 'Pattern1AtZ': -2.669616937637329, 'Pattern1Fovy': 35.009666442871094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora013', 'UniqueName1': 'PrinceGuide', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_ZoraXXX_end() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.8460689783096313, 'Pattern1PosY': 2.350066900253296, 'Pattern1PosZ': -5.346770763397217, 'Pattern1AtX': -0.03454599902033806, 'Pattern1AtY': 1.8000030517578125, 'Pattern1AtZ': -0.017364999279379845, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 45.0, 'Cushion': 5.0, 'ReviseModeEnd': 1, 'CollisionInterpolateSkip': False})
}

void camera_pan_retoogan() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1509.040283203125, 'Pattern1PosY': 119.44567108154297, 'Pattern1PosZ': -273.6230163574219, 'Pattern1AtX': 1515.053466796875, 'Pattern1AtY': 121.2154312133789, 'Pattern1AtZ': -274.7065734863281, 'Pattern1Fovy': 40.49958038330078, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1513.20849609375, 'Pattern1PosY': 119.44567108154297, 'Pattern1PosZ': -275.880615234375, 'Pattern1AtX': 1518.339111328125, 'Pattern1AtY': 117.80018615722656, 'Pattern1AtZ': -279.26165771484375, 'Pattern1Fovy': 34.82964324951172, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 120.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void camera_pan_toon() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora025_Pos1'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2004.12353515625, 'Pattern1PosY': 119.13162994384766, 'Pattern1PosZ': 28.272418975830078, 'Pattern1AtX': 2008.124755859375, 'Pattern1AtY': 121.66251373291016, 'Pattern1AtZ': 24.110225677490234, 'Pattern1Fovy': 34.82964324951172, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2002.9974365234375, 'Pattern1PosY': 119.13162994384766, 'Pattern1PosZ': 23.17546272277832, 'Pattern1AtX': 2000.54638671875, 'Pattern1AtY': 116.97288513183594, 'Pattern1AtZ': 17.783708572387695, 'Pattern1Fovy': 34.82964324951172, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 150.0, 'Cushion': 5.0})
        Event1230:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2019.5426025390625, 'Pattern1PosY': 118.59937286376953, 'Pattern1PosZ': -5.1680707931518555, 'Pattern1AtX': 2014.5037841796875, 'Pattern1AtY': 120.40928649902344, 'Pattern1AtZ': -2.8185811042785645, 'Pattern1Fovy': 36.089637756347656, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2015.420654296875, 'Pattern1PosY': 118.59937286376953, 'Pattern1PosZ': -4.311327934265137, 'Pattern1AtX': 2010.1241455078125, 'Pattern1AtY': 117.79914855957031, 'Pattern1AtZ': -1.967818021774292, 'Pattern1Fovy': 36.089637756347656, 'Count': 150.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        goto Event1230
    }
}

void camera_talk_toon() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3097530007362366, 'Pattern1PosY': 1.9887700080871582, 'Pattern1PosZ': 2.205199956893921, 'Pattern1AtX': 1.2450560331344604, 'Pattern1AtY': 0.701117992401123, 'Pattern1AtZ': -4.255736827850342, 'Pattern1Fovy': 34.019657135009766, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora025', 'UniqueName1': 'PrinceGuide', 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_point_toon() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 13.883056640625, 'Pattern1PosY': 5.843764781951904, 'Pattern1PosZ': -2.70477294921875, 'Pattern1AtX': -4.980712890625, 'Pattern1AtY': 0.23513799905776978, 'Pattern1AtZ': 3.30206298828125, 'Pattern1Fovy': 34.019657135009766, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora025', 'UniqueName1': 'PrinceGuide', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
    EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1977.4842529296875, 'Pattern1PosY': 126.72731018066406, 'Pattern1PosZ': 9.748749732971191, 'Pattern1AtX': 1989.3131103515625, 'Pattern1AtY': 127.17300415039062, 'Pattern1AtZ': -7.080842018127441, 'Pattern1Fovy': 34.019657135009766, 'Count': 150.0, 'Cushion': 5.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_talk_takka() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_Pos1'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.2776639461517334, 'Pattern1PosZ': 2.038451910018921, 'Pattern1AtY': 1.8787000179290771, 'Pattern1AtZ': -0.7647709846496582, 'Pattern1Fovy': 39.239646911621094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora001', 'UniqueName1': 'PrinceGuide', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'StartCalcOnly': True, 'Pattern1PosX': -0.33959999680519104, 'Pattern1AtX': 0.3575440049171448})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora001_Pos2'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.2776639461517334, 'Pattern1PosZ': 2.038451910018921, 'Pattern1AtY': 1.8787000179290771, 'Pattern1AtZ': -0.7647709846496582, 'Pattern1Fovy': 39.239646911621094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora001', 'UniqueName1': 'PrinceGuide', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosX': 0.33959999680519104, 'Pattern1AtX': -0.3575440049171448, 'StartCalcOnly': True})
    }
}

void camera_point_takka() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 16.8408203125, 'Pattern1PosY': 8.78060245513916, 'Pattern1PosZ': -15.9259033203125, 'Pattern1AtX': 13.986083984375, 'Pattern1AtY': 7.664185047149658, 'Pattern1AtZ': -11.253662109375, 'Pattern1Fovy': 32.309722900390625, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora001', 'UniqueName1': 'PrinceGuide', 'StartCalcOnly': False, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1961.85009765625, 'Pattern1PosY': 130.580078125, 'Pattern1PosZ': -165.9527587890625, 'Pattern1AtX': 1967.05859375, 'Pattern1AtY': 132.5746612548828, 'Pattern1AtZ': -165.6088409423828, 'Pattern1Fovy': 32.309722900390625, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1961.85009765625, 'Pattern1PosY': 136.16807556152344, 'Pattern1PosZ': -165.9527587890625, 'Pattern1AtX': 1967.3653564453125, 'Pattern1AtY': 135.96913146972656, 'Pattern1AtZ': -166.82864379882812, 'Pattern1Fovy': 32.309722900390625, 'ReviseModeEnd': 0, 'Count': 120.0, 'Cushion': 5.0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
}

void camera_talk_rutoa() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3097530007362366, 'Pattern1PosY': 1.9887700080871582, 'Pattern1PosZ': 2.205199956893921, 'Pattern1AtX': 1.2450560331344604, 'Pattern1AtY': 0.701117992401123, 'Pattern1AtZ': -4.255736827850342, 'Pattern1Fovy': 34.019657135009766, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': 'PrinceGuide', 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'Npc_Zora028', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
}

void camera_point_rutoa() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 6.164307117462158, 'Pattern1PosY': 5.804985046386719, 'Pattern1PosZ': -7.134459972381592, 'Pattern1AtX': 3.403320074081421, 'Pattern1AtY': 3.744658946990967, 'Pattern1AtZ': -2.877868890762329, 'Pattern1Fovy': 34.99998474121094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Zora028', 'UniqueName1': 'PrinceGuide', 'ReviseModeEnd': 0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1702.5872802734375, 'Pattern1PosY': 140.75099182128906, 'Pattern1PosZ': 353.7821350097656, 'Pattern1AtX': 1713.3863525390625, 'Pattern1AtY': 142.05152893066406, 'Pattern1AtZ': 344.8089599609375, 'Pattern1Fovy': 34.99998474121094, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 150.0, 'Cushion': 5.0})
}
