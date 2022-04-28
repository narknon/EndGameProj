#pragma once
#include "CoreMinimal.h"
#include "EEndBattleTargetCorrectionType.generated.h"

UENUM()
enum class EEndBattleTargetCorrectionType : uint8 {
    Normal,
    BackwardLine,
    BattleAbilityFieldPosition,
    ScaleRootForFieldPosition,
    LinkPartner,
};

