#pragma once
#include "CoreMinimal.h"
#include "EPlayerStreamStep.generated.h"

UENUM()
enum class EPlayerStreamStep {
    EPlayerStreamStep_WAIT,
    EPlayerStreamStep_REQUEST,
    EPlayerStreamStep_STREAMING,
};

