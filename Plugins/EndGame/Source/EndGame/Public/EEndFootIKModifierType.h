#pragma once
#include "CoreMinimal.h"
#include "EEndFootIKModifierType.generated.h"

UENUM()
enum class EEndFootIKModifierType : uint8 {
    None,
    ForceDisableFootIK,
    HipControlOnly,
    DisableHipControl,
};

