#pragma once
#include "CoreMinimal.h"
#include "EEndBattleBreakableRelationVolumeType.generated.h"

UENUM()
enum class EEndBattleBreakableRelationVolumeType : uint8 {
    NavModifier,
    Blocking,
    Both,
};

