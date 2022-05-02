#pragma once
#include "CoreMinimal.h"
#include "EAIPCTargetAvailableStatus.generated.h"

UENUM()
enum class EAIPCTargetAvailableStatus {
    Available,
    Sleep,
    DefenceStatus,
    FarDefenceActor,
};

