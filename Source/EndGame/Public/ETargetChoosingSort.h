#pragma once
#include "CoreMinimal.h"
#include "ETargetChoosingSort.generated.h"

UENUM()
enum class ETargetChoosingSort : uint8 {
    eCloserToMyself,
    eCloserToLeader,
    eInHigherLocation,
    eLowerHP,
    eScore,
};

