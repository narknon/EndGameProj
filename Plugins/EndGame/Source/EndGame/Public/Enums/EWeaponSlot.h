#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.generated.h"

UENUM(BlueprintType)
enum class EWeaponSlot : uint8 {
    EWeaponSlot_1,
    EWeaponSlot_2,
    EWeaponSlot_3,
    EWeaponSlot_4,
    EWeaponSlot_NONE,
};

