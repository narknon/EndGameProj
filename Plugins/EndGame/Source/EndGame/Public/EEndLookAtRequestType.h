#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtRequestType.generated.h"

UENUM(BlueprintType)
enum class EEndLookAtRequestType : uint8 {
    Cinema,
    FieldAttackWeaponThrow,
    InterestAI_High,
    TargetIcon,
    AI,
    InterestAI_Low,
    BaseAI_Contact,
    AI_Low,
    BaseAI_Curiosity,
    BaseAI_Idle,
    BaseAction,
    Max,
};

