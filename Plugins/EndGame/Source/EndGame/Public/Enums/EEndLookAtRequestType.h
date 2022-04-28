#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtRequestType.generated.h"

UENUM()
enum class EEndLookAtRequestType {
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

