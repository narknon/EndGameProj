#pragma once
#include "CoreMinimal.h"
#include "EDebugCallerType.generated.h"

UENUM(BlueprintType)
enum class EDebugCallerType : uint8 {
    Action,
    Animation,
    Bike,
    Battle,
    BluePrint,
    CutScene,
    Debug,
    System,
    SelfUpdate,
    StateManager,
    PartyMgr,
    PlannerEvent,
    Encount,
};

