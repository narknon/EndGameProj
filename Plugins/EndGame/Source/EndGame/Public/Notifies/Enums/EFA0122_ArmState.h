#pragma once
#include "CoreMinimal.h"
#include "EFA0122_ArmState.generated.h"

UENUM(BlueprintType)
enum class EFA0122_ArmState : uint8 {
    Deactive,
    Idle,
    Grab,
    PlaceOnCharacter,
    EFA0122_MAX UMETA(Hidden),
};

