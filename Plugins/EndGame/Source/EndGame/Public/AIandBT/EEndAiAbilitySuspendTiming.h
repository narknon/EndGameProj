#pragma once
#include "CoreMinimal.h"
#include "EEndAiAbilitySuspendTiming.generated.h"

UENUM(Blueprintable)
enum class EEndAiAbilitySuspendTiming : uint8 {
    PreparingRange,
    SettingRange,
    PlayingMotion,
};

