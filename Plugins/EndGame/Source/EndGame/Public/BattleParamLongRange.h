#pragma once
#include "CoreMinimal.h"
#include "BattleParamLongRange.generated.h"

USTRUCT(BlueprintType)
struct FBattleParamLongRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ContinuousAttackTimeMax;
    
    UPROPERTY(EditAnywhere)
    float ContinuousAttackTimeMin;
    
    UPROPERTY(EditAnywhere)
    float CombatDistance;
    
    UPROPERTY(EditAnywhere)
    float CautionDistance;
    
    ENDGAME_API FBattleParamLongRange();
};

