#pragma once
#include "CoreMinimal.h"
#include "EAIPCTerrainSensorStatus.generated.h"

UENUM()
enum class EAIPCTerrainSensorStatus {
    Normal,
    NearWall,
    Narrow,
};

