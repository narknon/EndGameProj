#pragma once
#include "CoreMinimal.h"
#include "EEndGameScenarioType.generated.h"

UENUM(BlueprintType)
enum class EEndGameScenarioType : uint8 {
    SCENARIO_END,
    SCENARIO_END_PLUS,
    SCENARIO_MAX UMETA(Hidden),
};

