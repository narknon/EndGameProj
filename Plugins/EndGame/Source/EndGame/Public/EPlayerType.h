#pragma once
#include "CoreMinimal.h"
#include "EPlayerType.generated.h"

UENUM(BlueprintType)
enum class EPlayerType : uint8 {
    EPlayerType_CLOUD,
    EPlayerType_BARRET,
    EPlayerType_TIFA,
    EPlayerType_AERITH,
    EPlayerType_REDXIII,
    EPlayerType_YUFFIE,
    EPlayerType_SONON,
    EPlayerType_DUMMY,
    EPlayerType_NONE,
};

