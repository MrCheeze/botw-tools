-------- EventFlow: Npc_HatenoVillage020 --------

Actor: Npc_HatenoVillage020
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckPlayerWeaponFired', 'CheckPlayerState', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_EnableSquatInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage020.CheckActorAction13() {
      case 0:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event15:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if Npc_HatenoVillage020.IsOnInstEventFlag() {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk01'})
            } else {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk00'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk05'})
            } else {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk16'})
            }
        }
      case 1:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event15
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk17'})
            } else {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk04'})
            }
        }
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event15
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk15'})
            } else {
                Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk14'})
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        }
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk13'})
        } else {
            Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk02'})
        }
    }
}

void NearActorsNear() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_HatenoVillage020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:near01', 'IsChecked': False, 'DispFrame': 90})
    } else {
        Npc_HatenoVillage020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Near() {
    if Npc_HatenoVillage020.CheckActorAction13() == 11 {
        Npc_HatenoVillage020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:near03', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Stolen() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3375.55419921875, 'Pattern1PosY': 228.3746337890625, 'Pattern1PosZ': 2163.762939453125, 'Pattern1AtX': 3375.53662109375, 'Pattern1AtY': 228.3240966796875, 'Pattern1AtZ': 2163.502197265625, 'Pattern1Fovy': 40.00001525878906, 'Count': 30.0, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_EnableSquatInEvent({'IsWaitFinish': True})
    }

    Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk12'})
}

void Meeting() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
        goto Event15
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_HatenoVillage020.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
        Npc_HatenoVillage006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_HatenoVillage020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk06', 'ASName': 'Talk'})
        Npc_HatenoVillage006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_HatenoVillage006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:talk07'})
    }
}
