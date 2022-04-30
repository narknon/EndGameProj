#pragma once
#include "CoreMinimal.h"
#include "EncountStep.generated.h"

UENUM()
enum class EncountStep {
    ActorPopWait,
    ReadyEncount,
    EncountEnd,
    Finish,
    Remove,
    StepMax,
};

