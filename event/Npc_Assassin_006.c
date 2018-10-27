-------- EventFlow: Npc_Assassin_006 --------

Actor: Npc_Assassin_006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice4']
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

    Event1:
    Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Talk00'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Talk01', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_006_Choice0'})
        Event23:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        goto Event1
      case 1:
        Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Talk02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_006_Choice1'})
        goto Event23
      case 2:
        Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Talk03'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_006_Choice2'})
        goto Event23
      case 3:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_Assassin_006.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Assassin_006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})

        call Demo023_0.BustUp_PlayerHide()

        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_006'}) {
            Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Talk05', 'IsCloseMessageDialog': False})
            Event8:

            call Henshin()

        } else {
            Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Talk04', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_006'})
            goto Event8
        }
    }
}

void Near() {

    call Npc_Assassin_007.FirstEncounter({'Self': ActorIdentifier(name="Npc_Assassin_006")})


    call Henshin()

}

void PopUp() {
    Npc_Assassin_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Near00'})
}

void Henshin() {

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_FirstEncounter'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo347_1'}) {
                Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_DemoAssasin', 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Henshin01'})
            } else {
                Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_DemoAssasin', 'MessageId': 'EventFlowMsg/Npc_Assassin_006:Henshin00'})
            }
        } else {
            Npc_Assassin_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_DemoAssasin', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Henshin00'})
        }
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Bgm_AssassinAppear', 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': True, 'IsWaitFinish': False, 'TargetActor1': -1, 'TargetActor2': -1, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 15.0, 'MotionMode': 1, 'Pattern1PosY': -0.10000000149011612, 'Pattern1AtY': -0.20000000298023224, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo023_0', 'EndFade': 0, 'EntryPointName': 'Demo023_6'})
}
