-------- EventFlow: TipsField --------

Actor: TipsSystemActor
entrypoint: None()
actions: ['Demo_TipsDisplayOK', 'Demo_TipsDisplayNG']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Arrive_Gerudo() {
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_Gerudo'}) {
        Event1:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_GerudoDesert_Entrance'}) {
        goto Event1
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_Oasis'}) {
        goto Event1
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_Assassin'}) {
        goto Event1
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_GerudoHatago'}) {
        goto Event1
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_MapTower04'}) {
        goto Event1
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void Arrive_DeathMountain() {
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_Goron'}) {
        Event10:
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_SouthMine'}) {
        goto Event10
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_DeathMountain_Entrance'}) {
        goto Event10
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_GoronBridge'}) {
        goto Event10
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_DeathMountainHatago'}) {
        goto Event10
    } else
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_MapTower10'}) {
        goto Event10
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void Arrive_Kakariko() {
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_Kakariko'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}

void Arrive_Hateno() {
    if EventSystemActor.CheckGameDataInt({'Value': 0, 'Operator': 'GreaterThan', 'GameDataIntName': 'Location_Hateno'}) {
        TipsSystemActor.Demo_TipsDisplayOK({'IsWaitFinish': True})
    } else {
        TipsSystemActor.Demo_TipsDisplayNG({'IsWaitFinish': True})
    }
}
