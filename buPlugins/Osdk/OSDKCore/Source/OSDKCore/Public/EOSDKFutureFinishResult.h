#pragma once
#include "CoreMinimal.h"
#include "EOSDKFutureFinishResult.generated.h"

UENUM(BlueprintType)
enum class EOSDKFutureFinishResult : uint8 {
    Ready,
    Cancelled,
    Failed,
};

