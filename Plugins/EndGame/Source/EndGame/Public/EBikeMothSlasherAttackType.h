#pragma once
#include "CoreMinimal.h"
#include "EBikeMothSlasherAttackType.generated.h"

UENUM()
enum class EBikeMothSlasherAttackType : uint8 {
    None,
    Default,
    Charge,
    Discharge,
    Phase2,
};

