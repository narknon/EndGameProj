#pragma once
#include "CoreMinimal.h"
#include "ERouteSearchPriority.generated.h"

UENUM(BlueprintType)
enum class ERouteSearchPriority : uint8 {
    SEARCH_PRIORITY_LOW,
    SEARCH_PRIORITY_NORMAL,
    SEARCH_PRIORITY_HIGH,
    SEARCH_PRIORITY_IMMEDIATE,
    SEARCH_PRIORITY_MAX UMETA(Hidden),
};

