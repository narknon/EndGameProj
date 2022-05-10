#pragma once
#include "CoreMinimal.h"
#include "EBikeSlalomLastPositionType.generated.h"

UENUM()
enum class EBikeSlalomLastPositionType {
    None,
    SameSideOfPlayer,
    OtherSideOfPlayer,
    SameSideOfAlly,
    OtherSideOfAlly,
};

