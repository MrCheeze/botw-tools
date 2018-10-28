-------- EventFlow: GodTree --------

Actor: Npc_Kokiri010
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: ['GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Shield_021
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TBox_Field_Iron_GodTree
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_DestinationTurnStarter']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kokiri010_Near() {
    Npc_Kokiri010.Demo_TalkASync({'MessageId': 'EventFlowMsg/GodTree:Korog_Young_near01', 'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True})
}

void Ready_Npc_Kokiri010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_Kokiri010.IsOnInstEventFlag() {
        Npc_Kokiri010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk01', 'IsOverWriteLabelActorName': False})
    }
    Event6:
    Npc_Kokiri010.Demo_Talk({'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        Npc_Kokiri010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk04', 'IsOverWriteLabelActorName': False})
        Npc_Kokiri010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk06', 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'GodTree_Activated', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'GodTree_Dis_Tree2'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GodTree_Finish'})

            call KorokShiren_CompleteCheck()

        }
      case 1:
        Npc_Kokiri010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk02'})
        goto Event6
      case 2:
        Npc_Kokiri010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk05', 'IsOverWriteLabelActorName': False})
    }
}

void Fade_Enemy_Pop() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GodTree_Enemy_Pop'})
}

void Fade_Dis_Tree() {
    Weapon_Shield_021.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 89.06095123291016, 'Pattern1PosY': 286.4117736816406, 'Pattern1PosZ': -1866.8768310546875, 'Pattern1AtX': 83.4380111694336, 'Pattern1AtY': 284.8458557128906, 'Pattern1AtZ': -1865.2938232421875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 15.0, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GodTree_Dis_Tree'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    call Common.Play_ReadRiddle()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 85.69595336914062, 'Pattern1PosY': 285.55108642578125, 'Pattern1PosZ': -1860.363525390625, 'Pattern1AtX': 83.44287872314453, 'Pattern1AtY': 284.8458557128906, 'Pattern1AtZ': -1865.3011474609375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 60.0, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 82.14904022216797, 'Pattern1PosY': 285.67266845703125, 'Pattern1PosZ': -1868.8507080078125, 'Pattern1AtX': 81.75227355957031, 'Pattern1AtY': 285.6878662109375, 'Pattern1AtZ': -1869.725830078125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 60.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void Fade_Dis_Tree2() {
    TBox_Field_Iron_GodTree.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
    GameROMPlayer.Demo_DestinationTurnStarter({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': True, 'EndFade': 0})
    if EventSystemActor.CheckFlag({'FlagName': 'GodTree_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GodTree_Finish'})

        call KorokShiren_CompleteCheck()

    }
}

void Finish_Npc_Kokiri010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kokiri010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_talk08', 'IsOverWriteLabelActorName': False})
}

void Finish_Npc_Kokiri010_Near() {
    Npc_Kokiri010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GodTree:Korog_Young_near02', 'IsChecked': False, 'DispFrame': 90})
}

void KorokShiren_CompleteCheck() {
    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_KorokShiren_Activated'})
    && EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'})
    && EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'KorokMini_KorokShiren_Step010', 'IsWaitFinish': True})
    }
}
