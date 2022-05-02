#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIEB0021Counter.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIEB0021Counter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Surpass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Trigger;
    
    UPROPERTY(EditAnywhere)
    float RangeMin;
    
    UPROPERTY(EditAnywhere)
    float RangeMax;
    
    UPROPERTY(EditAnywhere)
    float ViewRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurpassTrigger;
    
    ENDGAME_API FEndBattleAIEB0021Counter();
};

