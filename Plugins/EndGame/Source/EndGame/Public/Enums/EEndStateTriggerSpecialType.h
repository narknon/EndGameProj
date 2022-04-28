#pragma once
#include "CoreMinimal.h"
#include "EEndStateTriggerSpecialType.generated.h"

UENUM()
enum class EEndStateTriggerSpecialType {
    None,
    EnvironmentAnimationLastFrame,
    IgnoreDelay,
    IgnoreSe,
};

