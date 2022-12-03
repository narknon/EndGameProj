#pragma once
#include "CoreMinimal.h"
#include "BattleParamShortRange.h"
#include "BattleParamLongRange.h"
#include "BattleParam.generated.h"

USTRUCT(BlueprintType)
struct FBattleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamShortRange ParamShortRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParamLongRange ParamLongRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CautionTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CautionTimeMin;
    
    ENDGAME_API FBattleParam();
};

