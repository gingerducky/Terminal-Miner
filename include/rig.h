#pragma once

typedef enum {
    OFFLINE,
    MINING,
    DISABLED,
    UPGRADING
} RigState;

typedef enum {
    CPU_UNKNOWN = 0,
    CPU_BASIC,
    CPU_INTERMEDIATE,
    CPU_ADVANCED,
    CPU_EXTREME
} CPUType;

typedef enum {
    GPU_UNKNOWN = 0,
    GPU_BASIC,
    GPU_INTERMEDIATE,
    GPU_ADVANCED,
    GPU_EXTREME
} GPUType;

typedef enum {
    RAM_UNKNOWN = 0,
    RAM_BASIC,       // 4-8 GB
    RAM_INTERMEDIATE,// 16 GB
    RAM_ADVANCED,    // 32 GB
    RAM_EXTREME      // 64 GB+
} RAMType;

typedef enum {
    MB_UNKNOWN = 0,
    MB_BASIC,
    MB_INTERMEDIATE,
    MB_ADVANCED,
    MB_EXTREME
} MotherboardType;

typedef struct {
    CPUType cpu;
    GPUType gpu;
    RAMType ram;
    MotherboardType mb;
    double hashRate;
    int level;
    int isMining;
} Rig;

double calculateHashRate(Rig *r);
void printRig(Rig *r);

extern const double CPUHashRates[];
extern const double GPUHashRates[];
extern const double RAMEfficiency[];

typedef struct {
    int maxCPUs;
    int maxGPUs;
    int maxRAMSticks;
} MBProperties;

extern const MBProperties MBProps[];