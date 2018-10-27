-------- EventFlow: ZoraMini_DiveChallenge --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckPlayerState', 'CheckAddPorchItem', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora029[Town]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_StopInAir', 'Demo_ReserveParashawlStart']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora029_Near() {
    Event1:
    Npc_Zora029[Town].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:near00'})
}

void Ready_Npc_Zora029_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora029_First'}) {
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk00'})
        Event88:
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk02'})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk01'})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk03'})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk04'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_DiveChallenge_Activated'})
    } else {

        call Npc_Zora029.NoruFirst()

        goto Event88
    }
}

void Dive01() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerState({'PlayerState': 15}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3283.7412109375, 'Pattern1PosY': 247.03004455566406, 'Pattern1PosZ': -514.7738647460938, 'Pattern1AtX': 3286.0966796875, 'Pattern1AtY': 248.6121368408203, 'Pattern1AtZ': -516.5177001953125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'MotionMode': 0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Zora029[Town].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk11', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_LookDown'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_DiveChallenge_Step1'})
    }
}

void Dive02() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3289.140869140625, 'Pattern1PosY': 265.4710998535156, 'Pattern1PosZ': -517.38671875, 'Pattern1AtX': 3292.2548828125, 'Pattern1AtY': 256.3280029296875, 'Pattern1AtZ': -520.6962280273438, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'MotionMode': 0, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    Npc_Zora029[Town].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [3292.0, 266.4599914550781, -519.8800048828125]})
    Npc_Zora029[Town].Demo_Talk({'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk12', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True})
    GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_DiveChallenge_Step2'})
}

void Step2_Npc_Zora029_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora029[Town].IsOnInstEventFlag() {
        Event120:
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk18'})
    } else {
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk17'})
        goto Event120
    }
}

void Step1_Npc_Zora029_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora029[Town].IsOnInstEventFlag() {
        Event91:
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk05'})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk03'})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk06'})
        Event96:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk01'})
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk03'})
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk04', 'IsCloseMessageDialog': True})
            Event98:
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk08'})
            goto Event96
          case 1:
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk09', 'IsCloseMessageDialog': True})
            goto Event98
          case 2:
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk10', 'IsCloseMessageDialog': True})
            goto Event98
          case 3:
            Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk07'})
        }
    } else {
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk00'})
        goto Event91
    }
}

void Step1_Npc_Zora029_Near() {
    Npc_Zora029[Town].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:near00', 'IsChecked': False})
}

void Finish_Npc_Zora029_Near() {
    goto Event1
}

void Finish_Npc_Zora029_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk13'})
    Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk14'})
    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Fruit_E', 'Count': 5}) {

        call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'IncreaseTargetActorName': 'Item_Fruit_E', 'GetNumber': 5, 'ShowDialogTargetActorName': 'Item_Fruit_E_00'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_DiveChallenge_ItemGet'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_DiveChallenge_Finish'})
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk16'})
    } else {
        Npc_Zora029[Town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ZoraMini_DiveChallenge:talk15'})
    }
}
