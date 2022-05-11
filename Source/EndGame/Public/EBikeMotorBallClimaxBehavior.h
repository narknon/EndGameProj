#pragma once
#include "CoreMinimal.h"
#include "EBikeMotorBallClimaxBehavior.generated.h"

UENUM(BlueprintType)
enum class EBikeMotorBallClimaxBehavior : uint8 {
    Standard,
    Chase_Mine,
    Chase_ShockWave,
    Chase_Cannon,
};

