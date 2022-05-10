#pragma once
#include "CoreMinimal.h"
#include "EEndSituationTriggerType.generated.h"

UENUM()
enum class EEndSituationTriggerType {
    BoxOverlap,
    BoxOverlapDirection,
    BoxOverlapDirectionBoth,
    TargetIcon,
};

