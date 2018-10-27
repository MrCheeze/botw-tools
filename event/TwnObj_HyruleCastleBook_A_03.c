-------- EventFlow: TwnObj_HyruleCastleBook_A_03 --------

Actor: Starter
entrypoint: None()
actions: ['Demo_OpenMessageDialogOfUnique']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Starter.Demo_OpenMessageDialogOfUnique({'IsWaitFinish': True, 'MstxtName': 'TwnObj_HyruleCastleBook_A_03'})
}
