-------- EventFlow: Gerudo_Ch_Helmet --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AdvanceQuest', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis003[Rouge03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_Talk05'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Event103:

                        fork {
                            Npc_oasis007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_oasis007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk13', 'IsCloseMessageDialog': True, 'ASName': ''})
                        } {
                            Npc_oasis003[Rouge03].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0})
                        }

                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk14', 'ASName': ''})
                      case 1:
                        Event117:
                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_010'})
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_003_inBedroom'}) {
                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_015'})
                            Event170:
                            if !EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
                                if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_000r', 'IsCloseMessageDialog': True})
                                    Event116:
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:
                                        goto Event117
                                      case 1:
                                        Event158:
                                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_003_aboutGem'}) {
                                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_014'})
                                            goto Event170
                                        } else {
                                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_013'})
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_003_aboutGem'})
                                            goto Event170
                                        }
                                      case 2:
                                        Event107:
                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk19'})
                                    }
                                }
                            }
                        } else {
                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_012'})
                            goto Event170
                        }
                      case 2:
                        goto Event107
                    }
                } else {
                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_Talk07'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        goto Event103
                      case 1:
                        goto Event117
                      case 2:
                        goto Event158
                      case 3:
                        goto Event107
                    }
                }
            } else {
                Event99:
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk05', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event103
                } else {
                    goto Event107
                }
            }
        } else {
            goto Event99
        }
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.8984375, 'Pattern1PosY': 161.76290893554688, 'Pattern1PosZ': 2967.98828125, 'Pattern1AtX': -3887.874267578125, 'Pattern1AtY': 160.04476928710938, 'Pattern1AtZ': 2970.104736328125, 'Pattern1Fovy': 51.24998474121094, 'Count': 60.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk17'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6025999784469604, 'Pattern1PosY': 1.4381099939346313, 'Pattern1PosZ': 0.6831049919128418, 'Pattern1AtX': 0.022338999435305595, 'Pattern1AtY': 1.748810052871704, 'Pattern1AtZ': -0.32177698612213135, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge03', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk18'})
        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': True, 'NoConnect': True})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_003'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event117
                    } else {
                        goto Event107
                    }
                } else {
                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_000'})
                    goto Event116
                }
            }
        }
    }
}

void Finish_Npc_oasis003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GerudoMiniJewel_Finished'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SandWarm_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_FindingValetta_Finish'}) {
                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk06'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_Helmet_Get', 'IsWaitFinish': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_115_Head'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Helmet_Finish'})
                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk07'})
                    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                                Event148:
                                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_004'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Event133:
                                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_010'})
                                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_003_inBedroom'}) {
                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_015'})
                                        Event172:
                                        if !EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
                                            if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                                                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_000r', 'IsCloseMessageDialog': True})
                                                Event132:
                                                switch EventSystemActor.GeneralChoice3() {
                                                  case 0:
                                                    goto Event133
                                                  case 1:
                                                    Event153:
                                                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_003_aboutGem'}) {
                                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_014'})
                                                        goto Event172
                                                    } else {
                                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_013'})
                                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_003_aboutGem'})
                                                        goto Event172
                                                    }
                                                  case 2:
                                                    Event58:
                                                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk16', 'ASName': ''})
                                                }
                                            }
                                        }
                                    } else {
                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_012'})
                                        goto Event172
                                    }
                                } else {
                                    goto Event58
                                }
                            } else {
                                Event131:
                                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_001'})
                                goto Event132
                            }
                        }
                    }
                } else {
                    Event80:
                    if EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_Talk05'})
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:
                                        Event54:

                                        fork {
                                            Npc_oasis007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                            Npc_oasis007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk13', 'IsCloseMessageDialog': True, 'ASName': ''})
                                        } {
                                            Npc_oasis003[Rouge03].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0})
                                        }

                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk14', 'ASName': ''})
                                      case 1:
                                        goto Event133
                                      case 2:
                                        goto Event58
                                    }
                                } else {
                                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_Talk06'})
                                    switch EventSystemActor.GeneralChoice4() {
                                      case 0:
                                        goto Event54
                                      case 1:
                                        goto Event133
                                      case 2:
                                        goto Event153
                                      case 3:
                                        goto Event58
                                    }
                                }
                            } else {
                                Event11:
                                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk05', 'IsCloseMessageDialog': True})
                                if !EventSystemActor.GeneralChoice2() {
                                    goto Event54
                                } else {
                                    goto Event58
                                }
                            }
                        } else {
                            goto Event11
                        }
                    } else {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.8984375, 'Pattern1PosY': 161.76290893554688, 'Pattern1PosZ': 2967.98828125, 'Pattern1AtX': -3887.874267578125, 'Pattern1AtY': 160.04476928710938, 'Pattern1AtZ': 2970.104736328125, 'Pattern1Fovy': 51.24998474121094, 'Count': 60.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk17'})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6025999784469604, 'Pattern1PosY': 1.4381099939346313, 'Pattern1PosZ': 0.6831049919128418, 'Pattern1AtX': 0.022338999435305595, 'Pattern1AtY': 1.748810052871704, 'Pattern1AtZ': -0.32177698612213135, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge03', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk18'})
                        if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                                GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': True, 'NoConnect': True})
                                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                                    goto Event148
                                } else {
                                    goto Event131
                                }
                            }
                        }
                    }
                }
            } else {
                goto Event80
            }
        } else {
            goto Event80
        }
    } else {
        goto Event80
    }
}

void KabutoStart() {
    Npc_oasis007.Demo_BecomeSpeaker({'IsWaitFinish': False})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis003", sub_name="Rouge03")})

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Helmet_Activated'}) {
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk12'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Helmet_first'}) {
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk11', 'ASName': ''})
            Event5:
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk03', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_Ch_Helmet', 'ForceRunTelop': True, 'StepName': 'Finish'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk08'})
            } else {
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk04'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_Helmet_first', 'IsWaitFinish': True})
            }
        } else {

            fork {
                Npc_oasis003[Rouge03].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0})
            } {
                Npc_oasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_oasis007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk00', 'IsWaitFinish': True, 'ASName': ''})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            }

            Npc_oasis003[Rouge03].Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_GdQueen_Sit'})
            Npc_oasis007.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'Wait', 'MorphingFrame': -1.0})
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_GdQueen_Sit', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk10', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkYes', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk02'})
                goto Event5
            } else {

                fork {
                    Npc_oasis007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk09', 'IsWaitFinish': True, 'ASName': ''})
                } {
                    Npc_oasis003[Rouge03].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0})
                }

            }
        }
    }
}

void Ready_Npc_oasis003_Near() {
    Npc_oasis003[Rouge03].Demo_TalkASync({'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Near01', 'IsWaitFinish': True})
}

void Finish_Npc_oasis003_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GerudoMiniJewel_Finished'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SandWarm_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_FindingValetta_Finish'}) {
                    Npc_oasis003[Rouge03].Demo_TalkASync({'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Near01', 'IsWaitFinish': True})
                } else {
                    Event94:
                    Npc_oasis003[Rouge03].Demo_TalkASync({'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Near01', 'IsChecked': False, 'DispFrame': 90, 'IsWaitFinish': True})
                }
            } else {
                goto Event94
            }
        } else {
            goto Event94
        }
    } else {
        goto Event94
    }
}
