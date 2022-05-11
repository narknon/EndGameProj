#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourcePositionBaseType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleDamageSourcePositionBaseType : uint8 {
    Owner,
    OwnerWeapon1,
    OwnerWeapon2,
    OwnerWeapon3,
    OwnerWeapon4,
    Target,
    TargetWeapon1,
    TargetWeapon2,
    TargetWeapon3,
    TargetWeapon4,
    ParentDamageSource,
    HitPosition,
    TargetLocation,
    FieldLocation,
    FieldLaunchLocation,
    EnvironmentActor,
    OwnerAerithAssist,
    TargetTop,
};

