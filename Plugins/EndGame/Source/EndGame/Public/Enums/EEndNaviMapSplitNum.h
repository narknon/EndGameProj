#pragma once
#include "CoreMinimal.h"
#include "EEndNaviMapSplitNum.generated.h"

UENUM()
enum class EEndNaviMapSplitNum : int32 {
    Split_None = 0x1,
    Split_4 = 0x4,
    Split_MAX = 0x4,
};

