#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIQuantityParam.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIQuantityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstant;
    
    UPROPERTY(EditAnywhere)
    float Quantity;
    
    ENDGAME_API FEndBattleAIQuantityParam();
};

