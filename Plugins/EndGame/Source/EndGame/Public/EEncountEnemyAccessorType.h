#pragma once
#include "CoreMinimal.h"
#include "EEncountEnemyAccessorType.generated.h"

UENUM()
enum class EEncountEnemyAccessorType {
    EnemyAccesor,
    EncountEnemyAccessor,
    EncountAndPreEncountEnemyAccessor,
    EncountAndPreEncountAndDummyEnemyAccessor,
    EncountDummyEnemyAccessor,
    EncountHideEnemyAccessor,
};

