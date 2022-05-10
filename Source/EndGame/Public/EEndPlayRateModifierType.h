#pragma once
#include "CoreMinimal.h"
#include "EEndPlayRateModifierType.generated.h"

UENUM()
enum class EEndPlayRateModifierType {
    Field,
    Battle,
    CharaSpec,
    Notify,
    Debug,
};

