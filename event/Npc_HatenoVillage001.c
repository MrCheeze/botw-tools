-------- EventFlow: Npc_HatenoVillage001 --------

Actor: Npc_HatenoVillage001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_DyeShopReception', 'Demo_OpenMessageDialog', 'Demo_DyeShopSelectMaterial', 'Demo_DyeShopCloseMaterial', 'Demo_TalkToPlayer']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_OpenPorch', 'Demo_WarpPlayerToAnchor', 'Demo_CallDemo', 'Demo_SetGameDataInt', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_AppearRupee']
queries: ['CheckFlag', 'HasArmorDye', 'HasItemDye', 'CheckRupee', 'CheckPlayerWeaponFired', 'GeneralChoice3', 'RandomChoice4', 'IsEquippedEnableDye', 'GeneralChoice2', 'HasItemDyeSpecifiedColor', 'CheckItemShopDecide', 'CheckDyeShopSelect', 'GeneralChoice4', 'IsEquipedDyedArmor', 'CheckPlayerState', 'CheckWeather', 'IsNoEquipArmorAnyTarget', 'HasArmorAlreadyDyed']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_StainWait', 'Demo_StainCarryWait', 'Demo_ReqRecreateDyeArmor', 'Demo_UpdateEquip', 'Demo_PlayerSetVisibleWeapon', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: CarryBox
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 4, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if Npc_HatenoVillage001.IsOnInstEventFlag() {
            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk09'})
        } else {
            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk08'})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_HatenoVillage001.IsOnInstEventFlag() {
            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk42'})
            Event86:
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC001_First'}) {
                if Npc_HatenoVillage001.IsOnInstEventFlag() {
                    Event227:
                    if EventSystemActor.HasArmorDye() {
                        Event87:
                        Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk14', 'IsWaitFinish': True})
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            Event221:

                            call PaintColor()

                          case 1:

                            call SageExplain()

                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk37'})
                            goto Event87
                          case 2:

                            call Resetcolor()

                          case 3:
                            Event88:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk04', 'IsCloseMessageDialog': True})
                        }
                    } else {
                        Event220:
                        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk36'})
                        Event82:
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            goto Event221
                          case 1:

                            call SageExplain()

                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk39'})
                            goto Event220
                          case 2:
                            goto Event88
                        }
                    }
                } else
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk38'})
                    goto Event227
                  case [1, 2, 3]:
                    Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk41'})
                    goto Event227
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC001_First', 'IsWaitFinish': True})
                Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk38'})
                Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk13', 'IsWaitFinish': True})
                goto Event82
            }
        } else {
            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event86
        }
    }
}

void Near() {
    if Npc_HatenoVillage001.CheckActorAction13() {
        Npc_HatenoVillage001.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:near01', 'ASKeyName': 'Talk_Sp'})
    }
}

void Resetcolor() {
    if EventSystemActor.CheckRupee({'Value': 20}) {
        if EventSystemActor.HasArmorAlreadyDyed() {
            Npc_HatenoVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk06', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
            GameROMPlayer.Demo_PlayerSetVisibleWeapon({'IsWaitFinish': True, 'SetVisible': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': '', 'UniqueName': 'DyeShop_PlayerPos3'})

            call Camera_Front()

            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 1, 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [10.0, 0.0, 0.0], 'IsValid': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
            Npc_HatenoVillage001.Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk30', 'IsWaitFinish': True, 'IsBecomingSpeaker': False})
            Event165:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk33', 'IsWaitFinish': True})
                if !EventSystemActor.GeneralChoice2() {
                    if !EventSystemActor.IsEquipedDyedArmor() {
                        Npc_HatenoVillage001.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk35', 'IsWaitFinish': True})
                        if !EventSystemActor.GeneralChoice2() {
                            Event161:

                            call GetDemo.PorchProhibitionON()

                            EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
                            EventSystemActor.Demo_OpenPorch({'RockCategory': 3, 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})

                            call GetDemo.PorchProhibitionOFF()

                            Npc_HatenoVillage001.Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk31'})
                            goto Event165
                        } else {
                            Event167:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk04', 'IsCloseMessageDialog': True})
                            Event245:
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                            GameROMPlayer.Demo_PlayerSetVisibleWeapon({'IsWaitFinish': True, 'SetVisible': True})
                            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                        }
                    } else {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk23'})
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk43', 'IsCloseMessageDialog': True})
                            Event172:
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo046_0', 'EntryPointName': 'Demo046_Reset', 'EndFade': 0})
                            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk34', 'IsCloseMessageDialog': True})
                            goto Event245
                          case 1:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk44', 'IsCloseMessageDialog': True})
                            goto Event172
                          case 2:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk56'})
                            goto Event172
                          case 3:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk46', 'IsCloseMessageDialog': True})
                            goto Event172
                        }
                    }
                } else {
                    goto Event167
                }
              case 1:
                goto Event161
              case 2:
                goto Event167
            }
        } else {
            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk32'})
        }
    } else {
        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk01'})
    }
}

void ResetArmor() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'ColorChange_EnablePreview', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 0, 'DispMode': 'NoLogo'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3403.586669921875, 'Pattern1PosY': 231.45680236816406, 'Pattern1PosZ': 2152.354248046875, 'Pattern1AtX': 3401.47314453125, 'Pattern1AtY': 231.19998168945312, 'Pattern1AtZ': 2154.4677734375, 'Pattern1Fovy': 54.999996185302734, 'TargetActor1': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    WorldManagerControl.Demo_SetPaletteType({'ChangeFrame': 0, 'EndFrame': 1, 'IsWaitFinish': False, 'PaletteType': 0, 'Speed': 1.0})
    GameROMPlayer.Demo_PlayerSetVisibleWeapon({'IsWaitFinish': True, 'SetVisible': True})
    GameROMPlayer.Demo_ReqRecreateDyeArmor({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 0, 'DispMode': 'NoLogo'})
}

void PaintColor() {
    CarryBox.Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckRupee({'Value': 20}) {
        if EventSystemActor.HasArmorDye() {
            if EventSystemActor.HasItemDye() {
                Npc_HatenoVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk06', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                EventSystemActor.Demo_FlagON({'FlagName': 'ColorChange_EnablePreview', 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerSetVisibleWeapon({'IsWaitFinish': True, 'SetVisible': False})
                GameROMPlayer.Demo_ReqRecreateDyeArmor({'IsWaitFinish': True})
                GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'DyeShop_PlayerPos', 'IsWaitFinish': True, 'AnchorName': ''})

                call Camera_Front()

                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 1, 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [10.0, 0.0, 0.0], 'IsValid': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk47'})
                    Event89:
                    Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk15', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False})
                    Event100:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        switch EventSystemActor.IsEquippedEnableDye() {
                          case 0:
                            Event236:

                            call SelectColor()

                          case 1:
                            if !EventSystemActor.IsNoEquipArmorAnyTarget() {
                                Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk24', 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                Event105:
                                if !EventSystemActor.GeneralChoice2() {
                                    goto Event236
                                } else {
                                    Event108:

                                    call GetDemo.PorchProhibitionON()

                                    EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
                                    EventSystemActor.Demo_OpenPorch({'RockCategory': 3, 'IsWaitFinish': True})
                                    EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})

                                    call GetDemo.PorchProhibitionOFF()

                                    Event102:
                                    Npc_HatenoVillage001.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk22', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                    goto Event100
                                }
                            } else {
                                Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk55'})
                                goto Event105
                            }
                          case 2:
                            if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
                                Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk40'})
                                if !EventSystemActor.GeneralChoice2() {
                                    goto Event108
                                } else {
                                    Event182:
                                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk04', 'IsCloseMessageDialog': True})

                                    call ResetArmor()

                                }
                            } else {
                                Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk25', 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                if !EventSystemActor.GeneralChoice2() {
                                    goto Event108
                                } else {
                                    goto Event182
                                }
                            }
                        }
                      case 1:
                        goto Event108
                      case 2:
                        goto Event182
                    }
                  case 1:
                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk48'})
                    goto Event89
                  case 2:
                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk49'})
                    goto Event89
                  case 3:
                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk50'})
                    goto Event89
                }
            } else {
                Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk03'})
            }
        } else {
            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk26'})
        }
    } else {
        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk01'})
    }
}

void SageExplain() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC001_First_dyed'}) {
        Event90:
        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk21'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC001_First_dyed', 'IsWaitFinish': True})
        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk16'})
        goto Event90
    }
}

void SelectColor() {
    EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'ColorChange_MaterialIndex', 'IsWaitFinish': True, 'Value': -1})
    GameROMPlayer.Demo_StainWait({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.011474999599158764, 'Pattern1PosY': 0.8478999733924866, 'Pattern1PosZ': 3.778198003768921, 'Pattern1AtX': -0.5102540254592896, 'Pattern1AtY': 0.8558499813079834, 'Pattern1AtZ': 1.5196529626846313, 'Pattern1Fovy': 30.329748153686523, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 10.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_Idling({'IsWaitFinish': True})
    Npc_HatenoVillage001.Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk10', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 1, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True})
    Npc_HatenoVillage001.Demo_DyeShopReception({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    if EventSystemActor.CheckItemShopDecide() {
        GameROMPlayer.Demo_StainCarryWait({'IsWaitFinish': False})
        Event115:
        if EventSystemActor.HasItemDyeSpecifiedColor() {
            Npc_HatenoVillage001.Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk28', 'IsBecomingSpeaker': True, 'CloseDialogOption': 1, 'IsWaitFinish': True})
            Npc_HatenoVillage001.Demo_DyeShopSelectMaterial({'IsWaitFinish': True})
            switch EventSystemActor.CheckDyeShopSelect() {
              case 1:
                if EventSystemActor.CheckItemShopDecide() {
                    Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk02', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HatenoVillage001.Demo_DyeShopCloseMaterial({'IsWaitFinish': True})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'ColorChange_EnablePreview', 'IsWaitFinish': True})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3215329945087433, 'Pattern1PosY': 0.8478699922561646, 'Pattern1PosZ': 3.730285882949829, 'Pattern1AtX': -0.10278300195932388, 'Pattern1AtY': 0.8690800070762634, 'Pattern1AtZ': 1.42877197265625, 'Pattern1Fovy': 30.329748153686523, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'MotionMode': 0, 'Count': 10.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk23', 'IsCloseMessageDialog': False})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk43', 'IsCloseMessageDialog': True})
                            Event145:
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoDye_Start'})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo046_0', 'EntryPointName': 'Demo046', 'EndFade': 0})
                            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                            switch EventSystemActor.RandomChoice4() {
                              case 0:
                                Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk07'})
                                Event266:
                                switch EventSystemActor.RandomChoice4() {
                                  case 0:
                                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk51'})
                                    Event95:
                                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk20', 'IsCloseMessageDialog': True})
                                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                                    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                    GameROMPlayer.Demo_PlayerSetVisibleWeapon({'IsWaitFinish': True, 'SetVisible': True})
                                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoDye_Start'})
                                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                                  case 1:
                                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk52'})
                                    goto Event95
                                  case 2:
                                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk53'})
                                    goto Event95
                                  case 3:
                                    Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk54'})
                                    goto Event95
                                }
                              case 1:
                                Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk17'})
                                goto Event266
                              case 2:
                                Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk18'})
                                goto Event266
                              case 3:
                                Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk19'})
                                goto Event266
                            }
                          case 1:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk44', 'IsCloseMessageDialog': True})
                            goto Event145
                          case 2:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk45', 'IsCloseMessageDialog': True})
                            goto Event145
                          case 3:
                            Npc_HatenoVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk46', 'IsCloseMessageDialog': True})
                            goto Event145
                        }
                    } else
                    goto Event115
                } else
                goto Event115
              case 2:
                Event137:
                Npc_HatenoVillage001.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk29', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                if !EventSystemActor.GeneralChoice2() {

                    call SelectColor()

                } else {
                    Npc_HatenoVillage001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk12', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})

                    call ResetArmor()

                }
            }
        } else {
            Npc_HatenoVillage001.Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:talk27', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'CloseDialogOption': 0})
            goto Event137
        }
    } else {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosZ': 5.0, 'Pattern1PosY': 1.0, 'Pattern1AtY': 0.6000000238418579, 'Count': 10.0, 'Cushion': 5.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        goto Event102
    }
}

void Camera_Front() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.035645000636577606, 'Pattern1PosY': 0.8478999733924866, 'Pattern1PosZ': 4.512694835662842, 'Pattern1AtX': -0.007323999889194965, 'Pattern1AtY': 0.7826390266418457, 'Pattern1AtZ': 2.201598882675171, 'Pattern1Fovy': 30.329748153686523, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}
