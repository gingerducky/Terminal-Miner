#include "rig.h"
#include <stdio.h>

const double CPUHashRates[] = {0.0, 5.0, 20.0, 50.0, 100.0};
const double GPUHashRates[] = {0.0, 50.0, 150.0, 400.0, 1000.0};
const double RAMEfficiency[] = {0.0, 0.8, 1.0, 1.2, 1.5};

const MBProperties MBProps[] = {
    {0,0,0},
    {1,1,2},
    {1,2,4},
    {1,4,8},
    {2,6,16}
};

double calculateHashRate(Rig *r) {
    double base = CPUHashRates[r->cpu] + GPUHashRates[r->gpu];
    return base * RAMEfficiency[r->ram];
}

void printRig(Rig *r) {
    printf("=== Rig Info ===\n");
    printf("CPU Type: %d, Hash Rate: %.2f H/s\n", r->cpu, CPUHashRates[r->cpu]);
    printf("GPU Type: %d, Hash Rate: %.2f H/s\n", r->gpu, GPUHashRates[r->gpu]);
    printf("RAM Type: %d, Efficiency: %.2fx\n", r->ram, RAMEfficiency[r->ram]);
    MBProperties mb = MBProps[r->mb];
    printf("Motherboard Type: %d, Max CPUs: %d, Max GPUs: %d, Max RAM sticks: %d\n",
           r->mb, mb.maxCPUs, mb.maxGPUs, mb.maxRAMSticks);
    printf("Level: %d\n", r->level);
    printf("Mining: %s\n", r->isMining ? "Yes" : "No");
    printf("Total Effective Hash Rate: %.2f H/s\n", calculateHashRate(r));
    printf("================\n");
}