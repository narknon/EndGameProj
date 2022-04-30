#pragma once
#include "CoreMinimal.h"
#include "EEndBikeNextActionType.generated.h"

UENUM()
enum class EEndBikeNextActionType {
    None,
    Move,
    Ability,
    Ability_ATB,
    Accel,
    Brake,
};

