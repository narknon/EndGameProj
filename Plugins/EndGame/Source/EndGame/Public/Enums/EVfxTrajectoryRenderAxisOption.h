#pragma once
#include "CoreMinimal.h"
#include "EVfxTrajectoryRenderAxisOption.generated.h"

UENUM()
enum class EVfxTrajectoryRenderAxisOption : uint8 {
    EVTRAO_RightVector,
    EVTRAO_UpVector,
    EVTRAO_BillBoard,
    EVTRAO_MAX UMETA(Hidden),
};

