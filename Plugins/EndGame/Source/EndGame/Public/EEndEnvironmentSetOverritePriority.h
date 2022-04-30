#pragma once
#include "CoreMinimal.h"
#include "EEndEnvironmentSetOverritePriority.generated.h"

UENUM()
enum class EEndEnvironmentSetOverritePriority : uint8 {
    Default,
    LevelOverrideAction,
    Num,
};

