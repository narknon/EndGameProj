#pragma once
#include "CoreMinimal.h"
#include "RCSCutConnect.generated.h"

UENUM()
enum class RCSCutConnect : uint8 {
    None,
    InputWait,
    LeaveEyePos,
};

