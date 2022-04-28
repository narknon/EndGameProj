#pragma once
#include "CoreMinimal.h"
#include "EEndAnimationType.generated.h"

UENUM()
enum class EEndAnimationType {
    BodySequence,
    BodyBlendSpace,
    AdditiveSequence,
    AdditiveBlendSpace,
};

