-------- EventFlow: Npc_Assassin_009 --------

Actor: Npc_Assassin_009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePostureWithAS', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo']
queries: ['CheckFlag', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_009'}) {
        Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk05', 'IsCloseMessageDialog': True})
    } else {
        Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk00', 'IsCloseMessageDialog': True})
    }
    if !EventSystemActor.GeneralChoice2() {
        Npc_Assassin_009.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Assassin_009.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        Npc_Assassin_009.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        if !EventSystemActor.RandomChoice2() {
            Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk06'})

            call Demo023_0.BustUp_PlayerHide()

            Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk07'})
            Event2:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_009'})

            call Henshin()

        } else {
            Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk01', 'IsCloseMessageDialog': True})

            call Demo023_0.BustUp_PlayerHide()

            Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk02'})
            goto Event2
        }
    } else {
        Npc_Assassin_009.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Assassin_009.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        Npc_Assassin_009.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk03', 'IsCloseMessageDialog': True})

        call Demo023_0.BustUp_PlayerHide()

        Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Talk04'})
        goto Event2
    }
}

void Near() {

    call Npc_Assassin_007.FirstEncounter({'Self': ActorIdentifier(name="Npc_Assassin_009")})


    call Henshin()

}

void PopUp() {
    Npc_Assassin_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Near00'})
}

void Henshin() {

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_FirstEncounter'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo347_1'}) {
                Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Henshin01'})
            } else {
                Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Assassin_009:Henshin00'})
            }
        } else {
            Npc_Assassin_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Henshin00'})
        }
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Bgm_AssassinAppear', 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': True, 'IsWaitFinish': False, 'TargetActor1': -1, 'TargetActor2': -1, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 15.0, 'MotionMode': 1, 'Pattern1PosY': -0.10000000149011612, 'Pattern1AtY': -0.20000000298023224, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo023_0', 'EndFade': 0, 'EntryPointName': 'Demo023_9'})
}
