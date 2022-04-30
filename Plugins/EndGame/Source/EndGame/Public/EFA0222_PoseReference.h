#pragma once
#include "CoreMinimal.h"
#include "EFA0222_PoseReference.generated.h"

UENUM()
enum class EFA0222_PoseReference : uint8 {
    CenterHandle,
    UpHandle,
    DownHandle,
    LeftHandle,
    RightHandle,
    EFA0222_MAX UMETA(Hidden),
};

