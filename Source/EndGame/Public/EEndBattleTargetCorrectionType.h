#pragma once
#include "CoreMinimal.h"
#include "EEndBattleTargetCorrectionType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleTargetCorrectionType : uint8 {
    Normal,
    BackwardLine,
    BattleAbilityFieldPosition,
    ScaleRootForFieldPosition,
    LinkPartner,
};

