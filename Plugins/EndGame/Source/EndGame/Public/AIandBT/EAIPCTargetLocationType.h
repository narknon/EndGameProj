#pragma once
#include "CoreMinimal.h"
#include "EAIPCTargetLocationType.generated.h"

UENUM(Blueprintable)
enum class EAIPCTargetLocationType : uint8 {
    TargetCursor,
    TargetApproach,
    CommandTargetCursor,
    CommandTargetApproach,
    CoverTargetCursor,
    CoverTargetApproach,
};

