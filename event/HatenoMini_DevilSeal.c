-------- EventFlow: HatenoMini_DevilSeal --------

void Finish_TwnObj_DemonStatue_A_01_Talk() {

    call TwnObj_DemonStatue_A_01.Finish_DevilSeal()

}

void Ready_TwnObj_DemonStatue_A_01_Talk() {

    call TwnObj_DemonStatue_A_01.Ready_DevilSeal()

}

void GiveUtsuwa_TwnObj_DemonStatue_A_01_Talk() {

    call TwnObj_DemonStatue_A_01.GiveUtsuwa_DevilSeal()

}

void Ready_TwnObj_DemonStatue_A_01_Near() {
    Event5:

    call TwnObj_DemonStatue_A_01.Near()

}

void GiveUtsuwa_TwnObj_DemonStatue_A_01_Near() {
    goto Event5
}

void Finish_TwnObj_DemonStatue_A_01_Near() {
    goto Event5
}
