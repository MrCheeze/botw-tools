-------- EventFlow: DgnObj_DLC_Weapon_Sword_502 --------

Actor: DgnObj_DLC_Weapon_Sword_502
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_StopChargeChemicalWeapon']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    DgnObj_DLC_Weapon_Sword_502.Demo_StopChargeChemicalWeapon({'IsWaitFinish': True})

    call SignboardWood.Demo_LookSignboard()

    DgnObj_DLC_Weapon_Sword_502.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/DgnObj_DLC_Weapon_Sword_502:Sleep'})
}
