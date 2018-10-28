-------- EventFlow: Npc_King_Parasail002 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_AdvanceQuest', 'Demo_AutoSave']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangeEquipState']
queries: ['CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_BustUpFront', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: ListenerCtrlTag
entrypoint: None()
actions: ['Demo_FixPosition']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if Npc_King_Parasail002.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {

        call InitTalk.InitTalkAngleDesignation({'Arg_Greeting': 'FollowAISchedule', 'Arg_Angle': -160.0})

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Parasail002_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Common_Anataha'}) {
            if Npc_King_Parasail002.IsOnInstEventFlag() {
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk06', 'ASName': 'Point'})
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:GoodBye01'})
            } else {
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': 'Point', 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk04'})
                Event206:
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:GoodBye00', 'IsCloseMessageDialog': True})
            }
        } else {
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk05', 'ASName': 'Point'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Common_Anataha', 'IsWaitFinish': True})
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Anataha00'})
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk06'})
            } else {
                goto Event206
            }
        }
    } else
    if Npc_King_Parasail002.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk01', 'ASName': 'Point'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Demo027_2_5', 'DemoName': 'Demo027_2', 'EndFade': 0})
        Npc_King_Parasail002.Demo_BecomeSpeaker({'IsWaitFinish': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk03', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Parasail002_Talk', 'IsWaitFinish': True})
        goto Event206
    } else {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk00'})
    }
}

void Near() {
    Npc_King_Parasail002.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}

void Appear() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Parasail002_Disappear2'})
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'StopWithFade'})

    call Npc_King_Common.InitParasail()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Parasail002_Appear'})
    Npc_King_Parasail002.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo027_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo027_2', 'EndFade': 0})
    Npc_King_Parasail002.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_King_Parasail002.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})

    call InitTalk.InitTalkOnEventParasail002({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_King_Parasail002")})

    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_King_Parasail002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_CallDemo({'EntryPointName': 'Demo027_2_0', 'IsWaitFinish': True, 'DemoName': 'Demo027_2', 'EndFade': 0})
    Npc_King_Parasail002.Demo_BecomeSpeaker({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
    Npc_King_Parasail002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        GameRomCamera.Demo_BustUpFront({'StartCalcOnly': True, 'UseImaginaryLineAngle': True, 'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': True, 'Lng': 20.0, 'Lat': 5.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224]})
        Npc_King_Parasail002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear04', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        Event173:
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear08', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear09', 'IsCloseMessageDialog': True})
        } else {
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear10', 'IsCloseMessageDialog': True})
        }
        Npc_King_Parasail002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-254.0, 443.0, -1061.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

        fork {
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear11', 'ASName': 'Point', 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'TurnPosition': [-254.0, 443.0, -1061.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [-254.0, 443.0, -561.0], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Demo027_2_1', 'DemoName': 'Demo027_2', 'EndFade': 0})
        Npc_King_Parasail002.Demo_BecomeSpeaker({'IsWaitFinish': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        Npc_King_Parasail002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

        fork {
            GameRomCamera.Demo_BustUpFront({'StartCalcOnly': True, 'UseImaginaryLineAngle': True, 'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': True, 'Lat': 5.0, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224]})
        } {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_King_Parasail002', 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        }

        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear13', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkYes', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear14', 'IsCloseMessageDialog': True})
            Event261:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            ListenerCtrlTag.Demo_FixPosition({'FixType': 'Fix', 'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Demo027_2_4', 'DemoName': 'Demo027_2', 'EndFade': 0})
            Npc_King_Parasail002.Demo_BecomeSpeaker({'IsWaitFinish': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear18'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear19'})
            } else {
                Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear20'})
            }
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear21'})

            call CommonFlagON()

            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'FindDungeon', 'ForceRunTelop': True, 'StepName': '1stClear'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})

            call OperationGuide.Guide_Quest()

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear22'})
            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
        } else {
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear15', 'IsCloseMessageDialog': True})
            goto Event261
        }
    } else {
        GameRomCamera.Demo_BustUpFront({'StartCalcOnly': True, 'UseImaginaryLineAngle': True, 'IsWaitFinish': True, 'Count': 0.0, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': True, 'Lat': 5.0, 'Lng': 20.0, 'Offset': [0.0, -0.10000000149011612, 0.20000000298023224]})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        Npc_King_Parasail002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear05', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear06', 'IsCloseMessageDialog': True, 'ASName': 'Point'})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear07', 'IsCloseMessageDialog': False})
        }

        goto Event173
    }
}

void CommonFlagON() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'King_Vagrant_FirstTalk'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Common_Kokoha', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_King_Vagrant001_ChoiceExclude', 'IsWaitFinish': True})
}
