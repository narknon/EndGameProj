#pragma once
#include "CoreMinimal.h"
#include "EEndMenuLogEffectKind.generated.h"

UENUM(Blueprintable)
enum class EEndMenuLogEffectKind : uint8 {
    None,
    Small,
    Middle,
    Large,
    Weapon,
};

