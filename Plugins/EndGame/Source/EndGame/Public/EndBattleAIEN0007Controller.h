#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEN0007Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEN0007Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEN0007Controller();
    UFUNCTION(BlueprintCallable)
    void RestrictBattleFieldByEN0007(FName ExclusionID);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBattleFieldByEN0007();
    
};

