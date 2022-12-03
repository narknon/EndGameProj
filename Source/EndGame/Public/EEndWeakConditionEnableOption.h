#pragma once
#include "CoreMinimal.h"
#include "EEndWeakConditionEnableOption.generated.h"

UENUM(BlueprintType)
enum class EEndWeakConditionEnableOption : uint8 {
    ParameterReset,
    ParameterKeep,
};

