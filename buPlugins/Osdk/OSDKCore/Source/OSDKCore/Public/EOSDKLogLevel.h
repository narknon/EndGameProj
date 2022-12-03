#pragma once
#include "CoreMinimal.h"
#include "EOSDKLogLevel.generated.h"

UENUM(BlueprintType)
enum class EOSDKLogLevel : uint8 {
    LEVEL_OFF,
    LEVEL_FATAL,
    LEVEL_ERROR,
    LEVEL_WARN,
    LEVEL_INFO,
    LEVEL_DEBUG,
    LEVEL_MAX UMETA(Hidden),
};

