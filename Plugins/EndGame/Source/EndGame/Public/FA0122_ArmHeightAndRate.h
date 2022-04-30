#pragma once
#include "CoreMinimal.h"
#include "FA0122_ArmHeightAndRate.generated.h"

USTRUCT(BlueprintType)
struct FFA0122_ArmHeightAndRate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Rate;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    ENDGAME_API FFA0122_ArmHeightAndRate();
};

