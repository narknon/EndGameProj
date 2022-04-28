#pragma once
#include "CoreMinimal.h"
#include "EEndTakeDamageDirectionType.generated.h"

UENUM()
enum class EEndTakeDamageDirectionType {
    None,
    GiveCharacter,
    HitPosition,
    GiveCharacterReverse,
};

