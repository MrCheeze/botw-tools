-------- EventFlow: Npc_OasisTeacher --------

Actor: Npc_OasisTeacher
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_PlayASForDemo', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisStudent_C
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangePostureWithAS', 'Demo_LookAtObject', 'Demo_ChangePosture', 'Demo_ReturnAnchor']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckTimeType', 'CheckFlag', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisStudent_A
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangePostureWithAS', 'Demo_LookAtObject', 'Demo_ChangePosture', 'Demo_ReturnAnchor']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisStudent_B
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangePostureWithAS', 'Demo_ChangeEquipState', 'Demo_LookAtObject', 'Demo_ChangePosture']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisTeacher_first'}) {
        switch Npc_OasisTeacher.CheckActorAction13() {
          case 0:
            if Npc_OasisTeacher.IsOnInstEventFlag() {
                Event68:
                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk14'})
            } else {

                call hello()

                goto Event68
            }
          case 1:
            if Npc_OasisTeacher.IsOnInstEventFlag() {
                Event12:
                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk08'})
            } else {

                call hello_teacher()

                goto Event12
            }
          case 2:
            if Npc_OasisTeacher.IsOnInstEventFlag() {
                Event63:
                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk11'})
            } else {

                call hello()

                goto Event63
            }
          case [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CookingSchoolMT'}) {
                if Npc_OasisTeacher.IsOnInstEventFlag() {
                    Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk17', 'ASName': ''})
                } else {

                    call hello_teacher()

                    Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk12', 'ASName': ''})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk13', 'ASName': ''})
                        Event67:
                        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk18', 'ASName': ''})
                    } else {
                        goto Event67
                    }
                }
            } else
            if Npc_OasisTeacher.IsOnInstEventFlag() {
                Event294:
                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk31', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk40', 'ASName': ''})
                } else {
                    Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk41', 'ASName': ''})
                }
            } else {

                call hello_teacher()

                goto Event294
            }
        }
    } else
    switch Npc_OasisTeacher.CheckActorAction13() {
      case [0, 2]:

        call hello()

        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk39', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisTeacher_first', 'IsWaitFinish': True})
      case [1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:

        call hello_teacher()

        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk39', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisTeacher_first', 'IsWaitFinish': True})
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisTeacher_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisTeacher_lesson'}) {
            Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk23', 'ASName': ''})
            Event3:
            if !EventSystemActor.GeneralChoice2() {
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3880.53564453125, 'Pattern1PosY': 152.50181579589844, 'Pattern1PosZ': 2942.013427734375, 'Pattern1AtX': -3885.428955078125, 'Pattern1AtY': 151.8353271484375, 'Pattern1AtZ': 2943.310302734375, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisTeacher_lesson'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisTeacher_lesson2'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisTeacher_lesson3'}) {
                            switch EventSystemActor.RandomChoice3() {
                              case 0:

                                call 1st()

                              case 1:

                                call 2nd()

                              case 2:

                                call 3rd()

                            }
                        } else {
                            Event272:

                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': 'Npc_OasisStudent_B', 'ObjectId': 1, 'FaceId': 2})
                                Npc_OasisTeacher.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk32'})
                            } {
                                Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                                Npc_OasisStudent_A.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                            } {
                                Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                                Npc_OasisStudent_C.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                            } {
                                Npc_OasisStudent_B.Demo_ChangeEquipState({'EquipState': 'Invisible', 'IsWaitFinish': True})
                                Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                                Npc_OasisStudent_B.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                            }

                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.2939453125, 'Pattern1PosY': 153.51051330566406, 'Pattern1PosZ': 2950.2294921875, 'Pattern1AtX': -3886.106201171875, 'Pattern1AtY': 151.25526428222656, 'Pattern1AtZ': 2944.703125, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_A', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                            } {
                                Npc_OasisStudent_A.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                                Npc_OasisStudent_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk33'})
                                Npc_OasisStudent_A.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                            } {
                                Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                            }


                            call CameraForStudentC()


                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_A', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk34', 'ASName': 'Act_TeacherWait'})
                            } {
                                Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            }

                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3890.703857421875, 'Pattern1PosY': 152.66738891601562, 'Pattern1PosZ': 2946.80859375, 'Pattern1AtX': -3890.353271484375, 'Pattern1AtY': 152.5430145263672, 'Pattern1AtZ': 2946.554443359375, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2})

                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                            } {
                                Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_C.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                                Npc_OasisStudent_C.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk35'})
                                Npc_OasisStudent_C.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                            } {
                                Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                            }

                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.95263671875, 'Pattern1PosY': 152.3118896484375, 'Pattern1PosZ': 2938.650390625, 'Pattern1AtX': -3886.6083984375, 'Pattern1AtY': 151.5384979248047, 'Pattern1AtZ': 2942.72021484375, 'Pattern1Fovy': 40.00001525878906, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk36', 'ASName': 'Act_TeacherWait'})
                            } {
                                Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            }

                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.95751953125, 'Pattern1PosY': 152.83340454101562, 'Pattern1PosZ': 2948.938720703125, 'Pattern1AtX': -3886.456298828125, 'Pattern1AtY': 151.9759979248047, 'Pattern1AtZ': 2945.506591796875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                            } {
                                Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_B.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                                Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk37'})
                                Npc_OasisStudent_B.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                            }

                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3881.57421875, 'Pattern1PosY': 153.0064239501953, 'Pattern1PosZ': 2941.282470703125, 'Pattern1AtX': -3886.888671875, 'Pattern1AtY': 151.25526428222656, 'Pattern1AtZ': 2943.369873046875, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                            fork {
                                Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk38', 'ASName': 'Act_TeacherWait'})
                            } {
                                Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            } {
                                Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            }

                            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0, 'ReviseMode': 1})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OasisTeacher_lesson3'})
                        }
                    } else {
                        Event206:

                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': 'Npc_OasisStudent_B', 'ObjectId': 1, 'FaceId': 2})
                            Npc_OasisTeacher.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk24'})
                        } {
                            Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            Npc_OasisStudent_A.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                        } {
                            Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            Npc_OasisStudent_C.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                        } {
                            Npc_OasisStudent_B.Demo_ChangeEquipState({'EquipState': 'Invisible', 'IsWaitFinish': True})
                            Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                            Npc_OasisStudent_B.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.2939453125, 'Pattern1PosY': 153.51051330566406, 'Pattern1PosZ': 2950.2294921875, 'Pattern1AtX': -3886.106201171875, 'Pattern1AtY': 151.25526428222656, 'Pattern1AtZ': 2944.703125, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_A', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                        } {
                            Npc_OasisStudent_A.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                            Npc_OasisStudent_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk25'})
                            Npc_OasisStudent_A.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                        } {
                            Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        }


                        call CameraForStudentC()


                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_A', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk26', 'ASName': 'Act_TeacherWait'})
                        } {
                            Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3890.703857421875, 'Pattern1PosY': 152.66738891601562, 'Pattern1PosZ': 2946.80859375, 'Pattern1AtX': -3890.353271484375, 'Pattern1AtY': 152.5430145263672, 'Pattern1AtZ': 2946.554443359375, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2})

                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                        } {
                            Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_C.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                            Npc_OasisStudent_C.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk27'})
                            Npc_OasisStudent_C.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                        } {
                            Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.95263671875, 'Pattern1PosY': 152.3118896484375, 'Pattern1PosZ': 2938.650390625, 'Pattern1AtX': -3886.6083984375, 'Pattern1AtY': 151.5384979248047, 'Pattern1AtZ': 2942.72021484375, 'Pattern1Fovy': 40.00001525878906, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk28', 'ASName': 'Act_TeacherWait'})
                        } {
                            Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.95751953125, 'Pattern1PosY': 152.83340454101562, 'Pattern1PosZ': 2948.938720703125, 'Pattern1AtX': -3886.456298828125, 'Pattern1AtY': 151.9759979248047, 'Pattern1AtZ': 2945.506591796875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                        } {
                            Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_B.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                            Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk29'})
                            Npc_OasisStudent_B.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3881.57421875, 'Pattern1PosY': 153.0064239501953, 'Pattern1PosZ': 2941.282470703125, 'Pattern1AtX': -3886.888671875, 'Pattern1AtY': 151.25526428222656, 'Pattern1AtZ': 2943.369873046875, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                        fork {
                            Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk30', 'ASName': 'Act_TeacherWait'})
                        } {
                            Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        } {
                            Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        }

                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0, 'ReviseMode': 1})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OasisTeacher_lesson2'})
                    }
                } else {
                    Event13:

                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': 'Npc_OasisStudent_B', 'ObjectId': 1, 'FaceId': 2})
                        Npc_OasisTeacher.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                    } {
                        Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        Npc_OasisStudent_A.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                    } {
                        Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        Npc_OasisStudent_C.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                    } {
                        Npc_OasisStudent_B.Demo_ChangeEquipState({'EquipState': 'Invisible', 'IsWaitFinish': True})
                        Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                        Npc_OasisStudent_B.Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'SitOnObject'})
                    }

                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.2939453125, 'Pattern1PosY': 153.51051330566406, 'Pattern1PosZ': 2950.2294921875, 'Pattern1AtX': -3886.106201171875, 'Pattern1AtY': 151.25526428222656, 'Pattern1AtZ': 2944.703125, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_A', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                    } {
                        Npc_OasisStudent_A.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                        Npc_OasisStudent_A.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk02', 'IsCloseMessageDialog': True})
                        Npc_OasisStudent_A.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                    } {
                        Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    }

                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3882.84130859375, 'Pattern1PosY': 152.55130004882812, 'Pattern1PosZ': 2939.787841796875, 'Pattern1AtX': -3885.326171875, 'Pattern1AtY': 151.9759979248047, 'Pattern1AtZ': 2942.28955078125, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_A', 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk03', 'IsCloseMessageDialog': True, 'ASName': 'Act_TeacherWait'})
                    } {
                        Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    }


                    call CameraForStudentC()


                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                    } {
                        Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_C.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                        Npc_OasisStudent_C.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk04', 'IsCloseMessageDialog': True})
                        Npc_OasisStudent_C.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                    } {
                        Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Act_SitChair_Wait', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    }

                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.95263671875, 'Pattern1PosY': 152.3118896484375, 'Pattern1PosZ': 2938.650390625, 'Pattern1AtX': -3886.6083984375, 'Pattern1AtY': 151.5384979248047, 'Pattern1AtZ': 2942.72021484375, 'Pattern1Fovy': 40.00001525878906, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_C', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk05', 'IsCloseMessageDialog': True, 'ASName': 'Act_TeacherWait'})
                    } {
                        Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    }

                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.95751953125, 'Pattern1PosY': 152.83340454101562, 'Pattern1PosZ': 2948.938720703125, 'Pattern1AtX': -3886.456298828125, 'Pattern1AtY': 151.9759979248047, 'Pattern1AtZ': 2945.506591796875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisTeacher.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_TeacherWait'})
                    } {
                        Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_B.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                        Npc_OasisStudent_B.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_OasisTeacher', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisStudent_B.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk06', 'IsCloseMessageDialog': True})
                        Npc_OasisStudent_B.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                    }

                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3881.57421875, 'Pattern1PosY': 153.0064239501953, 'Pattern1PosZ': 2941.282470703125, 'Pattern1AtX': -3886.888671875, 'Pattern1AtY': 151.25526428222656, 'Pattern1AtZ': 2943.369873046875, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                    fork {
                        Npc_OasisTeacher.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisStudent_B', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk07', 'IsCloseMessageDialog': True, 'ASName': 'Act_TeacherWait'})
                    } {
                        Npc_OasisStudent_A.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_C.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    } {
                        Npc_OasisStudent_B.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_SitChair_Wait', 'MorphingFrame': -1.0})
                    }

                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0, 'ReviseMode': 1})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisTeacher_lesson', 'IsWaitFinish': True})
                }
            } else {
                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk09', 'IsCloseMessageDialog': True, 'ASName': ''})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkEmbarrass', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk10', 'ASName': ''})
            }
        } else {
            Npc_OasisTeacher.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            goto Event3
        }
    } else {

        call hello()

        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk39', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisTeacher_first', 'IsWaitFinish': True})
    }
}

void Near() {
    Npc_OasisTeacher.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:near00'})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk19'})
      case [2, 3, 4]:
        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk20'})
      case [5, 6, 7]:
        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk21'})
    }
}

void 3rd() {
    goto Event272
}

void 2nd() {
    goto Event206
}

void 1st() {
    goto Event13
}

void hello_teacher() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk42'})
      case [2, 3, 4]:
        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk43'})
      case [5, 6, 7]:
        Npc_OasisTeacher.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk44'})
    }
}

void CameraForStudentC() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3890.703857421875, 'Pattern1PosY': 152.66738891601562, 'Pattern1PosZ': 2946.80859375, 'Pattern1AtX': -3890.353271484375, 'Pattern1AtY': 152.5430145263672, 'Pattern1AtZ': 2946.554443359375, 'Pattern1Fovy': 44.99999237060547, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2})
}

void NearActorsTalk2() {

    fork {
        switch Npc_OasisStudent_A.CheckActorAction13() {
          case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12]:
            Npc_OasisStudent_A.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
          case [3, 13]:
            Npc_OasisStudent_A.Demo_ReturnAnchor({'IsWaitFinish': False})
        }
    } {
        switch Npc_OasisStudent_C.CheckActorAction13() {
          case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12]:
            Npc_OasisStudent_C.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
          case [3, 13]:
            Npc_OasisStudent_C.Demo_ReturnAnchor({'IsWaitFinish': False})
        }
    } {
        goto Event0
    }

}
