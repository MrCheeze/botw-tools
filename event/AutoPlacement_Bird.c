-------- EventFlow: AutoPlacement_Bird --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'GroundMat', 'TreeRate', 'WaterSurface', 'EcoAreaActorName', 'WaterDepth', 'CheckGameData', 'WaterSubMat']
params: None

void EntryPoint0() {
    if AutoPlacement.GroundNorm({'Angle': 50.0}) {

        fork {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Hawk_A'}) {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'RideList': '', 'OffsetPosY': 50.0, 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_WildDuck_A'})
            && !AutoPlacement.WaterSubMat()
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.WaterSurface()
            && AutoPlacement.WaterDepth({'Depth': 0.6000000238418579}) {
                AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 3, 'GroupRadius': 5.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Heron_A'})
            && !AutoPlacement.WaterDepth({'Depth': 0.30000001192092896})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && !AutoPlacement.WaterDepth({'Depth': 0.4000000059604645})
            && AutoPlacement.GroundMat() in [0, 3, 5, 8, 12] {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Heron_B'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.GroundMat() in [0, 3, 5, 12] {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 3, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Gull_A'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.WaterSurface() {
                AutoPlacement.CreateData({'GroupRadius': 10.0, 'RideList': '', 'OffsetPosY': 10.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 3, 'MinNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Ptarmigan_A'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.GroundMat() in [9, 10, 14] {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Ptarmigan_B'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.GroundMat() in [0, 1, 2, 12] {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MaxNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Crow_A'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.TreeRate({'Rate': 0.05000000074505806}) {
                AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'GroupRadius': 15.0, 'MaxNum': 3})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_LittleBird_A'})
            && AutoPlacement.TreeRate({'Rate': 0.10000000149011612}) {
                AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 4, 'GroupRadius': 8.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_LittleBird_B'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.TreeRate({'Rate': 0.10000000149011612})
            && !AutoPlacement.WaterDepth({'Depth': 0.05000000074505806}) {
                AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 4, 'GroupRadius': 6.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_LittleBird_C'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && !AutoPlacement.WaterDepth({'Depth': 0.05000000074505806}) {
                AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 4, 'GroupRadius': 8.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_LittleBird_D'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.TreeRate({'Rate': 0.20000000298023224})
            && !AutoPlacement.WaterDepth({'Depth': 0.05000000074505806}) {
                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2, 'MaxNum': 4})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_LittleBird_E'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && !AutoPlacement.WaterDepth({'Depth': 0.05000000074505806}) {
                AutoPlacement.CreateData({'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 4, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_LittleBird_F'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && !AutoPlacement.WaterDepth({'Depth': 0.05000000074505806}) {
                AutoPlacement.CreateData({'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 4, 'GroupRadius': 6.0, 'EquipWeaponActorCount': -1, 'Mimicry': False, 'MinNum': 2})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Pigeon_A'})
            && AutoPlacement.TreeRate({'Rate': 0.10000000149011612}) {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Animal_Pigeon_B'})
            && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
            && AutoPlacement.TreeRate({'Rate': 0.30000001192092896}) {
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 10.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 2, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        }

    }
}
