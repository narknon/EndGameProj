#pragma once
#include "CoreMinimal.h"
#include "WireMovePointData.h"
#include "WireMovePointInfo.generated.h"

USTRUCT(BlueprintType)
struct FWireMovePointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWireMovePointData Data;
    
    ENDGAME_API FWireMovePointInfo();
};

