#pragma once
#include "CoreMinimal.h"
#include "EDebugCallerType.generated.h"

UENUM()
enum class EDebugCallerType {
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

