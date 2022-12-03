#pragma once
#include "CoreMinimal.h"
#include "EMonkeyBarsActorDirState.generated.h"

UENUM(BlueprintType)
enum class EMonkeyBarsActorDirState : uint8 {
    Front,
    Back,
    Left,
    Right,
};

