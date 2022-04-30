#pragma once
#include "CoreMinimal.h"
#include "EndFieldSkipType.generated.h"

UENUM()
enum class EndFieldSkipType {
    CutScene,
    PlannerEvent,
    Other,
    None,
    MAX,
};

