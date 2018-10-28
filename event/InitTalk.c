-------- EventFlow: InitTalk --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkInWater', 'Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_MultiTalk', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_DisableUnequipInEvent']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_TurnToObjectGreeting', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_ReturnAnchor']
queries: ['IsNeedEquipWeapon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Self[InitTalkOnEvent(Self)]
entrypoint: InitTalkOnEvent(Self)
actions: ['Demo_BecomeSpeaker', 'Demo_TurnToObjectGreeting']
queries: []
params: None

Actor: Self[InitTalkKingZora(Self)]
entrypoint: InitTalkKingZora(Self)
actions: ['Demo_TurnToObjectGreeting']
queries: []
params: None

Actor: Self[InitTalkEquipOnEvent(Self)]
entrypoint: InitTalkEquipOnEvent(Self)
actions: ['Demo_BecomeSpeaker', 'Demo_TurnToObjectGreeting']
queries: []
params: None

Actor: Self[InitTalkOnEventParasail002(Self)]
entrypoint: InitTalkOnEventParasail002(Self)
actions: ['Demo_BecomeSpeaker', 'Demo_TurnToObjectGreeting']
queries: []
params: None

void InitTalk() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            GameRomCamera.Demo_TalkInWater({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        } else {
            GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        }
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'Arg_Greeting', 'IsWaitFinish': True})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if Starter.IsNeedEquipWeapon() {
            Starter.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'TargetIndex': 0})
        }
        Starter.Demo_TurnToObjectGreeting({'ObjectId': 'Arg_Turn', 'TurnDirection': 0.0, 'ActorName': '', 'GreetingType': 'Arg_Greeting', 'IsWaitFinish': False})
    }

}

void InitTalkEquip() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
    } {
        GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Starter.Demo_TurnToObjectGreeting({'ObjectId': 'Arg_Turn', 'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot'})
    }

}

void InitTalkSell() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Starter.Demo_TurnToObjectGreeting({'ObjectId': 'Arg_Turn', 'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot'})
    }

}

void InitTalkNoTurn() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
    }

}

void InitTalkOnEvent() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': True})
    } {
        Self[InitTalkOnEvent(Self)].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Self[InitTalkOnEvent(Self)].Demo_TurnToObjectGreeting({'ObjectId': 'Arg_Turn', 'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot'})
    }

}

void InitTalkKingZora() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 1, 'PosAppendMode': 2, 'IsWaitFinish': False, 'Pattern1Fovy': 50.0, 'Pattern1PosZ': -3.0, 'MotionMode': 1, 'Pattern1PosY': 0.0, 'Pattern1PosX': 1.0, 'Cushion': 0.6000000238418579, 'Count': 8.0, 'AtAppendMode': 3, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'TargetActor2': 2, 'Pattern1AtY': 8.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'DoAndNot', 'IsWaitFinish': True})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Self[InitTalkKingZora(Self)].Demo_TurnToObjectGreeting({'ObjectId': 'Arg_Turn', 'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot'})
    }

}

void InitTalkEquipOnEvent() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
    } {
        Self[InitTalkEquipOnEvent(Self)].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Self[InitTalkEquipOnEvent(Self)].Demo_TurnToObjectGreeting({'ObjectId': 'Arg_Turn', 'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot'})
    }

}

void InitTalkAngleDesignation() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            GameRomCamera.Demo_TalkInWater({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        } else {
            GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        }
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'Arg_Greeting', 'IsWaitFinish': True})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Starter.Demo_TurnToObjectGreeting({'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'Arg_Greeting', 'TurnDirection': 'Arg_Angle', 'ObjectId': 3})
    }

}

void InitTalkOnEventParasail002() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 10.0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Pattern1PosX': -565.6514282226562, 'Pattern1PosY': 180.31480407714844, 'Pattern1PosZ': 1693.6109619140625, 'Pattern1AtX': -570.0806274414062, 'Pattern1AtY': 180.6320037841797, 'Pattern1AtZ': 1695.9090576171875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': True})
    } {
        Self[InitTalkOnEventParasail002(Self)].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Self[InitTalkOnEventParasail002(Self)].Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot', 'ObjectId': 'Arg_Turn'})
    }

}

void InitTalkNPCEquip() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            GameRomCamera.Demo_TalkInWater({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        } else {
            GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        }
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'Arg_Greeting'})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Starter.Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 'Arg_Turn', 'GreetingType': 'Arg_Greeting'})
    }

}

void InitTalk_Pair() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Actor1', 'ActorName2': 'Actor2'})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'Arg_Greeting'})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if Starter.IsNeedEquipWeapon() {
            Starter.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'TargetIndex': 0})
        }
        Starter.Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 'Arg_Turn', 'GreetingType': 'Arg_Greeting'})
    }

}

void InitTalk_Trio() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'UniqueName3': '', 'ActorName1': 'Actor1', 'ActorName2': 'Actor2', 'ActorName3': 'Actor3', 'ActorSpecify3': 3})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'Arg_Greeting'})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if Starter.IsNeedEquipWeapon() {
            Starter.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'TargetIndex': 0})
        }
        Starter.Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 'Arg_Turn', 'GreetingType': 'Arg_Greeting'})
    }

}

void InitTalk_ReturnArrivalAnchor() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            GameRomCamera.Demo_TalkInWater({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        } else {
            GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
        }
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'Arg_Greeting'})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if Starter.IsNeedEquipWeapon() {
            Starter.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'TargetIndex': 0})
        }
        Starter.Demo_ReturnAnchor({'IsWaitFinish': True})
        Starter.Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 'Arg_Turn', 'GreetingType': 'Arg_Greeting'})
    }

}

void InitTalkSell_ReturnArrivalAnchor() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_Join({'IsWaitFinish': False})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Starter.Demo_ReturnAnchor({'IsWaitFinish': True})
        Starter.Demo_TurnToObjectGreeting({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'GreetingType': 'NotAndNot', 'ObjectId': 'Arg_Turn'})
    }

}
