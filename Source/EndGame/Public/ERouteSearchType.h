#pragma once
#include "CoreMinimal.h"
#include "ERouteSearchType.generated.h"

UENUM(BlueprintType)
enum class ERouteSearchType : uint8 {
    SEARCH_TYPE_GROUND,
    SEARCH_TYPE_AERIAL,
    SEARCH_TYPE_OTHER,
    SEARCH_TYPE_MAX UMETA(Hidden),
};

