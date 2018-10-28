-------- EventFlow: Npc_Assassin_007 --------

Actor: Npc_Assassin_007
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2']
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

Actor: Npc_Assassin_007[Talk(Self)]
entrypoint: Talk(Self)
actions: ['Demo_ChangePostureWithAS', 'Demo_Talk']
queries: []
params: None

Actor: Npc_Assassin_007[FirstEncounter(Self)]
entrypoint: FirstEncounter(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Talk() {
    Npc_Assassin_007[Talk(Self)].Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_007'}) {
        Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk07'})
    } else {
        Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk00'})
    }
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_007'}) {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        } else {
            Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk01', 'IsCloseMessageDialog': True})
        }
        Event16:

        call Demo023_0.BustUp_PlayerHide()

        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo347_1'}) {
            Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk03'})
        } else {
            Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk02'})
        }
        Event2:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Assassin_007'})
    } else {
        Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk04', 'IsCloseMessageDialog': False})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Assassin_FirstEncounter'}) {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

            call Demo023_0.BustUp_PlayerHide()

            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo347_1'}) {
                Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk06'})
            } else {
                Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk05'})
            }
            goto Event2
        } else {
            Npc_Assassin_007[FirstEncounter(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Talk04_1', 'IsCloseMessageDialog': True})
            goto Event16
        }
    }
}

void Near() {

    call Talk({'Self': ActorIdentifier(name="Npc_Assassin_007")})


    call Henshin()

}

void PopUp() {
    Npc_Assassin_007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Near00'})
}

void Henshin() {

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo347_1'}) {
            Npc_Assassin_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Henshin01'})
        } else {
            Npc_Assassin_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Assassin_007:Henshin00'})
        }
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Bgm_AssassinAppear', 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': True, 'IsWaitFinish': False, 'TargetActor1': -1, 'TargetActor2': -1, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 15.0, 'MotionMode': 1, 'Pattern1PosY': -0.10000000149011612, 'Pattern1AtY': -0.20000000298023224, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo023_0', 'EndFade': 0, 'EntryPointName': 'Demo023_7'})
}

void FirstEncounter() {
    goto Event0
}
