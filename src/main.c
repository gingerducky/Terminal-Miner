#include <stdio.h>
#include "menus.h"
#include "rig.h"

int main(void) {
    Rig rig1 = {
        CPU_INTERMEDIATE,
        GPU_ADVANCED,
        RAM_ADVANCED,
        MB_ADVANCED,
        CPUHashRates[CPU_INTERMEDIATE] + GPUHashRates[GPU_ADVANCED],
        1,
        1
    };

    printRig(&rig1);
    //mainScreen();

    return 0;
}