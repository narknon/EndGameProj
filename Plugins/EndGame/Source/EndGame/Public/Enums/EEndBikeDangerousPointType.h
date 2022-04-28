#pragma once
#include "CoreMinimal.h"
#include "EEndBikeDangerousPointType.generated.h"

UENUM()
enum class EEndBikeDangerousPointType {
    None,
    DamageSource,
    AnimNotify,
    LockOnMarker,
};

