#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtForceDeactiveType.generated.h"

UENUM()
enum class EEndLookAtForceDeactiveType : uint8 {
    Field,
    FieldAttack,
    Battle,
    BattleAbility,
    Bike,
    Cinema,
    Max,
};

