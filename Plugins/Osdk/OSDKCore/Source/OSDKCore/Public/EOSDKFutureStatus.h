#pragma once
#include "CoreMinimal.h"
#include "EOSDKFutureStatus.generated.h"

UENUM(BlueprintType)
enum class EOSDKFutureStatus : uint8 {
    Invalid,
    Pending,
    Ready,
    Cancelled,
    Failed,
};

