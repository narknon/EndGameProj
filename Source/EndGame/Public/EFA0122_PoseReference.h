#pragma once
#include "CoreMinimal.h"
#include "EFA0122_PoseReference.generated.h"

UENUM(BlueprintType)
enum class EFA0122_PoseReference : uint8 {
    PlaceOnCharacter,
    LiftCharacter,
    GrabContainer,
    LiftContainer,
    EFA0122_MAX UMETA(Hidden),
};

