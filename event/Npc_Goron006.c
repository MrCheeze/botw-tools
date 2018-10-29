-------- EventFlow: Npc_Goron006 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_WarpPlayer', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice2', 'GeneralChoice4', 'RandomChoice2', 'HasPorchItem', 'CheckGameDataInt', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire[RemainsFire_Round]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron020_2[YunBo_Finished]
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_GoronWeapon'}) {
        switch Npc_Goron006.CheckActorAction13() {
          case [0, 1, 12]:

            call BurudoHello2()

            Event505:
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_BurudoThankYouGoods'}) {
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk59'})
                Event169:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk63'})
                        Event271:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk79'})
                        goto Event169
                    } else {
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk64'})

                        call Burudo_MSword()

                        goto Event271
                    }
                  case 1:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk43'})
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk46'})
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk48'})
                    goto Event271
                  case 2:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk61'})
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk62'})
                    goto Event271
                  case 3:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk16'})
                }
            } else {
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk110'})
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk111'})

                call BurudoThankYouGoods()

            }
          case 10:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk47'})
            goto Event505
          case 11:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk49'})
            goto Event505
        }
    } else
    switch Npc_Goron006.CheckActorAction13() {
      case [0, 1, 12]:

        call BurudoHello2()

        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk40'})
        Event353:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk80'})
      case 10:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk47'})
        goto Event353
      case 11:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk49'})
        goto Event353
    }
}

void Near() {
    Npc_Goron006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron006:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_FireRelic_Burudo() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Ready_NPC006_First'}) {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk112'})
        Event70:
        if !EventSystemActor.GeneralChoice2() {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk28'})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk86'})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk87'})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk88', 'IsCloseMessageDialog': True})

            fork {

                call Camera_TowardBridge()

            } {
                Npc_Goron006.Demo_TurnAndLookToObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'IsConfront': False, 'TurnPosition': [1714.0, 501.0, -2471.0], 'TurnDirection': 0.0})
            }


            fork {
                GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [1714.0, 501.0, -2471.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [1714.0, 501.0, -2471.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            } {
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk89', 'IsCloseMessageDialog': True})
            }


            fork {
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
            } {
                Npc_Goron006.Demo_TurnAndLookToObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 2, 'IsValid': True})
            }

            EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk90'})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk91'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Pain_Talk', 'MessageId': 'EventFlowMsg/Npc_Goron006:talk04'})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk67', 'ASName': 'Act_Pain_Wait'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_Activated', 'IsWaitFinish': True})
        } else {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk16'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_Ready_NPC006_First', 'IsWaitFinish': True})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk81'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk82'})
        RemainsFire[RemainsFire_Round].Demo_AnimMatrixDriven({'ASName': 'FieldMove', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsChangeable': False, 'StartFrame': 900.0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1819.9775390625, 'Pattern1PosY': 596.0675048828125, 'Pattern1PosZ': -2465.500732421875, 'Pattern1AtX': 1823.435791015625, 'Pattern1AtY': 597.4354858398438, 'Pattern1AtZ': -2466.243896484375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk83'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk84'})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk85'})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk04', 'ASName': 'Act_Pain_Talk'})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk06', 'ASName': 'Act_Pain_Wait'})
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk00'})
        goto Event70
    }
}

void BurudoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Goron006.IsOnInstEventFlag() {
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk01'})
        } else {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk45'})
        }
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk17'})
      case [2, 3, 4, 5]:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk16'})
      case [6, 7]:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk19'})
    }
}

void Storage_FireRelic_Burudo() {

    call BurudoHello()

    if !EventSystemActor.RandomChoice2() {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk92'})
    } else {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk69'})
    }
}

void GoDeathMt_FireRelic_Burudo() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_BurudoThankYouGoods'}) {

        call BurudoThankYouGoods()

    }
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk67', 'ASName': 'Act_Pain_Wait'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk117'})
}

void Finish_FireRelic_Burudo() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'MsterSword_TalkLv', 'Value': 1, 'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_Goron006'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk23'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1985.8450927734375, 'Pattern1PosY': 648.231201171875, 'Pattern1PosZ': -2675.01708984375, 'Pattern1AtX': 2057.771728515625, 'Pattern1AtY': 692.6943359375, 'Pattern1AtZ': -2661.933837890625, 'Pattern1Fovy': 50.00001907348633, 'StartCalcOnly': True, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'G-2', 'WarpDestPosName': 'BurudoFront'})
    Npc_Goron006.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk39', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk44', 'IsCloseMessageDialog': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Goron020_2[YunBo_Finished].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Pleasure', 'IsOnlyFace': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1702.3525390625, 'Pattern1PosY': 500.5271911621094, 'Pattern1PosZ': -2446.02001953125, 'Pattern1AtX': 1707.8897705078125, 'Pattern1AtY': 497.638916015625, 'Pattern1AtZ': -2449.4140625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_TBox_Appear'})
    }

    Npc_Goron006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'TurnDirection': 80.0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0]})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1706.2330322265625, 'Pattern1PosY': 504.0113525390625, 'Pattern1PosZ': -2444.327880859375, 'Pattern1AtX': 1714.617919921875, 'Pattern1AtY': 502.3267517089844, 'Pattern1AtZ': -2446.563232421875, 'Pattern1Fovy': 50.00001907348633, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Goron006.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk80', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
    Npc_Goron020_2[YunBo_Finished].Demo_ChangeEmotion({'IsWaitFinish': True, 'IsOnlyFace': True, 'EmotionType': 'Normal'})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'Count': 30.0})
    Npc_Goron006.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
    Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_Goron006'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk51', 'IsCloseMessageDialog': False})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {

        fork {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 0, 'ActorName': ''})
            Npc_Goron020_2[YunBo_Finished].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Pleasure', 'IsOnlyFace': True})
        } {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk50', 'IsCloseMessageDialog': True})
        }

    } else {

        call Burudo_MSword()

    }
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Fire_Relic', 'ForceRunTelop': True, 'StepName': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Finish_FireRelic_Burudo_Near() {
    Npc_Goron006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron006:near01', 'DispFrame': 300, 'IsChecked': True})
}

void Burudo_MSword() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 4}) {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk55'})
        Event142:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk52', 'IsCloseMessageDialog': False})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 3}) {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk54'})
        goto Event142
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 2}) {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk53'})
    }
    goto Event142
}

void BurudoHello2() {
    if Npc_Goron006.IsOnInstEventFlag() {
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk56'})
        } else {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk57'})
        }
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk17'})
      case [2, 3, 4, 5, 6, 7]:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk16'})
    }
}

void Ready_FireRelic_Burudo_Near() {
    Npc_Goron006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron006:near00', 'DispFrame': 300, 'IsChecked': True})
}

void Camera_TowardBridge() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1697.447998046875, 'Pattern1PosY': 501.3611755371094, 'Pattern1PosZ': -2439.416015625, 'Pattern1AtX': 1708.2152099609375, 'Pattern1AtY': 498.9681091308594, 'Pattern1AtZ': -2451.5185546875, 'Pattern1Fovy': 50.00001907348633, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'MotionMode': 0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void GoGoronCity_FireRelic_Burudo() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk93'})

    call BurudoThankYouGoods()

    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk113'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk98', 'IsCloseMessageDialog': True})
    Npc_Goron006.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    Npc_Goron006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsConfront': True, 'ObjectId': 2, 'TurnPosition': [1634.3399658203125, 561.6799926757812, -2532.489990234375], 'TurnDirection': 0.0})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk72', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'ObjectId': 1, 'TurnPosition': [1634.3399658203125, 561.6799926757812, -2532.489990234375], 'TurnDirection': 0.0, 'FaceId': 2})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'ObjectId': 1, 'TurnPosition': [1634.3399658203125, 561.6799926757812, -2532.489990234375], 'TurnDirection': 0.0, 'FaceId': 2, 'IsTurnToLookAtPos': False, 'IsWaitFinish': True, 'IsUseSlowTurn': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 40.00001525878906, 'Count': 150.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 1704.6099853515625, 'Pattern1PosY': 504.7200012207031, 'Pattern1PosZ': -2451.7900390625, 'Pattern1AtX': 1702.1199951171875, 'Pattern1AtY': 507.3699951171875, 'Pattern1AtZ': -2454.780029296875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'Volume': 0.0, 'ExceptGroups': '', 'FadeInSec': 5.0, 'StartDelaySec': 0.0, 'FadeOutSec': 5.0})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
    }

    EventSystemActor.Demo_WarpPlayer({'WarpDestPosName': 'BurudoFront', 'WarpDestMapName': 'G-2', 'IsWaitFinish': True})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'ObjectId': 1, 'TurnPosition': [1634.3399658203125, 561.6799926757812, -2532.489990234375], 'TurnDirection': 0.0, 'FaceId': 2, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': 1, 'ASName': 'Talk'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 1, 'DemoName': 'Demo309_2', 'EntryPointName': 'HerosMemoryStart_Goron'})
    Npc_Goron006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 1, 'IsConfront': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})

    fork {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
    } {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk114'})
    }

    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk115'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk103', 'ASName': ''})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Pain_Talk', 'MessageId': 'EventFlowMsg/Npc_Goron006:talk04'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk06', 'ASName': 'Act_Pain_Wait'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Pain_Wait', 'MessageId': 'EventFlowMsg/Npc_Goron006:talk116'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk117'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_GoGoronCity'})
}

void Bridge_Npc_Goron006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_BurudoThankYouGoods'}) {

        call BurudoThankYouGoods()

    }
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk67', 'ASName': 'Act_Pain_Wait'})
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk107'})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron006_NotTell'}) {
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk119'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron006_NotTell', 'IsWaitFinish': True})
            Event504:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk108'})
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron006_Tell', 'IsWaitFinish': True})
        } else {
            goto Event504
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron006_Tell'}) {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk118'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron006_Tell', 'IsWaitFinish': True})
        Event503:
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk109'})
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron006_NotTell', 'IsWaitFinish': True})
    } else {
        goto Event503
    }
}

void BurudoThankYouGoods() {
    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk95'})
    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Cook_C_15', 'Count': 3}) {

        call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Animal_Insect_X', 'CookMaterial_03': 'Item_Enemy_00', 'SetNum': 3})

        EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_BurudoThankYouGoods', 'IsWaitFinish': True})
    } else {
        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk96'})
    }
}
