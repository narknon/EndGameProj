#pragma once
#include "CoreMinimal.h"
#include "RCSCutConnect.generated.h"

UENUM(BlueprintType)
enum class RCSCutConnect : uint8 {
    None,
    InputWait,
    LeaveEyePos,
};

