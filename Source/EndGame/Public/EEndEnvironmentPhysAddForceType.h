#pragma once
#include "CoreMinimal.h"
#include "EEndEnvironmentPhysAddForceType.generated.h"

UENUM(BlueprintType)
enum class EEndEnvironmentPhysAddForceType : uint8 {
    OriginToSphere,
    OriginToCone,
};

