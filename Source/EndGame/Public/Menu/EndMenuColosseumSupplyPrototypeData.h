#pragma once
#include "CoreMinimal.h"
#include "EndMenuColosseumSupplyPrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumSupplyPrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CosumedCoins;
    
    FEndMenuColosseumSupplyPrototypeData();
};

