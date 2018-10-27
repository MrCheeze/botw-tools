-------- EventFlow: Animal_Forest --------

Actor: Npc_Musician_014
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_Join']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_014_Near() {
    Npc_Musician_014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Animal_Forest:Npc_Musician_014_Near', 'DispFrame': 90, 'IsChecked': True})
}

void Ready_Npc_Musician_014_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_014.IsOnInstEventFlag() {

        call BloodyMoonRelief.Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_014")})

        Event47:

        call Sing()

        if EventSystemActor.CheckFlag({'FlagName': 'Animal_Forest_Activated'}) {
            Event40:
            if EventSystemActor.CheckFlag({'FlagName': 'Animal_Forest_Act'}) {
                if !EventSystemActor.CheckFlag({'FlagName': 'Animal_Forest_Finish'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Animal_Forest_Finish'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

                    call BloodyMoonRelief.Musician_Check()

                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Animal_Forest_Activated'})
            goto Event40
        }
    } else {
        Npc_Musician_014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Animal_Forest:Text005'})

        call BloodyMoonRelief.Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_014")})

        goto Event47
    }
}

void Finish_Npc_Musician_014_Near() {
    Npc_Musician_014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Animal_Forest:Npc_Musician_014_Near', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_Npc_Musician_014_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call BloodyMoonRelief.Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_014")})


    call Sing()

}

void EntryPoint0() {
    Npc_Musician_014.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2590.56201171875, 'Pattern1PosY': 234.5747833251953, 'Pattern1PosZ': 460.92633056640625, 'Pattern1AtX': 2591.778564453125, 'Pattern1AtY': 233.03076171875, 'Pattern1AtZ': 456.82720947265625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})

    call Common.RemainsLithograph()

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Animal_Forest_Act'})
    if EventSystemActor.CheckFlag({'FlagName': 'Animal_Forest_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Animal_Forest_Finish'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call BloodyMoonRelief.Musician_Check()

    }
}

void After_Animal_Forest_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Musician_014.Demo_Talk({'MessageId': 'EventFlowMsg/Animal_Forest:Npc_Musician_014_R_008', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2582.941650390625, 'Pattern1PosY': 243.05862426757812, 'Pattern1PosZ': 425.0628967285156, 'Pattern1AtX': 2591.275146484375, 'Pattern1AtY': 235.4276580810547, 'Pattern1AtZ': 445.4225158691406, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'Count': 310.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician014Bgm'})
    Npc_Musician_014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Animal_Forest:Text004', 'IsCloseMessageDialog': True, 'ASName': 'Talk_HintChant'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'Musician014Bgm', 'FadeSec': 1.0})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    Npc_Musician_014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Animal_Forest:Text006'})
}
