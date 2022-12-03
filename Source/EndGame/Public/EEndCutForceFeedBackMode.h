#pragma once
#include "CoreMinimal.h"
#include "EEndCutForceFeedBackMode.generated.h"

UENUM(BlueprintType)
enum class EEndCutForceFeedBackMode : uint8 {
    Play,
    PlayLoop,
    Stop,
};

