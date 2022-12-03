#pragma once
#include "CoreMinimal.h"
#include "BattleParamShortRange.generated.h"

USTRUCT(BlueprintType)
struct FBattleParamShortRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ComboProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CautionDistance;
    
    ENDGAME_API FBattleParamShortRange();
};

