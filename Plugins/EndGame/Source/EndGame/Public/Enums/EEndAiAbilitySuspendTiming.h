#pragma once
#include "CoreMinimal.h"
#include "EEndAiAbilitySuspendTiming.generated.h"

UENUM()
enum class EEndAiAbilitySuspendTiming : uint8 {
    PreparingRange,
    SettingRange,
    PlayingMotion,
};

