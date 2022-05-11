#pragma once
#include "CoreMinimal.h"
#include "EEncountEnemyAccessorType.generated.h"

UENUM(BlueprintType)
enum class EEncountEnemyAccessorType : uint8 {
    EnemyAccesor,
    EncountEnemyAccessor,
    EncountAndPreEncountEnemyAccessor,
    EncountAndPreEncountAndDummyEnemyAccessor,
    EncountDummyEnemyAccessor,
    EncountHideEnemyAccessor,
};

