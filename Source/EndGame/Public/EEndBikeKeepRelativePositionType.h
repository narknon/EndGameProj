#pragma once
#include "CoreMinimal.h"
#include "EEndBikeKeepRelativePositionType.generated.h"

UENUM()
enum class EEndBikeKeepRelativePositionType : uint8 {
    None,
    DirectValue,
    EntryPosition,
};

