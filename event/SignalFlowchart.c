-------- EventFlow: SignalFlowchart --------

Actor: SignalFlowchart
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_LoopEnd']
queries: ['CheckAreaTransition', 'CheckPlayerState', 'WhatCurrentItem', 'CheckFlag', 'CheckEquipArmorSeriesType', 'CheckDuringBloodyMoon', 'HasPorchItem', 'CheckGameDataInt', 'CheckEquipment']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void PlayerOnGround() {
    Event46:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event46
}

void AproachFirstFieldCliff() {
    Event47:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 46, 'PostAreaNo': -46}) {
            if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 46, 'PostAreaNo': 47}) {
                Event11:
                SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                Event8:
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event47
            } else
            if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 46, 'PostAreaNo': 50}) {
                goto Event11
            } else {
                Event10:
                SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            }
            goto Event8
        } else
        if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 47, 'PostAreaNo': -47}) {
            if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 47, 'PostAreaNo': 46}) {
                goto Event11
            } else
            if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 47, 'PostAreaNo': 50}) {
                goto Event11
            } else {
                goto Event10
            }
            goto Event8
        } else {
            goto Event11
        }
    } else {
        goto Event11
    }
}

void PlayerNakedness() {
    Event48:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4})
    && EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event48
}

void PlayerUseStopTimer() {
    Event28:
    switch EventSystemActor.WhatCurrentItem() {
      case [0, 1, 2, 3, 5, 6, 7, 8]:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        Event27:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event28
      case 4:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        goto Event27
    }
}

void IsPlayed_Demo103_0() {
    Event38:
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo103_0'})
    && EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event38
}

void Gerudo_CostumeCheck() {
    Event51:
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Event53:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        Event54:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event51
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Mans_Clothes_Shop'}) {
        goto Event53
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    }
    goto Event54
}

void PlayerDiveWater() {
    Event58:
    if EventSystemActor.CheckPlayerState({'PlayerState': 15}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event58
}

void PlayerNonBattle() {
    Event63:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 16}) {
            Event61:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        }
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event63
    } else {
        goto Event61
    }
}

void Demo318_0() {
    Event68:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 16}) {
            Event66:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            Event64:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event68
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 17}) {
            goto Event66
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        }
        goto Event64
    } else {
        goto Event66
    }
}

void BloodyMoonRelief() {
    Event70:
    if !EventSystemActor.CheckDuringBloodyMoon() {
        if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefOn'}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        }
        Event75:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event70
    } else
    if !EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefOn'}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    }
    goto Event75
}

void PlayerNakednessAll() {
    Event82:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4})
    && EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event82
}

void NakedIsland() {
    Event86:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            Event84:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event83:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event86
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event83
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 17}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event83
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 19}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event83
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 25}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        } else {
            goto Event84
        }
        goto Event83
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event83
    }
}

void Relief_Landing() {
    Event94:
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event94
}

void RinelMt_Check_EArrow() {
    Event96:
    if EventSystemActor.HasPorchItem({'PorchItemName': 'ElectricArrow', 'Count': 20}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event96
}

void PlayerRideOn() {
    Event103:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event103
}

void Gerudo_CostumeCheck_Cha() {
    Event104:
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event104
}

void PlayerOnGround_Demo348_1() {
    Event126:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            Event125:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        }
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event126
    } else {
        goto Event125
    }
}

void HorseRace_Goal() {
    Event131:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3})
    && EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_HorseRace_NumPassFence', 'Operator': 'GreaterThanOrEqualTo', 'Value': 10}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event131
}

void Check_StepOnTheFlowers() {
    Event137:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4})
    && EventSystemActor.CheckFlag({'FlagName': 'DontDamageFlower_IsMiss'}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event137
}

void HorseRace_Gate() {
    Event143:
    if EventSystemActor.CheckPlayerState({'PlayerState': 22}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event143
}

void Gaman_Failed_Check() {
    Event156:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event153:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event152:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event156
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        goto Event153
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 7}) {
        goto Event153
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    goto Event152
}

void StatueOfZora_Check() {
    Event160:
    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_049'}) {
        Event158:
        if EventSystemActor.CheckPlayerState({'PlayerState': 23}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': True, 'Value': 1})
        } else {
            Event159:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        }
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event160
    } else
    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_050'}) {
        goto Event158
    } else {
        goto Event159
    }
}

void PlayerStable() {
    Event168:
    if EventSystemActor.CheckPlayerState({'PlayerState': 21}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event168
}

void PlayerFalls() {
    Event172:
    if EventSystemActor.CheckPlayerState({'PlayerState': 20}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
    goto Event172
}
