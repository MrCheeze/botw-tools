-------- EventFlow: AutoPlacementNear_Enemy_Dragon --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['EcoAreaActorName', 'RailDistance', 'CheckGameData', 'TimeType']
params: None

void EntryPoint0() {
    if AutoPlacement.CheckGameData({'Label': 'Npc_Kakariko001_TalkEnd'})
    && !AutoPlacement.CheckGameData({'Label': 'IsInHyruleCastleArea'}) {

        fork {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Ice'})
            && AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Ice_ReturnToSky'})
            && !AutoPlacement.RailDistance({'RailType': 0, 'NearOnly': True, 'RailName': 'Dragon_Ice_MainRoute', 'Distance': 2000.0})
            && AutoPlacement.TimeType() in [0, 5, 6, 7]
            && !AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Ice_Appearance_Today'}) {
                Event55:
                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Fire'})
            && !AutoPlacement.RailDistance({'RailType': 0, 'NearOnly': True, 'RailName': 'Dragon_Fire_MainRoute', 'Distance': 2000.0})
            && AutoPlacement.TimeType() in [0, 5, 6, 7]
            && !AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Fire_Appearance_Today'}) {
                goto Event55
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Electric'})
            && !AutoPlacement.RailDistance({'RailType': 0, 'RailName': 'Dragon_Electric_Start_LakeFloria', 'NearOnly': False, 'Distance': 1200.0})
            Event37:
            && AutoPlacement.TimeType() in [0, 5, 6, 7]
            Event54:
            && !AutoPlacement.CheckGameData({'Label': 'Enemy_Dragon_Electric_Appearance_Today'}) {
                goto Event55
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Electric'})
            && !AutoPlacement.RailDistance({'RailType': 0, 'RailName': 'Dragon_Electric_Start_LakeHylia', 'NearOnly': False, 'Distance': 1200.0}) {
                goto Event37
            }
        } {
            if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Dragon_Electric'})
            && !AutoPlacement.RailDistance({'RailType': 0, 'NearOnly': True, 'RailName': 'Dragon_Electric_SubRoute_HighlandGerudo', 'Distance': 1000.0}) {
                goto Event54
            }
        }

    }
}
