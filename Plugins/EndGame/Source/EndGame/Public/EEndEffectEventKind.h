#pragma once
#include "CoreMinimal.h"
#include "EEndEffectEventKind.generated.h"

UENUM()
enum EEndEffectEventKind {
    EE_EK_Begin,
    EE_EK_End,
    EE_EK_LoopOff,
    EE_EK_MAX UMETA(Hidden),
};

