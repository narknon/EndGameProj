#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourcePositionBaseType.generated.h"

UENUM()
enum class EEndBattleDamageSourcePositionBaseType : uint8 {
    Owner,
    OwnerWeapon1,
    OwnerWeapon2,
    OwnerWeapon3,
    OwnerWeapon4,
    Target = 0xA,
    TargetWeapon1,
    TargetWeapon2,
    TargetWeapon3,
    TargetWeapon4,
    ParentDamageSource = 0x14,
    HitPosition,
    TargetLocation,
    FieldLocation,
    FieldLaunchLocation,
    EnvironmentActor,
    OwnerAerithAssist,
    TargetTop,
};

