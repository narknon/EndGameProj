#pragma once
#include "CoreMinimal.h"
#include "EEndForceFeedbackEffect.generated.h"

UENUM(BlueprintType)
enum class EEndForceFeedbackEffect : uint8 {
    FFB_Effect0,
    FFB_Effect1,
    FFB_Effect2,
    FFB_Effect3,
    FFB_Effect4,
    FFB_Effect5,
    FFB_Effect6,
    FFB_Effect7,
    FFB_Effect8,
    FFB_Effect9,
    FFB_Noise1,
    FFB_FACT0,
    FFB_FACT1,
    FFB_FACT2,
    FFB_FACT3,
    FFB_FACT4,
    FFB_FACT5,
    FFB_FACT6,
    FFB_FACT7,
    FFB_FACT8,
    FFB_FACT9,
    FFB_Bike0,
    FFB_Bike1,
    FFB_Bike2,
    FFB_Common_Hit_01,
    FFB_Common_Hit_02,
    FFB_Ability_Hit_01,
    FFB_Limit_Hit_01,
    FFB_MAX UMETA(Hidden),
};

