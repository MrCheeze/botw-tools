-------- EventFlow: FldObj_RockZoraRelief_A_M_01_ma --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_IncreaseGameDataInt']
queries: ['CheckStarter', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_OpenMessageDialogOfUnique']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_OpenMessageDialog']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call ZoraReliefCam()

    Starter.Demo_OpenMessageDialogOfUnique({'MstxtName': 'FldObj_RockZoraRelief_A_M_01_ma', 'IsWaitFinish': True})

    call Check_SearchRelief()

    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

    call SearchRelief_AllCheck()

}

void ZoraReliefCam() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Count': 30.0, 'TargetActor1': 0, 'AtAppendMode': 2, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 0.0, 'FovyAppendMode': 0, 'StartCalcOnly': True, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'MotionMode': 0, 'Pattern1AtZ': 0.0, 'IsWaitFinish': True, 'Pattern1AtY': 5.0, 'Pattern1PosY': 2.0, 'Pattern1PosZ': 12.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void Check_SearchRelief() {
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_01', 'ActorName': 'FldObj_RockZoraRelief_A_M_01_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_01'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_01'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_02', 'ActorName': 'FldObj_RockZoraRelief_A_M_02_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_02'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_02'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_03', 'ActorName': 'FldObj_RockZoraRelief_A_M_03_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_03'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_03'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_04', 'ActorName': 'FldObj_RockZoraRelief_A_M_04_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_04'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_04'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_05', 'ActorName': 'FldObj_RockZoraRelief_A_M_05_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_05'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_05'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_06', 'ActorName': 'FldObj_RockZoraRelief_A_M_06_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_06'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_06'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_07', 'ActorName': 'FldObj_RockZoraRelief_A_M_07_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_07'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_07'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_08', 'ActorName': 'FldObj_RockZoraRelief_A_M_08_ma'}) {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameROMPlayer.Demo_OpenMessageDialog({'IsWaitFinish': True, 'Label': 'Talk_ZoraRelief_Mess_08_01', 'Mstxt': 'EventFlowMsg/FldObj_RockZoraRelief_A_M_01_ma'})
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_08'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_08'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_09', 'ActorName': 'FldObj_RockZoraRelief_A_M_09_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_09'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_09'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    } else
    if EventSystemActor.CheckStarter({'UniqueName': 'ZoraRelief_Mess_10', 'ActorName': 'FldObj_RockZoraRelief_A_M_10_ma'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_10'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraRelief_Check_10'})
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        }
    }
}

void SearchRelief_AllCheck() {
    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_01'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_04'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_05'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_06'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_07'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_08'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_09'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_10'}) {
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_ReliefSearch_SearchRelief'})
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
