-------- EventFlow: AutoPlacement_Enemy_Golem_Little --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['EcoAreaActorName', 'GroundNorm', 'RouteDistance', 'WaterDepth', 'TimeType']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Golem_Little'})
        Event10:
        && !AutoPlacement.TimeType()
        && AutoPlacement.GroundNorm({'Angle': 10.0})
        && !AutoPlacement.WaterDepth({'Depth': 0.0})
        && AutoPlacement.RouteDistance({'Distance': 15.0}) {
            AutoPlacement.CreateData({'GroupRadius': 8.0, 'RideList': '', 'MaxNum': 3, 'MinNum': 3, 'OffsetPosY': 0.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Golem_Little_Ice'}) {
            goto Event10
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Golem_Little_Fire'}) {
            goto Event10
        }
    }

}
