#pragma once
#include "CoreMinimal.h"
#include "EGuestAerithState.generated.h"

UENUM(BlueprintType)
enum class EGuestAerithState : uint8 {
    Hide,
    Warning,
    Anger,
    Worry,
    Cheering,
    Encouragment,
    Idle,
    MAX,
};

