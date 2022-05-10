#pragma once
#include "CoreMinimal.h"
#include "BattleParamShortRange.generated.h"

USTRUCT(BlueprintType)
struct FBattleParamShortRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> ComboProbabilities;
    
    UPROPERTY(EditAnywhere)
    float CombatDistance;
    
    UPROPERTY(EditAnywhere)
    float CautionDistance;
    
    ENDGAME_API FBattleParamShortRange();
};

