-------- EventFlow: Npc_HatenoVillage032 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AutoSave', 'Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_WaitFrame', 'Demo_ExitEventPlayer', 'Demo_WarpPlayer', 'Demo_AppearRupee', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_WaitMessageDialogEnd']
queries: ['CheckTimeType', 'CheckPlayerState', 'GeneralChoice2', 'GeneralChoice4', 'CheckRupee', 'CheckFlag', 'GeneralChoice3', 'RandomChoice4', 'HasPorchItem', 'RandomChoice2', 'CheckWeather', 'CheckPlayerWeaponFired', 'RandomChoice8']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_Talk', 'Demo_BustUpFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage031
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_BecomeSpeaker', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_ChangeEquipState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage030
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject', 'Demo_ChangePostureWithAS', 'Demo_WarpToScheduleAnchor', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo', 'Demo_ChangePosture']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_HatenoVillage032
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_MoveToAnchor', 'Demo_BecomeSpeaker', 'Demo_ChangePostureWithAS', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialogTrig', 'Demo_ChangeEquipState', 'Demo_OpenMessageDialog', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_StartAndKeep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[KatsuradaWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    fork {

        call Sakurada_Hello()

        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ReturnHatenoFirst'}) {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk24'})
                Event925:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk25', 'IsCloseMessageDialog': True})
                    Event675:
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk101'})
                    goto Event925
                  case 1:
                    GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'Lat': 0.0, 'Lng': 30.0, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'StartCalcOnly': True, 'Offset': [0.0, 0.0, 0.20000000298023224]})
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk26', 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': False, 'NoConnect': False})
                    goto Event675
                  case 2:

                    call SakuradaFinalDance()

                    goto Event675
                  case 3:

                    call SakuradaBye()

                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ReturnHatenoFirst'})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk96'})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk97'})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk98'})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk100'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor05'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Surprise'}) {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk34'})
                Event555:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk83', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {

                    call SakuradaGoToMarry()

                } else {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk79', 'ASName': ''})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_Surprise', 'IsWaitFinish': True})

                fork {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk80'})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                }

                GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'Lat': 0.0, 'Lng': 30.0, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'StartCalcOnly': True, 'Offset': [0.0, 0.0, 0.20000000298023224]})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk84'})
                GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': False, 'NoConnect': False})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk90'})
                goto Event555
            }
        } else {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk39'})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk21'})
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk22'})
            } else {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk23'})
            }
        }
    } {

        call KatsuradaWait()

    }

}

void SakuradaChoice() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk10', 'IsOverWriteLabelActorName': False})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk11', 'IsOverWriteLabelActorName': False})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call SakuradaReform()

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_WeaponStand2'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_WeaponStand3'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_WeaponStand2'})
            }
            Event609:

            call AfterReform()

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_WeaponStand3'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ArrowStand3'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ShieldStand3'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_CompStand', 'IsWaitFinish': True})
            }
            Event803:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_CompStand'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_CompInDoor'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_CompOutDoor'}) {
                Npc_HatenoVillage032.Demo_BecomeSpeaker({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.746337890625, 'Pattern1PosY': 236.93919372558594, 'Pattern1PosZ': 2283.527099609375, 'Pattern1AtX': 3334.086181640625, 'Pattern1AtY': 237.04086303710938, 'Pattern1AtZ': 2280.5859375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk19'})
                Npc_HatenoVillage032.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_HatenoVillage030', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk128'})
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk89', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                } {
                    Npc_HatenoVillage030.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                    Npc_HatenoVillage030.Demo_MoveToAnchor({'IsWaitFinish': True, 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'IsAlignmentAnchor': False, 'ASKeyName': 'Run', 'AnchorName': 'AnchorAction8'})
                }

                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3326.671875, 'Pattern1PosY': 236.9789581298828, 'Pattern1PosZ': 2281.663330078125, 'Pattern1AtX': 3331.55126953125, 'Pattern1AtY': 237.04087829589844, 'Pattern1AtZ': 2283.5830078125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_HatenoVillage032.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_HatenoVillage030.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': ''})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                Npc_HatenoVillage030.Demo_MoveToAnchor({'IsWaitFinish': True, 'ASKeyName': 'Walk', 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'AnchorName': 'AnchorAction5', 'IsAlignmentAnchor': False})
                Npc_HatenoVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk20'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_MyHome_Finish'})
            }
          case 1:

            call SakuradaReform()

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ArrowStand1'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ArrowStand2'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ArrowStand3'})
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ArrowStand2'})
                }
                goto Event609
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ArrowStand1'})
                goto Event609
            }
          case 2:

            call SakuradaReform()

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ShieldStand1'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ShieldStand2'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ShieldStand3'})
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ShieldStand2'})
                }
                goto Event609
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ShieldStand1'})
                goto Event609
            }
          case 3:
            Event933:

            call SakuradaSelect()

        }
      case 1:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk12', 'IsOverWriteLabelActorName': False})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call SakuradaReform()

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Bed'})
            Event610:

            call AfterReform()

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Bed'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Light'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Door'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_CompInDoor', 'IsWaitFinish': True})
            }
            goto Event803
          case 1:

            call SakuradaReform()

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Light'})
            goto Event610
          case 2:

            call SakuradaReform()

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Door'})
            goto Event610
          case 3:
            goto Event933
        }
      case 2:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk13', 'IsOverWriteLabelActorName': False})
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call SakuradaReform()

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Nameplate'})
            Event693:

            call AfterReform()

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Nameplate'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Farm'})
            && EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Tree'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_CompOutDoor', 'IsWaitFinish': True})
            }
            goto Event803
          case 1:

            call SakuradaReform()

            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_CameraFarm', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Farm'})
            goto Event693
          case 2:

            call SakuradaReform()

            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_CameraFarm', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Tree'})
            goto Event693
          case 3:
            goto Event933
        }
      case 3:
        goto Event933
    }
}

void SakuradaReform() {
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk14', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckRupee({'Value': 100}) {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk15', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})

            fork {
                EventSystemActor.Demo_IncreaseRupee({'Value': -100, 'IsWaitFinish': True})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            }

            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
            Npc_HatenoVillage032.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk17', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0})
            EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_HatenoVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_HatenoVillage032.Demo_TurnAndLookToObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'TurnDirection': -90.0, 'ObjectId': 0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
            } {
                Npc_HatenoVillage030.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_HatenoVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 1, 'ActorName': 'Npc_HatenoVillage032', 'IsValid': True, 'FaceId': 2})
            }

            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk28'})
                Event854:

                fork {
                    Npc_HatenoVillage032.Demo_TurnAndLookToObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': False, 'IsConfront': False, 'ObjectId': 3, 'ActorName': '', 'TurnDirection': -90.0})
                } {
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.56982421875, 'Pattern1PosY': 237.05809020996094, 'Pattern1PosZ': 2283.102294921875, 'Pattern1AtX': 3335.971923828125, 'Pattern1AtY': 237.19692993164062, 'Pattern1AtZ': 2283.49658203125, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                }

                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo2'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo3'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo4'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo5'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo6'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo7'}) {
                                            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Ikuwayo8'}) {
                                                switch EventSystemActor.RandomChoice8() {
                                                  case 0:
                                                    Event992:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk114'})

                                                    Npc_HatenoVillage030.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk115'})
                                                  case 1:
                                                    Event994:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk116'})

                                                    Npc_HatenoVillage030.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk117'})
                                                  case 2:
                                                    Event996:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk118'})

                                                    Npc_HatenoVillage030.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk119'})
                                                  case 3:
                                                    Event998:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk120'})

                                                    Npc_HatenoVillage030.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk121'})
                                                  case 4:
                                                    Event1001:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk46'})

                                                    Event590:
                                                    switch EventSystemActor.RandomChoice4() {
                                                      case 0:
                                                        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk88', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
                                                      case 1:
                                                        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk89', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
                                                      case 2:
                                                        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk45'})
                                                      case 3:
                                                        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk44'})
                                                    }
                                                  case 5:
                                                    Event1002:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk47'})

                                                    goto Event590
                                                  case 6:
                                                    Event1003:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk48'})

                                                    goto Event590
                                                  case 7:
                                                    Event1000:

                                                    call KatsuradaRes({'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk60'})

                                                    goto Event590
                                                }
                                            } else {
                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo8'})
                                                goto Event992
                                            }
                                        } else {
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo7'})
                                            goto Event994
                                        }
                                    } else {
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo6'})
                                        goto Event996
                                    }
                                } else {
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo5'})
                                    goto Event998
                                }
                            } else {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo4'})
                                goto Event1001
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo3'})
                            goto Event1002
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_Ikuwayo2'})
                        goto Event1003
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_Ikuwayo', 'IsWaitFinish': True})
                    goto Event1000
                }
              case 1:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk29'})
                goto Event854
              case 2:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk30'})
                goto Event854
              case 3:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk31'})
                goto Event854
            }
        } else {

            call SakuradaNoRupee()

            Event754:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {

        call SakuradaBye()

        goto Event754
    }
}

void SakuradaBye() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk08', 'IsOverWriteLabelActorName': False})
}

void SakuradaNoRupee() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk16', 'IsOverWriteLabelActorName': False})
}

void HHD_Sakurada_Ready() {
    Npc_HatenoVillage031.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

    call Sakurada_Hello()

    switch Npc_HatenoVillage032.CheckActorAction13() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk54'})
      case 1:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk53'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk49'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_HatenoVillage032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk51'})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk52'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk65'})
                } else {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk66'})
                }
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk67', 'IsCloseMessageDialog': True})
                Npc_HatenoVillage032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_HatenoVillage031', 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': False, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsConfront': True})

                fork {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_MyHome_StopNow', 'IsWaitFinish': True})
                } {
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3317.298828125, 'Pattern1PosY': 237.07391357421875, 'Pattern1PosZ': 2302.3759765625, 'Pattern1AtX': 3312.131103515625, 'Pattern1AtY': 236.76943969726562, 'Pattern1AtZ': 2303.50048828125, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                }

                Npc_HatenoVillage031.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
                Npc_HatenoVillage031.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk41', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3312.517333984375, 'Pattern1PosY': 237.2691192626953, 'Pattern1PosZ': 2304.794921875, 'Pattern1AtX': 3315.9296875, 'Pattern1AtY': 236.73377990722656, 'Pattern1AtZ': 2303.797119140625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_HatenoVillage031.Demo_TurnAndLookToObject({'ActorName': 'Npc_HatenoVillage032', 'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsConfront': True})
                Npc_HatenoVillage031.Demo_BecomeSpeaker({'IsWaitFinish': True})
                Npc_HatenoVillage031.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk42', 'ASName': 'Hello'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_MyHome_Activated'})
            } else {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk64'})
            }
          case 1:

            call SakuradaDance()

          case 2:

            call SakuradaBye()

        }
    }
}

void HHD_Sakurada_Near() {
    Event1116:
    switch Npc_HatenoVillage032.CheckActorAction13() {
      case 1:
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage032.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:near00', 'DispFrame': 300, 'IsChecked': True})
        } else {
            Npc_HatenoVillage032.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:near01', 'DispFrame': 300, 'IsChecked': True})
        }
      case 11:
        Npc_HatenoVillage032.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:near04', 'DispFrame': 90, 'IsChecked': False})
    }
}

void HHD_Sakurada_Repurchase() {

    call Sakurada_Hello()

    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk56'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk57'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk58'})
            if EventSystemActor.CheckRupee({'Value': 3000}) {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk62'})

                fork {
                    EventSystemActor.Demo_IncreaseRupee({'Value': -3000, 'IsWaitFinish': True})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                }

                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk40'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_MyHome_Repurchase'})
            } else {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk63'})
            }
        } else {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk61'})
        }
      case 1:

        call SakuradaStandDance()

      case 2:

        call SakuradaBye()

    }
}

void HHD_Sakurada_Finish() {

    call ForkAnim()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_ReturnHatenoFirst'}) {
            Event282:
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk18', 'IsOverWriteLabelActorName': False})
            Event283:
            switch EventSystemActor.GeneralChoice4() {
              case 0:

                call SakuradaChoice()

              case 1:
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Surprise'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
                        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk94'})
                        Event931:

                        call SakuradaSelect()

                    } else {
                        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk81'})
                        Event703:
                        if !EventSystemActor.GeneralChoice2() {

                            call SakuradaGoToMarry()

                        } else {
                            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk104'})
                        }
                    }
                } else {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk32', 'IsOverWriteLabelActorName': False})
                    goto Event931
                }
              case 2:

                call SakuradaFinalDance()

                goto Event931
              case 3:

                call SakuradaBye()

            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC032_ReturnHatenoFirst'})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk91'})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk92'})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk93'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor05'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Surprise'}) {
            goto Event282
        } else {
            Event949:

            fork {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk80', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_Surprise', 'IsWaitFinish': True})
                GameRomCamera.Demo_BustUpFront({'IsWaitFinish': True, 'Count': 0.0, 'Lat': 0.0, 'Lng': 30.0, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'StartCalcOnly': True, 'NearSide': False, 'Offset': [0.0, 0.0, 0.20000000298023224]})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk84'})
                GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': False, 'NoConnect': False})
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk103'})
                goto Event703
            } {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ASName': 'Talk'})
            }

        }
    } else {
        goto Event282
    }
}

void Sakurada_Hello() {
    switch Npc_HatenoVillage032.CheckActorAction13() {
      case [0, 1, 3, 8, 9]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event723:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                if Npc_HatenoVillage032.IsOnInstEventFlag() {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk109'})
                } else {
                    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk106'})
                }
                Event738:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk107'})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else
            if Npc_HatenoVillage032.IsOnInstEventFlag() {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk108'})
            } else {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk105'})
            }
            goto Event738
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk04', 'IsOverWriteLabelActorName': False})
            } else
            if Npc_HatenoVillage032.IsOnInstEventFlag() {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk03', 'IsOverWriteLabelActorName': False})
            } else
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk05', 'IsOverWriteLabelActorName': False})
              case [2, 3, 4, 5]:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk06', 'IsOverWriteLabelActorName': False})
              case [6, 7]:
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk07', 'IsOverWriteLabelActorName': False})
            }
        }
      case 2:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event723
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk43'})
            } else {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk43'})
            }
            Event728:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event723
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk82'})
            } else {
                Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk36'})
            }
            goto Event728
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        }
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk38'})
        } else {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk37'})
        }
        goto Event728
    }
}

void SakuradaDance() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk50', 'IsCloseMessageDialog': True})
    Npc_HatenoVillage032.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    Npc_HatenoVillage032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

    call SakuradaDanceContents()

    Npc_HatenoVillage032.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
    Event1118:
    Npc_HatenoVillage032.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_dAnce'}) {
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk70', 'ASName': 'Talk', 'IsCloseMessageDialog': True})
        Event827:
        if Npc_HatenoVillage032.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
            Npc_HatenoVillage032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 0, 'TurnDirection': -173.125, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
            Npc_HatenoVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Sit'})
        }
    } else {
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk55', 'ASName': 'Talk', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_dAnce', 'IsWaitFinish': True})
        goto Event827
    }
}

void HHD_Sakurada_Furniture() {

    fork {

        call Sakurada_Hello()

        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk00', 'IsOverWriteLabelActorName': False})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk02', 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_MyHome_Furniture'})
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor05'}) {
                goto Event949
            }
        } else {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk27'})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk35'})
        }
    } {

        call KatsuradaWait()

    }

}

void HHD_Sakurada_Wood() {

    call Sakurada_Hello()

    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk72'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Count': 30}) {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk74', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Value': -30, 'IsWaitFinish': True})
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk75'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_MyHome_Wood'})
        } else {
            Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk68'})
        }
      case 1:

        call SakuradaStandDance()

      case 2:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk73'})
    }
}

void AfterReform() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_MakingFurnitures', 'IsWaitFinish': True})
    Npc_HatenoVillage030.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    Npc_HatenoVillage032.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction9'})
    Npc_HatenoVillage030.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction9'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3288.30078125, 'Pattern1PosY': 239.5553436279297, 'Pattern1PosZ': 2242.209228515625, 'Pattern1AtX': 3290.1328125, 'Pattern1AtY': 239.1669464111328, 'Pattern1AtZ': 2247.556884765625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_CameraFarm'}) {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC032_CameraFarm', 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        Event513:
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'I-7', 'WarpDestPosName': 'SakuradaDemoFine', 'IsWaitFinish': True})
        Npc_HatenoVillage032.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': ''})
        Npc_HatenoVillage030.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3326.671875, 'Pattern1PosY': 236.9789581298828, 'Pattern1PosZ': 2281.663330078125, 'Pattern1AtX': 3331.55126953125, 'Pattern1AtY': 237.04087829589844, 'Pattern1AtZ': 2283.5830078125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_HatenoVillage032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'IsConfront': False, 'FaceId': 2})

        fork {
            Npc_HatenoVillage030.Demo_MoveToAnchor({'IsWaitFinish': True, 'ASKeyName': 'Walk', 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'AnchorName': 'AnchorAction5', 'IsAlignmentAnchor': False})
            Npc_HatenoVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
        } {
            Npc_HatenoVillage032.Demo_MoveToAnchor({'IsWaitFinish': True, 'ASKeyName': 'Walk', 'AnchorUniqueName': '', 'IsTurnToAnchorDir': True, 'AnchorName': 'AnchorAction5', 'IsAlignmentAnchor': False})
            Npc_HatenoVillage032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
        } {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            call SakuradaDone()

            EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        }

    } else {
        goto Event513
    }
}

void SakuradaGoToMarry() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk85', 'ASName': '', 'IsCloseMessageDialog': False})
    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk111'})
        Event645:
        Npc_HatenoVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

        fork {
            Npc_HatenoVillage032.Demo_TurnAndLookToObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': False, 'IsConfront': False, 'ObjectId': 3, 'ActorName': '', 'TurnDirection': -90.0})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.56982421875, 'Pattern1PosY': 237.05809020996094, 'Pattern1PosZ': 2283.102294921875, 'Pattern1AtX': 3335.971923828125, 'Pattern1AtY': 237.19692993164062, 'Pattern1AtZ': 2283.49658203125, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk86', 'ASName': '', 'IsCloseMessageDialog': True})
        Npc_HatenoVillage030.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_HatenoVillage030.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        Npc_HatenoVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'TurnDirection': 0.0, 'ActorName': 'Npc_HatenoVillage032', 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsConfront': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'ActorName': 'Npc_HatenoVillage030', 'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'IsValid': True, 'FaceId': 2})
        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk87', 'IsCloseMessageDialog': True, 'ASName': 'Hello'})
        Npc_HatenoVillage030.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

        fork {
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-7', 'WarpDestPosName': 'SakuradaDemoFine'})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.639404296875, 'Pattern1PosY': 237.52777099609375, 'Pattern1PosZ': 2292.61865234375, 'Pattern1AtX': 3329.612548828125, 'Pattern1AtY': 237.0481719970703, 'Pattern1AtZ': 2287.640380859375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }


        fork {
            Npc_HatenoVillage032.Demo_MoveToAnchor({'ASKeyName': 'Walk', 'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'AnchorUniqueName': 'Go_Ichikara', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
        } {
            Npc_HatenoVillage030.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_HatenoVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'FaceId': 1, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsConfront': True, 'IsValid': True})
            Npc_HatenoVillage030.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Hello', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            Npc_HatenoVillage030.Demo_MoveToAnchor({'ASKeyName': 'Walk', 'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'AnchorUniqueName': 'Go_Ichikara', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
        }

        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'ObjectId': 2, 'FaceId': 1, 'ActorName': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3329.126708984375, 'Pattern1PosY': 237.03170776367188, 'Pattern1PosZ': 2288.5068359375, 'Pattern1AtX': 3329.09814453125, 'Pattern1AtY': 237.0373077392578, 'Pattern1AtZ': 2283.21142578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Invite05'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoVillage032_Go'})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
      case [1, 2, 3]:
        Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk112'})
        goto Event645
    }
}

void SakuradaStandDance() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk50', 'IsCloseMessageDialog': True})
    Npc_HatenoVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})

    call SakuradaDanceContents()

    goto Event1118
}

void SakuradaSelect() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk102'})
    goto Event283
}

void SakuradaFinalDance() {
    Npc_HatenoVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk113', 'IsCloseMessageDialog': True})
    Npc_HatenoVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})

    call SakuradaDanceContents()

    Npc_HatenoVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Sit'})
}

void KatsuradaRes() {
    Npc_HatenoVillage032.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'MessageId'})
    Npc_HatenoVillage030.Demo_BecomeSpeaker({'IsWaitFinish': True})
}

void SakuradaDone() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HatenoVillage032.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk71', 'CloseDialogOption': 0})
      case 1:
        Npc_HatenoVillage032.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk122', 'CloseDialogOption': 0})
      case 2:
        Npc_HatenoVillage032.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk123', 'CloseDialogOption': 0})
      case 3:
        Npc_HatenoVillage032.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk124', 'CloseDialogOption': 0})
    }
}

void SakuradaDanceContents() {
    if !EventSystemActor.RandomChoice2() {
        Npc_HatenoVillage032.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SakuradaDanceA', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk125', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } else {
        Npc_HatenoVillage032.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SakuradaDanceA', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk126', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    }
    Npc_HatenoVillage032.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk127', 'IsCloseMessageDialog': False, 'ASName': 'Talk_SakuradaDanceA', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    Npc_HatenoVillage032.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': 'Talk_SakuradaDanceAll', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk76', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    Npc_HatenoVillage032.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk77', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_HatenoVillage032.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage032:talk78', 'IsCloseMessageDialog': True, 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True})
}

void Near() {
    goto Event1116
}

void KatsuradaWait() {
    switch Npc_HatenoVillage030.CheckActorAction13() {
      case 2:
        Event1120:
        Npc_HatenoVillage030.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
      case 10:
        Npc_HatenoVillage030.Demo_ChangePosture({'Posture': 'Stand', 'IsWaitFinish': True})
        goto Event1120
      case 13:
        EventSystemActor[KatsuradaWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 360})
        goto Event1120
    }
}

void ForkAnim() {

    fork {

        call Sakurada_Hello()

    } {

        call KatsuradaWait()

    }

}
