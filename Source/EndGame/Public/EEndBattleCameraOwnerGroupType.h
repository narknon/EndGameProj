#pragma once
#include "CoreMinimal.h"
#include "EEndBattleCameraOwnerGroupType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleCameraOwnerGroupType : uint8 {
    Owner,
    World,
    MAX,
};

