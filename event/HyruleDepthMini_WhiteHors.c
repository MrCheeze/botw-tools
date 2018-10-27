-------- EventFlow: HyruleDepthMini_WhiteHorse --------

Actor: Npc_HyruleDepthHatago007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpOwnedHorse', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOwnedHorseAssociated', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CreateObjectsOfOwnedHorse', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_WarpPlayerToAnchor', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckExistActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomHorseSaddle_02
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameRomHorseReins_02
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DestinationTurnStarter', 'Demo_GetOffFromHorse']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HyruleDepthHatago007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckExistActor({'ActorName': 'GameRomHorseZelda', 'IsCheckEquipStand': False, 'IsCheckLife': True}) {
        switch Npc_HyruleDepthHatago007.IsOwnedHorseAssociated({'IsRidden': False}) {
          case 0:
            Event99:
            Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk22'})
            Event11:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HyruleDepthMini_WhiteHorse_Activated'})
          case 1:
            Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk01'})
            OwnedHorse_ForEvent.Demo_Idling({'IsWaitFinish': False})

            call Demo_WhiteHorseTalk()

            Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk19', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': '', 'StepName': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk20', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Event31:
            GameRomHorseSaddle_02.Demo_VisibleOff({'IsWaitFinish': False})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'GameRomHorseSaddle_02'})

            GameRomHorseReins_02.Demo_VisibleOff({'IsWaitFinish': False})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'GameRomHorseReins_02'})

            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})
            EventSystemActor.Demo_CreateObjectsOfOwnedHorse({'HorseSaddleActorName': 'GameRomHorseSaddle_02', 'HorseReinsActorName': 'GameRomHorseReins_02', 'IsWaitFinish': True, 'HorseManeActorName': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1436.9644775390625, 'Pattern1PosY': 139.9013214111328, 'Pattern1PosZ': 1271.775634765625, 'Pattern1AtX': -1436.2177734375, 'Pattern1AtY': 138.85389709472656, 'Pattern1AtZ': 1276.35546875, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})
            Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk16'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HyruleDepthMini_WhiteHorse_Finish'})
            Npc_HyruleDepthHatago007.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 2:
            goto Event99
          case 3:
            goto Event99
          case 4:
            goto Event99
        }
    } else {
        if Npc_HyruleDepthHatago007.IsOnInstEventFlag() {
            Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk05'})
            Event5:
            Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event11
            } else {
                Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else {
            Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk04'})
            goto Event5
        }
    }
}

void Finish_Npc_HyruleDepthHatago007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckExistActor({'ActorName': 'GameRomHorseZelda', 'IsCheckEquipStand': False, 'IsCheckLife': True}) {
        switch Npc_HyruleDepthHatago007.IsOwnedHorseAssociated({'IsRidden': False}) {
          case 0:
            Event42:
            if Npc_HyruleDepthHatago007.IsOnInstEventFlag() {
                Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk17'})
            } else {
                Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk13'})
            }
          case 1:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            OwnedHorse_ForEvent.Demo_Idling({'IsWaitFinish': False})

            call Demo_WhiteHorseTalk()

            Npc_HyruleDepthHatago007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk12', 'IsCloseMessageDialog': True})
            goto Event31
          case 2:
            goto Event42
          case 3:
            goto Event42
          case 4:
            goto Event42
        }
    } else {
        Npc_HyruleDepthHatago007.Demo_Talk({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:talk10', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Ready_Npc_HyruleDepthHatago007_Near() {
    Npc_HyruleDepthHatago007.Demo_TalkASync({'IsChecked': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:Near01', 'DispFrame': 300})
}

void Finish_Npc_HyruleDepthHatago007_Near() {
    if !EventSystemActor.CheckExistActor({'ActorName': 'GameRomHorseZelda', 'IsCheckEquipStand': False, 'IsCheckLife': True}) {
        switch Npc_HyruleDepthHatago007.IsOwnedHorseAssociated({'IsRidden': False}) {
          case 0:
            Event61:
            Npc_HyruleDepthHatago007.Demo_TalkASync({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:Near00', 'IsChecked': False, 'IsWaitFinish': True, 'DispFrame': 90})
          case 1:
            Npc_HyruleDepthHatago007.Demo_TalkASync({'MessageId': 'EventFlowMsg/HyruleDepthMini_WhiteHorse:Near02', 'DispFrame': 300, 'IsWaitFinish': True, 'IsChecked': True})
          case 2:
            goto Event61
          case 3:
            goto Event61
          case 4:
            goto Event61
        }
    } else {
        goto Event61
    }
}

void Demo_WhiteHorseTalk() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})
    GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': True, 'ClearDemoMemberIfNotOwned': True})
    EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'PlayerTalk_WhiteHorse', 'IsWaitFinish': True})
    Npc_HyruleDepthHatago007.Demo_WarpOwnedHorse({'IsWaitFinish': True})
    Npc_HyruleDepthHatago007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': 'NpcTalk_WhiteHorse'})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    GameROMPlayer.Demo_DestinationTurnStarter({'IsWaitFinish': True})
    Npc_HyruleDepthHatago007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.5947269797325134, 'Pattern1PosY': 2.439301013946533, 'Pattern1PosZ': 6.958710193634033, 'Pattern1AtX': 0.019531000405550003, 'Pattern1AtY': 1.1459660530090332, 'Pattern1AtZ': 2.168091058731079, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_HyruleDepthHatago007', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})
}
