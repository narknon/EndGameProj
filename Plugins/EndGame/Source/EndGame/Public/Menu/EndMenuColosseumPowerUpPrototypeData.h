#pragma once
#include "CoreMinimal.h"
#include "EndMenuColosseumPowerUpPrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumPowerUpPrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    FEndMenuColosseumPowerUpPrototypeData();
};

