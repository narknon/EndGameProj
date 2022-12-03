#pragma once
#include "CoreMinimal.h"
#include "EEndAiAbilitySuspendTiming.generated.h"

UENUM(BlueprintType)
enum class EEndAiAbilitySuspendTiming : uint8 {
    PreparingRange,
    SettingRange,
    PlayingMotion,
};

