#pragma once
#include "CoreMinimal.h"
#include "EFA0122_ArmMessage.generated.h"

UENUM()
enum class EFA0122_ArmMessage : uint8 {
    BeginControl,
    EndControl,
    BeginGrab,
    EndGrab,
    BeginPlaceOnCharacter,
    EndPlaceOnCharacter,
    EFA0122_MAX UMETA(Hidden),
};

