-------- EventFlow: AutoPlacement_Enemy_Wizzrobe --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'AppearWeatherRate']
queries: ['GroundNorm', 'WaterDepth', 'RouteDistance', 'EcoAreaActorName', 'CheckGameData', 'CheckPouchItemCountFromActor', 'TimeType']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Wizzrobe_Fire'})
        && !AutoPlacement.CheckPouchItemCountFromActor({'Count': 1, 'Actor': 'Weapon_Sword_060'}) {
            Event22:
            AutoPlacement.AppearWeatherRate({'HeavyRain': 1.0, 'Snow': 1.0, 'HeavySnow': 1.0, 'ThunderStorm': 1.0, 'ThunderRain': 1.0, 'Cloudy': 0.0, 'Bluesky': 0.0, 'Rain': 1.0, 'BlueSkyRain': 1.0})
            Event8:
            if AutoPlacement.CheckGameData({'Label': 'Npc_Kakariko001_TalkEnd'})
            && AutoPlacement.TimeType() == 4
            && AutoPlacement.GroundNorm({'Angle': 10.0})
            && !AutoPlacement.WaterDepth({'Depth': 0.0})
            && AutoPlacement.RouteDistance({'Distance': 15.0}) {
                AutoPlacement.CreateData({'RideList': '', 'OffsetPosY': 8.0, 'MinNum': 1, 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Wizzrobe_Fire_Senior'})
        && !AutoPlacement.CheckPouchItemCountFromActor({'Count': 1, 'Actor': 'Weapon_Sword_048'}) {
            goto Event22
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Wizzrobe_Electric'})
        && !AutoPlacement.CheckPouchItemCountFromActor({'Count': 1, 'Actor': 'Weapon_Sword_062'}) {
            Event21:
            AutoPlacement.AppearWeatherRate({'Rain': 0.0, 'HeavyRain': 0.0, 'Snow': 0.0, 'HeavySnow': 0.0, 'ThunderStorm': 0.0, 'ThunderRain': 0.0, 'Bluesky': 1.0, 'Cloudy': 1.0, 'BlueSkyRain': 1.0})
            goto Event8
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Wizzrobe_Electric_Senior'})
        && !AutoPlacement.CheckPouchItemCountFromActor({'Count': 1, 'Actor': 'Weapon_Sword_050'}) {
            goto Event21
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Wizzrobe_Ice'})
        && !AutoPlacement.CheckPouchItemCountFromActor({'Actor': 'Weapon_Sword_061', 'Count': 1}) {
            Event20:
            AutoPlacement.AppearWeatherRate({'Rain': 0.0, 'HeavyRain': 0.0, 'Snow': 0.0, 'HeavySnow': 0.0, 'ThunderStorm': 0.0, 'ThunderRain': 0.0, 'Bluesky': 1.0, 'Cloudy': 1.0, 'BlueSkyRain': 1.0})
            goto Event8
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Wizzrobe_Ice_Senior'})
        && !AutoPlacement.CheckPouchItemCountFromActor({'Count': 1, 'Actor': 'Weapon_Sword_049'}) {
            goto Event20
        }
    }

}
